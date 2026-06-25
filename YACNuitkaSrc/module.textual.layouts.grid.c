/* Generated code for Python module 'textual$layouts$grid'
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



/* The "module_textual$layouts$grid" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$layouts$grid;
PyDictObject *moduledict_textual$layouts$grid;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_min_column_width;
PyObject *const_str_plain_max_column_width;
PyObject *const_str_plain_stretch_height;
PyObject *const_str_plain_regular;
PyObject *const_str_plain_expand;
PyObject *const_str_plain_shrink;
PyObject *const_str_plain_auto_minimum;
PyObject *const_str_plain__grid_size;
PyObject *const_str_digest_0c951ebaddb3cda38703514b3a018f04;
PyObject *const_str_plain_pre_layout;
PyObject *const_str_plain_styles;
PyObject *const_str_plain_grid_rows;
PyObject *const_str_plain_height;
PyObject *const_str_plain_is_auto_height;
PyObject *const_str_plain_Scalar;
PyObject *const_str_plain_parse;
PyObject *const_tuple_str_plain_1fr_tuple;
PyObject *const_tuple_str_plain_auto_tuple;
PyObject *const_str_plain_grid_columns;
PyObject *const_str_plain_grid_gutter_horizontal;
PyObject *const_str_plain_grid_gutter_vertical;
PyObject *const_str_plain_max;
PyObject *const_str_plain_grid_size_columns;
PyObject *const_str_plain_width;
PyObject *const_str_plain_min;
PyObject *const_str_plain_Size;
PyObject *const_str_plain_container_width;
PyObject *const_str_plain_table_size_columns;
PyObject *const_str_plain_grid_size_rows;
PyObject *const_str_plain_app;
PyObject *const_str_plain_viewport_size;
PyObject *const_str_plain_keyline;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_none;
PyObject *const_str_plain_size;
PyObject *const_tuple_int_pos_2_int_pos_2_tuple;
PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
PyObject *const_str_plain_Spacing;
PyObject *const_dict_9f0f67b5d2b8a6967364eac048ff2e7a;
PyObject *const_str_digest_5bcf5c9e4edb06b83c25f3db68d5f9f6;
PyObject *const_str_plain_cell_coords;
PyObject *const_str_digest_f5e56f2eb9985e989c9685fe39cfbcea;
PyObject *const_dict_298d322ebc2d232568b9dece22856b3a;
PyObject *const_str_digest_5f579ded906f52f6219e7d536a28df8f;
PyObject *const_str_plain_widget_coords;
PyObject *const_str_digest_f11a78e641b56cc9748ac154c3e6ec46;
PyObject *const_dict_c63f8b7dc15900c7847c14f15abfdb18;
PyObject *const_str_digest_b6057cf84acd97392412916016995cc5;
PyObject *const_str_plain_repeat_scalars;
PyObject *const_str_digest_e244a5329f6ea033356a72334d1bda70;
PyObject *const_str_plain___next__;
PyObject *const_str_plain_column_span;
PyObject *const_str_plain_row_span;
PyObject *const_str_plain_cell_coord;
PyObject *const_str_plain_cell_map;
PyObject *const_str_plain_isdisjoint;
PyObject *const_str_plain_cell_size_map;
PyObject *const_str_plain_next_coord;
PyObject *const_str_plain_row;
PyObject *const_dict_a98491498ec2c2e82a51b94ee52b0685;
PyObject *const_str_digest_e83d127169f97809e088c5e2557c0503;
PyObject *const_str_plain_apply_width_limits;
PyObject *const_str_digest_c912406b4261f0139403fea7cfd2b416;
PyObject *const_dict_d9c49ebb367ef4924f3f5c21bed941e0;
PyObject *const_str_digest_899f8accb2073e3e4c45ed13b2bb58ba;
PyObject *const_str_plain_apply_height_limits;
PyObject *const_str_digest_f27d1448db630df5a6ef7468a76fbc6b;
PyObject *const_str_plain_is_auto;
PyObject *const_str_plain_widget;
PyObject *const_str_plain_get_content_width;
PyObject *const_str_plain_viewport;
PyObject *const_str_plain_gutter;
PyObject *const_str_plain_from_number;
PyObject *const_str_plain_column_scalars;
PyObject *const_str_plain_column_index;
PyObject *const_str_plain_visualize;
PyObject *const_str_plain_render;
PyObject *const_str_plain_get_minimal_width;
PyObject *const_str_plain_column_minimums;
PyObject *const_str_plain_resolve;
PyObject *const_tuple_str_plain_expand_str_plain_shrink_str_plain_minimums_tuple;
PyObject *const_str_plain_totals;
PyObject *const_str_plain_get_content_height;
PyObject *const_str_plain_row_scalars;
PyObject *const_str_plain_WidgetPlacement;
PyObject *const_str_plain_append;
PyObject *const_str_plain__get_box_model;
PyObject *const_str_plain_Fraction;
PyObject *const_str_plain_greedy;
PyObject *const_tuple_str_plain_constrain_width_str_plain_greedy_tuple;
PyObject *const_str_plain_Region;
PyObject *const_str_plain_crop_size;
PyObject *const_str_plain_offset;
PyObject *const_str_plain_has_rule;
PyObject *const_tuple_str_plain_offset_tuple;
PyObject *const_str_plain_NULL_OFFSET;
PyObject *const_tuple_str_plain_position_tuple;
PyObject *const_str_plain_position;
PyObject *const_str_plain_absolute;
PyObject *const_str_plain_add_placement;
PyObject *const_str_plain__WidgetPlacement;
PyObject *const_str_plain_gutter_spacing;
PyObject *const_str_plain_grow_maximum;
PyObject *const_str_plain_column_count;
PyObject *const_str_plain_row_start;
PyObject *const_str_plain_rows;
PyObject *const_slice_none_none_none;
PyObject *const_str_plain_limited_values;
PyObject *const_str_plain_extend;
PyObject *const_str_plain_scalars;
PyObject *const_str_plain_min_width;
PyObject *const_str_plain_max_width;
PyObject *const_str_plain_min_height;
PyObject *const_str_plain_max_height;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_fractions;
PyObject *const_tuple_str_plain_Fraction_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Iterable;
PyObject *const_str_digest_ff7fa4d10538d83945380730064513ff;
PyObject *const_tuple_str_plain_resolve_tuple;
PyObject *const_str_digest_88ab157ca2f52fb8972e1dcf526073ed;
PyObject *const_tuple_str_plain_Scalar_tuple;
PyObject *const_str_digest_8b449230fefb53e14684626fc331fc25;
PyObject *const_tuple_5008dc18178f2802b012a7ebee7f31b6_tuple;
PyObject *const_str_digest_16d69cbdb0009d7d51a33d919e19e88f;
PyObject *const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple;
PyObject *const_str_plain_ArrangeResult;
PyObject *const_str_plain_Layout;
PyObject *const_str_digest_1b00f9dbf1aac6a126d2652b3524d484;
PyObject *const_tuple_str_plain_visualize_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_GridLayout;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_16d9d6165e1bd93816490dc27bef409f;
PyObject *const_str_digest_0308c35cdaf5ce38b7fc889bb9b3d5ea;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_16;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_grid;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_585806373109b80fd6d621062038a520;
PyObject *const_str_plain_property;
PyObject *const_dict_c644412837a2de204934d51c39e9a20e;
PyObject *const_str_plain_grid_size;
PyObject *const_str_digest_a3923518fbd5b227f590c8627a83fa57;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_1bb78ad10dd3f60607421f0fa775c2cd;
PyObject *const_str_plain_arrange;
PyObject *const_str_digest_dde05013d585a1f3f350130ae0b2cfa0;
PyObject *const_tuple_f860c6729b18e66cb5747faf8f8f7d49_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_709715a84cb9fbf2296e8d90fd4dfeba;
PyObject *const_str_digest_f2f7fddb733189f8659a04aaac374711;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_edca0460f952983ccf24b07b01b9d77d_tuple;
PyObject *const_tuple_str_plain_size_str_plain_viewport_tuple;
PyObject *const_tuple_4852f438ab9ede913b9cfff050b19b3e_tuple;
PyObject *const_tuple_e879f0018635eca07cd4a8801b059bb5_tuple;
PyObject *const_tuple_str_plain_column_count_str_plain_row_str_plain_column_tuple;
PyObject *const_tuple_str_plain_scalars_str_plain_count_str_plain_limited_values_tuple;
PyObject *const_tuple_15c5ef62d6cbd3b57b450e0961564a6f_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[168];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.layouts.grid"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_min_column_width);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_column_width);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_stretch_height);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_regular);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_expand);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_shrink);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto_minimum);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__grid_size);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c951ebaddb3cda38703514b3a018f04);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_pre_layout);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_styles);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_grid_rows);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_auto_height);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_Scalar);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_1fr_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auto_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_grid_columns);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_grid_gutter_horizontal);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_grid_gutter_vertical);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_grid_size_columns);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_Size);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_container_width);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_table_size_columns);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_grid_size_rows);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_viewport_size);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_keyline);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_none);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_pos_2_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Spacing);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_9f0f67b5d2b8a6967364eac048ff2e7a);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_5bcf5c9e4edb06b83c25f3db68d5f9f6);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_cell_coords);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5e56f2eb9985e989c9685fe39cfbcea);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_298d322ebc2d232568b9dece22856b3a);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f579ded906f52f6219e7d536a28df8f);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_widget_coords);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_f11a78e641b56cc9748ac154c3e6ec46);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_dict_c63f8b7dc15900c7847c14f15abfdb18);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6057cf84acd97392412916016995cc5);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_repeat_scalars);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_e244a5329f6ea033356a72334d1bda70);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain___next__);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_column_span);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_row_span);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_cell_coord);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_cell_map);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_isdisjoint);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_cell_size_map);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_next_coord);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_row);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_dict_a98491498ec2c2e82a51b94ee52b0685);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_e83d127169f97809e088c5e2557c0503);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_width_limits);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_c912406b4261f0139403fea7cfd2b416);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_d9c49ebb367ef4924f3f5c21bed941e0);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_899f8accb2073e3e4c45ed13b2bb58ba);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_height_limits);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_f27d1448db630df5a6ef7468a76fbc6b);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_auto);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_widget);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_content_width);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_viewport);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_gutter);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_number);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_column_scalars);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_column_index);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_visualize);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_render);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_minimal_width);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_column_minimums);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_expand_str_plain_shrink_str_plain_minimums_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_totals);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_content_height);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_row_scalars);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_WidgetPlacement);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_box_model);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_Fraction);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_greedy);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constrain_width_str_plain_greedy_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Region);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_crop_size);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_offset);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_rule);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_offset_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_NULL_OFFSET);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_position_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_position);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_absolute);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_placement);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain__WidgetPlacement);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_gutter_spacing);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_grow_maximum);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_column_count);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_row_start);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_rows);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_none);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_limited_values);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_extend);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_scalars);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_min_width);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_width);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_min_height);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_height);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_fractions);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Fraction_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff7fa4d10538d83945380730064513ff);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolve_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_88ab157ca2f52fb8972e1dcf526073ed);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Scalar_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_5008dc18178f2802b012a7ebee7f31b6_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_16d69cbdb0009d7d51a33d919e19e88f);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_ArrangeResult);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_Layout);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_visualize_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_GridLayout);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_16d9d6165e1bd93816490dc27bef409f);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_0308c35cdaf5ce38b7fc889bb9b3d5ea);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_grid);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_585806373109b80fd6d621062038a520);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_c644412837a2de204934d51c39e9a20e);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_grid_size);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3923518fbd5b227f590c8627a83fa57);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_1bb78ad10dd3f60607421f0fa775c2cd);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_arrange);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_dde05013d585a1f3f350130ae0b2cfa0);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_f860c6729b18e66cb5747faf8f8f7d49_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_709715a84cb9fbf2296e8d90fd4dfeba);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2f7fddb733189f8659a04aaac374711);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_edca0460f952983ccf24b07b01b9d77d_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_size_str_plain_viewport_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_4852f438ab9ede913b9cfff050b19b3e_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_e879f0018635eca07cd4a8801b059bb5_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_column_count_str_plain_row_str_plain_column_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scalars_str_plain_count_str_plain_limited_values_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_15c5ef62d6cbd3b57b450e0961564a6f_tuple);
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
void checkModuleConstants_textual$layouts$grid(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_min_column_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min_column_width);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_column_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_column_width);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_stretch_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stretch_height);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_regular));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_regular);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_expand));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expand);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_shrink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shrink);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto_minimum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto_minimum);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__grid_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__grid_size);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c951ebaddb3cda38703514b3a018f04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c951ebaddb3cda38703514b3a018f04);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_pre_layout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pre_layout);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_styles);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_grid_rows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grid_rows);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_height);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_auto_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_auto_height);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_Scalar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Scalar);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_1fr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_1fr_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auto_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_auto_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_grid_columns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grid_columns);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_grid_gutter_horizontal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grid_gutter_horizontal);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_grid_gutter_vertical));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grid_gutter_vertical);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_grid_size_columns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grid_size_columns);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_width);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_Size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Size);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_container_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_container_width);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_table_size_columns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_table_size_columns);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_grid_size_rows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grid_size_rows);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_viewport_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_viewport_size);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_keyline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keyline);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_none));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_none);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_int_pos_2_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_pos_1_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Spacing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Spacing);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_9f0f67b5d2b8a6967364eac048ff2e7a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9f0f67b5d2b8a6967364eac048ff2e7a);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_5bcf5c9e4edb06b83c25f3db68d5f9f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5bcf5c9e4edb06b83c25f3db68d5f9f6);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_cell_coords));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cell_coords);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5e56f2eb9985e989c9685fe39cfbcea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5e56f2eb9985e989c9685fe39cfbcea);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_298d322ebc2d232568b9dece22856b3a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_298d322ebc2d232568b9dece22856b3a);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f579ded906f52f6219e7d536a28df8f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f579ded906f52f6219e7d536a28df8f);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_widget_coords));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_widget_coords);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_f11a78e641b56cc9748ac154c3e6ec46));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f11a78e641b56cc9748ac154c3e6ec46);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_dict_c63f8b7dc15900c7847c14f15abfdb18));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c63f8b7dc15900c7847c14f15abfdb18);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6057cf84acd97392412916016995cc5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6057cf84acd97392412916016995cc5);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_repeat_scalars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_repeat_scalars);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_e244a5329f6ea033356a72334d1bda70));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e244a5329f6ea033356a72334d1bda70);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain___next__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___next__);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_column_span));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_column_span);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_row_span));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_row_span);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_cell_coord));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cell_coord);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_cell_map));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cell_map);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_isdisjoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isdisjoint);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_cell_size_map));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cell_size_map);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_next_coord));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_next_coord);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_row));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_row);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_dict_a98491498ec2c2e82a51b94ee52b0685));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a98491498ec2c2e82a51b94ee52b0685);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_e83d127169f97809e088c5e2557c0503));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e83d127169f97809e088c5e2557c0503);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_width_limits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply_width_limits);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_c912406b4261f0139403fea7cfd2b416));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c912406b4261f0139403fea7cfd2b416);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_d9c49ebb367ef4924f3f5c21bed941e0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d9c49ebb367ef4924f3f5c21bed941e0);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_899f8accb2073e3e4c45ed13b2bb58ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_899f8accb2073e3e4c45ed13b2bb58ba);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_height_limits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply_height_limits);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_f27d1448db630df5a6ef7468a76fbc6b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f27d1448db630df5a6ef7468a76fbc6b);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_auto);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_widget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_widget);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_content_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_content_width);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_viewport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_viewport);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_gutter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gutter);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_number);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_column_scalars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_column_scalars);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_column_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_column_index);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_visualize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_visualize);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_render));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_minimal_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_minimal_width);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_column_minimums));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_column_minimums);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_expand_str_plain_shrink_str_plain_minimums_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_expand_str_plain_shrink_str_plain_minimums_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_totals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_totals);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_content_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_content_height);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_row_scalars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_row_scalars);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_WidgetPlacement));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WidgetPlacement);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_box_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_box_model);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_Fraction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Fraction);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_greedy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_greedy);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constrain_width_str_plain_greedy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_constrain_width_str_plain_greedy_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Region);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_crop_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_crop_size);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_offset);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_rule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_rule);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_offset_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_offset_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_NULL_OFFSET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NULL_OFFSET);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_position_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_position_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_position));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_position);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_absolute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_absolute);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_placement));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_placement);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain__WidgetPlacement));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__WidgetPlacement);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_gutter_spacing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gutter_spacing);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_grow_maximum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grow_maximum);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_column_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_column_count);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_row_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_row_start);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_rows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rows);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_none);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_limited_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_limited_values);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_extend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extend);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_scalars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scalars);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_min_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min_width);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_width);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_min_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min_height);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_height);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_fractions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fractions);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Fraction_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Fraction_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff7fa4d10538d83945380730064513ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff7fa4d10538d83945380730064513ff);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolve_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_resolve_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_88ab157ca2f52fb8972e1dcf526073ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88ab157ca2f52fb8972e1dcf526073ed);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Scalar_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Scalar_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_5008dc18178f2802b012a7ebee7f31b6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5008dc18178f2802b012a7ebee7f31b6_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_16d69cbdb0009d7d51a33d919e19e88f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16d69cbdb0009d7d51a33d919e19e88f);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_ArrangeResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ArrangeResult);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_Layout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Layout);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_visualize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_visualize_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_GridLayout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GridLayout);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_16d9d6165e1bd93816490dc27bef409f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16d9d6165e1bd93816490dc27bef409f);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_0308c35cdaf5ce38b7fc889bb9b3d5ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0308c35cdaf5ce38b7fc889bb9b3d5ea);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_grid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grid);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_585806373109b80fd6d621062038a520));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_585806373109b80fd6d621062038a520);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_c644412837a2de204934d51c39e9a20e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c644412837a2de204934d51c39e9a20e);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_grid_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grid_size);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3923518fbd5b227f590c8627a83fa57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3923518fbd5b227f590c8627a83fa57);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_1bb78ad10dd3f60607421f0fa775c2cd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1bb78ad10dd3f60607421f0fa775c2cd);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_arrange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arrange);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_dde05013d585a1f3f350130ae0b2cfa0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dde05013d585a1f3f350130ae0b2cfa0);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_f860c6729b18e66cb5747faf8f8f7d49_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f860c6729b18e66cb5747faf8f8f7d49_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_709715a84cb9fbf2296e8d90fd4dfeba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_709715a84cb9fbf2296e8d90fd4dfeba);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2f7fddb733189f8659a04aaac374711));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2f7fddb733189f8659a04aaac374711);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_edca0460f952983ccf24b07b01b9d77d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_edca0460f952983ccf24b07b01b9d77d_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_size_str_plain_viewport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_size_str_plain_viewport_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_4852f438ab9ede913b9cfff050b19b3e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4852f438ab9ede913b9cfff050b19b3e_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_e879f0018635eca07cd4a8801b059bb5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e879f0018635eca07cd4a8801b059bb5_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_column_count_str_plain_row_str_plain_column_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_column_count_str_plain_row_str_plain_column_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scalars_str_plain_count_str_plain_limited_values_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_scalars_str_plain_count_str_plain_limited_values_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_15c5ef62d6cbd3b57b450e0961564a6f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_15c5ef62d6cbd3b57b450e0961564a6f_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_textual$layouts$grid$Fraction(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Fraction);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Fraction, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Fraction);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Fraction, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$Layout(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Layout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Layout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Layout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Layout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$NULL_OFFSET(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NULL_OFFSET);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NULL_OFFSET, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NULL_OFFSET);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NULL_OFFSET, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$Region(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Region);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Region, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Region);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Region, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$Scalar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Scalar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Scalar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Scalar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Scalar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Scalar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Scalar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Scalar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Scalar);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$Size(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Size);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Size, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Size);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Size, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$Spacing(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Spacing);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Spacing);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Spacing, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Spacing);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Spacing, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Spacing);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Spacing);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Spacing);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$WidgetPlacement(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WidgetPlacement);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WidgetPlacement, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WidgetPlacement);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WidgetPlacement, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$resolve(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_resolve);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_resolve, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_resolve);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_resolve, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$grid$visualize(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$grid->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$grid->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$grid->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_visualize);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_visualize, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_visualize);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_visualize, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d0bba58db9a3bb91c35fc27bdc959e96;
static PyCodeObject *code_objects_2e928a1f1492204f46d49928d7cc959f;
static PyCodeObject *code_objects_681c2a7b2ede88e8a99f1ea179f22c9b;
static PyCodeObject *code_objects_4ec2468f45d8e9dec3ff4341f2f41292;
static PyCodeObject *code_objects_f3d6fc8b2a91b992976caae929927bba;
static PyCodeObject *code_objects_fbac22823a8616e7c96b09978543999d;
static PyCodeObject *code_objects_f55ede532a096cdf10fec15c2da3ebed;
static PyCodeObject *code_objects_168fc7e94de000fb156534f107ffcb2b;
static PyCodeObject *code_objects_f11e7d6ba9bbb688eb628d93a4eb5348;
static PyCodeObject *code_objects_3c453cff5d3c952d02e5c96dba035250;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_709715a84cb9fbf2296e8d90fd4dfeba); CHECK_OBJECT(module_filename_obj);
code_objects_d0bba58db9a3bb91c35fc27bdc959e96 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_f2f7fddb733189f8659a04aaac374711, mod_consts.const_str_digest_f2f7fddb733189f8659a04aaac374711, NULL, NULL, 0, 0, 0);
code_objects_2e928a1f1492204f46d49928d7cc959f = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_GridLayout, mod_consts.const_str_plain_GridLayout, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_681c2a7b2ede88e8a99f1ea179f22c9b = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_585806373109b80fd6d621062038a520, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4ec2468f45d8e9dec3ff4341f2f41292 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_apply_height_limits, mod_consts.const_str_digest_f27d1448db630df5a6ef7468a76fbc6b, mod_consts.const_tuple_edca0460f952983ccf24b07b01b9d77d_tuple, mod_consts.const_tuple_str_plain_size_str_plain_viewport_tuple, 2, 0, 0);
code_objects_f3d6fc8b2a91b992976caae929927bba = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_apply_width_limits, mod_consts.const_str_digest_c912406b4261f0139403fea7cfd2b416, mod_consts.const_tuple_4852f438ab9ede913b9cfff050b19b3e_tuple, mod_consts.const_tuple_str_plain_size_str_plain_viewport_tuple, 2, 0, 0);
code_objects_fbac22823a8616e7c96b09978543999d = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_arrange, mod_consts.const_str_digest_dde05013d585a1f3f350130ae0b2cfa0, mod_consts.const_tuple_e879f0018635eca07cd4a8801b059bb5_tuple, NULL, 5, 0, 0);
code_objects_f55ede532a096cdf10fec15c2da3ebed = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cell_coords, mod_consts.const_str_digest_f5e56f2eb9985e989c9685fe39cfbcea, mod_consts.const_tuple_str_plain_column_count_str_plain_row_str_plain_column_tuple, NULL, 1, 0, 0);
code_objects_168fc7e94de000fb156534f107ffcb2b = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_grid_size, mod_consts.const_str_digest_a3923518fbd5b227f590c8627a83fa57, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f11e7d6ba9bbb688eb628d93a4eb5348 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_repeat_scalars, mod_consts.const_str_digest_e244a5329f6ea033356a72334d1bda70, mod_consts.const_tuple_str_plain_scalars_str_plain_count_str_plain_limited_values_tuple, NULL, 2, 0, 0);
code_objects_3c453cff5d3c952d02e5c96dba035250 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_widget_coords, mod_consts.const_str_digest_f11a78e641b56cc9748ac154c3e6ec46, mod_consts.const_tuple_15c5ef62d6cbd3b57b450e0961564a6f_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords$$$genobj__1_cell_coords(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__2_grid_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_textual$layouts$grid$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$layouts$grid$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$layouts$grid$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$layouts$grid$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$layouts$grid$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$layouts$grid$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$layouts$grid$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_681c2a7b2ede88e8a99f1ea179f22c9b, module_textual$layouts$grid, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$layouts$grid$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$layouts$grid$$$function__1___init__ = cache_frame_frame_textual$layouts$grid$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$grid$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$layouts$grid$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_min_column_width, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_max_column_width, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_stretch_height, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_regular, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_expand, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_shrink, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_auto_minimum, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__grid_size, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$grid$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$grid$$$function__1___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$layouts$grid$$$function__1___init__ == cache_frame_frame_textual$layouts$grid$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$layouts$grid$$$function__1___init__);
    cache_frame_frame_textual$layouts$grid$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$layouts$grid$$$function__1___init__);

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


static PyObject *impl_textual$layouts$grid$$$function__2_grid_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$layouts$grid$$$function__2_grid_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$layouts$grid$$$function__2_grid_size = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$layouts$grid$$$function__2_grid_size)) {
    Py_XDECREF(cache_frame_frame_textual$layouts$grid$$$function__2_grid_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$layouts$grid$$$function__2_grid_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$layouts$grid$$$function__2_grid_size = MAKE_FUNCTION_FRAME(tstate, code_objects_168fc7e94de000fb156534f107ffcb2b, module_textual$layouts$grid, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$layouts$grid$$$function__2_grid_size->m_type_description == NULL);
frame_frame_textual$layouts$grid$$$function__2_grid_size = cache_frame_frame_textual$layouts$grid$$$function__2_grid_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$grid$$$function__2_grid_size);
assert(Py_REFCNT(frame_frame_textual$layouts$grid$$$function__2_grid_size) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__grid_size);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$function__2_grid_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$grid$$$function__2_grid_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$function__2_grid_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$grid$$$function__2_grid_size,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$layouts$grid$$$function__2_grid_size == cache_frame_frame_textual$layouts$grid$$$function__2_grid_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$layouts$grid$$$function__2_grid_size);
    cache_frame_frame_textual$layouts$grid$$$function__2_grid_size = NULL;
}

assertFrameObject(frame_frame_textual$layouts$grid$$$function__2_grid_size);

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


static PyObject *impl_textual$layouts$grid$$$function__3_arrange(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_parent = python_pars[1];
PyObject *par_children = python_pars[2];
struct Nuitka_CellObject *par_size = Nuitka_Cell_New1(python_pars[3]);
PyObject *par_greedy = python_pars[4];
PyObject *var_gutter_spacing = NULL;
PyObject *var_cell_map = NULL;
PyObject *var_cell_size_map = NULL;
PyObject *var_column_minimums = NULL;
PyObject *var_placements = NULL;
PyObject *var_styles = NULL;
PyObject *var_row_scalars = NULL;
PyObject *var_column_scalars = NULL;
PyObject *var_gutter_horizontal = NULL;
PyObject *var_gutter_vertical = NULL;
PyObject *var_table_size_columns = NULL;
PyObject *var_min_column_width = NULL;
PyObject *var_max_column_width = NULL;
PyObject *var_container_width = NULL;
PyObject *var_table_size_rows = NULL;
struct Nuitka_CellObject *var_viewport = Nuitka_Cell_NewEmpty();
PyObject *var_keyline_style = NULL;
PyObject *var__keyline_color = NULL;
PyObject *var_offset = NULL;
PyObject *var_cell_coords = NULL;
PyObject *var_widget_coords = NULL;
PyObject *var_repeat_scalars = NULL;
PyObject *var_next_coord = NULL;
PyObject *var_cell_coord = NULL;
PyObject *var_column = NULL;
PyObject *var_row = NULL;
PyObject *var_child = NULL;
PyObject *var_child_styles = NULL;
PyObject *var_column_span = NULL;
PyObject *var_row_span = NULL;
PyObject *var_coords = NULL;
PyObject *var_coord = NULL;
PyObject *var_apply_width_limits = NULL;
PyObject *var_apply_height_limits = NULL;
PyObject *var_scalar = NULL;
PyObject *var_width = NULL;
PyObject *var_widget = NULL;
PyObject *var__ = NULL;
PyObject *var_column_index = NULL;
PyObject *var_row_index = NULL;
PyObject *var_cell_info = NULL;
PyObject *var_columns = NULL;
PyObject *var_height = NULL;
PyObject *var_column_width = NULL;
PyObject *var_gutter_width = NULL;
PyObject *var_gutter_height = NULL;
PyObject *var_widget_height = NULL;
PyObject *var_rows = NULL;
PyObject *var__WidgetPlacement = NULL;
PyObject *var_add_placement = NULL;
PyObject *var_max_column = NULL;
PyObject *var_max_row = NULL;
PyObject *var_stretch_height = NULL;
PyObject *var_x = NULL;
PyObject *var_y = NULL;
PyObject *var_x2 = NULL;
PyObject *var_cell_width = NULL;
PyObject *var_y2 = NULL;
PyObject *var_cell_height = NULL;
PyObject *var_cell_size = NULL;
PyObject *var_box_width = NULL;
PyObject *var_box_height = NULL;
PyObject *var_margin = NULL;
PyObject *var_region = NULL;
PyObject *var_widget_styles = NULL;
PyObject *var_placement_offset = NULL;
PyObject *var_absolute = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
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
PyObject *tmp_for_loop_6__for_iterator = NULL;
PyObject *tmp_for_loop_6__iter_value = NULL;
PyObject *tmp_for_loop_7__for_iterator = NULL;
PyObject *tmp_for_loop_7__iter_value = NULL;
PyObject *tmp_for_loop_8__for_iterator = NULL;
PyObject *tmp_for_loop_8__iter_value = NULL;
PyObject *tmp_for_loop_9__for_iterator = NULL;
PyObject *tmp_for_loop_9__iter_value = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
nuitka_bool tmp_try_except_2__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_tuple_unpack_10__element_1 = NULL;
PyObject *tmp_tuple_unpack_10__element_2 = NULL;
PyObject *tmp_tuple_unpack_10__source_iter = NULL;
PyObject *tmp_tuple_unpack_11__element_1 = NULL;
PyObject *tmp_tuple_unpack_11__element_2 = NULL;
PyObject *tmp_tuple_unpack_11__source_iter = NULL;
PyObject *tmp_tuple_unpack_12__element_1 = NULL;
PyObject *tmp_tuple_unpack_12__element_2 = NULL;
PyObject *tmp_tuple_unpack_12__element_3 = NULL;
PyObject *tmp_tuple_unpack_12__source_iter = NULL;
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
struct Nuitka_FrameObject *frame_frame_textual$layouts$grid$$$function__3_arrange;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
static struct Nuitka_FrameObject *cache_frame_frame_textual$layouts$grid$$$function__3_arrange = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$layouts$grid$$$function__3_arrange)) {
    Py_XDECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$layouts$grid$$$function__3_arrange == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange = MAKE_FUNCTION_FRAME(tstate, code_objects_fbac22823a8616e7c96b09978543999d, module_textual$layouts$grid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$layouts$grid$$$function__3_arrange->m_type_description == NULL);
frame_frame_textual$layouts$grid$$$function__3_arrange = cache_frame_frame_textual$layouts$grid$$$function__3_arrange;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$grid$$$function__3_arrange);
assert(Py_REFCNT(frame_frame_textual$layouts$grid$$$function__3_arrange) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_parent);
tmp_called_instance_1 = par_parent;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 51;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_pre_layout, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_parent);
tmp_expression_value_1 = par_parent;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_styles);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_styles == NULL);
var_styles = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_2;
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_list_element_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_list_element_2;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_styles);
tmp_expression_value_2 = var_styles;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_grid_rows);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 53;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
CHECK_OBJECT(Nuitka_Cell_GET(par_size));
tmp_expression_value_3 = Nuitka_Cell_GET(par_size);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_height);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 55;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_parent);
tmp_expression_value_5 = par_parent;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_styles);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_is_auto_height);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_instance_2 = module_var_accessor_textual$layouts$grid$Scalar(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Scalar);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 54;
tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_parse,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_1fr_tuple, 0)
);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_or_right_value_1, 0, tmp_list_element_1);
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_instance_3 = module_var_accessor_textual$layouts$grid$Scalar(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Scalar);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 56;
tmp_list_element_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_parse,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_auto_tuple, 0)
);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_or_right_value_1, 0, tmp_list_element_2);
condexpr_end_1:;
tmp_assign_source_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_2 = tmp_or_left_value_1;
or_end_1:;
assert(var_row_scalars == NULL);
var_row_scalars = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_list_element_3;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_styles);
tmp_expression_value_6 = var_styles;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_grid_columns);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 58;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_called_instance_4 = module_var_accessor_textual$layouts$grid$Scalar(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Scalar);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 58;
tmp_list_element_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_parse,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_1fr_tuple, 0)
);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_or_right_value_2, 0, tmp_list_element_3);
tmp_assign_source_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_3 = tmp_or_left_value_2;
or_end_2:;
assert(var_column_scalars == NULL);
var_column_scalars = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_styles);
tmp_expression_value_7 = var_styles;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_grid_gutter_horizontal);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_gutter_horizontal == NULL);
var_gutter_horizontal = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_styles);
tmp_expression_value_8 = var_styles;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_grid_gutter_vertical);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_gutter_vertical == NULL);
var_gutter_vertical = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_2 = const_int_pos_1;
CHECK_OBJECT(var_styles);
tmp_expression_value_9 = var_styles;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_grid_size_columns);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 62;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_table_size_columns == NULL);
var_table_size_columns = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_min_column_width);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_min_column_width == NULL);
var_min_column_width = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_max_column_width);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_max_column_width == NULL);
var_max_column_width = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(Nuitka_Cell_GET(par_size));
tmp_expression_value_12 = Nuitka_Cell_GET(par_size);
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_width);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_container_width == NULL);
var_container_width = tmp_assign_source_9;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_max_column_width);
tmp_cmp_expr_left_1 = var_max_column_width;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_len_arg_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_2 != NULL);
tmp_args_element_value_4 = const_int_pos_1;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(par_children);
tmp_len_arg_1 = par_children;
tmp_args_element_value_6 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_container_width);
tmp_floordiv_expr_left_1 = var_container_width;
CHECK_OBJECT(var_max_column_width);
tmp_floordiv_expr_right_1 = var_max_column_width;
tmp_args_element_value_7 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 69;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_mult_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_max_column_width);
tmp_mult_expr_right_1 = var_max_column_width;
tmp_assign_source_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_container_width;
    assert(old != NULL);
    var_container_width = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_13;
tmp_called_value_4 = module_var_accessor_textual$layouts$grid$Size(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Size);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_container_width);
tmp_args_element_value_8 = var_container_width;
CHECK_OBJECT(Nuitka_Cell_GET(par_size));
tmp_expression_value_13 = Nuitka_Cell_GET(par_size);
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_height);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 72;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(par_size);
    Nuitka_Cell_SET(par_size, tmp_assign_source_11);
    Py_XDECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_min_column_width);
tmp_cmp_expr_left_2 = var_min_column_width;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_floordiv_expr_left_2;
PyObject *tmp_floordiv_expr_right_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_5 != NULL);
tmp_args_element_value_10 = const_int_pos_1;
if (var_container_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_container_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = var_container_width;
CHECK_OBJECT(var_gutter_horizontal);
tmp_add_expr_right_1 = var_gutter_horizontal;
tmp_floordiv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_floordiv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_min_column_width);
tmp_add_expr_left_2 = var_min_column_width;
CHECK_OBJECT(var_gutter_horizontal);
tmp_add_expr_right_2 = var_gutter_horizontal;
tmp_floordiv_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_floordiv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_floordiv_expr_left_2);

exception_lineno = 78;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
CHECK_OBJECT(tmp_floordiv_expr_left_2);
Py_DECREF(tmp_floordiv_expr_left_2);
CHECK_OBJECT(tmp_floordiv_expr_right_2);
Py_DECREF(tmp_floordiv_expr_right_2);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 75;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_table_size_columns;
    assert(old != NULL);
    var_table_size_columns = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_len_arg_2;
tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_6 != NULL);
CHECK_OBJECT(var_table_size_columns);
tmp_args_element_value_12 = var_table_size_columns;
CHECK_OBJECT(par_children);
tmp_len_arg_2 = par_children;
tmp_args_element_value_13 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 81;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_table_size_columns;
    assert(old != NULL);
    var_table_size_columns = tmp_assign_source_13;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_regular);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 82;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
loop_start_1:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_len_arg_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_children);
tmp_len_arg_3 = par_children;
tmp_mod_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_mod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_table_size_columns == NULL) {
Py_DECREF(tmp_mod_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table_size_columns);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_mod_expr_right_1 = var_table_size_columns;
tmp_and_left_value_2 = BINARY_OPERATION_MOD_OBJECT_LONG_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_left_1);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 83;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
if (var_table_size_columns == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table_size_columns);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = var_table_size_columns;
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_and_right_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
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


exception_lineno = 83;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_end_1;
branch_no_4:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
if (var_table_size_columns == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table_size_columns);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_1 = var_table_size_columns;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = tmp_isub_expr_left_1;
var_table_size_columns = tmp_assign_source_14;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
branch_no_3:;
branch_no_2:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(var_styles);
tmp_expression_value_15 = var_styles;
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_grid_size_rows);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_table_size_rows == NULL);
var_table_size_rows = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_parent);
tmp_expression_value_17 = par_parent;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_app);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_viewport_size);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_viewport) == NULL);
Nuitka_Cell_SET(var_viewport, tmp_assign_source_16);

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_styles);
tmp_expression_value_18 = var_styles;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_keyline);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_19;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_20 = tmp_tuple_unpack_1__element_1;
assert(var_keyline_style == NULL);
Py_INCREF(tmp_assign_source_20);
var_keyline_style = tmp_assign_source_20;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_21 = tmp_tuple_unpack_1__element_2;
assert(var__keyline_color == NULL);
Py_INCREF(tmp_assign_source_21);
var__keyline_color = tmp_assign_source_21;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_tuple_int_0_int_0_tuple;
assert(var_offset == NULL);
Py_INCREF(tmp_assign_source_22);
var_offset = tmp_assign_source_22;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_keyline_style);
tmp_cmp_expr_left_4 = var_keyline_style;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_none;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = Py_None;
assert(var_gutter_spacing == NULL);
Py_INCREF(tmp_assign_source_23);
var_gutter_spacing = tmp_assign_source_23;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_isub_expr_left_2;
PyObject *tmp_isub_expr_right_2;
if (Nuitka_Cell_GET(par_size) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_2 = Nuitka_Cell_GET(par_size);
tmp_isub_expr_right_2 = mod_consts.const_tuple_int_pos_2_int_pos_2_tuple;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_24 = tmp_isub_expr_left_2;
Nuitka_Cell_SET(par_size, tmp_assign_source_24);

}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = mod_consts.const_tuple_int_pos_1_int_pos_1_tuple;
{
    PyObject *old = var_offset;
    assert(old != NULL);
    var_offset = tmp_assign_source_25;
    Py_INCREF(var_offset);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
tmp_called_value_7 = module_var_accessor_textual$layouts$grid$Spacing(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Spacing);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_gutter_vertical);
tmp_args_element_value_14 = var_gutter_vertical;
CHECK_OBJECT(var_gutter_horizontal);
tmp_args_element_value_15 = var_gutter_horizontal;
CHECK_OBJECT(var_gutter_vertical);
tmp_args_element_value_16 = var_gutter_vertical;
CHECK_OBJECT(var_gutter_horizontal);
tmp_args_element_value_17 = var_gutter_horizontal;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 97;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_7, call_args);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_gutter_spacing == NULL);
var_gutter_spacing = tmp_assign_source_26;
}
branch_end_5:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_9f0f67b5d2b8a6967364eac048ff2e7a);

tmp_assign_source_27 = MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords(tstate, tmp_annotations_1);

assert(var_cell_coords == NULL);
var_cell_coords = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_298d322ebc2d232568b9dece22856b3a);

tmp_assign_source_28 = MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords(tstate, tmp_annotations_2);

assert(var_widget_coords == NULL);
var_widget_coords = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_c63f8b7dc15900c7847c14f15abfdb18);

tmp_assign_source_29 = MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars(tstate, tmp_annotations_3);

assert(var_repeat_scalars == NULL);
var_repeat_scalars = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(var_cell_map == NULL);
var_cell_map = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(var_cell_size_map == NULL);
var_cell_size_map = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_19;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_18;
CHECK_OBJECT(var_cell_coords);
tmp_called_value_8 = var_cell_coords;
if (var_table_size_columns == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table_size_columns);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 155;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_18 = var_table_size_columns;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 155;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_18);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_19 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___next__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_next_coord == NULL);
var_next_coord = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = mod_consts.const_tuple_int_0_int_0_tuple;
assert(var_cell_coord == NULL);
Py_INCREF(tmp_assign_source_33);
var_cell_coord = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = const_int_0;
assert(var_column == NULL);
Py_INCREF(tmp_assign_source_34);
var_column = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = const_int_0;
assert(var_row == NULL);
Py_INCREF(tmp_assign_source_35);
var_row = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(par_children);
tmp_iter_arg_3 = par_children;
tmp_assign_source_36 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_36;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_37 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 159;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_38 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_child;
    var_child = tmp_assign_source_38;
    Py_INCREF(var_child);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(var_child);
tmp_expression_value_20 = var_child;
tmp_assign_source_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_styles);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_child_styles;
    var_child_styles = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(var_child_styles);
tmp_expression_value_21 = var_child_styles;
tmp_or_left_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_column_span);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 161;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
tmp_or_right_value_3 = const_int_pos_1;
Py_INCREF(tmp_or_right_value_3);
tmp_assign_source_40 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_assign_source_40 = tmp_or_left_value_3;
or_end_3:;
{
    PyObject *old = var_column_span;
    var_column_span = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(var_child_styles);
tmp_expression_value_22 = var_child_styles;
tmp_or_left_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_row_span);
if (tmp_or_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_4);

exception_lineno = 162;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(tmp_or_left_value_4);
Py_DECREF(tmp_or_left_value_4);
tmp_or_right_value_4 = const_int_pos_1;
Py_INCREF(tmp_or_right_value_4);
tmp_assign_source_41 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_assign_source_41 = tmp_or_left_value_4;
or_end_4:;
{
    PyObject *old = var_row_span;
    var_row_span = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
loop_start_3:;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_iter_arg_4;
if (var_cell_coord == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_coord);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_iter_arg_4 = var_cell_coord;
tmp_assign_source_42 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_43 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_44 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_44;
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



exception_lineno = 166;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_45 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_column;
    var_column = tmp_assign_source_45;
    Py_INCREF(var_column);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_46;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_46 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_row;
    var_row = tmp_assign_source_46;
    Py_INCREF(var_row);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
if (var_widget_coords == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_widget_coords);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_9 = var_widget_coords;
CHECK_OBJECT(var_column);
tmp_args_element_value_19 = var_column;
CHECK_OBJECT(var_row);
tmp_args_element_value_20 = var_row;
if (var_column_span == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_span);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_21 = var_column_span;
if (var_row_span == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_row_span);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_22 = var_row_span;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 167;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_9, call_args);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_coords;
    var_coords = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_instance_5;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_23;
int tmp_truth_name_3;
if (var_cell_map == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_23 = var_cell_map;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain_keys);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 168;
tmp_called_instance_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_coords);
tmp_args_element_value_23 = var_coords;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 168;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_isdisjoint, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 168;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(var_coords);
tmp_iter_arg_5 = var_coords;
tmp_assign_source_48 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_49;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_49 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_49 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 169;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_50;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_50 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_coord;
    var_coord = tmp_assign_source_50;
    Py_INCREF(var_coord);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_child);
tmp_tuple_element_1 = var_child;
tmp_ass_subvalue_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_coord);
tmp_cmp_expr_left_5 = var_coord;
if (var_cell_coord == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_coord);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 170;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_cmp_expr_right_5 = var_cell_coord;
tmp_tuple_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_ass_subvalue_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (var_cell_map == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 170;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_ass_subscribed_1 = var_cell_map;
CHECK_OBJECT(var_coord);
tmp_ass_subscript_1 = var_coord;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
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

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_column);
tmp_tuple_element_2 = var_column;
tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_row);
tmp_tuple_element_2 = var_row;
PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 1, tmp_tuple_element_2);
if (var_column_span == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_span);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}

tmp_sub_expr_left_1 = var_column_span;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 2, tmp_tuple_element_2);
if (var_row_span == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_row_span);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}

tmp_sub_expr_left_2 = var_row_span;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_ass_subvalue_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
if (var_cell_size_map == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_size_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 171;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_2 = var_cell_size_map;
CHECK_OBJECT(var_child);
tmp_ass_subscript_2 = var_child;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
}
goto loop_end_3;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_11;
if (var_next_coord == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_next_coord);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 179;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_11 = var_next_coord;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 179;
tmp_assign_source_51 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_cell_coord;
    var_cell_coord = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
goto loop_start_3;
branch_end_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_12;
if (var_next_coord == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_next_coord);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 181;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_12 = var_next_coord;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 181;
tmp_assign_source_52 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_cell_coord;
    var_cell_coord = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_6;
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
try_end_6:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
CHECK_OBJECT(var_repeat_scalars);
tmp_called_value_13 = var_repeat_scalars;
CHECK_OBJECT(var_column_scalars);
tmp_args_element_value_24 = var_column_scalars;
if (var_table_size_columns == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table_size_columns);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 183;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_25 = var_table_size_columns;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 183;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_column_scalars;
    assert(old != NULL);
    var_column_scalars = tmp_assign_source_53;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_54;
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_4;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
CHECK_OBJECT(var_table_size_rows);
tmp_truth_name_4 = CHECK_IF_TRUE(var_table_size_rows);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(var_table_size_rows);
tmp_assign_source_54 = var_table_size_rows;
Py_INCREF(tmp_assign_source_54);
goto condexpr_end_2;
condexpr_false_2:;
if (var_row == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_row);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 184;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_3 = var_row;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_assign_source_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
{
    PyObject *old = var_table_size_rows;
    assert(old != NULL);
    var_table_size_rows = tmp_assign_source_54;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
CHECK_OBJECT(var_repeat_scalars);
tmp_called_value_14 = var_repeat_scalars;
CHECK_OBJECT(var_row_scalars);
tmp_args_element_value_26 = var_row_scalars;
CHECK_OBJECT(var_table_size_rows);
tmp_args_element_value_27 = var_table_size_rows;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 185;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_row_scalars;
    assert(old != NULL);
    var_row_scalars = tmp_assign_source_55;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_assattr_target_1;
if (var_table_size_columns == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table_size_columns);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_3 = var_table_size_columns;
tmp_assattr_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assattr_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_table_size_rows);
tmp_tuple_element_3 = var_table_size_rows;
PyTuple_SET_ITEM0(tmp_assattr_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__grid_size, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_annotations_4;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_a98491498ec2c2e82a51b94ee52b0685);
tmp_closure_1[0] = par_size;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_viewport;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_56 = MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits(tstate, tmp_annotations_4, tmp_closure_1);

assert(var_apply_width_limits == NULL);
var_apply_width_limits = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_annotations_5;
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_d9c49ebb367ef4924f3f5c21bed941e0);
tmp_closure_2[0] = par_size;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = var_viewport;
Py_INCREF(tmp_closure_2[1]);
tmp_assign_source_57 = MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits(tstate, tmp_annotations_5, tmp_closure_2);

assert(var_apply_height_limits == NULL);
var_apply_height_limits = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_iter_arg_6;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_28;
tmp_called_value_15 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(var_column_scalars);
tmp_args_element_value_28 = var_column_scalars;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 235;
tmp_iter_arg_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_28);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_58 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_58;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_59;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_59 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_59 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 235;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_59;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_iter_arg_7 = tmp_for_loop_3__iter_value;
tmp_assign_source_60 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_60;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_61;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_61 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_62 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_62;
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



exception_lineno = 235;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_63;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_63 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_column;
    var_column = tmp_assign_source_63;
    Py_INCREF(var_column);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_64;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_64 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_scalar;
    var_scalar = tmp_assign_source_64;
    Py_INCREF(var_scalar);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_expression_value_24;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_5;
CHECK_OBJECT(var_scalar);
tmp_expression_value_24 = var_scalar;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_is_auto);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 236;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = const_float_0_0;
{
    PyObject *old = var_width;
    var_width = tmp_assign_source_65;
    Py_INCREF(var_width);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_iter_arg_8;
PyObject *tmp_xrange_low_1;
PyObject *tmp_len_arg_4;
CHECK_OBJECT(var_row_scalars);
tmp_len_arg_4 = var_row_scalars;
tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_iter_arg_8 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_66 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
CHECK_OBJECT(tmp_iter_arg_8);
Py_DECREF(tmp_iter_arg_8);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_for_loop_4__for_iterator;
    tmp_for_loop_4__for_iterator = tmp_assign_source_66;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_67;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_67 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_67 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 238;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_67;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_68;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_assign_source_68 = tmp_for_loop_4__iter_value;
{
    PyObject *old = var_row;
    var_row = tmp_assign_source_68;
    Py_INCREF(var_row);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(var_column);
tmp_tuple_element_4 = var_column;
tmp_assign_source_69 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_row);
tmp_tuple_element_4 = var_row;
PyTuple_SET_ITEM0(tmp_assign_source_69, 1, tmp_tuple_element_4);
{
    PyObject *old = var_coord;
    var_coord = tmp_assign_source_69;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_70;
tmp_assign_source_70 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_70;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_iter_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_1;
if (var_cell_map == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 241;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_expression_value_25 = var_cell_map;
CHECK_OBJECT(var_coord);
tmp_subscript_value_1 = var_coord;
tmp_iter_arg_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_1);
if (tmp_iter_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
CHECK_OBJECT(tmp_iter_arg_9);
Py_DECREF(tmp_iter_arg_9);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_71;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_72;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_72 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_72;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_73 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_73;
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



exception_lineno = 241;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_13;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_12;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_74;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_74 = tmp_tuple_unpack_4__element_1;
{
    PyObject *old = var_widget;
    var_widget = tmp_assign_source_74;
    Py_INCREF(var_widget);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_75;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_75 = tmp_tuple_unpack_4__element_2;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_75;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

goto try_end_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_76;
tmp_assign_source_76 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_76;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$function__3_arrange, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$function__3_arrange, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_11);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 240;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame)) {
        frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_15;
branch_no_8:;
goto try_end_12;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_11;
// End of try:
try_end_12:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_11;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_11:;
{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
if (var_widget == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_widget);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_27 = var_widget;
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_styles);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_column_span);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_cmp_expr_right_8 = const_int_pos_1;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
goto loop_start_6;
branch_no_10:;
{
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
tmp_called_value_16 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_16 != NULL);
if (var_width == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_29 = var_width;
if (var_apply_width_limits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_apply_width_limits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_called_value_17 = var_apply_width_limits;
if (var_widget == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_widget);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_31 = var_widget;
if (var_widget == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_widget);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_28 = var_widget;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_get_content_width);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
if (Nuitka_Cell_GET(par_size) == NULL) {
Py_DECREF(tmp_called_value_18);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_33 = Nuitka_Cell_GET(par_size);
if (Nuitka_Cell_GET(var_viewport) == NULL) {
Py_DECREF(tmp_called_value_18);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_args_element_value_34 = Nuitka_Cell_GET(var_viewport);
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 251;
{
    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
    tmp_add_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
if (var_widget == NULL) {
Py_DECREF(tmp_add_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_widget);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_31 = var_widget;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_styles);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 252;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_gutter);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 252;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_add_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_width);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 252;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_args_element_value_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_args_element_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 249;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
    tmp_args_element_value_30 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_args_element_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 247;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = var_width;
    var_width = tmp_assign_source_77;
    Py_XDECREF(old);
}

}
branch_no_9:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
goto loop_start_6;
loop_end_6:;
goto try_end_13;
// Exception handler code:
try_except_handler_11:;
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

goto try_except_handler_8;
// End of try:
try_end_13:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_35;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_expression_value_32 = module_var_accessor_textual$layouts$grid$Scalar(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Scalar);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_from_number);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_width == NULL) {
Py_DECREF(tmp_called_value_19);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_width);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_35 = var_width;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 255;
tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_35);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_column_scalars == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_scalars);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_ass_subscribed_3 = var_column_scalars;
CHECK_OBJECT(var_column);
tmp_ass_subscript_3 = var_column;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
}
branch_no_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_5;
loop_end_5:;
goto try_end_14;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = Py_None;
assert(var_column_minimums == NULL);
Py_INCREF(tmp_assign_source_78);
var_column_minimums = tmp_assign_source_78;
}
{
nuitka_bool tmp_condition_result_13;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_expression_value_33;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_6;
PyObject *tmp_expression_value_34;
PyObject *tmp_attribute_value_5;
int tmp_truth_name_7;
CHECK_OBJECT(par_self);
tmp_expression_value_33 = par_self;
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_auto_minimum);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 258;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_34 = par_self;
tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_shrink);
if (tmp_attribute_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_5);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_5);

exception_lineno = 258;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_5);
Py_DECREF(tmp_attribute_value_5);
tmp_condition_result_13 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_13 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_79;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
tmp_mult_expr_left_2 = MAKE_LIST1(tstate, const_int_pos_1);
if (var_table_size_columns == NULL) {
Py_DECREF(tmp_mult_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table_size_columns);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 259;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_right_2 = var_table_size_columns;
tmp_assign_source_79 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_column_minimums;
    assert(old != NULL);
    var_column_minimums = tmp_assign_source_79;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_iter_arg_10;
PyObject *tmp_xrange_low_2;
if (var_table_size_columns == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table_size_columns);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_xrange_low_2 = var_table_size_columns;
tmp_iter_arg_10 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
if (tmp_iter_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_80 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
CHECK_OBJECT(tmp_iter_arg_10);
Py_DECREF(tmp_iter_arg_10);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_5__for_iterator == NULL);
tmp_for_loop_5__for_iterator = tmp_assign_source_80;
}
// Tried code:
loop_start_7:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_81;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
tmp_next_source_5 = tmp_for_loop_5__for_iterator;
tmp_assign_source_81 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
if (tmp_assign_source_81 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_7;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 260;
        goto try_except_handler_16;
    }
}

{
    PyObject *old = tmp_for_loop_5__iter_value;
    tmp_for_loop_5__iter_value = tmp_assign_source_81;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_82;
CHECK_OBJECT(tmp_for_loop_5__iter_value);
tmp_assign_source_82 = tmp_for_loop_5__iter_value;
{
    PyObject *old = var_column_index;
    var_column_index = tmp_assign_source_82;
    Py_INCREF(var_column_index);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_iter_arg_11;
PyObject *tmp_xrange_low_3;
PyObject *tmp_len_arg_5;
CHECK_OBJECT(var_row_scalars);
tmp_len_arg_5 = var_row_scalars;
tmp_xrange_low_3 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_xrange_low_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_iter_arg_11 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_3);
CHECK_OBJECT(tmp_xrange_low_3);
Py_DECREF(tmp_xrange_low_3);
if (tmp_iter_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_assign_source_83 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
CHECK_OBJECT(tmp_iter_arg_11);
Py_DECREF(tmp_iter_arg_11);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_for_loop_6__for_iterator;
    tmp_for_loop_6__for_iterator = tmp_assign_source_83;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_8:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_84;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
tmp_next_source_6 = tmp_for_loop_6__for_iterator;
tmp_assign_source_84 = ITERATOR_NEXT_ITERATOR(tmp_next_source_6);
if (tmp_assign_source_84 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_8;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 261;
        goto try_except_handler_17;
    }
}

{
    PyObject *old = tmp_for_loop_6__iter_value;
    tmp_for_loop_6__iter_value = tmp_assign_source_84;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_85;
CHECK_OBJECT(tmp_for_loop_6__iter_value);
tmp_assign_source_85 = tmp_for_loop_6__iter_value;
{
    PyObject *old = var_row_index;
    var_row_index = tmp_assign_source_85;
    Py_INCREF(var_row_index);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
// Tried code:
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_element_value_36;
PyObject *tmp_tuple_element_5;
if (var_cell_map == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}

tmp_expression_value_35 = var_cell_map;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, const_str_plain_get);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
if (var_column_index == NULL) {
Py_DECREF(tmp_called_value_20);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}

tmp_tuple_element_5 = var_column_index;
tmp_args_element_value_36 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_36, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_row_index);
tmp_tuple_element_5 = var_row_index;
PyTuple_SET_ITEM0(tmp_args_element_value_36, 1, tmp_tuple_element_5);
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 263;
tmp_assign_source_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_36);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_86;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_87;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_87 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_cell_info;
    var_cell_info = tmp_assign_source_87;
    Py_INCREF(var_cell_info);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_9 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_9);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_14 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_14 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_88;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_cell_info);
tmp_expression_value_36 = var_cell_info;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_88 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_2, 0);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = var_widget;
    var_widget = tmp_assign_source_88;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_37;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_37;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_40;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_args_element_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_called_value_21 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_21 != NULL);
tmp_called_value_23 = module_var_accessor_textual$layouts$grid$visualize(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_visualize);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
CHECK_OBJECT(var_widget);
tmp_args_element_value_38 = var_widget;
CHECK_OBJECT(var_widget);
tmp_called_instance_6 = var_widget;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 267;
tmp_args_element_value_39 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_render);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 267;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
    tmp_expression_value_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_get_minimal_width);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
CHECK_OBJECT(var_widget);
tmp_expression_value_38 = var_widget;
tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_styles);
if (tmp_args_element_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 268;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 267;
tmp_add_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_40);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
CHECK_OBJECT(var_widget);
tmp_expression_value_41 = var_widget;
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_styles);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 270;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_gutter);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_expression_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 270;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
tmp_add_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_width);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 270;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
tmp_args_element_value_37 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_args_element_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
if (var_column_minimums == NULL) {
Py_DECREF(tmp_args_element_value_37);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_minimums);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 271;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}

tmp_expression_value_42 = var_column_minimums;
if (var_column_index == NULL) {
Py_DECREF(tmp_args_element_value_37);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 271;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}

tmp_subscript_value_3 = var_column_index;
tmp_args_element_value_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_3);
if (tmp_args_element_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_37);

exception_lineno = 271;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 266;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_41};
    tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
}

CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
if (var_column_minimums == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_minimums);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}

tmp_ass_subscribed_4 = var_column_minimums;
if (var_column_index == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}

tmp_ass_subscript_4 = var_column_index;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
}
branch_no_12:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
goto loop_start_8;
loop_end_8:;
goto try_end_15;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_16;
// End of try:
try_end_15:;
Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
goto loop_start_7;
loop_end_7:;
goto try_end_16;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
branch_no_11:;
{
PyObject *tmp_assign_source_89;
PyObject *tmp_called_value_24;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_43;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_44;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_45;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_called_value_24 = module_var_accessor_textual$layouts$grid$resolve(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resolve);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_column_scalars == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_scalars);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 275;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = var_column_scalars;
if (Nuitka_Cell_GET(par_size) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_43 = Nuitka_Cell_GET(par_size);
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_width);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_gutter_vertical);
tmp_kw_call_arg_value_2_1 = var_gutter_vertical;
if (Nuitka_Cell_GET(par_size) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_3_1 = Nuitka_Cell_GET(par_size);
if (Nuitka_Cell_GET(var_viewport) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_4_1 = Nuitka_Cell_GET(var_viewport);
CHECK_OBJECT(par_self);
tmp_expression_value_44 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_expand);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 280;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_45 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_shrink);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 281;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_column_minimums == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_minimums);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_2_1 = var_column_minimums;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 274;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_24, args, kw_values, mod_consts.const_tuple_str_plain_expand_str_plain_shrink_str_plain_minimums_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_columns == NULL);
var_columns = tmp_assign_source_89;
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_iter_arg_12;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_42;
tmp_called_value_25 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(var_row_scalars);
tmp_args_element_value_42 = var_row_scalars;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 286;
tmp_iter_arg_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_42);
if (tmp_iter_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_90 = MAKE_ITERATOR(tstate, tmp_iter_arg_12);
CHECK_OBJECT(tmp_iter_arg_12);
Py_DECREF(tmp_iter_arg_12);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_7__for_iterator == NULL);
tmp_for_loop_7__for_iterator = tmp_assign_source_90;
}
// Tried code:
loop_start_9:;
{
PyObject *tmp_next_source_7;
PyObject *tmp_assign_source_91;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
tmp_next_source_7 = tmp_for_loop_7__for_iterator;
tmp_assign_source_91 = ITERATOR_NEXT(tmp_next_source_7);
if (tmp_assign_source_91 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_9;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 286;
        goto try_except_handler_19;
    }
}

{
    PyObject *old = tmp_for_loop_7__iter_value;
    tmp_for_loop_7__iter_value = tmp_assign_source_91;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_92;
PyObject *tmp_iter_arg_13;
CHECK_OBJECT(tmp_for_loop_7__iter_value);
tmp_iter_arg_13 = tmp_for_loop_7__iter_value;
tmp_assign_source_92 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
{
    PyObject *old = tmp_tuple_unpack_5__source_iter;
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_92;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_93;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_93 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 2);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_1;
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_93;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_94 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 2);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_2;
    tmp_tuple_unpack_5__element_2 = tmp_assign_source_94;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
}
goto try_end_17;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_20;
// End of try:
try_end_17:;
goto try_end_18;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_19;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_95;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_95 = tmp_tuple_unpack_5__element_1;
{
    PyObject *old = var_row;
    var_row = tmp_assign_source_95;
    Py_INCREF(var_row);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_96;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_assign_source_96 = tmp_tuple_unpack_5__element_2;
{
    PyObject *old = var_scalar;
    var_scalar = tmp_assign_source_96;
    Py_INCREF(var_scalar);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_expression_value_46;
PyObject *tmp_attribute_value_6;
int tmp_truth_name_8;
CHECK_OBJECT(var_scalar);
tmp_expression_value_46 = var_scalar;
tmp_attribute_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_is_auto);
if (tmp_attribute_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_attribute_value_6);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_6);

exception_lineno = 287;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
tmp_condition_result_15 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_6);
Py_DECREF(tmp_attribute_value_6);
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_97;
tmp_assign_source_97 = const_float_0_0;
{
    PyObject *old = var_height;
    var_height = tmp_assign_source_97;
    Py_INCREF(var_height);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_iter_arg_14;
PyObject *tmp_xrange_low_4;
PyObject *tmp_len_arg_6;
if (var_column_scalars == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_column_scalars);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 289;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}

tmp_len_arg_6 = var_column_scalars;
tmp_xrange_low_4 = BUILTIN_LEN(tstate, tmp_len_arg_6);
if (tmp_xrange_low_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
tmp_iter_arg_14 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_4);
CHECK_OBJECT(tmp_xrange_low_4);
Py_DECREF(tmp_xrange_low_4);
if (tmp_iter_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
tmp_assign_source_98 = MAKE_ITERATOR(tstate, tmp_iter_arg_14);
CHECK_OBJECT(tmp_iter_arg_14);
Py_DECREF(tmp_iter_arg_14);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
{
    PyObject *old = tmp_for_loop_8__for_iterator;
    tmp_for_loop_8__for_iterator = tmp_assign_source_98;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_10:;
{
PyObject *tmp_next_source_8;
PyObject *tmp_assign_source_99;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
tmp_next_source_8 = tmp_for_loop_8__for_iterator;
tmp_assign_source_99 = ITERATOR_NEXT_ITERATOR(tmp_next_source_8);
if (tmp_assign_source_99 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_10;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 289;
        goto try_except_handler_22;
    }
}

{
    PyObject *old = tmp_for_loop_8__iter_value;
    tmp_for_loop_8__iter_value = tmp_assign_source_99;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_100;
CHECK_OBJECT(tmp_for_loop_8__iter_value);
tmp_assign_source_100 = tmp_for_loop_8__iter_value;
{
    PyObject *old = var_column;
    var_column = tmp_assign_source_100;
    Py_INCREF(var_column);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_101;
PyObject *tmp_tuple_element_6;
CHECK_OBJECT(var_column);
tmp_tuple_element_6 = var_column;
tmp_assign_source_101 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_101, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_row);
tmp_tuple_element_6 = var_row;
PyTuple_SET_ITEM0(tmp_assign_source_101, 1, tmp_tuple_element_6);
{
    PyObject *old = var_coord;
    var_coord = tmp_assign_source_101;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_102;
tmp_assign_source_102 = NUITKA_BOOL_TRUE;
tmp_try_except_2__unhandled_indicator = tmp_assign_source_102;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_103;
PyObject *tmp_iter_arg_15;
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_4;
if (var_cell_map == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}

tmp_expression_value_47 = var_cell_map;
CHECK_OBJECT(var_coord);
tmp_subscript_value_4 = var_coord;
tmp_iter_arg_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_4);
if (tmp_iter_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
tmp_assign_source_103 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_15);
CHECK_OBJECT(tmp_iter_arg_15);
Py_DECREF(tmp_iter_arg_15);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
{
    PyObject *old = tmp_tuple_unpack_6__source_iter;
    tmp_tuple_unpack_6__source_iter = tmp_assign_source_103;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_104;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_104 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 0, 2);
if (tmp_assign_source_104 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_1;
    tmp_tuple_unpack_6__element_1 = tmp_assign_source_104;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_105;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_105 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 1, 2);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_2;
    tmp_tuple_unpack_6__element_2 = tmp_assign_source_105;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_6;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
}
goto try_end_19;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto try_except_handler_24;
// End of try:
try_end_19:;
goto try_end_20;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_23;
// End of try:
try_end_20:;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
{
PyObject *tmp_assign_source_106;
CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
tmp_assign_source_106 = tmp_tuple_unpack_6__element_1;
{
    PyObject *old = var_widget;
    var_widget = tmp_assign_source_106;
    Py_INCREF(var_widget);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;

{
PyObject *tmp_assign_source_107;
CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
tmp_assign_source_107 = tmp_tuple_unpack_6__element_2;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_107;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;

goto try_end_21;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_108;
tmp_assign_source_108 = NUITKA_BOOL_FALSE;
tmp_try_except_2__unhandled_indicator = tmp_assign_source_108;
}
// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_22);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$function__3_arrange, exception_keeper_lineno_22);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_22, exception_tb);
    } else if (exception_keeper_lineno_22 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$function__3_arrange, exception_keeper_lineno_22);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_22, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_22);
// Tried code:
{
bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
tmp_cmp_expr_left_10 = EXC_TYPE(tstate);
tmp_cmp_expr_right_10 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
assert(!(tmp_res == -1));
tmp_condition_result_16 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 291;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame)) {
        frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_26;
branch_no_14:;
goto try_end_22;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_22;
// End of try:
try_end_22:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_21;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_21:;
{
bool tmp_condition_result_17;
nuitka_bool tmp_cmp_expr_left_11;
nuitka_bool tmp_cmp_expr_right_11;
assert(tmp_try_except_2__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_11 = tmp_try_except_2__unhandled_indicator;
tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
tmp_condition_result_17 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
nuitka_bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
if (var_widget == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_widget);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 296;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_expression_value_49 = var_widget;
tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_styles);
if (tmp_expression_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_row_span);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
tmp_cmp_expr_right_12 = const_int_pos_1;
tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
goto loop_start_10;
branch_no_16:;
{
PyObject *tmp_assign_source_109;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_5;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_columns);
tmp_expression_value_51 = var_columns;
CHECK_OBJECT(var_column);
tmp_subscript_value_5 = var_column;
tmp_expression_value_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_5);
if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
tmp_subscript_value_6 = const_int_pos_1;
tmp_assign_source_109 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_6, 1);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
{
    PyObject *old = var_column_width;
    var_column_width = tmp_assign_source_109;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_110;
PyObject *tmp_iter_arg_16;
PyObject *tmp_expression_value_52;
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
if (var_widget == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_widget);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 299;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}

tmp_expression_value_54 = var_widget;
tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_styles);
if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_gutter);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_expression_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
tmp_iter_arg_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_totals);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_iter_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
tmp_assign_source_110 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_16);
CHECK_OBJECT(tmp_iter_arg_16);
Py_DECREF(tmp_iter_arg_16);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
{
    PyObject *old = tmp_tuple_unpack_7__source_iter;
    tmp_tuple_unpack_7__source_iter = tmp_assign_source_110;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_111;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_13 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_111 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 0, 2);
if (tmp_assign_source_111 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_1;
    tmp_tuple_unpack_7__element_1 = tmp_assign_source_111;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_112;
PyObject *tmp_unpack_14;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_112 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 1, 2);
if (tmp_assign_source_112 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_2;
    tmp_tuple_unpack_7__element_2 = tmp_assign_source_112;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_7;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
}
goto try_end_23;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_27;
// End of try:
try_end_23:;
goto try_end_24;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_22;
// End of try:
try_end_24:;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
{
PyObject *tmp_assign_source_113;
CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
tmp_assign_source_113 = tmp_tuple_unpack_7__element_1;
{
    PyObject *old = var_gutter_width;
    var_gutter_width = tmp_assign_source_113;
    Py_INCREF(var_gutter_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;

{
PyObject *tmp_assign_source_114;
CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
tmp_assign_source_114 = tmp_tuple_unpack_7__element_2;
{
    PyObject *old = var_gutter_height;
    var_gutter_height = tmp_assign_source_114;
    Py_INCREF(var_gutter_height);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;

{
PyObject *tmp_assign_source_115;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_43;
PyObject *tmp_args_element_value_44;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_55;
PyObject *tmp_args_element_value_45;
PyObject *tmp_args_element_value_46;
PyObject *tmp_args_element_value_47;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
if (var_apply_height_limits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_apply_height_limits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 300;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_called_value_26 = var_apply_height_limits;
if (var_widget == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_widget);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 301;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_args_element_value_43 = var_widget;
if (var_widget == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_widget);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 302;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_expression_value_55 = var_widget;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_get_content_height);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
if (Nuitka_Cell_GET(par_size) == NULL) {
Py_DECREF(tmp_called_value_27);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 303;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_args_element_value_45 = Nuitka_Cell_GET(par_size);
if (Nuitka_Cell_GET(var_viewport) == NULL) {
Py_DECREF(tmp_called_value_27);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 304;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_args_element_value_46 = Nuitka_Cell_GET(var_viewport);
CHECK_OBJECT(var_column_width);
tmp_sub_expr_left_3 = var_column_width;
CHECK_OBJECT(var_gutter_width);
tmp_sub_expr_right_3 = var_gutter_width;
tmp_args_element_value_47 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_args_element_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 305;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
    tmp_add_expr_left_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_27, call_args);
}

CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_47);
Py_DECREF(tmp_args_element_value_47);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
CHECK_OBJECT(var_gutter_height);
tmp_add_expr_right_6 = var_gutter_height;
tmp_args_element_value_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
if (tmp_args_element_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 300;
{
    PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
    tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
}

CHECK_OBJECT(tmp_args_element_value_44);
Py_DECREF(tmp_args_element_value_44);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
{
    PyObject *old = var_widget_height;
    var_widget_height = tmp_assign_source_115;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_116;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_48;
PyObject *tmp_args_element_value_49;
tmp_called_value_28 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_28 != NULL);
if (var_height == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_height);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 309;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_args_element_value_48 = var_height;
CHECK_OBJECT(var_widget_height);
tmp_args_element_value_49 = var_widget_height;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 309;
{
    PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
    tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
}

if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
{
    PyObject *old = var_height;
    var_height = tmp_assign_source_116;
    Py_XDECREF(old);
}

}
branch_no_15:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
goto loop_start_10;
loop_end_10:;
goto try_end_25;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_8__iter_value);
tmp_for_loop_8__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
Py_DECREF(tmp_for_loop_8__for_iterator);
tmp_for_loop_8__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto try_except_handler_19;
// End of try:
try_end_25:;
Py_XDECREF(tmp_for_loop_8__iter_value);
tmp_for_loop_8__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
Py_DECREF(tmp_for_loop_8__for_iterator);
tmp_for_loop_8__for_iterator = NULL;
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_56;
PyObject *tmp_args_element_value_50;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_expression_value_56 = module_var_accessor_textual$layouts$grid$Scalar(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Scalar);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_from_number);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
if (var_height == NULL) {
Py_DECREF(tmp_called_value_29);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_height);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 311;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}

tmp_args_element_value_50 = var_height;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 311;
tmp_ass_subvalue_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_50);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
if (var_row_scalars == NULL) {
Py_DECREF(tmp_ass_subvalue_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_row_scalars);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 311;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}

tmp_ass_subscribed_5 = var_row_scalars;
CHECK_OBJECT(var_row);
tmp_ass_subscript_5 = var_row;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
}
branch_no_13:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
goto loop_start_9;
loop_end_9:;
goto try_end_26;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_7__iter_value);
tmp_for_loop_7__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
Py_DECREF(tmp_for_loop_7__for_iterator);
tmp_for_loop_7__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto frame_exception_exit_1;
// End of try:
try_end_26:;
Py_XDECREF(tmp_for_loop_7__iter_value);
tmp_for_loop_7__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
Py_DECREF(tmp_for_loop_7__for_iterator);
tmp_for_loop_7__for_iterator = NULL;
{
PyObject *tmp_assign_source_117;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_51;
PyObject *tmp_args_element_value_52;
PyObject *tmp_expression_value_57;
PyObject *tmp_args_element_value_53;
PyObject *tmp_args_element_value_54;
PyObject *tmp_args_element_value_55;
tmp_called_value_30 = module_var_accessor_textual$layouts$grid$resolve(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resolve);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_row_scalars == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_row_scalars);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 313;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_51 = var_row_scalars;
if (Nuitka_Cell_GET(par_size) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 313;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_57 = Nuitka_Cell_GET(par_size);
tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_height);
if (tmp_args_element_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_gutter_horizontal);
tmp_args_element_value_53 = var_gutter_horizontal;
if (Nuitka_Cell_GET(par_size) == NULL) {
Py_DECREF(tmp_args_element_value_52);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 313;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_54 = Nuitka_Cell_GET(par_size);
if (Nuitka_Cell_GET(var_viewport) == NULL) {
Py_DECREF(tmp_args_element_value_52);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 313;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_55 = Nuitka_Cell_GET(var_viewport);
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 313;
{
    PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55};
    tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_30, call_args);
}

CHECK_OBJECT(tmp_args_element_value_52);
Py_DECREF(tmp_args_element_value_52);
if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_rows == NULL);
var_rows = tmp_assign_source_117;
}
{
PyObject *tmp_assign_source_118;
tmp_assign_source_118 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_placements == NULL);
var_placements = tmp_assign_source_118;
}
{
PyObject *tmp_assign_source_119;
tmp_assign_source_119 = module_var_accessor_textual$layouts$grid$WidgetPlacement(tstate);
if (unlikely(tmp_assign_source_119 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WidgetPlacement);
}

if (tmp_assign_source_119 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__WidgetPlacement == NULL);
Py_INCREF(tmp_assign_source_119);
var__WidgetPlacement = tmp_assign_source_119;
}
{
PyObject *tmp_assign_source_120;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(var_placements);
tmp_expression_value_58 = var_placements;
tmp_assign_source_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_120 == NULL));
assert(var_add_placement == NULL);
var_add_placement = tmp_assign_source_120;
}
{
PyObject *tmp_assign_source_121;
PyObject *tmp_sub_expr_left_4;
nuitka_digit tmp_sub_expr_right_4;
PyObject *tmp_len_arg_7;
CHECK_OBJECT(var_columns);
tmp_len_arg_7 = var_columns;
tmp_sub_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_7);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_4 = 1;
tmp_assign_source_121 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
assert(!(tmp_assign_source_121 == NULL));
assert(var_max_column == NULL);
var_max_column = tmp_assign_source_121;
}
{
PyObject *tmp_assign_source_122;
PyObject *tmp_sub_expr_left_5;
nuitka_digit tmp_sub_expr_right_5;
PyObject *tmp_len_arg_8;
CHECK_OBJECT(var_rows);
tmp_len_arg_8 = var_rows;
tmp_sub_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_8);
if (tmp_sub_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_5 = 1;
tmp_assign_source_122 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
CHECK_OBJECT(tmp_sub_expr_left_5);
Py_DECREF(tmp_sub_expr_left_5);
assert(!(tmp_assign_source_122 == NULL));
assert(var_max_row == NULL);
var_max_row = tmp_assign_source_122;
}
{
PyObject *tmp_assign_source_123;
int tmp_and_left_truth_4;
PyObject *tmp_and_left_value_4;
PyObject *tmp_and_right_value_4;
PyObject *tmp_expression_value_59;
PyObject *tmp_cmp_expr_left_13;
nuitka_digit tmp_cmp_expr_right_13;
PyObject *tmp_len_arg_9;
bool tmp_tmp_and_right_value_4_cbool_1;
CHECK_OBJECT(par_self);
tmp_expression_value_59 = par_self;
tmp_and_left_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_stretch_height);
if (tmp_and_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_4);

exception_lineno = 321;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(tmp_and_left_value_4);
Py_DECREF(tmp_and_left_value_4);
CHECK_OBJECT(par_children);
tmp_len_arg_9 = par_children;
tmp_cmp_expr_left_13 = BUILTIN_LEN(tstate, tmp_len_arg_9);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_13 = 1;
tmp_tmp_and_right_value_4_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
tmp_and_right_value_4 = (tmp_tmp_and_right_value_4_cbool_1 != false) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_4);
tmp_assign_source_123 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_assign_source_123 = tmp_and_left_value_4;
and_end_4:;
assert(var_stretch_height == NULL);
var_stretch_height = tmp_assign_source_123;
}
{
PyObject *tmp_assign_source_124;
PyObject *tmp_iter_arg_17;
PyObject *tmp_dict_arg_1;
if (var_cell_size_map == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cell_size_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_arg_1 = var_cell_size_map;
tmp_iter_arg_17 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
if (tmp_iter_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_124 = MAKE_ITERATOR(tstate, tmp_iter_arg_17);
CHECK_OBJECT(tmp_iter_arg_17);
Py_DECREF(tmp_iter_arg_17);
if (tmp_assign_source_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_9__for_iterator == NULL);
tmp_for_loop_9__for_iterator = tmp_assign_source_124;
}
// Tried code:
loop_start_11:;
{
PyObject *tmp_next_source_9;
PyObject *tmp_assign_source_125;
CHECK_OBJECT(tmp_for_loop_9__for_iterator);
tmp_next_source_9 = tmp_for_loop_9__for_iterator;
tmp_assign_source_125 = ITERATOR_NEXT(tmp_next_source_9);
if (tmp_assign_source_125 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_11;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 323;
        goto try_except_handler_29;
    }
}

{
    PyObject *old = tmp_for_loop_9__iter_value;
    tmp_for_loop_9__iter_value = tmp_assign_source_125;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_126;
PyObject *tmp_iter_arg_18;
CHECK_OBJECT(tmp_for_loop_9__iter_value);
tmp_iter_arg_18 = tmp_for_loop_9__iter_value;
tmp_assign_source_126 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_18);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_30;
}
{
    PyObject *old = tmp_tuple_unpack_8__source_iter;
    tmp_tuple_unpack_8__source_iter = tmp_assign_source_126;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_127;
PyObject *tmp_unpack_15;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_15 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_127 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 0, 2);
if (tmp_assign_source_127 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
{
    PyObject *old = tmp_tuple_unpack_8__element_1;
    tmp_tuple_unpack_8__element_1 = tmp_assign_source_127;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_128;
PyObject *tmp_unpack_16;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_16 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_128 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 1, 2);
if (tmp_assign_source_128 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
{
    PyObject *old = tmp_tuple_unpack_8__element_2;
    tmp_tuple_unpack_8__element_2 = tmp_assign_source_128;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_8;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_8, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
}
goto try_end_27;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
Py_DECREF(tmp_tuple_unpack_8__source_iter);
tmp_tuple_unpack_8__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto try_except_handler_30;
// End of try:
try_end_27:;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
Py_DECREF(tmp_tuple_unpack_8__source_iter);
tmp_tuple_unpack_8__source_iter = NULL;
{
PyObject *tmp_assign_source_129;
CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
tmp_assign_source_129 = tmp_tuple_unpack_8__element_1;
{
    PyObject *old = var_widget;
    var_widget = tmp_assign_source_129;
    Py_INCREF(var_widget);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_8__element_1);
tmp_tuple_unpack_8__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_130;
PyObject *tmp_iter_arg_19;
CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
tmp_iter_arg_19 = tmp_tuple_unpack_8__element_2;
tmp_assign_source_130 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_19);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_32;
}
{
    PyObject *old = tmp_tuple_unpack_9__source_iter;
    tmp_tuple_unpack_9__source_iter = tmp_assign_source_130;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_131;
PyObject *tmp_unpack_17;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_17 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_131 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 0, 4);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_9__element_1;
    tmp_tuple_unpack_9__element_1 = tmp_assign_source_131;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_132;
PyObject *tmp_unpack_18;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_18 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_132 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 1, 4);
if (tmp_assign_source_132 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_9__element_2;
    tmp_tuple_unpack_9__element_2 = tmp_assign_source_132;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_133;
PyObject *tmp_unpack_19;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_19 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_133 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_19, 2, 4);
if (tmp_assign_source_133 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_9__element_3;
    tmp_tuple_unpack_9__element_3 = tmp_assign_source_133;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_unpack_20;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_20 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_134 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_20, 3, 4);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_9__element_4;
    tmp_tuple_unpack_9__element_4 = tmp_assign_source_134;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_9;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_9, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
}
goto try_end_28;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
Py_DECREF(tmp_tuple_unpack_9__source_iter);
tmp_tuple_unpack_9__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto try_except_handler_32;
// End of try:
try_end_28:;
goto try_end_29;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
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
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_30;
// End of try:
try_end_29:;
goto try_end_30;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_8__element_1);
tmp_tuple_unpack_8__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_8__element_2);
tmp_tuple_unpack_8__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto try_except_handler_29;
// End of try:
try_end_30:;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
Py_DECREF(tmp_tuple_unpack_9__source_iter);
tmp_tuple_unpack_9__source_iter = NULL;
{
PyObject *tmp_assign_source_135;
CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
tmp_assign_source_135 = tmp_tuple_unpack_9__element_1;
{
    PyObject *old = var_column;
    var_column = tmp_assign_source_135;
    Py_INCREF(var_column);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_9__element_1);
tmp_tuple_unpack_9__element_1 = NULL;

{
PyObject *tmp_assign_source_136;
CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
tmp_assign_source_136 = tmp_tuple_unpack_9__element_2;
{
    PyObject *old = var_row;
    var_row = tmp_assign_source_136;
    Py_INCREF(var_row);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_9__element_2);
tmp_tuple_unpack_9__element_2 = NULL;

{
PyObject *tmp_assign_source_137;
CHECK_OBJECT(tmp_tuple_unpack_9__element_3);
tmp_assign_source_137 = tmp_tuple_unpack_9__element_3;
{
    PyObject *old = var_column_span;
    var_column_span = tmp_assign_source_137;
    Py_INCREF(var_column_span);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_9__element_3);
tmp_tuple_unpack_9__element_3 = NULL;

{
PyObject *tmp_assign_source_138;
CHECK_OBJECT(tmp_tuple_unpack_9__element_4);
tmp_assign_source_138 = tmp_tuple_unpack_9__element_4;
{
    PyObject *old = var_row_span;
    var_row_span = tmp_assign_source_138;
    Py_INCREF(var_row_span);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_9__element_4);
tmp_tuple_unpack_9__element_4 = NULL;

Py_XDECREF(tmp_tuple_unpack_8__element_2);
tmp_tuple_unpack_8__element_2 = NULL;

{
PyObject *tmp_assign_source_139;
PyObject *tmp_expression_value_60;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_7;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(var_columns);
tmp_expression_value_61 = var_columns;
CHECK_OBJECT(var_column);
tmp_subscript_value_7 = var_column;
tmp_expression_value_60 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_7);
if (tmp_expression_value_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_subscript_value_8 = const_int_0;
tmp_assign_source_139 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_8, 0);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
{
    PyObject *old = var_x;
    var_x = tmp_assign_source_139;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(var_row);
tmp_cmp_expr_left_14 = var_row;
CHECK_OBJECT(var_max_row);
tmp_cmp_expr_right_14 = var_max_row;
tmp_condition_result_19 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
goto loop_end_11;
branch_no_17:;
{
PyObject *tmp_assign_source_140;
PyObject *tmp_expression_value_62;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_9;
PyObject *tmp_subscript_value_10;
CHECK_OBJECT(var_rows);
tmp_expression_value_63 = var_rows;
CHECK_OBJECT(var_row);
tmp_subscript_value_9 = var_row;
tmp_expression_value_62 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_9);
if (tmp_expression_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_subscript_value_10 = const_int_0;
tmp_assign_source_140 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_62, tmp_subscript_value_10, 0);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_assign_source_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
{
    PyObject *old = var_y;
    var_y = tmp_assign_source_140;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_141;
PyObject *tmp_iter_arg_20;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_11;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_56;
PyObject *tmp_args_element_value_57;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
CHECK_OBJECT(var_columns);
tmp_expression_value_64 = var_columns;
tmp_called_value_31 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_31 != NULL);
CHECK_OBJECT(var_max_column);
tmp_args_element_value_56 = var_max_column;
CHECK_OBJECT(var_column);
tmp_add_expr_left_7 = var_column;
CHECK_OBJECT(var_column_span);
tmp_add_expr_right_7 = var_column_span;
tmp_args_element_value_57 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
if (tmp_args_element_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 328;
{
    PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
    tmp_subscript_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
}

CHECK_OBJECT(tmp_args_element_value_57);
Py_DECREF(tmp_args_element_value_57);
if (tmp_subscript_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
tmp_iter_arg_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_11);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_iter_arg_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
tmp_assign_source_141 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_20);
CHECK_OBJECT(tmp_iter_arg_20);
Py_DECREF(tmp_iter_arg_20);
if (tmp_assign_source_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
{
    PyObject *old = tmp_tuple_unpack_10__source_iter;
    tmp_tuple_unpack_10__source_iter = tmp_assign_source_141;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_142;
PyObject *tmp_unpack_21;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
tmp_unpack_21 = tmp_tuple_unpack_10__source_iter;
tmp_assign_source_142 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_21, 0, 2);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_35;
}
{
    PyObject *old = tmp_tuple_unpack_10__element_1;
    tmp_tuple_unpack_10__element_1 = tmp_assign_source_142;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_143;
PyObject *tmp_unpack_22;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
tmp_unpack_22 = tmp_tuple_unpack_10__source_iter;
tmp_assign_source_143 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_22, 1, 2);
if (tmp_assign_source_143 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_35;
}
{
    PyObject *old = tmp_tuple_unpack_10__element_2;
    tmp_tuple_unpack_10__element_2 = tmp_assign_source_143;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_10;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
tmp_iterator_name_10 = tmp_tuple_unpack_10__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_10, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_35;
}
}
goto try_end_31;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
Py_DECREF(tmp_tuple_unpack_10__source_iter);
tmp_tuple_unpack_10__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto try_except_handler_34;
// End of try:
try_end_31:;
goto try_end_32;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_10__element_1);
tmp_tuple_unpack_10__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_10__element_2);
tmp_tuple_unpack_10__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto try_except_handler_29;
// End of try:
try_end_32:;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
Py_DECREF(tmp_tuple_unpack_10__source_iter);
tmp_tuple_unpack_10__source_iter = NULL;
{
PyObject *tmp_assign_source_144;
CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
tmp_assign_source_144 = tmp_tuple_unpack_10__element_1;
{
    PyObject *old = var_x2;
    var_x2 = tmp_assign_source_144;
    Py_INCREF(var_x2);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_10__element_1);
tmp_tuple_unpack_10__element_1 = NULL;

{
PyObject *tmp_assign_source_145;
CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
tmp_assign_source_145 = tmp_tuple_unpack_10__element_2;
{
    PyObject *old = var_cell_width;
    var_cell_width = tmp_assign_source_145;
    Py_INCREF(var_cell_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_10__element_2);
tmp_tuple_unpack_10__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_146;
PyObject *tmp_iter_arg_21;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_12;
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_58;
PyObject *tmp_args_element_value_59;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
CHECK_OBJECT(var_rows);
tmp_expression_value_65 = var_rows;
tmp_called_value_32 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_32 != NULL);
CHECK_OBJECT(var_max_row);
tmp_args_element_value_58 = var_max_row;
CHECK_OBJECT(var_row);
tmp_add_expr_left_8 = var_row;
CHECK_OBJECT(var_row_span);
tmp_add_expr_right_8 = var_row_span;
tmp_args_element_value_59 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
if (tmp_args_element_value_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_36;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 329;
{
    PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59};
    tmp_subscript_value_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_32, call_args);
}

CHECK_OBJECT(tmp_args_element_value_59);
Py_DECREF(tmp_args_element_value_59);
if (tmp_subscript_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_36;
}
tmp_iter_arg_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_12);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_iter_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_36;
}
tmp_assign_source_146 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_21);
CHECK_OBJECT(tmp_iter_arg_21);
Py_DECREF(tmp_iter_arg_21);
if (tmp_assign_source_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_36;
}
{
    PyObject *old = tmp_tuple_unpack_11__source_iter;
    tmp_tuple_unpack_11__source_iter = tmp_assign_source_146;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_147;
PyObject *tmp_unpack_23;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
tmp_unpack_23 = tmp_tuple_unpack_11__source_iter;
tmp_assign_source_147 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_23, 0, 2);
if (tmp_assign_source_147 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_37;
}
{
    PyObject *old = tmp_tuple_unpack_11__element_1;
    tmp_tuple_unpack_11__element_1 = tmp_assign_source_147;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_148;
PyObject *tmp_unpack_24;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
tmp_unpack_24 = tmp_tuple_unpack_11__source_iter;
tmp_assign_source_148 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_24, 1, 2);
if (tmp_assign_source_148 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_37;
}
{
    PyObject *old = tmp_tuple_unpack_11__element_2;
    tmp_tuple_unpack_11__element_2 = tmp_assign_source_148;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_11;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
tmp_iterator_name_11 = tmp_tuple_unpack_11__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_11, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_37;
}
}
goto try_end_33;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
Py_DECREF(tmp_tuple_unpack_11__source_iter);
tmp_tuple_unpack_11__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto try_except_handler_36;
// End of try:
try_end_33:;
goto try_end_34;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_11__element_1);
tmp_tuple_unpack_11__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_11__element_2);
tmp_tuple_unpack_11__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto try_except_handler_29;
// End of try:
try_end_34:;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
Py_DECREF(tmp_tuple_unpack_11__source_iter);
tmp_tuple_unpack_11__source_iter = NULL;
{
PyObject *tmp_assign_source_149;
CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
tmp_assign_source_149 = tmp_tuple_unpack_11__element_1;
{
    PyObject *old = var_y2;
    var_y2 = tmp_assign_source_149;
    Py_INCREF(var_y2);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_11__element_1);
tmp_tuple_unpack_11__element_1 = NULL;

{
PyObject *tmp_assign_source_150;
CHECK_OBJECT(tmp_tuple_unpack_11__element_2);
tmp_assign_source_150 = tmp_tuple_unpack_11__element_2;
{
    PyObject *old = var_cell_height;
    var_cell_height = tmp_assign_source_150;
    Py_INCREF(var_cell_height);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_11__element_2);
tmp_tuple_unpack_11__element_2 = NULL;

{
PyObject *tmp_assign_source_151;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_60;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_args_element_value_61;
PyObject *tmp_sub_expr_left_7;
PyObject *tmp_sub_expr_right_7;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
tmp_called_value_33 = module_var_accessor_textual$layouts$grid$Size(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Size);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 330;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_cell_width);
tmp_add_expr_left_9 = var_cell_width;
CHECK_OBJECT(var_x2);
tmp_add_expr_right_9 = var_x2;
tmp_sub_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
if (tmp_sub_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_x);
tmp_sub_expr_right_6 = var_x;
tmp_args_element_value_60 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
CHECK_OBJECT(tmp_sub_expr_left_6);
Py_DECREF(tmp_sub_expr_left_6);
if (tmp_args_element_value_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_cell_height);
tmp_add_expr_left_10 = var_cell_height;
CHECK_OBJECT(var_y2);
tmp_add_expr_right_10 = var_y2;
tmp_sub_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
if (tmp_sub_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_60);

exception_lineno = 330;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_y);
tmp_sub_expr_right_7 = var_y;
tmp_args_element_value_61 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
CHECK_OBJECT(tmp_sub_expr_left_7);
Py_DECREF(tmp_sub_expr_left_7);
if (tmp_args_element_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_60);

exception_lineno = 330;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 330;
{
    PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
    tmp_assign_source_151 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_33, call_args);
}

CHECK_OBJECT(tmp_args_element_value_60);
Py_DECREF(tmp_args_element_value_60);
CHECK_OBJECT(tmp_args_element_value_61);
Py_DECREF(tmp_args_element_value_61);
if (tmp_assign_source_151 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
{
    PyObject *old = var_cell_size;
    var_cell_size = tmp_assign_source_151;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_152;
PyObject *tmp_iter_arg_22;
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_66;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_called_value_35;
PyObject *tmp_args_element_value_62;
PyObject *tmp_expression_value_67;
PyObject *tmp_kw_call_arg_value_3_2;
PyObject *tmp_called_value_36;
PyObject *tmp_args_element_value_63;
PyObject *tmp_expression_value_68;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
CHECK_OBJECT(var_widget);
tmp_expression_value_66 = var_widget;
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain__get_box_model);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
CHECK_OBJECT(var_cell_size);
tmp_kw_call_arg_value_0_2 = var_cell_size;
if (Nuitka_Cell_GET(var_viewport) == NULL) {
Py_DECREF(tmp_called_value_34);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 334;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}

tmp_kw_call_arg_value_1_2 = Nuitka_Cell_GET(var_viewport);
tmp_called_value_35 = module_var_accessor_textual$layouts$grid$Fraction(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_34);

exception_lineno = 335;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
CHECK_OBJECT(var_cell_size);
tmp_expression_value_67 = var_cell_size;
tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_width);
if (tmp_args_element_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_34);

exception_lineno = 335;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 335;
tmp_kw_call_arg_value_2_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_62);
CHECK_OBJECT(tmp_args_element_value_62);
Py_DECREF(tmp_args_element_value_62);
if (tmp_kw_call_arg_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_34);

exception_lineno = 335;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
tmp_called_value_36 = module_var_accessor_textual$layouts$grid$Fraction(tstate);
if (unlikely(tmp_called_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_34);
Py_DECREF(tmp_kw_call_arg_value_2_2);

exception_lineno = 336;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
CHECK_OBJECT(var_cell_size);
tmp_expression_value_68 = var_cell_size;
tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain_height);
if (tmp_args_element_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_34);
Py_DECREF(tmp_kw_call_arg_value_2_2);

exception_lineno = 336;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 336;
tmp_kw_call_arg_value_3_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_63);
CHECK_OBJECT(tmp_args_element_value_63);
Py_DECREF(tmp_args_element_value_63);
if (tmp_kw_call_arg_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_34);
Py_DECREF(tmp_kw_call_arg_value_2_2);

exception_lineno = 336;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
tmp_kw_call_dict_value_0_2 = Py_True;
if (par_greedy == NULL) {
Py_DECREF(tmp_called_value_34);
Py_DECREF(tmp_kw_call_arg_value_2_2);
Py_DECREF(tmp_kw_call_arg_value_3_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_greedy);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 338;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}

tmp_kw_call_dict_value_1_2 = par_greedy;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 332;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_iter_arg_22 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_34, args, kw_values, mod_consts.const_tuple_str_plain_constrain_width_str_plain_greedy_tuple);
}

CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_kw_call_arg_value_2_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
CHECK_OBJECT(tmp_kw_call_arg_value_3_2);
Py_DECREF(tmp_kw_call_arg_value_3_2);
if (tmp_iter_arg_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
tmp_assign_source_152 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_22);
CHECK_OBJECT(tmp_iter_arg_22);
Py_DECREF(tmp_iter_arg_22);
if (tmp_assign_source_152 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
{
    PyObject *old = tmp_tuple_unpack_12__source_iter;
    tmp_tuple_unpack_12__source_iter = tmp_assign_source_152;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_153;
PyObject *tmp_unpack_25;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_unpack_25 = tmp_tuple_unpack_12__source_iter;
tmp_assign_source_153 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_25, 0, 3);
if (tmp_assign_source_153 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}
{
    PyObject *old = tmp_tuple_unpack_12__element_1;
    tmp_tuple_unpack_12__element_1 = tmp_assign_source_153;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_154;
PyObject *tmp_unpack_26;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_unpack_26 = tmp_tuple_unpack_12__source_iter;
tmp_assign_source_154 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_26, 1, 3);
if (tmp_assign_source_154 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}
{
    PyObject *old = tmp_tuple_unpack_12__element_2;
    tmp_tuple_unpack_12__element_2 = tmp_assign_source_154;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_155;
PyObject *tmp_unpack_27;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_unpack_27 = tmp_tuple_unpack_12__source_iter;
tmp_assign_source_155 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_27, 2, 3);
if (tmp_assign_source_155 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}
{
    PyObject *old = tmp_tuple_unpack_12__element_3;
    tmp_tuple_unpack_12__element_3 = tmp_assign_source_155;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_12;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_iterator_name_12 = tmp_tuple_unpack_12__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_12, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}
}
goto try_end_35;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
Py_DECREF(tmp_tuple_unpack_12__source_iter);
tmp_tuple_unpack_12__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto try_except_handler_38;
// End of try:
try_end_35:;
goto try_end_36;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_12__element_1);
tmp_tuple_unpack_12__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_12__element_2);
tmp_tuple_unpack_12__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_12__element_3);
tmp_tuple_unpack_12__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto try_except_handler_29;
// End of try:
try_end_36:;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
Py_DECREF(tmp_tuple_unpack_12__source_iter);
tmp_tuple_unpack_12__source_iter = NULL;
{
PyObject *tmp_assign_source_156;
CHECK_OBJECT(tmp_tuple_unpack_12__element_1);
tmp_assign_source_156 = tmp_tuple_unpack_12__element_1;
{
    PyObject *old = var_box_width;
    var_box_width = tmp_assign_source_156;
    Py_INCREF(var_box_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_12__element_1);
tmp_tuple_unpack_12__element_1 = NULL;

{
PyObject *tmp_assign_source_157;
CHECK_OBJECT(tmp_tuple_unpack_12__element_2);
tmp_assign_source_157 = tmp_tuple_unpack_12__element_2;
{
    PyObject *old = var_box_height;
    var_box_height = tmp_assign_source_157;
    Py_INCREF(var_box_height);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_12__element_2);
tmp_tuple_unpack_12__element_2 = NULL;

{
PyObject *tmp_assign_source_158;
CHECK_OBJECT(tmp_tuple_unpack_12__element_3);
tmp_assign_source_158 = tmp_tuple_unpack_12__element_3;
{
    PyObject *old = var_margin;
    var_margin = tmp_assign_source_158;
    Py_INCREF(var_margin);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_12__element_3);
tmp_tuple_unpack_12__element_3 = NULL;

{
nuitka_bool tmp_condition_result_20;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
int tmp_truth_name_9;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_expression_value_69;
CHECK_OBJECT(var_stretch_height);
tmp_truth_name_9 = CHECK_IF_TRUE(var_stretch_height);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_and_left_value_5 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_box_height);
tmp_cmp_expr_left_15 = var_box_height;
CHECK_OBJECT(var_cell_size);
tmp_expression_value_69 = var_cell_size;
tmp_cmp_expr_right_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain_height);
if (tmp_cmp_expr_right_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_and_right_value_5 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
CHECK_OBJECT(tmp_cmp_expr_right_15);
Py_DECREF(tmp_cmp_expr_right_15);
if (tmp_and_right_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_condition_result_20 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_20 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_159;
PyObject *tmp_called_value_37;
PyObject *tmp_args_element_value_64;
PyObject *tmp_expression_value_70;
tmp_called_value_37 = module_var_accessor_textual$layouts$grid$Fraction(tstate);
if (unlikely(tmp_called_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_cell_size);
tmp_expression_value_70 = var_cell_size;
tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_height);
if (tmp_args_element_value_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 342;
tmp_assign_source_159 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_64);
CHECK_OBJECT(tmp_args_element_value_64);
Py_DECREF(tmp_args_element_value_64);
if (tmp_assign_source_159 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
{
    PyObject *old = var_box_height;
    assert(old != NULL);
    var_box_height = tmp_assign_source_159;
    Py_DECREF(old);
}

}
branch_no_18:;
{
PyObject *tmp_assign_source_160;
PyObject *tmp_add_expr_left_11;
PyObject *tmp_add_expr_right_11;
PyObject *tmp_called_instance_7;
PyObject *tmp_called_instance_8;
PyObject *tmp_called_value_38;
PyObject *tmp_args_element_value_65;
PyObject *tmp_args_element_value_66;
PyObject *tmp_args_element_value_67;
PyObject *tmp_int_arg_1;
PyObject *tmp_add_expr_left_12;
PyObject *tmp_add_expr_right_12;
PyObject *tmp_expression_value_71;
PyObject *tmp_args_element_value_68;
PyObject *tmp_int_arg_2;
PyObject *tmp_add_expr_left_13;
PyObject *tmp_add_expr_right_13;
PyObject *tmp_expression_value_72;
PyObject *tmp_args_element_value_69;
PyObject *tmp_args_element_value_70;
tmp_called_value_38 = module_var_accessor_textual$layouts$grid$Region(tstate);
if (unlikely(tmp_called_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Region);
}

if (tmp_called_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_65 = var_x;
CHECK_OBJECT(var_y);
tmp_args_element_value_66 = var_y;
CHECK_OBJECT(var_box_width);
tmp_add_expr_left_12 = var_box_width;
CHECK_OBJECT(var_margin);
tmp_expression_value_71 = var_margin;
tmp_add_expr_right_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_width);
if (tmp_add_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_int_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
CHECK_OBJECT(tmp_add_expr_right_12);
Py_DECREF(tmp_add_expr_right_12);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_args_element_value_67 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_args_element_value_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_box_height);
tmp_add_expr_left_13 = var_box_height;
CHECK_OBJECT(var_margin);
tmp_expression_value_72 = var_margin;
tmp_add_expr_right_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain_height);
if (tmp_add_expr_right_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_67);

exception_lineno = 346;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_int_arg_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
CHECK_OBJECT(tmp_add_expr_right_13);
Py_DECREF(tmp_add_expr_right_13);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_67);

exception_lineno = 346;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_args_element_value_68 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_args_element_value_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_67);

exception_lineno = 346;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 345;
{
    PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68};
    tmp_called_instance_8 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_38, call_args);
}

CHECK_OBJECT(tmp_args_element_value_67);
Py_DECREF(tmp_args_element_value_67);
CHECK_OBJECT(tmp_args_element_value_68);
Py_DECREF(tmp_args_element_value_68);
if (tmp_called_instance_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_cell_size);
tmp_args_element_value_69 = var_cell_size;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 345;
tmp_called_instance_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_crop_size, tmp_args_element_value_69);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_margin);
tmp_args_element_value_70 = var_margin;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 345;
tmp_add_expr_left_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_shrink, tmp_args_element_value_70);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_add_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
if (var_offset == NULL) {
Py_DECREF(tmp_add_expr_left_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 350;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_add_expr_right_11 = var_offset;
tmp_assign_source_160 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_11, tmp_add_expr_right_11);
CHECK_OBJECT(tmp_add_expr_left_11);
Py_DECREF(tmp_add_expr_left_11);
if (tmp_assign_source_160 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
{
    PyObject *old = var_region;
    var_region = tmp_assign_source_160;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_161;
PyObject *tmp_expression_value_73;
CHECK_OBJECT(var_widget);
tmp_expression_value_73 = var_widget;
tmp_assign_source_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain_styles);
if (tmp_assign_source_161 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
{
    PyObject *old = var_widget_styles;
    var_widget_styles = tmp_assign_source_161;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_162;
nuitka_bool tmp_condition_result_21;
PyObject *tmp_called_instance_9;
PyObject *tmp_call_result_3;
int tmp_truth_name_10;
PyObject *tmp_called_value_39;
PyObject *tmp_expression_value_74;
PyObject *tmp_expression_value_75;
PyObject *tmp_args_element_value_71;
PyObject *tmp_args_element_value_72;
CHECK_OBJECT(var_widget_styles);
tmp_called_instance_9 = var_widget_styles;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 355;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_has_rule,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_offset_tuple, 0)
);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 355;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_condition_result_21 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(var_widget_styles);
tmp_expression_value_75 = var_widget_styles;
tmp_expression_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain_offset);
if (tmp_expression_value_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_expression_value_74);
Py_DECREF(tmp_expression_value_74);
if (tmp_called_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(var_cell_size);
tmp_args_element_value_71 = var_cell_size;
if (Nuitka_Cell_GET(var_viewport) == NULL) {
Py_DECREF(tmp_called_value_39);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 354;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_args_element_value_72 = Nuitka_Cell_GET(var_viewport);
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 354;
{
    PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72};
    tmp_assign_source_162 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
}

CHECK_OBJECT(tmp_called_value_39);
Py_DECREF(tmp_called_value_39);
if (tmp_assign_source_162 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_162 = module_var_accessor_textual$layouts$grid$NULL_OFFSET(tstate);
if (unlikely(tmp_assign_source_162 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NULL_OFFSET);
}

if (tmp_assign_source_162 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
Py_INCREF(tmp_assign_source_162);
condexpr_end_3:;
{
    PyObject *old = var_placement_offset;
    var_placement_offset = tmp_assign_source_162;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_163;
int tmp_and_left_truth_6;
PyObject *tmp_and_left_value_6;
PyObject *tmp_and_right_value_6;
PyObject *tmp_called_instance_10;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_expression_value_76;
CHECK_OBJECT(var_widget_styles);
tmp_called_instance_10 = var_widget_styles;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 360;
tmp_and_left_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_has_rule,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_position_tuple, 0)
);

if (tmp_and_left_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_and_left_truth_6 = CHECK_IF_TRUE(tmp_and_left_value_6);
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_6);

exception_lineno = 360;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(tmp_and_left_value_6);
Py_DECREF(tmp_and_left_value_6);
if (var_styles == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 360;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_expression_value_76 = var_styles;
tmp_cmp_expr_left_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_position);
if (tmp_cmp_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_cmp_expr_right_16 = mod_consts.const_str_plain_absolute;
tmp_and_right_value_6 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
if (tmp_and_right_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
tmp_assign_source_163 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_assign_source_163 = tmp_and_left_value_6;
and_end_6:;
{
    PyObject *old = var_absolute;
    var_absolute = tmp_assign_source_163;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_40;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_73;
PyObject *tmp_called_value_41;
PyObject *tmp_args_element_value_74;
PyObject *tmp_args_element_value_75;
PyObject *tmp_args_element_value_76;
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_called_value_42;
PyObject *tmp_expression_value_77;
PyObject *tmp_args_element_value_77;
PyObject *tmp_args_element_value_78;
PyObject *tmp_args_element_value_79;
if (var_add_placement == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_add_placement);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 362;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_called_value_40 = var_add_placement;
if (var__WidgetPlacement == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WidgetPlacement);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 363;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_called_value_41 = var__WidgetPlacement;
CHECK_OBJECT(var_region);
tmp_args_element_value_74 = var_region;
CHECK_OBJECT(var_placement_offset);
tmp_args_element_value_75 = var_placement_offset;
if (var_gutter_spacing == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_gutter_spacing);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 368;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_cmp_expr_left_17 = var_gutter_spacing;
tmp_cmp_expr_right_17 = Py_None;
tmp_condition_result_22 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
if (tmp_condition_result_22 != false) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(var_margin);
tmp_args_element_value_76 = var_margin;
Py_INCREF(tmp_args_element_value_76);
goto condexpr_end_4;
condexpr_false_4:;
CHECK_OBJECT(var_margin);
tmp_expression_value_77 = var_margin;
tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_grow_maximum);
if (tmp_called_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
if (var_gutter_spacing == NULL) {
Py_DECREF(tmp_called_value_42);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_gutter_spacing);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 369;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_args_element_value_77 = var_gutter_spacing;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 369;
tmp_args_element_value_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_77);
CHECK_OBJECT(tmp_called_value_42);
Py_DECREF(tmp_called_value_42);
if (tmp_args_element_value_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
condexpr_end_4:;
CHECK_OBJECT(var_widget);
tmp_args_element_value_78 = var_widget;
CHECK_OBJECT(var_absolute);
tmp_args_element_value_79 = var_absolute;
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 363;
{
    PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_78, tmp_args_element_value_79};
    tmp_args_element_value_73 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_41, call_args);
}

CHECK_OBJECT(tmp_args_element_value_76);
Py_DECREF(tmp_args_element_value_76);
if (tmp_args_element_value_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame.f_lineno = 362;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_73);
CHECK_OBJECT(tmp_args_element_value_73);
Py_DECREF(tmp_args_element_value_73);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooocoooooooooooooooocooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
goto loop_start_11;
loop_end_11:;
goto try_end_37;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_9__iter_value);
tmp_for_loop_9__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_9__for_iterator);
CHECK_OBJECT(tmp_for_loop_9__for_iterator);
Py_DECREF(tmp_for_loop_9__for_iterator);
tmp_for_loop_9__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto frame_exception_exit_1;
// End of try:
try_end_37:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$function__3_arrange, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$grid$$$function__3_arrange->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$function__3_arrange, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$grid$$$function__3_arrange,
    type_description_1,
    par_self,
    par_parent,
    par_children,
    par_size,
    par_greedy,
    var_gutter_spacing,
    var_cell_map,
    var_cell_size_map,
    var_column_minimums,
    var_placements,
    var_styles,
    var_row_scalars,
    var_column_scalars,
    var_gutter_horizontal,
    var_gutter_vertical,
    var_table_size_columns,
    var_min_column_width,
    var_max_column_width,
    var_container_width,
    var_table_size_rows,
    var_viewport,
    var_keyline_style,
    var__keyline_color,
    var_offset,
    var_cell_coords,
    var_widget_coords,
    var_repeat_scalars,
    var_next_coord,
    var_cell_coord,
    var_column,
    var_row,
    var_child,
    var_child_styles,
    var_column_span,
    var_row_span,
    var_coords,
    var_coord,
    var_apply_width_limits,
    var_apply_height_limits,
    var_scalar,
    var_width,
    var_widget,
    var__,
    var_column_index,
    var_row_index,
    var_cell_info,
    var_columns,
    var_height,
    var_column_width,
    var_gutter_width,
    var_gutter_height,
    var_widget_height,
    var_rows,
    var__WidgetPlacement,
    var_add_placement,
    var_max_column,
    var_max_row,
    var_stretch_height,
    var_x,
    var_y,
    var_x2,
    var_cell_width,
    var_y2,
    var_cell_height,
    var_cell_size,
    var_box_width,
    var_box_height,
    var_margin,
    var_region,
    var_widget_styles,
    var_placement_offset,
    var_absolute
);


// Release cached frame if used for exception.
if (frame_frame_textual$layouts$grid$$$function__3_arrange == cache_frame_frame_textual$layouts$grid$$$function__3_arrange) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange);
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange = NULL;
}

assertFrameObject(frame_frame_textual$layouts$grid$$$function__3_arrange);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_9__iter_value);
tmp_for_loop_9__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_9__for_iterator);
CHECK_OBJECT(tmp_for_loop_9__for_iterator);
Py_DECREF(tmp_for_loop_9__for_iterator);
tmp_for_loop_9__for_iterator = NULL;
CHECK_OBJECT(var_placements);
tmp_return_value = var_placements;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
Py_XDECREF(var_gutter_spacing);
var_gutter_spacing = NULL;
Py_XDECREF(var_cell_map);
var_cell_map = NULL;
Py_XDECREF(var_cell_size_map);
var_cell_size_map = NULL;
Py_XDECREF(var_column_minimums);
var_column_minimums = NULL;
CHECK_OBJECT(var_placements);
CHECK_OBJECT(var_placements);
Py_DECREF(var_placements);
var_placements = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
Py_XDECREF(var_row_scalars);
var_row_scalars = NULL;
Py_XDECREF(var_column_scalars);
var_column_scalars = NULL;
CHECK_OBJECT(var_gutter_horizontal);
CHECK_OBJECT(var_gutter_horizontal);
Py_DECREF(var_gutter_horizontal);
var_gutter_horizontal = NULL;
CHECK_OBJECT(var_gutter_vertical);
CHECK_OBJECT(var_gutter_vertical);
Py_DECREF(var_gutter_vertical);
var_gutter_vertical = NULL;
Py_XDECREF(var_table_size_columns);
var_table_size_columns = NULL;
CHECK_OBJECT(var_min_column_width);
CHECK_OBJECT(var_min_column_width);
Py_DECREF(var_min_column_width);
var_min_column_width = NULL;
CHECK_OBJECT(var_max_column_width);
CHECK_OBJECT(var_max_column_width);
Py_DECREF(var_max_column_width);
var_max_column_width = NULL;
Py_XDECREF(var_container_width);
var_container_width = NULL;
CHECK_OBJECT(var_table_size_rows);
CHECK_OBJECT(var_table_size_rows);
Py_DECREF(var_table_size_rows);
var_table_size_rows = NULL;
CHECK_OBJECT(var_viewport);
CHECK_OBJECT(var_viewport);
Py_DECREF(var_viewport);
var_viewport = NULL;
CHECK_OBJECT(var_keyline_style);
CHECK_OBJECT(var_keyline_style);
Py_DECREF(var_keyline_style);
var_keyline_style = NULL;
CHECK_OBJECT(var__keyline_color);
CHECK_OBJECT(var__keyline_color);
Py_DECREF(var__keyline_color);
var__keyline_color = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
CHECK_OBJECT(var_cell_coords);
CHECK_OBJECT(var_cell_coords);
Py_DECREF(var_cell_coords);
var_cell_coords = NULL;
Py_XDECREF(var_widget_coords);
var_widget_coords = NULL;
CHECK_OBJECT(var_repeat_scalars);
CHECK_OBJECT(var_repeat_scalars);
Py_DECREF(var_repeat_scalars);
var_repeat_scalars = NULL;
Py_XDECREF(var_next_coord);
var_next_coord = NULL;
Py_XDECREF(var_cell_coord);
var_cell_coord = NULL;
Py_XDECREF(var_column);
var_column = NULL;
Py_XDECREF(var_row);
var_row = NULL;
Py_XDECREF(var_child);
var_child = NULL;
Py_XDECREF(var_child_styles);
var_child_styles = NULL;
Py_XDECREF(var_column_span);
var_column_span = NULL;
Py_XDECREF(var_row_span);
var_row_span = NULL;
Py_XDECREF(var_coords);
var_coords = NULL;
Py_XDECREF(var_coord);
var_coord = NULL;
Py_XDECREF(var_apply_width_limits);
var_apply_width_limits = NULL;
Py_XDECREF(var_apply_height_limits);
var_apply_height_limits = NULL;
Py_XDECREF(var_scalar);
var_scalar = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_widget);
var_widget = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_column_index);
var_column_index = NULL;
Py_XDECREF(var_row_index);
var_row_index = NULL;
Py_XDECREF(var_cell_info);
var_cell_info = NULL;
CHECK_OBJECT(var_columns);
CHECK_OBJECT(var_columns);
Py_DECREF(var_columns);
var_columns = NULL;
Py_XDECREF(var_height);
var_height = NULL;
Py_XDECREF(var_column_width);
var_column_width = NULL;
Py_XDECREF(var_gutter_width);
var_gutter_width = NULL;
Py_XDECREF(var_gutter_height);
var_gutter_height = NULL;
Py_XDECREF(var_widget_height);
var_widget_height = NULL;
CHECK_OBJECT(var_rows);
CHECK_OBJECT(var_rows);
Py_DECREF(var_rows);
var_rows = NULL;
Py_XDECREF(var__WidgetPlacement);
var__WidgetPlacement = NULL;
Py_XDECREF(var_add_placement);
var_add_placement = NULL;
CHECK_OBJECT(var_max_column);
CHECK_OBJECT(var_max_column);
Py_DECREF(var_max_column);
var_max_column = NULL;
CHECK_OBJECT(var_max_row);
CHECK_OBJECT(var_max_row);
Py_DECREF(var_max_row);
var_max_row = NULL;
CHECK_OBJECT(var_stretch_height);
CHECK_OBJECT(var_stretch_height);
Py_DECREF(var_stretch_height);
var_stretch_height = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var_x2);
var_x2 = NULL;
Py_XDECREF(var_cell_width);
var_cell_width = NULL;
Py_XDECREF(var_y2);
var_y2 = NULL;
Py_XDECREF(var_cell_height);
var_cell_height = NULL;
Py_XDECREF(var_cell_size);
var_cell_size = NULL;
Py_XDECREF(var_box_width);
var_box_width = NULL;
Py_XDECREF(var_box_height);
var_box_height = NULL;
Py_XDECREF(var_margin);
var_margin = NULL;
Py_XDECREF(var_region);
var_region = NULL;
Py_XDECREF(var_widget_styles);
var_widget_styles = NULL;
Py_XDECREF(var_placement_offset);
var_placement_offset = NULL;
Py_XDECREF(var_absolute);
var_absolute = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
Py_XDECREF(var_gutter_spacing);
var_gutter_spacing = NULL;
Py_XDECREF(var_cell_map);
var_cell_map = NULL;
Py_XDECREF(var_cell_size_map);
var_cell_size_map = NULL;
Py_XDECREF(var_column_minimums);
var_column_minimums = NULL;
Py_XDECREF(var_placements);
var_placements = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
Py_XDECREF(var_row_scalars);
var_row_scalars = NULL;
Py_XDECREF(var_column_scalars);
var_column_scalars = NULL;
Py_XDECREF(var_gutter_horizontal);
var_gutter_horizontal = NULL;
Py_XDECREF(var_gutter_vertical);
var_gutter_vertical = NULL;
Py_XDECREF(var_table_size_columns);
var_table_size_columns = NULL;
Py_XDECREF(var_min_column_width);
var_min_column_width = NULL;
Py_XDECREF(var_max_column_width);
var_max_column_width = NULL;
Py_XDECREF(var_container_width);
var_container_width = NULL;
Py_XDECREF(var_table_size_rows);
var_table_size_rows = NULL;
CHECK_OBJECT(var_viewport);
CHECK_OBJECT(var_viewport);
Py_DECREF(var_viewport);
var_viewport = NULL;
Py_XDECREF(var_keyline_style);
var_keyline_style = NULL;
Py_XDECREF(var__keyline_color);
var__keyline_color = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_cell_coords);
var_cell_coords = NULL;
Py_XDECREF(var_widget_coords);
var_widget_coords = NULL;
Py_XDECREF(var_repeat_scalars);
var_repeat_scalars = NULL;
Py_XDECREF(var_next_coord);
var_next_coord = NULL;
Py_XDECREF(var_cell_coord);
var_cell_coord = NULL;
Py_XDECREF(var_column);
var_column = NULL;
Py_XDECREF(var_row);
var_row = NULL;
Py_XDECREF(var_child);
var_child = NULL;
Py_XDECREF(var_child_styles);
var_child_styles = NULL;
Py_XDECREF(var_column_span);
var_column_span = NULL;
Py_XDECREF(var_row_span);
var_row_span = NULL;
Py_XDECREF(var_coords);
var_coords = NULL;
Py_XDECREF(var_coord);
var_coord = NULL;
Py_XDECREF(var_apply_width_limits);
var_apply_width_limits = NULL;
Py_XDECREF(var_apply_height_limits);
var_apply_height_limits = NULL;
Py_XDECREF(var_scalar);
var_scalar = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_widget);
var_widget = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_column_index);
var_column_index = NULL;
Py_XDECREF(var_row_index);
var_row_index = NULL;
Py_XDECREF(var_cell_info);
var_cell_info = NULL;
Py_XDECREF(var_columns);
var_columns = NULL;
Py_XDECREF(var_height);
var_height = NULL;
Py_XDECREF(var_column_width);
var_column_width = NULL;
Py_XDECREF(var_gutter_width);
var_gutter_width = NULL;
Py_XDECREF(var_gutter_height);
var_gutter_height = NULL;
Py_XDECREF(var_widget_height);
var_widget_height = NULL;
Py_XDECREF(var_rows);
var_rows = NULL;
Py_XDECREF(var__WidgetPlacement);
var__WidgetPlacement = NULL;
Py_XDECREF(var_add_placement);
var_add_placement = NULL;
Py_XDECREF(var_max_column);
var_max_column = NULL;
Py_XDECREF(var_max_row);
var_max_row = NULL;
Py_XDECREF(var_stretch_height);
var_stretch_height = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var_x2);
var_x2 = NULL;
Py_XDECREF(var_cell_width);
var_cell_width = NULL;
Py_XDECREF(var_y2);
var_y2 = NULL;
Py_XDECREF(var_cell_height);
var_cell_height = NULL;
Py_XDECREF(var_cell_size);
var_cell_size = NULL;
Py_XDECREF(var_box_width);
var_box_width = NULL;
Py_XDECREF(var_box_height);
var_box_height = NULL;
Py_XDECREF(var_margin);
var_margin = NULL;
Py_XDECREF(var_region);
var_region = NULL;
Py_XDECREF(var_widget_styles);
var_widget_styles = NULL;
Py_XDECREF(var_placement_offset);
var_placement_offset = NULL;
Py_XDECREF(var_absolute);
var_absolute = NULL;
// Re-raise.
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_parent);
Py_DECREF(par_parent);
CHECK_OBJECT(par_children);
Py_DECREF(par_children);
CHECK_OBJECT(par_greedy);
Py_DECREF(par_greedy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_parent);
Py_DECREF(par_parent);
CHECK_OBJECT(par_children);
Py_DECREF(par_children);
CHECK_OBJECT(par_greedy);
Py_DECREF(par_greedy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_column_count = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_column_count;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords$$$genobj__1_cell_coords(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_column_count);
CHECK_OBJECT(par_column_count);
Py_DECREF(par_column_count);
par_column_count = NULL;
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
struct textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords$$$genobj__1_cell_coords_locals {
PyObject *var_row;
PyObject *var_column;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords$$$genobj__1_cell_coords_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords$$$genobj__1_cell_coords_locals *generator_heap = (struct textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords$$$genobj__1_cell_coords_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_row = NULL;
generator_heap->var_column = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
assert(generator_heap->var_row == NULL);
Py_INCREF(tmp_assign_source_1);
generator_heap->var_row = tmp_assign_source_1;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f55ede532a096cdf10fec15c2da3ebed, module_textual$layouts$grid, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_column_count);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_xrange_low_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coo";
generator_heap->exception_lineno = 112;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_4 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_column;
    generator_heap->var_column = tmp_assign_source_4;
    Py_INCREF(generator_heap->var_column);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_column);
tmp_tuple_element_1 = generator_heap->var_column;
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
if (generator_heap->var_row == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_row);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 113;
generator_heap->type_description_1 = "coo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = generator_heap->var_row;
PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 113;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
goto loop_start_2;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (generator_heap->var_row == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_row);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 114;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = generator_heap->var_row;
tmp_iadd_expr_right_1 = const_int_pos_1;
generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 114;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_iadd_expr_left_1;
generator_heap->var_row = tmp_assign_source_5;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
goto loop_start_1;

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
    generator_heap->var_row,
    generator_heap->var_column
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
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_row);
generator_heap->var_row = NULL;
Py_XDECREF(generator_heap->var_column);
generator_heap->var_column = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords$$$genobj__1_cell_coords(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords$$$genobj__1_cell_coords_context,
        module_textual$layouts$grid,
        mod_consts.const_str_plain_cell_coords,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_f5e56f2eb9985e989c9685fe39cfbcea,
#endif
        code_objects_f55ede532a096cdf10fec15c2da3ebed,
        closure,
        1,
#if 1
        sizeof(struct textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords$$$genobj__1_cell_coords_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_column_start = python_pars[0];
PyObject *par_row_start = python_pars[1];
PyObject *par_columns = python_pars[2];
PyObject *par_rows = python_pars[3];
PyObject *outline_0_var_column = NULL;
PyObject *outline_0_var_row = NULL;
PyObject *tmp_setcontraction_1__$0 = NULL;
PyObject *tmp_setcontraction_1__contraction = NULL;
PyObject *tmp_setcontraction_1__contraction_iter_0 = NULL;
PyObject *tmp_setcontraction_1__iter_value_0 = NULL;
PyObject *tmp_setcontraction_1__iter_value_1 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords)) {
    Py_XDECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords = MAKE_FUNCTION_FRAME(tstate, code_objects_3c453cff5d3c952d02e5c96dba035250, module_textual$layouts$grid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords->m_type_description == NULL);
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords = cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords);
assert(Py_REFCNT(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_column_start);
tmp_xrange_low_1 = par_column_start;
CHECK_OBJECT(par_column_start);
tmp_add_expr_left_1 = par_column_start;
CHECK_OBJECT(par_columns);
tmp_add_expr_right_1 = par_columns;
tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
assert(tmp_setcontraction_1__$0 == NULL);
tmp_setcontraction_1__$0 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = PySet_New(NULL);
assert(tmp_setcontraction_1__contraction == NULL);
tmp_setcontraction_1__contraction = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_setcontraction_1__$0);
tmp_next_source_1 = tmp_setcontraction_1__$0;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 130;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_setcontraction_1__iter_value_1;
    tmp_setcontraction_1__iter_value_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_setcontraction_1__iter_value_1);
tmp_assign_source_4 = tmp_setcontraction_1__iter_value_1;
{
    PyObject *old = outline_0_var_column;
    outline_0_var_column = tmp_assign_source_4;
    Py_INCREF(outline_0_var_column);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_2;
PyObject *tmp_xrange_high_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
if (par_row_start == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_row_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 133;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_xrange_low_2 = par_row_start;
if (par_row_start == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_row_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 133;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_2 = par_row_start;
if (par_rows == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rows);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 133;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_add_expr_right_2 = par_rows;
tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_xrange_high_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_iter_arg_2 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_2, tmp_xrange_high_2);
CHECK_OBJECT(tmp_xrange_high_2);
Py_DECREF(tmp_xrange_high_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_setcontraction_1__contraction_iter_0;
    tmp_setcontraction_1__contraction_iter_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_setcontraction_1__contraction_iter_0);
tmp_next_source_2 = tmp_setcontraction_1__contraction_iter_0;
tmp_assign_source_6 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 130;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_setcontraction_1__iter_value_0;
    tmp_setcontraction_1__iter_value_0 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_setcontraction_1__iter_value_0);
tmp_assign_source_7 = tmp_setcontraction_1__iter_value_0;
{
    PyObject *old = outline_0_var_row;
    outline_0_var_row = tmp_assign_source_7;
    Py_INCREF(outline_0_var_row);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_add_set_1;
PyObject *tmp_add_value_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
tmp_add_set_1 = tmp_setcontraction_1__contraction;
CHECK_OBJECT(outline_0_var_column);
tmp_tuple_element_1 = outline_0_var_column;
tmp_add_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_add_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(outline_0_var_row);
tmp_tuple_element_1 = outline_0_var_row;
PyTuple_SET_ITEM0(tmp_add_value_1, 1, tmp_tuple_element_1);
assert(PySet_Check(tmp_add_set_1));
tmp_res = PySet_Add(tmp_add_set_1, tmp_add_value_1);
CHECK_OBJECT(tmp_add_value_1);
Py_DECREF(tmp_add_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_setcontraction_1__contraction_iter_0);
CHECK_OBJECT(tmp_setcontraction_1__contraction_iter_0);
Py_DECREF(tmp_setcontraction_1__contraction_iter_0);
tmp_setcontraction_1__contraction_iter_0 = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
tmp_return_value = tmp_setcontraction_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_setcontraction_1__$0);
CHECK_OBJECT(tmp_setcontraction_1__$0);
Py_DECREF(tmp_setcontraction_1__$0);
tmp_setcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
CHECK_OBJECT(tmp_setcontraction_1__contraction);
Py_DECREF(tmp_setcontraction_1__contraction);
tmp_setcontraction_1__contraction = NULL;
Py_XDECREF(tmp_setcontraction_1__iter_value_0);
tmp_setcontraction_1__iter_value_0 = NULL;
Py_XDECREF(tmp_setcontraction_1__contraction_iter_0);
tmp_setcontraction_1__contraction_iter_0 = NULL;
Py_XDECREF(tmp_setcontraction_1__iter_value_1);
tmp_setcontraction_1__iter_value_1 = NULL;
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_setcontraction_1__$0);
CHECK_OBJECT(tmp_setcontraction_1__$0);
Py_DECREF(tmp_setcontraction_1__$0);
tmp_setcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
CHECK_OBJECT(tmp_setcontraction_1__contraction);
Py_DECREF(tmp_setcontraction_1__contraction);
tmp_setcontraction_1__contraction = NULL;
Py_XDECREF(tmp_setcontraction_1__iter_value_0);
tmp_setcontraction_1__iter_value_0 = NULL;
Py_XDECREF(tmp_setcontraction_1__contraction_iter_0);
tmp_setcontraction_1__contraction_iter_0 = NULL;
Py_XDECREF(tmp_setcontraction_1__iter_value_1);
tmp_setcontraction_1__iter_value_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_column);
outline_0_var_column = NULL;
Py_XDECREF(outline_0_var_row);
outline_0_var_row = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_column);
outline_0_var_column = NULL;
Py_XDECREF(outline_0_var_row);
outline_0_var_row = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 130;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords,
    type_description_1,
    par_column_start,
    par_row_start,
    par_columns,
    par_rows
);


// Release cached frame if used for exception.
if (frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords == cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords);
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords = NULL;
}

assertFrameObject(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_column_start);
Py_DECREF(par_column_start);
CHECK_OBJECT(par_row_start);
Py_DECREF(par_row_start);
CHECK_OBJECT(par_columns);
Py_DECREF(par_columns);
CHECK_OBJECT(par_rows);
Py_DECREF(par_rows);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_column_start);
Py_DECREF(par_column_start);
CHECK_OBJECT(par_row_start);
Py_DECREF(par_row_start);
CHECK_OBJECT(par_columns);
Py_DECREF(par_columns);
CHECK_OBJECT(par_rows);
Py_DECREF(par_rows);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_scalars = python_pars[0];
PyObject *par_count = python_pars[1];
PyObject *var_limited_values = NULL;
struct Nuitka_FrameObject *frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars)) {
    Py_XDECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars = MAKE_FUNCTION_FRAME(tstate, code_objects_f11e7d6ba9bbb688eb628d93a4eb5348, module_textual$layouts$grid, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars->m_type_description == NULL);
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars = cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars);
assert(Py_REFCNT(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_scalars);
tmp_list_arg_1 = par_scalars;
tmp_expression_value_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_none_none;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_limited_values == NULL);
var_limited_values = tmp_assign_source_1;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
if (var_limited_values == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_limited_values);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 148;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = var_limited_values;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_count);
tmp_cmp_expr_right_1 = par_count;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
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
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (var_limited_values == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_limited_values);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = var_limited_values;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_extend);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (par_scalars == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scalars);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = par_scalars;
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars->m_frame.f_lineno = 149;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_stop_value_1;
if (var_limited_values == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_limited_values);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 150;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = var_limited_values;
CHECK_OBJECT(par_count);
tmp_stop_value_1 = par_count;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars,
    type_description_1,
    par_scalars,
    par_count,
    var_limited_values
);


// Release cached frame if used for exception.
if (frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars == cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars);
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars = NULL;
}

assertFrameObject(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_limited_values);
var_limited_values = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_limited_values);
var_limited_values = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_scalars);
Py_DECREF(par_scalars);
CHECK_OBJECT(par_count);
Py_DECREF(par_count);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_scalars);
Py_DECREF(par_scalars);
CHECK_OBJECT(par_count);
Py_DECREF(par_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_widget = python_pars[0];
PyObject *par_width = python_pars[1];
PyObject *var_styles = NULL;
struct Nuitka_FrameObject *frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits)) {
    Py_XDECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits = MAKE_FUNCTION_FRAME(tstate, code_objects_f3d6fc8b2a91b992976caae929927bba, module_textual$layouts$grid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits->m_type_description == NULL);
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits = cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits);
assert(Py_REFCNT(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_widget);
tmp_expression_value_1 = par_widget;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_styles);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
assert(var_styles == NULL);
var_styles = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_styles);
tmp_expression_value_2 = var_styles;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_min_width);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_width);
tmp_args_element_value_1 = par_width;
CHECK_OBJECT(var_styles);
tmp_expression_value_4 = var_styles;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_min_width);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_3 = module_var_accessor_textual$layouts$grid$Fraction(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 202;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_width);
tmp_args_element_value_6 = par_width;
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits->m_frame.f_lineno = 202;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 202;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits->m_frame.f_lineno = 200;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_width;
    assert(old != NULL);
    par_width = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_styles);
tmp_expression_value_5 = var_styles;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_max_width);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_int_arg_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_12;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(par_width);
tmp_args_element_value_7 = par_width;
CHECK_OBJECT(var_styles);
tmp_expression_value_7 = var_styles;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_max_width);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 207;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 207;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_6 = module_var_accessor_textual$layouts$grid$Fraction(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 207;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_width);
tmp_args_element_value_12 = par_width;
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits->m_frame.f_lineno = 207;
tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_12);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 207;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits->m_frame.f_lineno = 207;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_int_arg_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits->m_frame.f_lineno = 205;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_width;
    assert(old != NULL);
    par_width = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits,
    type_description_1,
    par_widget,
    par_width,
    var_styles,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits == cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits);
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits = NULL;
}

assertFrameObject(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_width);
tmp_return_value = par_width;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_width);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
par_width = NULL;
CHECK_OBJECT(var_styles);
CHECK_OBJECT(var_styles);
Py_DECREF(var_styles);
var_styles = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_width);
par_width = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_widget);
Py_DECREF(par_widget);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_widget);
Py_DECREF(par_widget);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_widget = python_pars[0];
PyObject *par_height = python_pars[1];
PyObject *var_styles = NULL;
struct Nuitka_FrameObject *frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits)) {
    Py_XDECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits = MAKE_FUNCTION_FRAME(tstate, code_objects_4ec2468f45d8e9dec3ff4341f2f41292, module_textual$layouts$grid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits->m_type_description == NULL);
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits = cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits);
assert(Py_REFCNT(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_widget);
tmp_expression_value_1 = par_widget;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_styles);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
assert(var_styles == NULL);
var_styles = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_styles);
tmp_expression_value_2 = var_styles;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_min_height);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_height);
tmp_args_element_value_1 = par_height;
CHECK_OBJECT(var_styles);
tmp_expression_value_4 = var_styles;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_min_height);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_3 = module_var_accessor_textual$layouts$grid$Fraction(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 225;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_height);
tmp_args_element_value_6 = par_height;
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits->m_frame.f_lineno = 225;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 225;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits->m_frame.f_lineno = 225;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits->m_frame.f_lineno = 223;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_height;
    assert(old != NULL);
    par_height = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_styles);
tmp_expression_value_5 = var_styles;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_max_height);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_int_arg_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_12;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(par_height);
tmp_args_element_value_7 = par_height;
CHECK_OBJECT(var_styles);
tmp_expression_value_7 = var_styles;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_max_height);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_6 = module_var_accessor_textual$layouts$grid$Fraction(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 230;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_height);
tmp_args_element_value_12 = par_height;
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits->m_frame.f_lineno = 230;
tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_12);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 230;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits->m_frame.f_lineno = 230;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_int_arg_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooocc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_height;
    assert(old != NULL);
    par_height = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits,
    type_description_1,
    par_widget,
    par_height,
    var_styles,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits == cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits);
    cache_frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits = NULL;
}

assertFrameObject(frame_frame_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_height);
tmp_return_value = par_height;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_height);
CHECK_OBJECT(par_height);
Py_DECREF(par_height);
par_height = NULL;
CHECK_OBJECT(var_styles);
CHECK_OBJECT(var_styles);
Py_DECREF(var_styles);
var_styles = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_height);
par_height = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_widget);
Py_DECREF(par_widget);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_widget);
Py_DECREF(par_widget);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$layouts$grid$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_585806373109b80fd6d621062038a520,
#endif
        code_objects_681c2a7b2ede88e8a99f1ea179f22c9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$layouts$grid,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__2_grid_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$layouts$grid$$$function__2_grid_size,
        mod_consts.const_str_plain_grid_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a3923518fbd5b227f590c8627a83fa57,
#endif
        code_objects_168fc7e94de000fb156534f107ffcb2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$layouts$grid,
        mod_consts.const_str_digest_0c951ebaddb3cda38703514b3a018f04,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$layouts$grid$$$function__3_arrange,
        mod_consts.const_str_plain_arrange,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dde05013d585a1f3f350130ae0b2cfa0,
#endif
        code_objects_fbac22823a8616e7c96b09978543999d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$layouts$grid,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords,
        mod_consts.const_str_plain_cell_coords,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f5e56f2eb9985e989c9685fe39cfbcea,
#endif
        code_objects_f55ede532a096cdf10fec15c2da3ebed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$layouts$grid,
        mod_consts.const_str_digest_5bcf5c9e4edb06b83c25f3db68d5f9f6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords,
        mod_consts.const_str_plain_widget_coords,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f11a78e641b56cc9748ac154c3e6ec46,
#endif
        code_objects_3c453cff5d3c952d02e5c96dba035250,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$layouts$grid,
        mod_consts.const_str_digest_5f579ded906f52f6219e7d536a28df8f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars,
        mod_consts.const_str_plain_repeat_scalars,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e244a5329f6ea033356a72334d1bda70,
#endif
        code_objects_f11e7d6ba9bbb688eb628d93a4eb5348,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$layouts$grid,
        mod_consts.const_str_digest_b6057cf84acd97392412916016995cc5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits,
        mod_consts.const_str_plain_apply_width_limits,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c912406b4261f0139403fea7cfd2b416,
#endif
        code_objects_f3d6fc8b2a91b992976caae929927bba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$layouts$grid,
        mod_consts.const_str_digest_e83d127169f97809e088c5e2557c0503,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits,
        mod_consts.const_str_plain_apply_height_limits,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f27d1448db630df5a6ef7468a76fbc6b,
#endif
        code_objects_4ec2468f45d8e9dec3ff4341f2f41292,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$layouts$grid,
        mod_consts.const_str_digest_899f8accb2073e3e4c45ed13b2bb58ba,
        closure,
        2
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

static function_impl_code const function_table_textual$layouts$grid[] = {
impl_textual$layouts$grid$$$function__3_arrange$$$function__1_cell_coords,
impl_textual$layouts$grid$$$function__3_arrange$$$function__2_widget_coords,
impl_textual$layouts$grid$$$function__3_arrange$$$function__3_repeat_scalars,
impl_textual$layouts$grid$$$function__3_arrange$$$function__4_apply_width_limits,
impl_textual$layouts$grid$$$function__3_arrange$$$function__5_apply_height_limits,
impl_textual$layouts$grid$$$function__1___init__,
impl_textual$layouts$grid$$$function__2_grid_size,
impl_textual$layouts$grid$$$function__3_arrange,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$layouts$grid);
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
        module_textual$layouts$grid,
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
        function_table_textual$layouts$grid,
        sizeof(function_table_textual$layouts$grid) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.layouts.grid";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$layouts$grid(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$layouts$grid");

    // Store the module for future use.
    module_textual$layouts$grid = module;

    moduledict_textual$layouts$grid = MODULE_DICT(module_textual$layouts$grid);

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
        PRINT_STRING("textual$layouts$grid: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$layouts$grid: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$layouts$grid: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.layouts.grid" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$layouts$grid\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$layouts$grid,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$layouts$grid,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$layouts$grid,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$layouts$grid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$layouts$grid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$layouts$grid);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$layouts$grid);
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

        UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$layouts$grid;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$layouts$grid$$$class__1_GridLayout_16 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$layouts$grid$$$class__1_GridLayout_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$layouts$grid = MAKE_MODULE_FRAME(code_objects_d0bba58db9a3bb91c35fc27bdc959e96, module_textual$layouts$grid);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$grid);
assert(Py_REFCNT(frame_frame_textual$layouts$grid) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$layouts$grid$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$layouts$grid$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_fractions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$layouts$grid;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Fraction_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$layouts$grid->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_Fraction,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Fraction);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
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
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_8);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_ff7fa4d10538d83945380730064513ff;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$layouts$grid;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_resolve_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$layouts$grid->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_resolve,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_resolve);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_88ab157ca2f52fb8972e1dcf526073ed;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$layouts$grid;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Scalar_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$layouts$grid->m_frame.f_lineno = 7;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_Scalar,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Scalar);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Scalar, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$layouts$grid;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_5008dc18178f2802b012a7ebee7f31b6_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$layouts$grid->m_frame.f_lineno = 8;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_NULL_OFFSET,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_NULL_OFFSET);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_Region,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Region);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Region, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_Size,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Size);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Size, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_Spacing,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Spacing);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Spacing, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_16d69cbdb0009d7d51a33d919e19e88f;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$layouts$grid;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$layouts$grid->m_frame.f_lineno = 9;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_ArrangeResult,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ArrangeResult);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_ArrangeResult, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_Layout,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Layout);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_WidgetPlacement,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_WidgetPlacement);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement, tmp_assign_source_19);
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
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$layouts$grid;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_visualize_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$layouts$grid->m_frame.f_lineno = 10;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$layouts$grid,
        mod_consts.const_str_plain_visualize,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_visualize);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize, tmp_assign_source_20);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$layouts$grid$Layout(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Layout);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto try_except_handler_4;
}
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_GridLayout;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$layouts$grid->m_frame.f_lineno = 16;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_4;
}
frame_frame_textual$layouts$grid->m_frame.f_lineno = 16;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 16;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
}
branch_end_1:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$layouts$grid$$$class__1_GridLayout_16 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_16d9d6165e1bd93816490dc27bef409f;
tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_0308c35cdaf5ce38b7fc889bb9b3d5ea;
tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_GridLayout;
tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
frame_frame_textual$layouts$grid$$$class__1_GridLayout_2 = MAKE_CLASS_FRAME(tstate, code_objects_2e928a1f1492204f46d49928d7cc959f, module_textual$layouts$grid, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$grid$$$class__1_GridLayout_2);
assert(Py_REFCNT(frame_frame_textual$layouts$grid$$$class__1_GridLayout_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_grid;
tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$layouts$grid$$$function__1___init__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_2 = PyObject_GetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_c644412837a2de204934d51c39e9a20e);

tmp_args_element_value_1 = MAKE_FUNCTION_textual$layouts$grid$$$function__2_grid_size(tstate, tmp_annotations_2);

frame_frame_textual$layouts$grid$$$class__1_GridLayout_2->m_frame.f_lineno = 39;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, mod_consts.const_str_plain_grid_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_true_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_1bb78ad10dd3f60607421f0fa775c2cd);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$layouts$grid$$$function__3_arrange(tstate, tmp_defaults_1, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, mod_consts.const_str_plain_arrange, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid$$$class__1_GridLayout_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$grid$$$class__1_GridLayout_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid$$$class__1_GridLayout_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$grid$$$class__1_GridLayout_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$layouts$grid$$$class__1_GridLayout_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_f860c6729b18e66cb5747faf8f8f7d49_tuple;
tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
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


exception_lineno = 16;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_textual$layouts$grid$$$class__1_GridLayout_16, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_GridLayout;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$layouts$grid$$$class__1_GridLayout_16;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$layouts$grid->m_frame.f_lineno = 16;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_28;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_27 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_textual$layouts$grid$$$class__1_GridLayout_16);
locals_textual$layouts$grid$$$class__1_GridLayout_16 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$layouts$grid$$$class__1_GridLayout_16);
locals_textual$layouts$grid$$$class__1_GridLayout_16 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 16;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$layouts$grid, (Nuitka_StringObject *)mod_consts.const_str_plain_GridLayout, tmp_assign_source_27);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$grid, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$grid->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$grid, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$layouts$grid);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$layouts$grid", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.layouts.grid" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$layouts$grid);
    return module_textual$layouts$grid;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$grid, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$layouts$grid", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

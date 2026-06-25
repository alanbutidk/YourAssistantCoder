/* Generated code for Python module 'numpy$lib$_arraypad_impl'
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



/* The "module_numpy$lib$_arraypad_impl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$_arraypad_impl;
PyDictObject *moduledict_numpy$lib$_arraypad_impl;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_np;
PyObject *const_str_plain_issubdtype;
PyObject *const_str_plain_integer;
PyObject *const_str_plain_round;
PyObject *const_tuple_str_plain_out_tuple;
PyObject *const_str_digest_03f245eba4da96ccab846f63766af4a7;
PyObject *const_tuple_slice_none_none_none_tuple;
PyObject *const_tuple_ellipsis_tuple;
PyObject *const_str_digest_aff7bd1837bb2b5d336035cb48fdcd1c;
PyObject *const_str_digest_0fce7212064f6f1f07beb3780d921c3f;
PyObject *const_str_plain_shape;
PyObject *const_str_plain_flags;
PyObject *const_str_plain_fnc;
PyObject *const_str_plain_F;
PyObject *const_str_plain_C;
PyObject *const_str_plain_empty;
PyObject *const_str_plain_dtype;
PyObject *const_tuple_str_plain_dtype_str_plain_order_tuple;
PyObject *const_str_plain_fill;
PyObject *const_str_digest_a016ea4fb5e73a4a8295525f5bef3d29;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_71bad4e0b4147d15eac690c62ce6efe3;
PyObject *const_str_plain__slice_at_axis;
PyObject *const_str_digest_1bfce939787827f6acde20c4d259d98b;
PyObject *const_str_digest_0ead47059378d801021b15a3a2c39daf;
PyObject *const_str_plain__get_edges;
PyObject *const_slice_none_none_int_neg_1;
PyObject *const_str_digest_18ac93c4c9f584955a470cfa75d787ff;
PyObject *const_str_plain_linspace;
PyObject *const_str_plain_squeeze;
PyObject *const_str_plain_axis;
PyObject *const_str_plain_padded;
PyObject *const_tuple_006a51ee2dab60f7fab474204bd32c88_tuple;
PyObject *const_str_digest_25cd964eda57c1004d274497a40aebdc;
PyObject *const_str_plain_amax;
PyObject *const_str_plain_amin;
PyObject *const_str_digest_6f451f7afc7ff6b4f43f839f98b0849e;
PyObject *const_tuple_str_plain_axis_str_plain_keepdims_tuple;
PyObject *const_str_plain__round_if_needed;
PyObject *const_str_digest_88efd53ead07eb173da6628b99a430de;
PyObject *const_str_plain_min;
PyObject *const_str_plain_odd;
PyObject *const_int_pos_2;
PyObject *const_str_plain_left_pad;
PyObject *const_str_plain_right_pad;
PyObject *const_str_digest_7afac852ff6edd143a16d90137f7e413;
PyObject *const_str_digest_89f1b91e10adcc5e9a54a1da6f8e7a64;
PyObject *const_tuple_tuple_none_none_tuple_tuple;
PyObject *const_str_plain_array;
PyObject *const_str_plain_astype;
PyObject *const_str_plain_intp;
PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
PyObject *const_str_plain_ndim;
PyObject *const_int_pos_3;
PyObject *const_str_plain_size;
PyObject *const_str_plain_ravel;
PyObject *const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf;
PyObject *const_tuple_int_pos_2_int_pos_1_tuple;
PyObject *const_str_plain_broadcast_to;
PyObject *const_str_plain_tolist;
PyObject *const_str_digest_d6b6b2294a6e0e409f6a3deb6d8986b9;
PyObject *const_str_plain_asarray;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_items;
PyObject *const_str_plain_both;
PyObject *const_str_plain_seq;
PyObject *const_str_plain_before;
PyObject *const_str_plain_after;
PyObject *const_str_plain_assert_never;
PyObject *const_str_plain_kind;
PyObject *const_str_plain_i;
PyObject *const_str_digest_c04f8465d9a92ee9b38f5e390057f4fb;
PyObject *const_str_plain__as_pairs;
PyObject *const_dict_a49cf6d67d73ee9b51dbb6169697ab19;
PyObject *const_str_plain_callable;
PyObject *const_str_plain__pad_simple;
PyObject *const_dict_e24c06a0a11b6d4526a84b33486b9123;
PyObject *const_str_plain_moveaxis;
PyObject *const_str_plain_ndindex;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_plain_function;
PyObject *const_str_plain_kwargs;
PyObject *const_dict_787eda1103da1ea39cbb770f6d104ce2;
PyObject *const_str_digest_6869795bf298f71b2924a429133b16fa;
PyObject *const_str_digest_26b54d1220deb578050430015059e5ee;
PyObject *const_str_digest_c42fcf4a2981b4d5566b3788da9a3587;
PyObject *const_str_digest_ca8febe3248241b19119e249726a3804;
PyObject *const_str_plain_maximum;
PyObject *const_str_plain_minimum;
PyObject *const_str_plain_mean;
PyObject *const_str_plain_median;
PyObject *const_str_plain_constant;
PyObject *const_str_plain_constant_values;
PyObject *const_str_plain__view_roi;
PyObject *const_str_plain_original_area_slice;
PyObject *const_str_plain__set_pad_area;
PyObject *const_str_digest_5cddce63c83ac0cfe2b1ec610f8f118b;
PyObject *const_str_digest_4eaa566020f4b0ce39e12e20271cd778;
PyObject *const_str_plain_edge;
PyObject *const_str_plain_linear_ramp;
PyObject *const_str_plain_end_values;
PyObject *const_str_plain__get_linear_ramps;
PyObject *const_str_plain_stat_length;
PyObject *const_str_plain__get_stats;
PyObject *const_str_plain_func;
PyObject *const_frozenset_015ba9fbf8183afba082d06912dc5878;
PyObject *const_str_plain_reflect_type;
PyObject *const_str_plain_even;
PyObject *const_str_plain_symmetric;
PyObject *const_str_plain_left_index;
PyObject *const_str_plain_right_index;
PyObject *const_str_plain__set_reflect_both;
PyObject *const_str_plain_roi;
PyObject *const_str_plain_method;
PyObject *const_str_plain_include_edge;
PyObject *const_str_plain_wrap;
PyObject *const_str_plain__set_wrap_both;
PyObject *const_str_plain_original_period;
PyObject *const_str_digest_cc2fd7e45e21e2de8058694fbd0122e4;
PyObject *const_str_digest_fd096b3979fb57a7dd585a7ce3a49e25;
PyObject *const_str_digest_5ad18139b34c6f99a052e7399060ad1e;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d;
PyObject *const_tuple_str_plain_array_function_dispatch_tuple;
PyObject *const_str_plain_array_function_dispatch;
PyObject *const_str_digest_404fc6f31392643c8aad2353fa336792;
PyObject *const_tuple_str_plain_ndindex_tuple;
PyObject *const_str_plain_pad;
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain__pad_dispatcher;
PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
PyObject *const_tuple_str_plain_constant_tuple;
PyObject *const_str_digest_0b1ce1672c80f0a55d4035fc97790b73;
PyObject *const_tuple_49103b8082c814db9c9c27f013a5d088_tuple;
PyObject *const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple;
PyObject *const_str_digest_068916a97adbc598ea9dc00e42cdf204;
PyObject *const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple;
PyObject *const_tuple_7d115a5ed5a313ce27808df687460449_tuple;
PyObject *const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple;
PyObject *const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple;
PyObject *const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple;
PyObject *const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple;
PyObject *const_tuple_str_plain_arr_str_plain_dtype_tuple;
PyObject *const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple;
PyObject *const_tuple_9001c0ad3c3ecb203435d08cfa87c74e_tuple;
PyObject *const_tuple_099d0985ddc62dca856ded4c773dc361_tuple;
PyObject *const_tuple_str_plain_sl_str_plain_axis_tuple;
PyObject *const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple;
PyObject *const_tuple_4749a953db8d7d3a913dd3048146174e_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[154];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.lib._arraypad_impl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_issubdtype);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_integer);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_round);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_03f245eba4da96ccab846f63766af4a7);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_aff7bd1837bb2b5d336035cb48fdcd1c);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_0fce7212064f6f1f07beb3780d921c3f);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_flags);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_fnc);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_F);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_C);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_order_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_fill);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_a016ea4fb5e73a4a8295525f5bef3d29);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_71bad4e0b4147d15eac690c62ce6efe3);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__slice_at_axis);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bfce939787827f6acde20c4d259d98b);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ead47059378d801021b15a3a2c39daf);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_edges);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_18ac93c4c9f584955a470cfa75d787ff);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_linspace);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_squeeze);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_axis);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_padded);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_006a51ee2dab60f7fab474204bd32c88_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_25cd964eda57c1004d274497a40aebdc);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_amax);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_amin);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f451f7afc7ff6b4f43f839f98b0849e);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_keepdims_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__round_if_needed);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_88efd53ead07eb173da6628b99a430de);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_odd);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_left_pad);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_right_pad);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_7afac852ff6edd143a16d90137f7e413);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_89f1b91e10adcc5e9a54a1da6f8e7a64);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_none_none_tuple_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_astype);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_intp);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_a7ab110deec347786bcfa718065f5388);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ravel);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_pos_1_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_to);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_tolist);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6b6b2294a6e0e409f6a3deb6d8986b9);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_both);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_seq);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_before);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_after);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_kind);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_c04f8465d9a92ee9b38f5e390057f4fb);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__as_pairs);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_a49cf6d67d73ee9b51dbb6169697ab19);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_callable);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__pad_simple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_dict_e24c06a0a11b6d4526a84b33486b9123);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndindex);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_function);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_787eda1103da1ea39cbb770f6d104ce2);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_6869795bf298f71b2924a429133b16fa);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_26b54d1220deb578050430015059e5ee);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_c42fcf4a2981b4d5566b3788da9a3587);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca8febe3248241b19119e249726a3804);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_maximum);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_minimum);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_mean);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_median);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_constant);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_constant_values);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__view_roi);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_original_area_slice);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__set_pad_area);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cddce63c83ac0cfe2b1ec610f8f118b);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_4eaa566020f4b0ce39e12e20271cd778);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_edge);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_linear_ramp);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_end_values);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_linear_ramps);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_stat_length);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_stats);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_frozenset_015ba9fbf8183afba082d06912dc5878);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_reflect_type);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_even);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_symmetric);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_left_index);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_right_index);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain__set_reflect_both);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_roi);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_include_edge);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__set_wrap_both);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_original_period);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc2fd7e45e21e2de8058694fbd0122e4);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd096b3979fb57a7dd585a7ce3a49e25);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ad18139b34c6f99a052e7399060ad1e);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_function_dispatch_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ndindex_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_pad);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain__pad_dispatcher);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constant_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b1ce1672c80f0a55d4035fc97790b73);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_49103b8082c814db9c9c27f013a5d088_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_068916a97adbc598ea9dc00e42cdf204);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_7d115a5ed5a313ce27808df687460449_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_arr_str_plain_dtype_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_9001c0ad3c3ecb203435d08cfa87c74e_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_099d0985ddc62dca856ded4c773dc361_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sl_str_plain_axis_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_4749a953db8d7d3a913dd3048146174e_tuple);
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
void checkModuleConstants_numpy$lib$_arraypad_impl(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_issubdtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issubdtype);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_integer);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_round));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_round);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_03f245eba4da96ccab846f63766af4a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03f245eba4da96ccab846f63766af4a7);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_slice_none_none_none_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ellipsis_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_aff7bd1837bb2b5d336035cb48fdcd1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aff7bd1837bb2b5d336035cb48fdcd1c);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_0fce7212064f6f1f07beb3780d921c3f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0fce7212064f6f1f07beb3780d921c3f);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_flags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flags);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_fnc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fnc);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_F));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_C));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_C);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_order_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_str_plain_order_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_fill));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fill);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_a016ea4fb5e73a4a8295525f5bef3d29));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a016ea4fb5e73a4a8295525f5bef3d29);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_71bad4e0b4147d15eac690c62ce6efe3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71bad4e0b4147d15eac690c62ce6efe3);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__slice_at_axis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__slice_at_axis);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bfce939787827f6acde20c4d259d98b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bfce939787827f6acde20c4d259d98b);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ead47059378d801021b15a3a2c39daf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ead47059378d801021b15a3a2c39daf);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_edges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_edges);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_int_neg_1);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_18ac93c4c9f584955a470cfa75d787ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18ac93c4c9f584955a470cfa75d787ff);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_linspace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linspace);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_squeeze));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_squeeze);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_axis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_axis);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_padded));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_padded);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_006a51ee2dab60f7fab474204bd32c88_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_006a51ee2dab60f7fab474204bd32c88_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_25cd964eda57c1004d274497a40aebdc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25cd964eda57c1004d274497a40aebdc);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_amax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_amax);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_amin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_amin);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f451f7afc7ff6b4f43f839f98b0849e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f451f7afc7ff6b4f43f839f98b0849e);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_keepdims_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axis_str_plain_keepdims_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__round_if_needed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__round_if_needed);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_88efd53ead07eb173da6628b99a430de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88efd53ead07eb173da6628b99a430de);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_odd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_odd);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_left_pad));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_left_pad);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_right_pad));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_right_pad);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_7afac852ff6edd143a16d90137f7e413));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7afac852ff6edd143a16d90137f7e413);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_89f1b91e10adcc5e9a54a1da6f8e7a64));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89f1b91e10adcc5e9a54a1da6f8e7a64);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_none_none_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_tuple_none_none_tuple_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_astype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astype);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_intp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intp);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_a7ab110deec347786bcfa718065f5388));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a7ab110deec347786bcfa718065f5388);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ravel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ravel);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_int_pos_1_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_broadcast_to);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_tolist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tolist);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6b6b2294a6e0e409f6a3deb6d8986b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6b6b2294a6e0e409f6a3deb6d8986b9);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_both));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_both);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_seq));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seq);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_before));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_before);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_after);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_never);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_kind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kind);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_i));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_i);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_c04f8465d9a92ee9b38f5e390057f4fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c04f8465d9a92ee9b38f5e390057f4fb);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__as_pairs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__as_pairs);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_a49cf6d67d73ee9b51dbb6169697ab19));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a49cf6d67d73ee9b51dbb6169697ab19);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callable);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__pad_simple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pad_simple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_dict_e24c06a0a11b6d4526a84b33486b9123));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e24c06a0a11b6d4526a84b33486b9123);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moveaxis);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndindex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndindex);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_function));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_787eda1103da1ea39cbb770f6d104ce2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_787eda1103da1ea39cbb770f6d104ce2);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_6869795bf298f71b2924a429133b16fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6869795bf298f71b2924a429133b16fa);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_26b54d1220deb578050430015059e5ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26b54d1220deb578050430015059e5ee);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_c42fcf4a2981b4d5566b3788da9a3587));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c42fcf4a2981b4d5566b3788da9a3587);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca8febe3248241b19119e249726a3804));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca8febe3248241b19119e249726a3804);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_maximum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maximum);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_minimum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_minimum);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_mean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mean);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_median));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_median);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_constant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_constant);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_constant_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_constant_values);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__view_roi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__view_roi);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_original_area_slice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_original_area_slice);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__set_pad_area));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__set_pad_area);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cddce63c83ac0cfe2b1ec610f8f118b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5cddce63c83ac0cfe2b1ec610f8f118b);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_4eaa566020f4b0ce39e12e20271cd778));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4eaa566020f4b0ce39e12e20271cd778);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_edge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_edge);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_linear_ramp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linear_ramp);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_end_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_end_values);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_linear_ramps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_linear_ramps);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_stat_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stat_length);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_stats));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_stats);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_frozenset_015ba9fbf8183afba082d06912dc5878));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_015ba9fbf8183afba082d06912dc5878);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_reflect_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reflect_type);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_even));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_even);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_symmetric));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_symmetric);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_left_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_left_index);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_right_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_right_index);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain__set_reflect_both));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__set_reflect_both);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_roi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_roi);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_include_edge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_include_edge);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__set_wrap_both));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__set_wrap_both);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_original_period));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_original_period);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc2fd7e45e21e2de8058694fbd0122e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc2fd7e45e21e2de8058694fbd0122e4);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd096b3979fb57a7dd585a7ce3a49e25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd096b3979fb57a7dd585a7ce3a49e25);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ad18139b34c6f99a052e7399060ad1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ad18139b34c6f99a052e7399060ad1e);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_function_dispatch_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_array_function_dispatch_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_dispatch);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ndindex_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ndindex_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_pad));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pad);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain__pad_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pad_dispatcher);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constant_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_constant_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b1ce1672c80f0a55d4035fc97790b73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b1ce1672c80f0a55d4035fc97790b73);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_49103b8082c814db9c9c27f013a5d088_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_49103b8082c814db9c9c27f013a5d088_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_068916a97adbc598ea9dc00e42cdf204));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_068916a97adbc598ea9dc00e42cdf204);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_7d115a5ed5a313ce27808df687460449_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7d115a5ed5a313ce27808df687460449_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_arr_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_arr_str_plain_dtype_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_9001c0ad3c3ecb203435d08cfa87c74e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9001c0ad3c3ecb203435d08cfa87c74e_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_099d0985ddc62dca856ded4c773dc361_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_099d0985ddc62dca856ded4c773dc361_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sl_str_plain_axis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_sl_str_plain_axis_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_4749a953db8d7d3a913dd3048146174e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4749a953db8d7d3a913dd3048146174e_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 16
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
static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_as_pairs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__as_pairs);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__as_pairs);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__as_pairs, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__as_pairs);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__as_pairs, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__as_pairs);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__as_pairs);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__as_pairs);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_get_edges(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_edges);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_edges);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_edges, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_edges);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_edges, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_edges);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_edges);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_edges);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_get_linear_ramps(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_linear_ramps);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_linear_ramps);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_linear_ramps, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_linear_ramps);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_linear_ramps, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_linear_ramps);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_linear_ramps);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_linear_ramps);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_get_stats(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_stats);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_stats);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_stats, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_stats);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_stats, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_stats);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_stats);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_stats);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_pad_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pad_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pad_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pad_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pad_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_pad_simple(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_simple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pad_simple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pad_simple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pad_simple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pad_simple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_simple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_simple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_simple);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_round_if_needed(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__round_if_needed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__round_if_needed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__round_if_needed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__round_if_needed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__round_if_needed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__round_if_needed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__round_if_needed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__round_if_needed);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_set_pad_area(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_pad_area);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_pad_area);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_pad_area, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_pad_area);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_pad_area, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_pad_area);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_pad_area);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__set_pad_area);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_set_reflect_both(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_reflect_both);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_reflect_both);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_reflect_both, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_reflect_both);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_reflect_both, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_reflect_both);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_reflect_both);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__set_reflect_both);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_set_wrap_both(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_wrap_both);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_wrap_both);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_wrap_both, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_wrap_both);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_wrap_both, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_wrap_both);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_wrap_both);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__set_wrap_both);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__slice_at_axis);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__slice_at_axis);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__slice_at_axis, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__slice_at_axis);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__slice_at_axis, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__slice_at_axis);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__slice_at_axis);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__slice_at_axis);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$_view_roi(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__view_roi);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__view_roi);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__view_roi, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__view_roi);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__view_roi, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__view_roi);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__view_roi);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__view_roi);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$array_function_dispatch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_array_function_dispatch);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_array_function_dispatch, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_array_function_dispatch);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_array_function_dispatch, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$ndindex(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ndindex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ndindex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ndindex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ndindex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ndindex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ndindex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ndindex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ndindex);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraypad_impl$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraypad_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraypad_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraypad_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_np);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_np, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_np);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_np, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_9371612d67eab3571d7b9ed02cb1fd24;
static PyCodeObject *code_objects_a8a9c2c87ca01a1230542fd78590d53e;
static PyCodeObject *code_objects_86c7a0fe5dacffdd1caacc04d249a631;
static PyCodeObject *code_objects_386f28347a37407be86d8b8d745468b3;
static PyCodeObject *code_objects_812e5f34a4022348096d6a78aad3afa3;
static PyCodeObject *code_objects_6b2809d09ee9208f44c0274383dd2dbe;
static PyCodeObject *code_objects_7d4d398accbe3e5d43ed7cc5bbf935ae;
static PyCodeObject *code_objects_c146d72414cc53dc0bed47ea9ab07d4e;
static PyCodeObject *code_objects_2c5e5c1cdfc1e62c87554dd2d5b8a3d9;
static PyCodeObject *code_objects_47f0cb83a8465c10d6c6b3be7c5f5c7e;
static PyCodeObject *code_objects_f9c11ef755ea3c75b7c18efd6cfdc53d;
static PyCodeObject *code_objects_3bad05f228ee79806591ad42992e4b12;
static PyCodeObject *code_objects_cf22845a1d97b996bf865eeae26a3432;
static PyCodeObject *code_objects_68ea94e40b1895e47017549901bb5179;
static PyCodeObject *code_objects_a81eea36467e7385f3ab6a95ca345d84;
static PyCodeObject *code_objects_a16f54acce22406c45de7520e114536b;
static PyCodeObject *code_objects_8b028ddf3be40bb5fff8855275459e2f;
static PyCodeObject *code_objects_007734c99cae469ce03774e993fc1b6c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0b1ce1672c80f0a55d4035fc97790b73); CHECK_OBJECT(module_filename_obj);
code_objects_9371612d67eab3571d7b9ed02cb1fd24 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_25cd964eda57c1004d274497a40aebdc, mod_consts.const_tuple_49103b8082c814db9c9c27f013a5d088_tuple, NULL, 1, 0, 0);
code_objects_a8a9c2c87ca01a1230542fd78590d53e = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_71bad4e0b4147d15eac690c62ce6efe3, mod_consts.const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple, NULL, 1, 0, 0);
code_objects_86c7a0fe5dacffdd1caacc04d249a631 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_71bad4e0b4147d15eac690c62ce6efe3, mod_consts.const_tuple_289ad3ee11dc6d148c759de73f346aa5_tuple, NULL, 1, 0, 0);
code_objects_386f28347a37407be86d8b8d745468b3 = MAKE_CODE_OBJECT(module_filename_obj, 811, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_fd096b3979fb57a7dd585a7ce3a49e25, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple, NULL, 1, 0, 0);
code_objects_812e5f34a4022348096d6a78aad3afa3 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_068916a97adbc598ea9dc00e42cdf204, mod_consts.const_str_digest_068916a97adbc598ea9dc00e42cdf204, NULL, NULL, 0, 0, 0);
code_objects_6b2809d09ee9208f44c0274383dd2dbe = MAKE_CODE_OBJECT(module_filename_obj, 471, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__as_pairs, mod_consts.const_str_plain__as_pairs, mod_consts.const_tuple_str_plain_x_str_plain_ndim_str_plain_as_index_tuple, NULL, 3, 0, 0);
code_objects_7d4d398accbe3e5d43ed7cc5bbf935ae = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_edges, mod_consts.const_str_plain__get_edges, mod_consts.const_tuple_7d115a5ed5a313ce27808df687460449_tuple, NULL, 3, 0, 0);
code_objects_c146d72414cc53dc0bed47ea9ab07d4e = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_linear_ramps, mod_consts.const_str_plain__get_linear_ramps, mod_consts.const_tuple_bfbea3f20940a0361d00aebabe5db75f_tuple, NULL, 4, 0, 0);
code_objects_2c5e5c1cdfc1e62c87554dd2d5b8a3d9 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_stats, mod_consts.const_str_plain__get_stats, mod_consts.const_tuple_0618d0e91f4ec27966e0348fa9e817bd_tuple, NULL, 5, 0, 0);
code_objects_47f0cb83a8465c10d6c6b3be7c5f5c7e = MAKE_CODE_OBJECT(module_filename_obj, 538, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain__pad_dispatcher, mod_consts.const_str_plain__pad_dispatcher, mod_consts.const_tuple_29cd30ad46293e9af0d03a5880ca000e_tuple, NULL, 3, 0, 0);
code_objects_f9c11ef755ea3c75b7c18efd6cfdc53d = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__pad_simple, mod_consts.const_str_plain__pad_simple, mod_consts.const_tuple_4133bddbde808a0e27ee5b249b20dda3_tuple, NULL, 3, 0, 0);
code_objects_3bad05f228ee79806591ad42992e4b12 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__round_if_needed, mod_consts.const_str_plain__round_if_needed, mod_consts.const_tuple_str_plain_arr_str_plain_dtype_tuple, NULL, 2, 0, 0);
code_objects_cf22845a1d97b996bf865eeae26a3432 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__set_pad_area, mod_consts.const_str_plain__set_pad_area, mod_consts.const_tuple_46b308d7f1da5dc5aa5b4231611fe55a_tuple, NULL, 4, 0, 0);
code_objects_68ea94e40b1895e47017549901bb5179 = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__set_reflect_both, mod_consts.const_str_plain__set_reflect_both, mod_consts.const_tuple_9001c0ad3c3ecb203435d08cfa87c74e_tuple, NULL, 6, 0, 0);
code_objects_a81eea36467e7385f3ab6a95ca345d84 = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__set_wrap_both, mod_consts.const_str_plain__set_wrap_both, mod_consts.const_tuple_099d0985ddc62dca856ded4c773dc361_tuple, NULL, 4, 0, 0);
code_objects_a16f54acce22406c45de7520e114536b = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__slice_at_axis, mod_consts.const_str_plain__slice_at_axis, mod_consts.const_tuple_str_plain_sl_str_plain_axis_tuple, NULL, 2, 0, 0);
code_objects_8b028ddf3be40bb5fff8855275459e2f = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__view_roi, mod_consts.const_str_plain__view_roi, mod_consts.const_tuple_bb834637c978590f8a9e1ab69daf9ccb_tuple, NULL, 3, 0, 0);
code_objects_007734c99cae469ce03774e993fc1b6c = MAKE_CODE_OBJECT(module_filename_obj, 547, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_pad, mod_consts.const_str_plain_pad, mod_consts.const_tuple_4749a953db8d7d3a913dd3048146174e_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__13_pad$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__11__as_pairs(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__12__pad_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__13_pad(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__1__round_if_needed(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__3__view_roi(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__4__pad_simple(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__5__set_pad_area(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__6__get_edges(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__8__get_stats(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$lib$_arraypad_impl$$$function__1__round_if_needed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_arr = python_pars[0];
PyObject *par_dtype = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed = MAKE_FUNCTION_FRAME(tstate, code_objects_3bad05f228ee79806591ad42992e4b12, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
int tmp_truth_name_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_issubdtype);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_1 = par_dtype;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_integer);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed->m_frame.f_lineno = 30;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_arr);
tmp_expression_value_3 = par_arr;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_round);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr);
tmp_kw_call_value_0_1 = par_arr;
frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed->m_frame.f_lineno = 31;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed,
    type_description_1,
    par_arr,
    par_dtype
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__1__round_if_needed);

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
CHECK_OBJECT(par_arr);
Py_DECREF(par_arr);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_arr);
Py_DECREF(par_arr);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sl = python_pars[0];
PyObject *par_axis = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis = MAKE_FUNCTION_FRAME(tstate, code_objects_a16f54acce22406c45de7520e114536b, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_mult_expr_left_1 = mod_consts.const_tuple_slice_none_none_none_tuple;
CHECK_OBJECT(par_axis);
tmp_mult_expr_right_1 = par_axis;
tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_sl);
tmp_tuple_element_1 = par_sl;
tmp_add_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_add_expr_right_2, 0, tmp_tuple_element_1);
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_tuple_ellipsis_tuple;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis,
    type_description_1,
    par_sl,
    par_axis
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sl);
Py_DECREF(par_sl);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sl);
Py_DECREF(par_sl);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__3__view_roi(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_array = python_pars[0];
PyObject *par_original_area_slice = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *var_sl = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi = MAKE_FUNCTION_FRAME(tstate, code_objects_8b028ddf3be40bb5fff8855275459e2f, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(par_axis);
tmp_iadd_expr_left_1 = par_axis;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_iadd_expr_left_1;
par_axis = tmp_assign_source_1;

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
tmp_mult_expr_left_1 = mod_consts.const_tuple_slice_none_none_none_tuple;
CHECK_OBJECT(par_axis);
tmp_mult_expr_right_1 = par_axis;
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_original_area_slice);
tmp_expression_value_1 = par_original_area_slice;
CHECK_OBJECT(par_axis);
tmp_start_value_1 = par_axis;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 83;
type_description_1 = "oooo";
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


exception_lineno = 83;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_sl == NULL);
var_sl = tmp_assign_source_2;
}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_array);
tmp_expression_value_2 = par_array;
CHECK_OBJECT(var_sl);
tmp_subscript_value_2 = var_sl;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi,
    type_description_1,
    par_array,
    par_original_area_slice,
    par_axis,
    var_sl
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__3__view_roi);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_axis);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
par_axis = NULL;
CHECK_OBJECT(var_sl);
CHECK_OBJECT(var_sl);
Py_DECREF(var_sl);
var_sl = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_axis);
par_axis = NULL;
Py_XDECREF(var_sl);
var_sl = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_array);
Py_DECREF(par_array);
CHECK_OBJECT(par_original_area_slice);
Py_DECREF(par_original_area_slice);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_array);
Py_DECREF(par_array);
CHECK_OBJECT(par_original_area_slice);
Py_DECREF(par_original_area_slice);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__4__pad_simple(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_array = python_pars[0];
PyObject *par_pad_width = python_pars[1];
PyObject *par_fill_value = python_pars[2];
PyObject *var_new_shape = NULL;
PyObject *var_order = NULL;
PyObject *var_padded = NULL;
PyObject *var_original_area_slice = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple = MAKE_FUNCTION_FRAME(tstate, code_objects_f9c11ef755ea3c75b7c18efd6cfdc53d, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_tuple_arg_1;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(par_array);
tmp_expression_value_1 = par_array;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_2 = par_pad_width;
frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple->m_frame.f_lineno = 112;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_tuple_arg_1 = MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_new_shape == NULL);
var_new_shape = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_3;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_array);
tmp_expression_value_3 = par_array;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_flags);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_fnc);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 114;
type_description_1 = "ooooooo";
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
tmp_assign_source_3 = mod_consts.const_str_plain_F;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_3 = mod_consts.const_str_plain_C;
condexpr_end_1:;
assert(var_order == NULL);
Py_INCREF(tmp_assign_source_3);
var_order = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_empty);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_new_shape);
tmp_kw_call_arg_value_0_1 = var_new_shape;
CHECK_OBJECT(par_array);
tmp_expression_value_5 = par_array;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 115;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_order);
tmp_kw_call_dict_value_1_1 = var_order;
frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple->m_frame.f_lineno = 115;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_dtype_str_plain_order_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_padded == NULL);
var_padded = tmp_assign_source_4;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_fill_value);
tmp_cmp_expr_left_1 = par_fill_value;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_padded);
tmp_called_instance_1 = var_padded;
CHECK_OBJECT(par_fill_value);
tmp_args_element_value_3 = par_fill_value;
frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple->m_frame.f_lineno = 118;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_fill, tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_tuple_arg_2;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_3 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(par_array);
tmp_expression_value_6 = par_array;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_5 = par_pad_width;
frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_2__$0 == NULL);
tmp_genexpr_2__$0 = tmp_assign_source_6;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_tuple_arg_2 = MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_assign_source_5 = PySequence_Tuple(tmp_tuple_arg_2);
CHECK_OBJECT(tmp_tuple_arg_2);
Py_DECREF(tmp_tuple_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_original_area_slice == NULL);
var_original_area_slice = tmp_assign_source_5;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_array);
tmp_ass_subvalue_1 = par_array;
CHECK_OBJECT(var_padded);
tmp_ass_subscribed_1 = var_padded;
CHECK_OBJECT(var_original_area_slice);
tmp_ass_subscript_1 = var_original_area_slice;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple,
    type_description_1,
    par_array,
    par_pad_width,
    par_fill_value,
    var_new_shape,
    var_order,
    var_padded,
    var_original_area_slice
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__4__pad_simple);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_padded);
tmp_tuple_element_1 = var_padded;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_original_area_slice);
tmp_tuple_element_1 = var_original_area_slice;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_new_shape);
CHECK_OBJECT(var_new_shape);
Py_DECREF(var_new_shape);
var_new_shape = NULL;
CHECK_OBJECT(var_order);
CHECK_OBJECT(var_order);
Py_DECREF(var_order);
var_order = NULL;
CHECK_OBJECT(var_padded);
CHECK_OBJECT(var_padded);
Py_DECREF(var_padded);
var_padded = NULL;
CHECK_OBJECT(var_original_area_slice);
CHECK_OBJECT(var_original_area_slice);
Py_DECREF(var_original_area_slice);
var_original_area_slice = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new_shape);
var_new_shape = NULL;
Py_XDECREF(var_order);
var_order = NULL;
Py_XDECREF(var_padded);
var_padded = NULL;
Py_XDECREF(var_original_area_slice);
var_original_area_slice = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_array);
Py_DECREF(par_array);
CHECK_OBJECT(par_pad_width);
Py_DECREF(par_pad_width);
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_array);
Py_DECREF(par_array);
CHECK_OBJECT(par_pad_width);
Py_DECREF(par_pad_width);
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__1_genexpr_locals {
PyObject *var_size;
PyObject *var_left;
PyObject *var_right;
PyObject *tmp_iter_value_0;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_size = NULL;
generator_heap->var_left = NULL;
generator_heap->var_right = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a8a9c2c87ca01a1230542fd78590d53e, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Nooo";
generator_heap->exception_lineno = 110;
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


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "Nooo";
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



generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "Nooo";
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



generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "Nooo";
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



generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "Nooo";
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
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_size;
    generator_heap->var_size = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_size);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_iter_arg_2 = generator_heap->tmp_tuple_unpack_1__element_2;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
    generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_6;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
    generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_6;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
    generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
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



generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_6;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_5;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = generator_heap->tmp_tuple_unpack_2__element_1;
{
    PyObject *old = generator_heap->var_left;
    generator_heap->var_left = tmp_assign_source_9;
    Py_INCREF(generator_heap->var_left);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = generator_heap->tmp_tuple_unpack_2__element_2;
{
    PyObject *old = generator_heap->var_right;
    generator_heap->var_right = tmp_assign_source_10;
    Py_INCREF(generator_heap->var_right);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_left);
tmp_add_expr_left_2 = generator_heap->var_left;
CHECK_OBJECT(generator_heap->var_size);
tmp_add_expr_right_2 = generator_heap->var_size;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_right);
tmp_add_expr_right_1 = generator_heap->var_right;
tmp_expression_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_add_expr_left_2, sizeof(PyObject *), &tmp_add_expr_right_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_add_expr_left_2, sizeof(PyObject *), &tmp_add_expr_right_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;

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
    generator_heap->var_size,
    generator_heap->var_left,
    generator_heap->var_right
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
goto try_end_6;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_size);
generator_heap->var_size = NULL;
Py_XDECREF(generator_heap->var_left);
generator_heap->var_left = NULL;
Py_XDECREF(generator_heap->var_right);
generator_heap->var_right = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:
try_end_6:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_size);
generator_heap->var_size = NULL;
Py_XDECREF(generator_heap->var_left);
generator_heap->var_left = NULL;
Py_XDECREF(generator_heap->var_right);
generator_heap->var_right = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__1_genexpr_context,
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_71bad4e0b4147d15eac690c62ce6efe3,
#endif
        code_objects_a8a9c2c87ca01a1230542fd78590d53e,
        closure,
        1,
#if 1
        sizeof(struct numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__2_genexpr_locals {
PyObject *var_size;
PyObject *var_left;
PyObject *var_right;
PyObject *tmp_iter_value_0;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__2_genexpr_locals *generator_heap = (struct numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_size = NULL;
generator_heap->var_left = NULL;
generator_heap->var_right = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_86c7a0fe5dacffdd1caacc04d249a631, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Nooo";
generator_heap->exception_lineno = 121;
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


generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "Nooo";
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



generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "Nooo";
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



generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "Nooo";
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



generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "Nooo";
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
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_size;
    generator_heap->var_size = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_size);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_iter_arg_2 = generator_heap->tmp_tuple_unpack_1__element_2;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
    generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_6;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
    generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_6;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
    generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
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



generator_heap->exception_lineno = 123;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_6;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_5;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = generator_heap->tmp_tuple_unpack_2__element_1;
{
    PyObject *old = generator_heap->var_left;
    generator_heap->var_left = tmp_assign_source_9;
    Py_INCREF(generator_heap->var_left);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = generator_heap->tmp_tuple_unpack_2__element_2;
{
    PyObject *old = generator_heap->var_right;
    generator_heap->var_right = tmp_assign_source_10;
    Py_INCREF(generator_heap->var_right);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_left);
tmp_start_value_1 = generator_heap->var_left;
CHECK_OBJECT(generator_heap->var_left);
tmp_add_expr_left_1 = generator_heap->var_left;
CHECK_OBJECT(generator_heap->var_size);
tmp_add_expr_right_1 = generator_heap->var_size;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_expression_value_1 == NULL));
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_start_value_1, sizeof(PyObject *), &tmp_stop_value_1, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_start_value_1, sizeof(PyObject *), &tmp_stop_value_1, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 122;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 121;
generator_heap->type_description_1 = "Nooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;

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
    generator_heap->var_size,
    generator_heap->var_left,
    generator_heap->var_right
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
goto try_end_6;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_size);
generator_heap->var_size = NULL;
Py_XDECREF(generator_heap->var_left);
generator_heap->var_left = NULL;
Py_XDECREF(generator_heap->var_right);
generator_heap->var_right = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:
try_end_6:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_size);
generator_heap->var_size = NULL;
Py_XDECREF(generator_heap->var_left);
generator_heap->var_left = NULL;
Py_XDECREF(generator_heap->var_right);
generator_heap->var_right = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__2_genexpr_context,
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_71bad4e0b4147d15eac690c62ce6efe3,
#endif
        code_objects_86c7a0fe5dacffdd1caacc04d249a631,
        closure,
        1,
#if 1
        sizeof(struct numpy$lib$_arraypad_impl$$$function__4__pad_simple$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__5__set_pad_area(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_padded = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_width_pair = python_pars[2];
PyObject *par_value_pair = python_pars[3];
PyObject *var_left_slice = NULL;
PyObject *var_right_slice = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area = MAKE_FUNCTION_FRAME(tstate, code_objects_cf22845a1d97b996bf865eeae26a3432, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_width_pair);
tmp_expression_value_1 = par_width_pair;
tmp_subscript_value_1 = const_int_0;
tmp_stop_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_args_element_value_1 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area->m_frame.f_lineno = 147;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_left_slice == NULL);
var_left_slice = tmp_assign_source_1;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_value_pair);
tmp_expression_value_2 = par_value_pair;
tmp_subscript_value_2 = const_int_0;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_padded);
tmp_ass_subscribed_1 = par_padded;
CHECK_OBJECT(var_left_slice);
tmp_ass_subscript_1 = var_left_slice;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_start_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
PyObject *tmp_stop_value_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_padded);
tmp_expression_value_4 = par_padded;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_shape);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_3 = par_axis;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_width_pair);
tmp_expression_value_5 = par_width_pair;
tmp_subscript_value_4 = const_int_pos_1;
tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_4, 1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 151;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_start_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_args_element_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_args_element_value_3 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_right_slice == NULL);
var_right_slice = tmp_assign_source_2;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_5;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_value_pair);
tmp_expression_value_6 = par_value_pair;
tmp_subscript_value_5 = const_int_pos_1;
tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_5, 1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_padded);
tmp_ass_subscribed_2 = par_padded;
CHECK_OBJECT(var_right_slice);
tmp_ass_subscript_2 = var_right_slice;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area,
    type_description_1,
    par_padded,
    par_axis,
    par_width_pair,
    par_value_pair,
    var_left_slice,
    var_right_slice
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__5__set_pad_area);

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
CHECK_OBJECT(var_left_slice);
CHECK_OBJECT(var_left_slice);
Py_DECREF(var_left_slice);
var_left_slice = NULL;
CHECK_OBJECT(var_right_slice);
CHECK_OBJECT(var_right_slice);
Py_DECREF(var_right_slice);
var_right_slice = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_left_slice);
var_left_slice = NULL;
Py_XDECREF(var_right_slice);
var_right_slice = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_value_pair);
Py_DECREF(par_value_pair);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_value_pair);
Py_DECREF(par_value_pair);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__6__get_edges(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_padded = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_width_pair = python_pars[2];
PyObject *var_left_index = NULL;
PyObject *var_left_slice = NULL;
PyObject *var_left_edge = NULL;
PyObject *var_right_index = NULL;
PyObject *var_right_slice = NULL;
PyObject *var_right_edge = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges = MAKE_FUNCTION_FRAME(tstate, code_objects_7d4d398accbe3e5d43ed7cc5bbf935ae, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_width_pair);
tmp_expression_value_1 = par_width_pair;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_index == NULL);
var_left_index = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_index);
tmp_start_value_1 = var_left_index;
CHECK_OBJECT(var_left_index);
tmp_add_expr_left_1 = var_left_index;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_args_element_value_1 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges->m_frame.f_lineno = 177;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_slice == NULL);
var_left_slice = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_padded);
tmp_expression_value_2 = par_padded;
CHECK_OBJECT(var_left_slice);
tmp_subscript_value_2 = var_left_slice;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_edge == NULL);
var_left_edge = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_padded);
tmp_expression_value_4 = par_padded;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_shape);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_3 = par_axis;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_width_pair);
tmp_expression_value_5 = par_width_pair;
tmp_subscript_value_4 = const_int_pos_1;
tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_4, 1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_index == NULL);
var_right_index = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_start_value_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_stop_value_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_index);
tmp_sub_expr_left_2 = var_right_index;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_start_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_index);
tmp_stop_value_2 = var_right_index;
tmp_args_element_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_args_element_value_3 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges->m_frame.f_lineno = 181;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_slice == NULL);
var_right_slice = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_padded);
tmp_expression_value_6 = par_padded;
CHECK_OBJECT(var_right_slice);
tmp_subscript_value_5 = var_right_slice;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_edge == NULL);
var_right_edge = tmp_assign_source_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges,
    type_description_1,
    par_padded,
    par_axis,
    par_width_pair,
    var_left_index,
    var_left_slice,
    var_left_edge,
    var_right_index,
    var_right_slice,
    var_right_edge
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__6__get_edges);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_left_edge);
tmp_tuple_element_1 = var_left_edge;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_right_edge);
tmp_tuple_element_1 = var_right_edge;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_left_index);
CHECK_OBJECT(var_left_index);
Py_DECREF(var_left_index);
var_left_index = NULL;
CHECK_OBJECT(var_left_slice);
CHECK_OBJECT(var_left_slice);
Py_DECREF(var_left_slice);
var_left_slice = NULL;
CHECK_OBJECT(var_left_edge);
CHECK_OBJECT(var_left_edge);
Py_DECREF(var_left_edge);
var_left_edge = NULL;
CHECK_OBJECT(var_right_index);
CHECK_OBJECT(var_right_index);
Py_DECREF(var_right_index);
var_right_index = NULL;
CHECK_OBJECT(var_right_slice);
CHECK_OBJECT(var_right_slice);
Py_DECREF(var_right_slice);
var_right_slice = NULL;
CHECK_OBJECT(var_right_edge);
CHECK_OBJECT(var_right_edge);
Py_DECREF(var_right_edge);
var_right_edge = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_left_index);
var_left_index = NULL;
Py_XDECREF(var_left_slice);
var_left_slice = NULL;
Py_XDECREF(var_left_edge);
var_left_edge = NULL;
Py_XDECREF(var_right_index);
var_right_index = NULL;
Py_XDECREF(var_right_slice);
var_right_slice = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_padded = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_axis = Nuitka_Cell_New1(python_pars[1]);
PyObject *par_width_pair = python_pars[2];
PyObject *par_end_value_pair = python_pars[3];
PyObject *var_edge_pair = NULL;
PyObject *var_left_ramp = NULL;
PyObject *var_right_ramp = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps = MAKE_FUNCTION_FRAME(tstate, code_objects_c146d72414cc53dc0bed47ea9ab07d4e, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraypad_impl$_get_edges(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_edges);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_padded));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_padded);
CHECK_OBJECT(Nuitka_Cell_GET(par_axis));
tmp_args_element_value_2 = Nuitka_Cell_GET(par_axis);
CHECK_OBJECT(par_width_pair);
tmp_args_element_value_3 = par_width_pair;
frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
assert(var_edge_pair == NULL);
var_edge_pair = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_2 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(par_end_value_pair);
tmp_args_element_value_4 = par_end_value_pair;
CHECK_OBJECT(var_edge_pair);
tmp_args_element_value_5 = var_edge_pair;
CHECK_OBJECT(par_width_pair);
tmp_args_element_value_6 = par_width_pair;
frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps->m_frame.f_lineno = 220;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ccooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ccooooo";
    goto try_except_handler_2;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_axis;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[2] = par_padded;
Py_INCREF(tmp_closure_1[2]);
tmp_iter_arg_1 = MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ccooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
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



exception_lineno = 211;
type_description_1 = "ccooooo";
    goto try_except_handler_4;
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



exception_lineno = 211;
type_description_1 = "ccooooo";
    goto try_except_handler_4;
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



exception_lineno = 211;
type_description_1 = "ccooooo";
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
assert(var_left_ramp == NULL);
Py_INCREF(tmp_assign_source_6);
var_left_ramp = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_right_ramp == NULL);
Py_INCREF(tmp_assign_source_7);
var_right_ramp = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_right_ramp);
tmp_expression_value_1 = var_right_ramp;
tmp_called_value_3 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_slice_none_none_int_neg_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_axis));
tmp_args_element_value_8 = Nuitka_Cell_GET(par_axis);
frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_subscript_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ccooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_right_ramp;
    assert(old != NULL);
    var_right_ramp = tmp_assign_source_8;
    Py_DECREF(old);
}

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps,
    type_description_1,
    par_padded,
    par_axis,
    par_width_pair,
    par_end_value_pair,
    var_edge_pair,
    var_left_ramp,
    var_right_ramp
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_left_ramp);
tmp_tuple_element_1 = var_left_ramp;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_right_ramp);
tmp_tuple_element_1 = var_right_ramp;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_padded);
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
par_padded = NULL;
CHECK_OBJECT(par_axis);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
par_axis = NULL;
CHECK_OBJECT(var_edge_pair);
CHECK_OBJECT(var_edge_pair);
Py_DECREF(var_edge_pair);
var_edge_pair = NULL;
CHECK_OBJECT(var_left_ramp);
CHECK_OBJECT(var_left_ramp);
Py_DECREF(var_left_ramp);
var_left_ramp = NULL;
CHECK_OBJECT(var_right_ramp);
CHECK_OBJECT(var_right_ramp);
Py_DECREF(var_right_ramp);
var_right_ramp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_padded);
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
par_padded = NULL;
CHECK_OBJECT(par_axis);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
par_axis = NULL;
Py_XDECREF(var_edge_pair);
var_edge_pair = NULL;
Py_XDECREF(var_left_ramp);
var_left_ramp = NULL;
Py_XDECREF(var_right_ramp);
var_right_ramp = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_end_value_pair);
Py_DECREF(par_end_value_pair);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_end_value_pair);
Py_DECREF(par_end_value_pair);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps$$$genexpr__1_genexpr_locals {
PyObject *var_end_value;
PyObject *var_edge;
PyObject *var_width;
PyObject *tmp_iter_value_0;
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
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_end_value = NULL;
generator_heap->var_edge = NULL;
generator_heap->var_width = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9371612d67eab3571d7b9ed02cb1fd24, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Nooocc";
generator_heap->exception_lineno = 211;
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


generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "Nooocc";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "Nooocc";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
    generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 3);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "Nooocc";
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
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_end_value;
    generator_heap->var_end_value = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_end_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_edge;
    generator_heap->var_edge = tmp_assign_source_7;
    Py_INCREF(generator_heap->var_edge);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = generator_heap->tmp_tuple_unpack_1__element_3;
{
    PyObject *old = generator_heap->var_width;
    generator_heap->var_width = tmp_assign_source_8;
    Py_INCREF(generator_heap->var_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_5_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 212;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_linspace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 212;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_end_value);
tmp_kw_call_value_0_1 = generator_heap->var_end_value;
CHECK_OBJECT(generator_heap->var_edge);
tmp_expression_value_3 = generator_heap->var_edge;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_squeeze);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 214;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 214;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 214;
tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 214;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_width);
tmp_kw_call_value_2_1 = generator_heap->var_width;
tmp_kw_call_value_3_1 = Py_False;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 217;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_1_1);

generator_heap->exception_lineno = 217;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 218;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}

tmp_kw_call_value_5_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 212;
{
    PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_006a51ee2dab60f7fab474204bd32c88_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 212;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_value_4_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_value_5_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_value_4_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_value_5_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 212;
generator_heap->type_description_1 = "Nooocc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 211;
generator_heap->type_description_1 = "Nooocc";
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
    generator_heap->var_end_value,
    generator_heap->var_edge,
    generator_heap->var_width,
    generator->m_closure[0],
    generator->m_closure[2]
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

Py_XDECREF(generator_heap->var_end_value);
generator_heap->var_end_value = NULL;
Py_XDECREF(generator_heap->var_edge);
generator_heap->var_edge = NULL;
Py_XDECREF(generator_heap->var_width);
generator_heap->var_width = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_end_value);
generator_heap->var_end_value = NULL;
Py_XDECREF(generator_heap->var_edge);
generator_heap->var_edge = NULL;
Py_XDECREF(generator_heap->var_width);
generator_heap->var_width = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps$$$genexpr__1_genexpr_context,
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_25cd964eda57c1004d274497a40aebdc,
#endif
        code_objects_9371612d67eab3571d7b9ed02cb1fd24,
        closure,
        3,
#if 1
        sizeof(struct numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__8__get_stats(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_padded = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_width_pair = python_pars[2];
PyObject *par_length_pair = python_pars[3];
PyObject *par_stat_func = python_pars[4];
PyObject *var_left_index = NULL;
PyObject *var_right_index = NULL;
PyObject *var_max_length = NULL;
PyObject *var_left_length = NULL;
PyObject *var_right_length = NULL;
PyObject *var_left_slice = NULL;
PyObject *var_left_chunk = NULL;
PyObject *var_left_stat = NULL;
PyObject *var_right_slice = NULL;
PyObject *var_right_chunk = NULL;
PyObject *var_right_stat = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats = MAKE_FUNCTION_FRAME(tstate, code_objects_2c5e5c1cdfc1e62c87554dd2d5b8a3d9, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_width_pair);
tmp_expression_value_1 = par_width_pair;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_index == NULL);
var_left_index = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_padded);
tmp_expression_value_3 = par_padded;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_shape);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_2 = par_axis;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_width_pair);
tmp_expression_value_4 = par_width_pair;
tmp_subscript_value_3 = const_int_pos_1;
tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 259;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_index == NULL);
var_right_index = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(var_right_index);
tmp_sub_expr_left_2 = var_right_index;
CHECK_OBJECT(var_left_index);
tmp_sub_expr_right_2 = var_left_index;
tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_max_length == NULL);
var_max_length = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_length_pair);
tmp_iter_arg_1 = par_length_pair;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 264;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 264;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 264;
type_description_1 = "oooooooooooooooo";
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
assert(var_left_length == NULL);
Py_INCREF(tmp_assign_source_7);
var_left_length = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var_right_length == NULL);
Py_INCREF(tmp_assign_source_8);
var_right_length = tmp_assign_source_8;
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
CHECK_OBJECT(var_left_length);
tmp_cmp_expr_left_1 = var_left_length;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_max_length);
tmp_cmp_expr_left_2 = var_max_length;
CHECK_OBJECT(var_left_length);
tmp_cmp_expr_right_2 = var_left_length;
tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooooooooooooo";
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
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(var_max_length);
tmp_assign_source_9 = var_max_length;
{
    PyObject *old = var_left_length;
    assert(old != NULL);
    var_left_length = tmp_assign_source_9;
    Py_INCREF(var_left_length);
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_right_length);
tmp_cmp_expr_left_3 = var_right_length;
tmp_cmp_expr_right_3 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_max_length);
tmp_cmp_expr_left_4 = var_max_length;
CHECK_OBJECT(var_right_length);
tmp_cmp_expr_right_4 = var_right_length;
tmp_or_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_2 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(var_max_length);
tmp_assign_source_10 = var_max_length;
{
    PyObject *old = var_right_length;
    assert(old != NULL);
    var_right_length = tmp_assign_source_10;
    Py_INCREF(var_right_length);
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_set_element_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_left_length);
tmp_cmp_expr_left_5 = var_left_length;
tmp_cmp_expr_right_5 = const_int_0;
tmp_or_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_right_length);
tmp_cmp_expr_left_6 = var_right_length;
tmp_cmp_expr_right_6 = const_int_0;
tmp_or_right_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_and_left_value_1 = tmp_or_left_value_3;
or_end_3:;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_stat_func);
tmp_cmp_expr_left_7 = par_stat_func;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_amax);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = PySet_New(NULL);
assert(tmp_cmp_expr_right_7);
tmp_res = PySet_Add(tmp_cmp_expr_right_7, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_set_element_1);
Py_DECREF(tmp_cmp_expr_right_7);

exception_lineno = 271;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_6 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_right_7);

exception_lineno = 271;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_amin);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_right_7);

exception_lineno = 271;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_cmp_expr_right_7, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_right_7);
Py_DECREF(tmp_set_element_1);

exception_lineno = 271;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_res = PySet_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_6f451f7afc7ff6b4f43f839f98b0849e;
frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats->m_frame.f_lineno = 274;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 274;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_index);
tmp_start_value_1 = var_left_index;
CHECK_OBJECT(var_left_index);
tmp_add_expr_left_1 = var_left_index;
CHECK_OBJECT(var_left_length);
tmp_add_expr_right_1 = var_left_length;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_args_element_value_1 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats->m_frame.f_lineno = 277;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_slice == NULL);
var_left_slice = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_padded);
tmp_expression_value_7 = par_padded;
CHECK_OBJECT(var_left_slice);
tmp_subscript_value_4 = var_left_slice;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_chunk == NULL);
var_left_chunk = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_stat_func);
tmp_called_value_2 = par_stat_func;
CHECK_OBJECT(var_left_chunk);
tmp_kw_call_arg_value_0_1 = var_left_chunk;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
tmp_kw_call_dict_value_1_1 = Py_True;
frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats->m_frame.f_lineno = 280;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_axis_str_plain_keepdims_tuple);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_stat == NULL);
var_left_stat = tmp_assign_source_13;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
tmp_called_value_3 = module_var_accessor_numpy$lib$_arraypad_impl$_round_if_needed(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__round_if_needed);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_stat);
tmp_args_element_value_3 = var_left_stat;
CHECK_OBJECT(par_padded);
tmp_expression_value_8 = par_padded;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats->m_frame.f_lineno = 281;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(var_right_length);
tmp_assign_source_14 = var_right_length;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_14);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_left_length);
tmp_cmp_expr_left_8 = var_left_length;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_8 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_15 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_15;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_4;
branch_no_5:;
{
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_9 = tmp_comparison_chain_1__operand_2;
CHECK_OBJECT(var_max_length);
tmp_cmp_expr_right_9 = var_max_length;
tmp_outline_return_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_outline_return_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 283;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_left_stat);
tmp_tuple_element_1 = var_left_stat;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_left_stat);
tmp_tuple_element_1 = var_left_stat;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto frame_return_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_start_value_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_stop_value_2;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_index);
tmp_sub_expr_left_3 = var_right_index;
CHECK_OBJECT(var_right_length);
tmp_sub_expr_right_3 = var_right_length;
tmp_start_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_index);
tmp_stop_value_2 = var_right_index;
tmp_args_element_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_args_element_value_5 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_6 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats->m_frame.f_lineno = 288;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_slice == NULL);
var_right_slice = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_padded);
tmp_expression_value_9 = par_padded;
CHECK_OBJECT(var_right_slice);
tmp_subscript_value_5 = var_right_slice;
tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_chunk == NULL);
var_right_chunk = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
CHECK_OBJECT(par_stat_func);
tmp_called_value_5 = par_stat_func;
CHECK_OBJECT(var_right_chunk);
tmp_kw_call_arg_value_0_2 = var_right_chunk;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_2 = par_axis;
tmp_kw_call_dict_value_1_2 = Py_True;
frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats->m_frame.f_lineno = 291;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_axis_str_plain_keepdims_tuple);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_stat == NULL);
var_right_stat = tmp_assign_source_18;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_10;
tmp_called_value_6 = module_var_accessor_numpy$lib$_arraypad_impl$_round_if_needed(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__round_if_needed);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_stat);
tmp_args_element_value_7 = var_right_stat;
CHECK_OBJECT(par_padded);
tmp_expression_value_10 = par_padded;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats->m_frame.f_lineno = 292;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats,
    type_description_1,
    par_padded,
    par_axis,
    par_width_pair,
    par_length_pair,
    par_stat_func,
    var_left_index,
    var_right_index,
    var_max_length,
    var_left_length,
    var_right_length,
    var_left_slice,
    var_left_chunk,
    var_left_stat,
    var_right_slice,
    var_right_chunk,
    var_right_stat
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__8__get_stats);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_left_stat);
tmp_tuple_element_2 = var_left_stat;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_right_stat);
tmp_tuple_element_2 = var_right_stat;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_left_index);
CHECK_OBJECT(var_left_index);
Py_DECREF(var_left_index);
var_left_index = NULL;
CHECK_OBJECT(var_right_index);
CHECK_OBJECT(var_right_index);
Py_DECREF(var_right_index);
var_right_index = NULL;
CHECK_OBJECT(var_max_length);
CHECK_OBJECT(var_max_length);
Py_DECREF(var_max_length);
var_max_length = NULL;
CHECK_OBJECT(var_left_length);
CHECK_OBJECT(var_left_length);
Py_DECREF(var_left_length);
var_left_length = NULL;
CHECK_OBJECT(var_right_length);
CHECK_OBJECT(var_right_length);
Py_DECREF(var_right_length);
var_right_length = NULL;
CHECK_OBJECT(var_left_slice);
CHECK_OBJECT(var_left_slice);
Py_DECREF(var_left_slice);
var_left_slice = NULL;
CHECK_OBJECT(var_left_chunk);
CHECK_OBJECT(var_left_chunk);
Py_DECREF(var_left_chunk);
var_left_chunk = NULL;
CHECK_OBJECT(var_left_stat);
CHECK_OBJECT(var_left_stat);
Py_DECREF(var_left_stat);
var_left_stat = NULL;
Py_XDECREF(var_right_slice);
var_right_slice = NULL;
Py_XDECREF(var_right_chunk);
var_right_chunk = NULL;
Py_XDECREF(var_right_stat);
var_right_stat = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_left_index);
var_left_index = NULL;
Py_XDECREF(var_right_index);
var_right_index = NULL;
Py_XDECREF(var_max_length);
var_max_length = NULL;
Py_XDECREF(var_left_length);
var_left_length = NULL;
Py_XDECREF(var_right_length);
var_right_length = NULL;
Py_XDECREF(var_left_slice);
var_left_slice = NULL;
Py_XDECREF(var_left_chunk);
var_left_chunk = NULL;
Py_XDECREF(var_left_stat);
var_left_stat = NULL;
Py_XDECREF(var_right_slice);
var_right_slice = NULL;
Py_XDECREF(var_right_chunk);
var_right_chunk = NULL;
Py_XDECREF(var_right_stat);
var_right_stat = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_length_pair);
Py_DECREF(par_length_pair);
CHECK_OBJECT(par_stat_func);
Py_DECREF(par_stat_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_length_pair);
Py_DECREF(par_length_pair);
CHECK_OBJECT(par_stat_func);
Py_DECREF(par_stat_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_padded = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_width_pair = python_pars[2];
PyObject *par_method = python_pars[3];
PyObject *par_original_period = python_pars[4];
PyObject *par_include_edge = python_pars[5];
PyObject *var_left_pad = NULL;
PyObject *var_right_pad = NULL;
PyObject *var_old_length = NULL;
PyObject *var_edge_offset = NULL;
PyObject *var_chunk_length = NULL;
PyObject *var_stop = NULL;
PyObject *var_start = NULL;
PyObject *var_left_slice = NULL;
PyObject *var_left_chunk = NULL;
PyObject *var_edge_slice = NULL;
PyObject *var_pad_area = NULL;
PyObject *var_right_slice = NULL;
PyObject *var_right_chunk = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both = MAKE_FUNCTION_FRAME(tstate, code_objects_68ea94e40b1895e47017549901bb5179, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_width_pair);
tmp_iter_arg_1 = par_width_pair;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooooooooooooooooo";
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



exception_lineno = 325;
type_description_1 = "ooooooooooooooooooo";
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



exception_lineno = 325;
type_description_1 = "ooooooooooooooooooo";
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



exception_lineno = 325;
type_description_1 = "ooooooooooooooooooo";
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
assert(var_left_pad == NULL);
Py_INCREF(tmp_assign_source_4);
var_left_pad = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_right_pad == NULL);
Py_INCREF(tmp_assign_source_5);
var_right_pad = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_padded);
tmp_expression_value_2 = par_padded;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_1 = par_axis;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_pad);
tmp_sub_expr_right_2 = var_right_pad;
tmp_sub_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_pad);
tmp_sub_expr_right_1 = var_left_pad;
tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_old_length == NULL);
var_old_length = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_include_edge);
tmp_truth_name_1 = CHECK_IF_TRUE(par_include_edge);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooooooooooooooo";
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
PyObject *tmp_assign_source_7;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
CHECK_OBJECT(var_old_length);
tmp_floordiv_expr_left_1 = var_old_length;
CHECK_OBJECT(par_original_period);
tmp_floordiv_expr_right_1 = par_original_period;
tmp_mult_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_original_period);
tmp_mult_expr_right_1 = par_original_period;
tmp_assign_source_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_old_length;
    assert(old != NULL);
    var_old_length = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_pos_1;
assert(var_edge_offset == NULL);
Py_INCREF(tmp_assign_source_8);
var_edge_offset = tmp_assign_source_8;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_floordiv_expr_left_2;
PyObject *tmp_floordiv_expr_right_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
CHECK_OBJECT(var_old_length);
tmp_sub_expr_left_3 = var_old_length;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_floordiv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_floordiv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_original_period);
tmp_sub_expr_left_4 = par_original_period;
tmp_sub_expr_right_4 = const_int_pos_1;
tmp_floordiv_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
if (tmp_floordiv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_floordiv_expr_left_2);

exception_lineno = 339;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
CHECK_OBJECT(tmp_floordiv_expr_left_2);
Py_DECREF(tmp_floordiv_expr_left_2);
CHECK_OBJECT(tmp_floordiv_expr_right_2);
Py_DECREF(tmp_floordiv_expr_right_2);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_original_period);
tmp_sub_expr_left_5 = par_original_period;
tmp_sub_expr_right_5 = const_int_pos_1;
tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 340;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = const_int_pos_1;
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_old_length;
    assert(old != NULL);
    var_old_length = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = const_int_0;
assert(var_edge_offset == NULL);
Py_INCREF(tmp_assign_source_10);
var_edge_offset = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
CHECK_OBJECT(var_old_length);
tmp_isub_expr_left_1 = var_old_length;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = tmp_isub_expr_left_1;
var_old_length = tmp_assign_source_11;

}
branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_left_pad);
tmp_cmp_expr_left_1 = var_left_pad;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooooooooooooooooo";
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
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(var_old_length);
tmp_args_element_value_1 = var_old_length;
CHECK_OBJECT(var_left_pad);
tmp_args_element_value_2 = var_left_pad;
frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_frame.f_lineno = 347;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_chunk_length == NULL);
var_chunk_length = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
CHECK_OBJECT(var_left_pad);
tmp_sub_expr_left_6 = var_left_pad;
CHECK_OBJECT(var_edge_offset);
tmp_sub_expr_right_6 = var_edge_offset;
tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_stop == NULL);
var_stop = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(var_stop);
tmp_add_expr_left_2 = var_stop;
CHECK_OBJECT(var_chunk_length);
tmp_add_expr_right_2 = var_chunk_length;
tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_start == NULL);
var_start = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_step_value_1;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 351;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_start);
tmp_start_value_1 = var_start;
CHECK_OBJECT(var_stop);
tmp_stop_value_1 = var_stop;
tmp_step_value_1 = const_int_neg_1;
tmp_args_element_value_3 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
assert(!(tmp_args_element_value_3 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_frame.f_lineno = 351;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_slice == NULL);
var_left_slice = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_padded);
tmp_expression_value_3 = par_padded;
CHECK_OBJECT(var_left_slice);
tmp_subscript_value_2 = var_left_slice;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_chunk == NULL);
var_left_chunk = tmp_assign_source_16;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_method);
tmp_cmp_expr_left_2 = par_method;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_odd;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooooooooooooo";
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
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_pad);
tmp_start_value_2 = var_left_pad;
CHECK_OBJECT(var_left_pad);
tmp_add_expr_left_3 = var_left_pad;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_stop_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_stop_value_2);
Py_DECREF(tmp_stop_value_2);
assert(!(tmp_args_element_value_5 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_6 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_frame.f_lineno = 356;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_edge_slice == NULL);
var_edge_slice = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_sub_expr_left_7;
PyObject *tmp_sub_expr_right_7;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
tmp_mult_expr_left_3 = mod_consts.const_int_pos_2;
CHECK_OBJECT(par_padded);
tmp_expression_value_4 = par_padded;
CHECK_OBJECT(var_edge_slice);
tmp_subscript_value_3 = var_edge_slice;
tmp_mult_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_7 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_sub_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_chunk);
tmp_sub_expr_right_7 = var_left_chunk;
tmp_assign_source_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
CHECK_OBJECT(tmp_sub_expr_left_7);
Py_DECREF(tmp_sub_expr_left_7);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_left_chunk;
    assert(old != NULL);
    var_left_chunk = tmp_assign_source_18;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_sub_expr_left_8;
PyObject *tmp_sub_expr_right_8;
CHECK_OBJECT(var_left_pad);
tmp_sub_expr_left_8 = var_left_pad;
CHECK_OBJECT(var_chunk_length);
tmp_sub_expr_right_8 = var_chunk_length;
tmp_assign_source_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_start;
    assert(old != NULL);
    var_start = tmp_assign_source_19;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(var_left_pad);
tmp_assign_source_20 = var_left_pad;
{
    PyObject *old = var_stop;
    assert(old != NULL);
    var_stop = tmp_assign_source_20;
    Py_INCREF(var_stop);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_start_value_3;
PyObject *tmp_stop_value_3;
PyObject *tmp_args_element_value_8;
tmp_called_value_4 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_start);
tmp_start_value_3 = var_start;
CHECK_OBJECT(var_stop);
tmp_stop_value_3 = var_stop;
tmp_args_element_value_7 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
assert(!(tmp_args_element_value_7 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_8 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_frame.f_lineno = 362;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pad_area == NULL);
var_pad_area = tmp_assign_source_21;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_left_chunk);
tmp_ass_subvalue_1 = var_left_chunk;
CHECK_OBJECT(par_padded);
tmp_ass_subscribed_1 = par_padded;
CHECK_OBJECT(var_pad_area);
tmp_ass_subscript_1 = var_pad_area;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_isub_expr_left_2;
PyObject *tmp_isub_expr_right_2;
CHECK_OBJECT(var_left_pad);
tmp_isub_expr_left_2 = var_left_pad;
CHECK_OBJECT(var_chunk_length);
tmp_isub_expr_right_2 = var_chunk_length;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_22 = tmp_isub_expr_left_2;
var_left_pad = tmp_assign_source_22;

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_right_pad);
tmp_cmp_expr_left_3 = var_right_pad;
tmp_cmp_expr_right_3 = const_int_0;
tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ooooooooooooooooooo";
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
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_5 != NULL);
CHECK_OBJECT(var_old_length);
tmp_args_element_value_9 = var_old_length;
CHECK_OBJECT(var_right_pad);
tmp_args_element_value_10 = var_right_pad;
frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_frame.f_lineno = 370;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_chunk_length;
    var_chunk_length = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_sub_expr_left_9;
PyObject *tmp_sub_expr_right_9;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_right_pad);
tmp_operand_value_1 = var_right_pad;
tmp_add_expr_left_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_edge_offset);
tmp_add_expr_right_4 = var_edge_offset;
tmp_sub_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_sub_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_9 = mod_consts.const_int_pos_2;
tmp_assign_source_24 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
CHECK_OBJECT(tmp_sub_expr_left_9);
Py_DECREF(tmp_sub_expr_left_9);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_start;
    var_start = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_sub_expr_left_10;
PyObject *tmp_sub_expr_right_10;
CHECK_OBJECT(var_start);
tmp_sub_expr_left_10 = var_start;
CHECK_OBJECT(var_chunk_length);
tmp_sub_expr_right_10 = var_chunk_length;
tmp_assign_source_25 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stop;
    var_stop = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_start_value_4;
PyObject *tmp_stop_value_4;
PyObject *tmp_step_value_2;
PyObject *tmp_args_element_value_12;
tmp_called_value_6 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 374;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_start);
tmp_start_value_4 = var_start;
CHECK_OBJECT(var_stop);
tmp_stop_value_4 = var_stop;
tmp_step_value_2 = const_int_neg_1;
tmp_args_element_value_11 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_4, tmp_stop_value_4, tmp_step_value_2);
assert(!(tmp_args_element_value_11 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_12 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_frame.f_lineno = 374;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_slice == NULL);
var_right_slice = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_padded);
tmp_expression_value_5 = par_padded;
CHECK_OBJECT(var_right_slice);
tmp_subscript_value_4 = var_right_slice;
tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_chunk == NULL);
var_right_chunk = tmp_assign_source_27;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_method);
tmp_cmp_expr_left_4 = par_method;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_odd;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooooooooooooooooo";
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
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_13;
PyObject *tmp_start_value_5;
PyObject *tmp_sub_expr_left_11;
PyObject *tmp_sub_expr_right_11;
PyObject *tmp_operand_value_2;
PyObject *tmp_stop_value_5;
PyObject *tmp_operand_value_3;
PyObject *tmp_args_element_value_14;
tmp_called_value_7 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_pad);
tmp_operand_value_2 = var_right_pad;
tmp_sub_expr_left_11 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
if (tmp_sub_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_11 = const_int_pos_1;
tmp_start_value_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
CHECK_OBJECT(tmp_sub_expr_left_11);
Py_DECREF(tmp_sub_expr_left_11);
if (tmp_start_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_pad);
tmp_operand_value_3 = var_right_pad;
tmp_stop_value_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
if (tmp_stop_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_start_value_5);

exception_lineno = 380;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_5, tmp_stop_value_5);
CHECK_OBJECT(tmp_start_value_5);
Py_DECREF(tmp_start_value_5);
CHECK_OBJECT(tmp_stop_value_5);
Py_DECREF(tmp_stop_value_5);
assert(!(tmp_args_element_value_13 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_14 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_frame.f_lineno = 379;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_edge_slice;
    var_edge_slice = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_sub_expr_left_12;
PyObject *tmp_sub_expr_right_12;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_5;
tmp_mult_expr_left_4 = mod_consts.const_int_pos_2;
CHECK_OBJECT(par_padded);
tmp_expression_value_6 = par_padded;
CHECK_OBJECT(var_edge_slice);
tmp_subscript_value_5 = var_edge_slice;
tmp_mult_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_5);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_12 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_sub_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_chunk);
tmp_sub_expr_right_12 = var_right_chunk;
tmp_assign_source_29 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
CHECK_OBJECT(tmp_sub_expr_left_12);
Py_DECREF(tmp_sub_expr_left_12);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_right_chunk;
    assert(old != NULL);
    var_right_chunk = tmp_assign_source_29;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_sub_expr_left_13;
PyObject *tmp_sub_expr_right_13;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(par_padded);
tmp_expression_value_8 = par_padded;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_6 = par_axis;
tmp_sub_expr_left_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_sub_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_pad);
tmp_sub_expr_right_13 = var_right_pad;
tmp_assign_source_30 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_13, tmp_sub_expr_right_13);
CHECK_OBJECT(tmp_sub_expr_left_13);
Py_DECREF(tmp_sub_expr_left_13);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_start;
    assert(old != NULL);
    var_start = tmp_assign_source_30;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
CHECK_OBJECT(var_start);
tmp_add_expr_left_5 = var_start;
CHECK_OBJECT(var_chunk_length);
tmp_add_expr_right_5 = var_chunk_length;
tmp_assign_source_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stop;
    assert(old != NULL);
    var_stop = tmp_assign_source_31;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_15;
PyObject *tmp_start_value_6;
PyObject *tmp_stop_value_6;
PyObject *tmp_args_element_value_16;
tmp_called_value_8 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_start);
tmp_start_value_6 = var_start;
CHECK_OBJECT(var_stop);
tmp_stop_value_6 = var_stop;
tmp_args_element_value_15 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_6, tmp_stop_value_6);
assert(!(tmp_args_element_value_15 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_16 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_frame.f_lineno = 386;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pad_area;
    var_pad_area = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_right_chunk);
tmp_ass_subvalue_2 = var_right_chunk;
CHECK_OBJECT(par_padded);
tmp_ass_subscribed_2 = par_padded;
CHECK_OBJECT(var_pad_area);
tmp_ass_subscript_2 = var_pad_area;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_isub_expr_left_3;
PyObject *tmp_isub_expr_right_3;
CHECK_OBJECT(var_right_pad);
tmp_isub_expr_left_3 = var_right_pad;
CHECK_OBJECT(var_chunk_length);
tmp_isub_expr_right_3 = var_chunk_length;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_3, tmp_isub_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_33 = tmp_isub_expr_left_3;
var_right_pad = tmp_assign_source_33;

}
branch_no_4:;
{
PyObject *tmp_tuple_element_1;
if (var_left_pad == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_left_pad);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 391;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = var_left_pad;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
if (var_right_pad == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_right_pad);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 391;
type_description_1 = "ooooooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = var_right_pad;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both,
    type_description_1,
    par_padded,
    par_axis,
    par_width_pair,
    par_method,
    par_original_period,
    par_include_edge,
    var_left_pad,
    var_right_pad,
    var_old_length,
    var_edge_offset,
    var_chunk_length,
    var_stop,
    var_start,
    var_left_slice,
    var_left_chunk,
    var_edge_slice,
    var_pad_area,
    var_right_slice,
    var_right_chunk
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_left_pad);
var_left_pad = NULL;
Py_XDECREF(var_right_pad);
var_right_pad = NULL;
CHECK_OBJECT(var_old_length);
CHECK_OBJECT(var_old_length);
Py_DECREF(var_old_length);
var_old_length = NULL;
CHECK_OBJECT(var_edge_offset);
CHECK_OBJECT(var_edge_offset);
Py_DECREF(var_edge_offset);
var_edge_offset = NULL;
Py_XDECREF(var_chunk_length);
var_chunk_length = NULL;
Py_XDECREF(var_stop);
var_stop = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_left_slice);
var_left_slice = NULL;
Py_XDECREF(var_left_chunk);
var_left_chunk = NULL;
Py_XDECREF(var_edge_slice);
var_edge_slice = NULL;
Py_XDECREF(var_pad_area);
var_pad_area = NULL;
Py_XDECREF(var_right_slice);
var_right_slice = NULL;
Py_XDECREF(var_right_chunk);
var_right_chunk = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_left_pad);
var_left_pad = NULL;
Py_XDECREF(var_right_pad);
var_right_pad = NULL;
Py_XDECREF(var_old_length);
var_old_length = NULL;
Py_XDECREF(var_edge_offset);
var_edge_offset = NULL;
Py_XDECREF(var_chunk_length);
var_chunk_length = NULL;
Py_XDECREF(var_stop);
var_stop = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_left_slice);
var_left_slice = NULL;
Py_XDECREF(var_left_chunk);
var_left_chunk = NULL;
Py_XDECREF(var_edge_slice);
var_edge_slice = NULL;
Py_XDECREF(var_pad_area);
var_pad_area = NULL;
Py_XDECREF(var_right_slice);
var_right_slice = NULL;
Py_XDECREF(var_right_chunk);
var_right_chunk = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_original_period);
Py_DECREF(par_original_period);
CHECK_OBJECT(par_include_edge);
Py_DECREF(par_include_edge);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_original_period);
Py_DECREF(par_original_period);
CHECK_OBJECT(par_include_edge);
Py_DECREF(par_include_edge);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_padded = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_width_pair = python_pars[2];
PyObject *par_original_period = python_pars[3];
PyObject *var_left_pad = NULL;
PyObject *var_right_pad = NULL;
PyObject *var_period = NULL;
PyObject *var_new_left_pad = NULL;
PyObject *var_new_right_pad = NULL;
PyObject *var_slice_end = NULL;
PyObject *var_slice_start = NULL;
PyObject *var_right_slice = NULL;
PyObject *var_right_chunk = NULL;
PyObject *var_pad_area = NULL;
PyObject *var_left_slice = NULL;
PyObject *var_left_chunk = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both = MAKE_FUNCTION_FRAME(tstate, code_objects_a81eea36467e7385f3ab6a95ca345d84, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_width_pair);
tmp_iter_arg_1 = par_width_pair;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 416;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 416;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 416;
type_description_1 = "oooooooooooooooo";
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
assert(var_left_pad == NULL);
Py_INCREF(tmp_assign_source_4);
var_left_pad = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_right_pad == NULL);
Py_INCREF(tmp_assign_source_5);
var_right_pad = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_padded);
tmp_expression_value_2 = par_padded;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_1 = par_axis;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_pad);
tmp_sub_expr_right_2 = var_right_pad;
tmp_sub_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_pad);
tmp_sub_expr_right_1 = var_left_pad;
tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_period == NULL);
var_period = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
CHECK_OBJECT(var_period);
tmp_floordiv_expr_left_1 = var_period;
CHECK_OBJECT(par_original_period);
tmp_floordiv_expr_right_1 = par_original_period;
tmp_mult_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_original_period);
tmp_mult_expr_right_1 = par_original_period;
tmp_assign_source_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_period;
    assert(old != NULL);
    var_period = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_0;
assert(var_new_left_pad == NULL);
Py_INCREF(tmp_assign_source_8);
var_new_left_pad = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = const_int_0;
assert(var_new_right_pad == NULL);
Py_INCREF(tmp_assign_source_9);
var_new_right_pad = tmp_assign_source_9;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_left_pad);
tmp_cmp_expr_left_1 = var_left_pad;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_left_pad);
tmp_add_expr_left_1 = var_left_pad;
CHECK_OBJECT(var_period);
tmp_add_expr_right_1 = var_period;
tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_slice_end == NULL);
var_slice_end = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_slice_end);
tmp_sub_expr_left_3 = var_slice_end;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(var_period);
tmp_args_element_value_1 = var_period;
CHECK_OBJECT(var_left_pad);
tmp_args_element_value_2 = var_left_pad;
frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_frame.f_lineno = 435;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_sub_expr_right_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_slice_start == NULL);
var_slice_start = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 436;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_slice_start);
tmp_start_value_1 = var_slice_start;
CHECK_OBJECT(var_slice_end);
tmp_stop_value_1 = var_slice_end;
tmp_args_element_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_args_element_value_3 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_frame.f_lineno = 436;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_slice == NULL);
var_right_slice = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_padded);
tmp_expression_value_3 = par_padded;
CHECK_OBJECT(var_right_slice);
tmp_subscript_value_2 = var_right_slice;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_right_chunk == NULL);
var_right_chunk = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_left_pad);
tmp_cmp_expr_left_2 = var_left_pad;
CHECK_OBJECT(var_period);
tmp_cmp_expr_right_2 = var_period;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_start_value_2;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_stop_value_2;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 441;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_pad);
tmp_sub_expr_left_4 = var_left_pad;
CHECK_OBJECT(var_period);
tmp_sub_expr_right_4 = var_period;
tmp_start_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_pad);
tmp_stop_value_2 = var_left_pad;
tmp_args_element_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_args_element_value_5 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_6 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_frame.f_lineno = 441;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pad_area == NULL);
var_pad_area = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
CHECK_OBJECT(var_left_pad);
tmp_sub_expr_left_5 = var_left_pad;
CHECK_OBJECT(var_period);
tmp_sub_expr_right_5 = var_period;
tmp_assign_source_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_left_pad;
    assert(old != NULL);
    var_new_left_pad = tmp_assign_source_15;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_stop_value_3;
PyObject *tmp_args_element_value_8;
tmp_called_value_4 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left_pad);
tmp_stop_value_3 = var_left_pad;
tmp_args_element_value_7 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_3);
assert(!(tmp_args_element_value_7 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_8 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_frame.f_lineno = 445;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pad_area == NULL);
var_pad_area = tmp_assign_source_16;
}
branch_end_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_right_chunk);
tmp_ass_subvalue_1 = var_right_chunk;
CHECK_OBJECT(par_padded);
tmp_ass_subscribed_1 = par_padded;
CHECK_OBJECT(var_pad_area);
tmp_ass_subscript_1 = var_pad_area;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_right_pad);
tmp_cmp_expr_left_3 = var_right_pad;
tmp_cmp_expr_right_3 = const_int_0;
tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_17;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_right_pad);
tmp_operand_value_1 = var_right_pad;
tmp_sub_expr_left_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_sub_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_period);
tmp_sub_expr_right_6 = var_period;
tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
CHECK_OBJECT(tmp_sub_expr_left_6);
Py_DECREF(tmp_sub_expr_left_6);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_slice_start;
    var_slice_start = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(var_slice_start);
tmp_add_expr_left_2 = var_slice_start;
tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_5 != NULL);
CHECK_OBJECT(var_period);
tmp_args_element_value_9 = var_period;
CHECK_OBJECT(var_right_pad);
tmp_args_element_value_10 = var_right_pad;
frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_frame.f_lineno = 454;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_add_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_slice_end;
    var_slice_end = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_start_value_3;
PyObject *tmp_stop_value_4;
PyObject *tmp_args_element_value_12;
tmp_called_value_6 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_slice_start);
tmp_start_value_3 = var_slice_start;
CHECK_OBJECT(var_slice_end);
tmp_stop_value_4 = var_slice_end;
tmp_args_element_value_11 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_4);
assert(!(tmp_args_element_value_11 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_12 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_frame.f_lineno = 455;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_slice == NULL);
var_left_slice = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_padded);
tmp_expression_value_4 = par_padded;
CHECK_OBJECT(var_left_slice);
tmp_subscript_value_3 = var_left_slice;
tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_left_chunk == NULL);
var_left_chunk = tmp_assign_source_20;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_right_pad);
tmp_cmp_expr_left_4 = var_right_pad;
CHECK_OBJECT(var_period);
tmp_cmp_expr_right_4 = var_period;
tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_13;
PyObject *tmp_start_value_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_stop_value_5;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_args_element_value_14;
tmp_called_value_7 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_pad);
tmp_operand_value_2 = var_right_pad;
tmp_start_value_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
if (tmp_start_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_pad);
tmp_operand_value_3 = var_right_pad;
tmp_add_expr_left_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_start_value_4);

exception_lineno = 461;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_period);
tmp_add_expr_right_3 = var_period;
tmp_stop_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_stop_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_start_value_4);

exception_lineno = 461;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_5);
CHECK_OBJECT(tmp_start_value_4);
Py_DECREF(tmp_start_value_4);
CHECK_OBJECT(tmp_stop_value_5);
Py_DECREF(tmp_stop_value_5);
assert(!(tmp_args_element_value_13 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_14 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_frame.f_lineno = 460;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pad_area;
    var_pad_area = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_sub_expr_left_7;
PyObject *tmp_sub_expr_right_7;
CHECK_OBJECT(var_right_pad);
tmp_sub_expr_left_7 = var_right_pad;
CHECK_OBJECT(var_period);
tmp_sub_expr_right_7 = var_period;
tmp_assign_source_22 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_right_pad;
    assert(old != NULL);
    var_new_right_pad = tmp_assign_source_22;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_15;
PyObject *tmp_start_value_5;
PyObject *tmp_operand_value_4;
PyObject *tmp_stop_value_6;
PyObject *tmp_args_element_value_16;
tmp_called_value_8 = module_var_accessor_numpy$lib$_arraypad_impl$_slice_at_axis(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__slice_at_axis);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right_pad);
tmp_operand_value_4 = var_right_pad;
tmp_start_value_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
if (tmp_start_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_6 = Py_None;
tmp_args_element_value_15 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_5, tmp_stop_value_6);
CHECK_OBJECT(tmp_start_value_5);
Py_DECREF(tmp_start_value_5);
assert(!(tmp_args_element_value_15 == NULL));
CHECK_OBJECT(par_axis);
tmp_args_element_value_16 = par_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_frame.f_lineno = 465;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pad_area;
    var_pad_area = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
branch_end_4:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_left_chunk);
tmp_ass_subvalue_2 = var_left_chunk;
CHECK_OBJECT(par_padded);
tmp_ass_subscribed_2 = par_padded;
CHECK_OBJECT(var_pad_area);
tmp_ass_subscript_2 = var_pad_area;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both,
    type_description_1,
    par_padded,
    par_axis,
    par_width_pair,
    par_original_period,
    var_left_pad,
    var_right_pad,
    var_period,
    var_new_left_pad,
    var_new_right_pad,
    var_slice_end,
    var_slice_start,
    var_right_slice,
    var_right_chunk,
    var_pad_area,
    var_left_slice,
    var_left_chunk
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_new_left_pad);
tmp_tuple_element_1 = var_new_left_pad;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_new_right_pad);
tmp_tuple_element_1 = var_new_right_pad;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_left_pad);
CHECK_OBJECT(var_left_pad);
Py_DECREF(var_left_pad);
var_left_pad = NULL;
CHECK_OBJECT(var_right_pad);
CHECK_OBJECT(var_right_pad);
Py_DECREF(var_right_pad);
var_right_pad = NULL;
CHECK_OBJECT(var_period);
CHECK_OBJECT(var_period);
Py_DECREF(var_period);
var_period = NULL;
CHECK_OBJECT(var_new_left_pad);
CHECK_OBJECT(var_new_left_pad);
Py_DECREF(var_new_left_pad);
var_new_left_pad = NULL;
CHECK_OBJECT(var_new_right_pad);
CHECK_OBJECT(var_new_right_pad);
Py_DECREF(var_new_right_pad);
var_new_right_pad = NULL;
Py_XDECREF(var_slice_end);
var_slice_end = NULL;
Py_XDECREF(var_slice_start);
var_slice_start = NULL;
Py_XDECREF(var_right_slice);
var_right_slice = NULL;
Py_XDECREF(var_right_chunk);
var_right_chunk = NULL;
Py_XDECREF(var_pad_area);
var_pad_area = NULL;
Py_XDECREF(var_left_slice);
var_left_slice = NULL;
Py_XDECREF(var_left_chunk);
var_left_chunk = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_left_pad);
var_left_pad = NULL;
Py_XDECREF(var_right_pad);
var_right_pad = NULL;
Py_XDECREF(var_period);
var_period = NULL;
Py_XDECREF(var_new_left_pad);
var_new_left_pad = NULL;
Py_XDECREF(var_new_right_pad);
var_new_right_pad = NULL;
Py_XDECREF(var_slice_end);
var_slice_end = NULL;
Py_XDECREF(var_slice_start);
var_slice_start = NULL;
Py_XDECREF(var_right_slice);
var_right_slice = NULL;
Py_XDECREF(var_right_chunk);
var_right_chunk = NULL;
Py_XDECREF(var_pad_area);
var_pad_area = NULL;
Py_XDECREF(var_left_slice);
var_left_slice = NULL;
Py_XDECREF(var_left_chunk);
var_left_chunk = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_original_period);
Py_DECREF(par_original_period);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_padded);
Py_DECREF(par_padded);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_width_pair);
Py_DECREF(par_width_pair);
CHECK_OBJECT(par_original_period);
Py_DECREF(par_original_period);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__11__as_pairs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_ndim = python_pars[1];
PyObject *par_as_index = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs = MAKE_FUNCTION_FRAME(tstate, code_objects_6b2809d09ee9208f44c0274383dd2dbe, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_1 = par_x;
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
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_mult_expr_left_1 = mod_consts.const_tuple_tuple_none_none_tuple_tuple;
CHECK_OBJECT(par_ndim);
tmp_mult_expr_right_1 = par_ndim;
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 504;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 504;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_as_index);
tmp_truth_name_1 = CHECK_IF_TRUE(par_as_index);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kwargs_value_1;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 506;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 506;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_round, tmp_args_element_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_astype);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 506;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_intp);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 506;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_a7ab110deec347786bcfa718065f5388);
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 506;
tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_x);
tmp_expression_value_3 = par_x;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_3;
tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "ooo";
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
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_x);
tmp_expression_value_4 = par_x;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_x);
tmp_called_instance_3 = par_x;
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 515;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_as_index);
tmp_truth_name_2 = CHECK_IF_TRUE(par_as_index);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_4 = par_x;
tmp_cmp_expr_right_4 = const_int_0;
tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf;
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 517;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 517;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_x);
tmp_expression_value_5 = par_x;
tmp_subscript_value_1 = const_int_0;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM(tmp_tuple_element_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_x);
tmp_expression_value_6 = par_x;
tmp_subscript_value_2 = const_int_0;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_tuple_element_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_tuple_element_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_mult_expr_left_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_mult_expr_left_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_ndim);
tmp_mult_expr_right_2 = par_ndim;
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_x);
tmp_expression_value_7 = par_x;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_2;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_x);
tmp_expression_value_8 = par_x;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_tuple_int_pos_2_int_pos_1_tuple;
tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_6 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(par_x);
tmp_called_instance_4 = par_x;
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 525;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_as_index);
tmp_truth_name_3 = CHECK_IF_TRUE(par_as_index);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_x);
tmp_expression_value_9 = par_x;
tmp_subscript_value_3 = const_int_0;
tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_3, 0);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = const_int_0;
tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_x);
tmp_expression_value_10 = par_x;
tmp_subscript_value_4 = const_int_pos_1;
tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_4, 1);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = const_int_0;
tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_3 = tmp_or_left_value_1;
or_end_1:;
tmp_condition_result_7 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_7 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf;
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 527;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 527;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_x);
tmp_expression_value_11 = par_x;
tmp_subscript_value_5 = const_int_0;
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_5, 0);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_6;
PyTuple_SET_ITEM(tmp_tuple_element_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(par_x);
tmp_expression_value_12 = par_x;
tmp_subscript_value_6 = const_int_pos_1;
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_6, 1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_tuple_element_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_mult_expr_left_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_mult_expr_left_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_ndim);
tmp_mult_expr_right_3 = par_ndim;
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_6:;
branch_no_3:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
int tmp_truth_name_4;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(par_as_index);
tmp_truth_name_4 = CHECK_IF_TRUE(par_as_index);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_x);
tmp_called_instance_5 = par_x;
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 530;
tmp_cmp_expr_left_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_min);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = const_int_0;
tmp_and_right_value_4 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_8 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_36c3e0ead60cb2e9773b4ea99207bccf;
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 531;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 531;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_8:;
{
PyObject *tmp_called_instance_6;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_tuple_element_6;
tmp_called_instance_7 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 535;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_ndim);
tmp_tuple_element_6 = par_ndim;
tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_6);
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 535;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_called_instance_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_7,
        mod_consts.const_str_plain_broadcast_to,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame.f_lineno = 535;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_tolist);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs,
    type_description_1,
    par_x,
    par_ndim,
    par_as_index
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__11__as_pairs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_x);
par_x = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ndim);
Py_DECREF(par_ndim);
CHECK_OBJECT(par_as_index);
Py_DECREF(par_as_index);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ndim);
Py_DECREF(par_ndim);
CHECK_OBJECT(par_as_index);
Py_DECREF(par_as_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__12__pad_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_array = python_pars[0];
PyObject *par_pad_width = python_pars[1];
PyObject *par_mode = python_pars[2];
PyObject *par_kwargs = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_array);
tmp_tuple_element_1 = par_array;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_array);
Py_DECREF(par_array);
CHECK_OBJECT(par_pad_width);
Py_DECREF(par_pad_width);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraypad_impl$$$function__13_pad(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_array = python_pars[0];
PyObject *par_pad_width = python_pars[1];
PyObject *par_mode = python_pars[2];
PyObject *par_kwargs = python_pars[3];
PyObject *var_seq = NULL;
PyObject *var_axis = NULL;
PyObject *var_width = NULL;
PyObject *var_both = NULL;
PyObject *var_before = NULL;
PyObject *var_after = NULL;
PyObject *var_invalid = NULL;
PyObject *var_function = NULL;
PyObject *var_padded = NULL;
PyObject *var__ = NULL;
PyObject *var_view = NULL;
PyObject *var_inds = NULL;
PyObject *var_ind = NULL;
PyObject *var_allowed_kwargs = NULL;
PyObject *var_unsupported_kwargs = NULL;
PyObject *var_stat_functions = NULL;
PyObject *var_original_area_slice = NULL;
PyObject *var_axes = NULL;
PyObject *var_values = NULL;
PyObject *var_width_pair = NULL;
PyObject *var_value_pair = NULL;
PyObject *var_roi = NULL;
PyObject *var_edge_pair = NULL;
PyObject *var_end_values = NULL;
PyObject *var_ramp_pair = NULL;
PyObject *var_func = NULL;
PyObject *var_length = NULL;
PyObject *var_length_pair = NULL;
PyObject *var_stat_pair = NULL;
PyObject *var_method = NULL;
PyObject *var_include_edge = NULL;
PyObject *var_left_index = NULL;
PyObject *var_right_index = NULL;
PyObject *var_original_period = NULL;
PyObject *tmp_for_loop_10__for_iterator = NULL;
PyObject *tmp_for_loop_10__iter_value = NULL;
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
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_match_class_1__match_args = NULL;
PyObject *tmp_match_class_2__match_args = NULL;
PyObject *tmp_match_class_3__match_args = NULL;
PyObject *tmp_match_class_4__match_args = NULL;
nuitka_bool tmp_match_statement_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_match_statement_1__subject = NULL;
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
PyObject *tmp_tuple_unpack_4__element_3 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__element_2 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
PyObject *tmp_tuple_unpack_6__element_1 = NULL;
PyObject *tmp_tuple_unpack_6__element_2 = NULL;
PyObject *tmp_tuple_unpack_6__source_iter = NULL;
PyObject *tmp_tuple_unpack_7__element_1 = NULL;
PyObject *tmp_tuple_unpack_7__element_2 = NULL;
PyObject *tmp_tuple_unpack_7__element_3 = NULL;
PyObject *tmp_tuple_unpack_7__source_iter = NULL;
PyObject *tmp_tuple_unpack_8__element_1 = NULL;
PyObject *tmp_tuple_unpack_8__element_2 = NULL;
PyObject *tmp_tuple_unpack_8__element_3 = NULL;
PyObject *tmp_tuple_unpack_8__source_iter = NULL;
PyObject *tmp_tuple_unpack_9__element_1 = NULL;
PyObject *tmp_tuple_unpack_9__element_2 = NULL;
PyObject *tmp_tuple_unpack_9__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad = MAKE_FUNCTION_FRAME(tstate, code_objects_007734c99cae469ce03774e993fc1b6c, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_type_description == NULL);
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad = cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 774;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_array);
tmp_args_element_value_1 = par_array;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 774;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 774;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_array;
    assert(old != NULL);
    par_array = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_pad_width);
tmp_isinstance_inst_1 = par_pad_width;
tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 775;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_mult_expr_left_1 = MAKE_LIST1(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT(par_array);
tmp_expression_value_1 = par_array;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 776;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 776;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_seq == NULL);
var_seq = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_pad_width);
tmp_expression_value_2 = par_pad_width;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 777;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 777;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 777;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 777;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 777;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 777;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 777;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 777;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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



exception_lineno = 777;
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
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_8;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_width;
    var_width = tmp_assign_source_9;
    Py_INCREF(var_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
tmp_match_statement_1__indicator = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(var_width);
tmp_assign_source_11 = var_width;
{
    PyObject *old = tmp_match_statement_1__subject;
    tmp_match_statement_1__subject = tmp_assign_source_11;
    Py_INCREF(tmp_match_statement_1__subject);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(tmp_match_statement_1__subject);
tmp_isinstance_inst_2 = tmp_match_statement_1__subject;
tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_3;
PyObject *tmp_match_type_value_1;
CHECK_OBJECT(tmp_match_statement_1__subject);
tmp_expression_value_3 = tmp_match_statement_1__subject;
tmp_match_type_value_1 = (PyObject *)&PyLong_Type;
tmp_assign_source_12 = MATCH_CLASS_ARGS(tstate, tmp_expression_value_3, tmp_match_type_value_1, 1, NULL, 0);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 779;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_match_class_1__match_args;
    tmp_match_class_1__match_args = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_match_class_1__match_args);
tmp_cmp_expr_left_1 = tmp_match_class_1__match_args;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_match_class_1__match_args);
CHECK_OBJECT(tmp_match_class_1__match_args);
Py_DECREF(tmp_match_class_1__match_args);
tmp_match_class_1__match_args = NULL;
tmp_outline_return_value_1 = Py_False;
Py_INCREF_IMMORTAL(tmp_outline_return_value_1);
goto outline_result_1;
branch_no_3:;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_match_class_1__match_args);
tmp_expression_value_4 = tmp_match_class_1__match_args;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_both;
    var_both = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
tmp_outline_return_value_1 = Py_True;
Py_INCREF_IMMORTAL(tmp_outline_return_value_1);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_match_class_1__match_args);
CHECK_OBJECT(tmp_match_class_1__match_args);
Py_DECREF(tmp_match_class_1__match_args);
tmp_match_class_1__match_args = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_match_class_1__match_args);
CHECK_OBJECT(tmp_match_class_1__match_args);
Py_DECREF(tmp_match_class_1__match_args);
tmp_match_class_1__match_args = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
if (var_both == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_both);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 780;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_tuple_element_1 = var_both;
tmp_ass_subvalue_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 0, tmp_tuple_element_1);
if (var_both == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_both);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 780;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = var_both;
PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_ass_subvalue_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (var_seq == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seq);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 780;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_ass_subscribed_1 = var_seq;
CHECK_OBJECT(var_axis);
tmp_ass_subscript_1 = var_axis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 780;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_TRUE;
tmp_match_statement_1__indicator = tmp_assign_source_14;
}
branch_no_2:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_match_statement_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_FALSE;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_4;
CHECK_OBJECT(tmp_match_statement_1__subject);
tmp_isinstance_inst_3 = tmp_match_statement_1__subject;
tmp_isinstance_cls_3 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_5;
PyObject *tmp_match_type_value_2;
CHECK_OBJECT(tmp_match_statement_1__subject);
tmp_expression_value_5 = tmp_match_statement_1__subject;
tmp_match_type_value_2 = (PyObject *)&PyTuple_Type;
tmp_assign_source_15 = MATCH_CLASS_ARGS(tstate, tmp_expression_value_5, tmp_match_type_value_2, 1, NULL, 0);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_match_class_2__match_args;
    tmp_match_class_2__match_args = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_match_class_2__match_args);
tmp_cmp_expr_left_3 = tmp_match_class_2__match_args;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_match_class_2__match_args);
CHECK_OBJECT(tmp_match_class_2__match_args);
Py_DECREF(tmp_match_class_2__match_args);
tmp_match_class_2__match_args = NULL;
tmp_outline_return_value_2 = Py_False;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto outline_result_2;
branch_no_6:;
// Tried code:
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_sequence_check_cls_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
bool tmp_tmp_and_left_value_4_cbool_1;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_subscript_value_5;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
PyObject *tmp_outline_return_value_3;
int tmp_truth_name_2;
int tmp_and_left_truth_7;
nuitka_bool tmp_and_left_value_7;
nuitka_bool tmp_and_right_value_7;
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_9;
PyObject *tmp_subscript_value_10;
PyObject *tmp_outline_return_value_4;
int tmp_truth_name_3;
CHECK_OBJECT(tmp_match_class_2__match_args);
tmp_expression_value_6 = tmp_match_class_2__match_args;
tmp_subscript_value_2 = const_int_0;
tmp_sequence_check_cls_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
if (tmp_sequence_check_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_res = Py_TYPE(tmp_sequence_check_cls_1)->tp_flags & Py_TPFLAGS_SEQUENCE;
CHECK_OBJECT(tmp_sequence_check_cls_1);
Py_DECREF(tmp_sequence_check_cls_1);
tmp_and_left_value_3 = (tmp_res) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(tmp_match_class_2__match_args);
tmp_expression_value_7 = tmp_match_class_2__match_args;
tmp_subscript_value_3 = const_int_0;
tmp_len_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 0);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_right_4 = 2;
tmp_tmp_and_left_value_4_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_and_left_value_4 = tmp_tmp_and_left_value_4_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(tmp_match_class_2__match_args);
tmp_expression_value_9 = tmp_match_class_2__match_args;
tmp_subscript_value_4 = const_int_0;
tmp_expression_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_4, 0);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_subscript_value_5 = const_int_0;
tmp_isinstance_inst_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_5, 0);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_isinstance_inst_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_isinstance_cls_4 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
CHECK_OBJECT(tmp_isinstance_inst_4);
Py_DECREF(tmp_isinstance_inst_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_and_left_value_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_6;
PyObject *tmp_subscript_value_7;
PyObject *tmp_match_type_value_3;
CHECK_OBJECT(tmp_match_class_2__match_args);
tmp_expression_value_12 = tmp_match_class_2__match_args;
tmp_subscript_value_6 = const_int_0;
tmp_expression_value_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_6, 0);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_subscript_value_7 = const_int_0;
tmp_expression_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 0);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_match_type_value_3 = (PyObject *)&PyLong_Type;
tmp_assign_source_16 = MATCH_CLASS_ARGS(tstate, tmp_expression_value_10, tmp_match_type_value_3, 1, NULL, 0);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_match_class_3__match_args;
    tmp_match_class_3__match_args = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_match_class_3__match_args);
tmp_cmp_expr_left_5 = tmp_match_class_3__match_args;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_match_class_3__match_args);
CHECK_OBJECT(tmp_match_class_3__match_args);
Py_DECREF(tmp_match_class_3__match_args);
tmp_match_class_3__match_args = NULL;
tmp_outline_return_value_3 = Py_False;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto outline_result_3;
branch_no_8:;
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(tmp_match_class_3__match_args);
tmp_expression_value_13 = tmp_match_class_3__match_args;
tmp_subscript_value_8 = const_int_0;
tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_8, 0);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_before;
    var_before = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
tmp_outline_return_value_3 = Py_True;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_match_class_3__match_args);
CHECK_OBJECT(tmp_match_class_3__match_args);
Py_DECREF(tmp_match_class_3__match_args);
tmp_match_class_3__match_args = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_match_class_3__match_args);
CHECK_OBJECT(tmp_match_class_3__match_args);
Py_DECREF(tmp_match_class_3__match_args);
tmp_match_class_3__match_args = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_3);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_3);

exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_and_left_value_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(tmp_match_class_2__match_args);
tmp_expression_value_15 = tmp_match_class_2__match_args;
tmp_subscript_value_9 = const_int_0;
tmp_expression_value_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_9, 0);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_subscript_value_10 = const_int_pos_1;
tmp_isinstance_inst_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_10, 1);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_isinstance_inst_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_isinstance_cls_5 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
CHECK_OBJECT(tmp_isinstance_inst_5);
Py_DECREF(tmp_isinstance_inst_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_and_left_value_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_11;
PyObject *tmp_subscript_value_12;
PyObject *tmp_match_type_value_4;
CHECK_OBJECT(tmp_match_class_2__match_args);
tmp_expression_value_18 = tmp_match_class_2__match_args;
tmp_subscript_value_11 = const_int_0;
tmp_expression_value_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_11, 0);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_subscript_value_12 = const_int_pos_1;
tmp_expression_value_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_12, 1);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_match_type_value_4 = (PyObject *)&PyLong_Type;
tmp_assign_source_18 = MATCH_CLASS_ARGS(tstate, tmp_expression_value_16, tmp_match_type_value_4, 1, NULL, 0);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_match_class_4__match_args;
    tmp_match_class_4__match_args = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_match_class_4__match_args);
tmp_cmp_expr_left_6 = tmp_match_class_4__match_args;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_match_class_4__match_args);
CHECK_OBJECT(tmp_match_class_4__match_args);
Py_DECREF(tmp_match_class_4__match_args);
tmp_match_class_4__match_args = NULL;
tmp_outline_return_value_4 = Py_False;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_4;
branch_no_9:;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_13;
CHECK_OBJECT(tmp_match_class_4__match_args);
tmp_expression_value_19 = tmp_match_class_4__match_args;
tmp_subscript_value_13 = const_int_0;
tmp_assign_source_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_13, 0);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_after;
    var_after = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
tmp_outline_return_value_4 = Py_True;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(tmp_match_class_4__match_args);
CHECK_OBJECT(tmp_match_class_4__match_args);
Py_DECREF(tmp_match_class_4__match_args);
tmp_match_class_4__match_args = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_match_class_4__match_args);
CHECK_OBJECT(tmp_match_class_4__match_args);
Py_DECREF(tmp_match_class_4__match_args);
tmp_match_class_4__match_args = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_outline_return_value_4);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_4);

exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_and_right_value_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
tmp_and_right_value_6 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_and_right_value_6 = tmp_and_left_value_7;
and_end_7:;
tmp_and_right_value_5 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_and_right_value_5 = tmp_and_left_value_6;
and_end_6:;
tmp_and_right_value_4 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_and_right_value_4 = tmp_and_left_value_5;
and_end_5:;
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
tmp_condition_result_7 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_7 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
tmp_outline_return_value_2 = Py_True;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto try_return_handler_7;
goto branch_end_7;
branch_no_7:;
tmp_outline_return_value_2 = Py_False;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto try_return_handler_7;
branch_end_7:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_match_class_2__match_args);
CHECK_OBJECT(tmp_match_class_2__match_args);
Py_DECREF(tmp_match_class_2__match_args);
tmp_match_class_2__match_args = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_match_class_2__match_args);
CHECK_OBJECT(tmp_match_class_2__match_args);
Py_DECREF(tmp_match_class_2__match_args);
tmp_match_class_2__match_args = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_2);

exception_lineno = 778;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
if (var_before == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_before);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 782;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_tuple_element_2 = var_before;
tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 0, tmp_tuple_element_2);
if (var_after == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_after);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 782;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}

tmp_tuple_element_2 = var_after;
PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_ass_subvalue_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
if (var_seq == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seq);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 782;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_ass_subscribed_2 = var_seq;
CHECK_OBJECT(var_axis);
tmp_ass_subscript_2 = var_axis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 782;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
{
nuitka_bool tmp_assign_source_20;
tmp_assign_source_20 = NUITKA_BOOL_TRUE;
tmp_match_statement_1__indicator = tmp_assign_source_20;
}
branch_no_5:;
branch_no_4:;
{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_match_statement_1__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_FALSE;
tmp_condition_result_10 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_match_statement_1__subject);
tmp_assign_source_21 = tmp_match_statement_1__subject;
{
    PyObject *old = var_invalid;
    var_invalid = tmp_assign_source_21;
    Py_INCREF(var_invalid);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_invalid);
tmp_args_element_value_2 = var_invalid;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 784;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_assert_never, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 784;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_10:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_match_statement_1__indicator = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(tmp_match_statement_1__subject);
CHECK_OBJECT(tmp_match_statement_1__subject);
Py_DECREF(tmp_match_statement_1__subject);
tmp_match_statement_1__subject = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_3:;
assert(tmp_match_statement_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_match_statement_1__indicator = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(tmp_match_statement_1__subject);
CHECK_OBJECT(tmp_match_statement_1__subject);
Py_DECREF(tmp_match_statement_1__subject);
tmp_match_statement_1__subject = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 777;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
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
try_end_4:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_22;
if (var_seq == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seq);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 785;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_22 = var_seq;
{
    PyObject *old = par_pad_width;
    assert(old != NULL);
    par_pad_width = tmp_assign_source_22;
    Py_INCREF(par_pad_width);
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 786;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_3 = par_pad_width;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 786;
tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_asarray, tmp_args_element_value_3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_pad_width;
    assert(old != NULL);
    par_pad_width = tmp_assign_source_23;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(par_pad_width);
tmp_expression_value_21 = par_pad_width;
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_i;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_c04f8465d9a92ee9b38f5e390057f4fb;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 789;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 789;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_11:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraypad_impl$_as_pairs(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__as_pairs);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 792;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pad_width);
tmp_tuple_element_3 = par_pad_width;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_array);
tmp_expression_value_22 = par_array;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_ndim);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 792;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_a49cf6d67d73ee9b51dbb6169697ab19);
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 792;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 792;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_pad_width;
    assert(old != NULL);
    par_pad_width = tmp_assign_source_24;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_5;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(par_mode);
tmp_args_element_value_4 = par_mode;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 794;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 794;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 794;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(par_mode);
tmp_assign_source_25 = par_mode;
assert(var_function == NULL);
Py_INCREF(tmp_assign_source_25);
var_function = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
tmp_called_value_4 = module_var_accessor_numpy$lib$_arraypad_impl$_pad_simple(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pad_simple);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(par_array);
tmp_tuple_element_4 = par_array;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_pad_width);
tmp_tuple_element_4 = par_pad_width;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_e24c06a0a11b6d4526a84b33486b9123);
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 798;
tmp_iter_arg_3 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
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



exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
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



exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
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



exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

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
assert(var_padded == NULL);
Py_INCREF(tmp_assign_source_29);
var_padded = tmp_assign_source_29;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_30 = tmp_tuple_unpack_2__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_30);
var__ = tmp_assign_source_30;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_4;
PyObject *tmp_xrange_low_1;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(var_padded);
tmp_expression_value_23 = var_padded;
tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_ndim);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 801;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_4 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 801;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_31 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 801;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_31;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_32 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_32 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 801;
        goto try_except_handler_12;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_33 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_33;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_24 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 806;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 806;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
if (var_padded == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 806;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_args_element_value_5 = var_padded;
CHECK_OBJECT(var_axis);
tmp_args_element_value_6 = var_axis;
tmp_args_element_value_7 = const_int_neg_1;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 806;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 806;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = var_view;
    var_view = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_14;
tmp_called_value_6 = module_var_accessor_numpy$lib$_arraypad_impl$ndindex(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndindex);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 810;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_view);
tmp_expression_value_26 = var_view;
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_shape);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 810;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_subscript_value_14 = mod_consts.const_slice_none_int_neg_1_none;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 810;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 810;
tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 810;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = var_inds;
    var_inds = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(var_inds);
tmp_iter_arg_5 = var_inds;
tmp_assign_source_37 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 811;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_assign_source_36 = MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__13_pad$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_13;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
{
    PyObject *old = var_inds;
    assert(old != NULL);
    var_inds = tmp_assign_source_36;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(var_inds);
tmp_iter_arg_6 = var_inds;
tmp_assign_source_38 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 812;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_39 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_39 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 812;
        goto try_except_handler_14;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_40 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_ind;
    var_ind = tmp_assign_source_40;
    Py_INCREF(var_ind);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_15;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_16;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
if (var_function == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_function);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 813;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_called_value_7 = var_function;
CHECK_OBJECT(var_view);
tmp_expression_value_27 = var_view;
CHECK_OBJECT(var_ind);
tmp_subscript_value_15 = var_ind;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_15);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 813;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(par_pad_width);
tmp_expression_value_28 = par_pad_width;
if (var_axis == NULL) {
Py_DECREF(tmp_args_element_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 813;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_subscript_value_16 = var_axis;
tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_16);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 813;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
if (var_axis == NULL) {
Py_DECREF(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 813;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_args_element_value_11 = var_axis;
if (par_kwargs == NULL) {
Py_DECREF(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 813;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_args_element_value_12 = par_kwargs;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 813;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 813;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 812;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
goto loop_start_3;
loop_end_3:;
goto try_end_7;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 801;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
goto loop_start_2;
loop_end_2:;
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 815;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_padded;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_12:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_787eda1103da1ea39cbb770f6d104ce2);
assert(var_allowed_kwargs == NULL);
var_allowed_kwargs = tmp_assign_source_41;
}
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_set_arg_1;
PyObject *tmp_set_arg_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
CHECK_OBJECT(par_kwargs);
tmp_set_arg_1 = par_kwargs;
tmp_sub_expr_left_1 = PySet_New(tmp_set_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 830;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(var_allowed_kwargs);
tmp_dict_arg_value_1 = var_allowed_kwargs;
CHECK_OBJECT(par_mode);
tmp_key_value_1 = par_mode;
tmp_set_arg_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_set_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 830;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_sub_expr_right_1 = PySet_New(tmp_set_arg_2);
CHECK_OBJECT(tmp_set_arg_2);
Py_DECREF(tmp_set_arg_2);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 830;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_assign_source_42 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
assert(!(tmp_assign_source_42 == NULL));
assert(var_unsupported_kwargs == NULL);
var_unsupported_kwargs = tmp_assign_source_42;
}
goto try_end_9;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad, exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13, exception_tb);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad, exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_13);
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(tmp_res == -1));
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_5;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_5 = mod_consts.const_str_digest_6869795bf298f71b2924a429133b16fa;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(par_mode);
tmp_format_value_1 = par_mode;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 832;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_26b54d1220deb578050430015059e5ee;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 832;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 832;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_16;
}
goto branch_end_13;
branch_no_13:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 829;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame)) {
        frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_16;
branch_end_13:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_9:;
{
bool tmp_condition_result_14;
CHECK_OBJECT(var_unsupported_kwargs);
tmp_condition_result_14 = CHECK_IF_TRUE(var_unsupported_kwargs) == 1;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = mod_consts.const_str_digest_c42fcf4a2981b4d5566b3788da9a3587;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(par_mode);
tmp_format_value_2 = par_mode;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 835;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_digest_ca8febe3248241b19119e249726a3804;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(var_unsupported_kwargs);
tmp_format_value_3 = var_unsupported_kwargs;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 835;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_6);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_3 == NULL));
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 834;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 834;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_14:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_29;
tmp_dict_key_1 = mod_consts.const_str_plain_maximum;
tmp_expression_value_29 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 837;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_amax);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_43 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_minimum;
tmp_expression_value_30 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 837;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_amin);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_mean;
tmp_expression_value_31 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 838;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_mean);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 838;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_median;
tmp_expression_value_32 = module_var_accessor_numpy$lib$_arraypad_impl$np(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 838;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_median);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 838;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_43);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_stat_functions == NULL);
var_stat_functions = tmp_assign_source_43;
}
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_iter_arg_7;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_8 = module_var_accessor_numpy$lib$_arraypad_impl$_pad_simple(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pad_simple);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
CHECK_OBJECT(par_array);
tmp_args_element_value_13 = par_array;
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_14 = par_pad_width;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 842;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_iter_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
tmp_assign_source_44 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
CHECK_OBJECT(tmp_iter_arg_7);
Py_DECREF(tmp_iter_arg_7);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
assert(tmp_tuple_unpack_3__source_iter == NULL);
tmp_tuple_unpack_3__source_iter = tmp_assign_source_44;
}
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_45 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
assert(tmp_tuple_unpack_3__element_1 == NULL);
tmp_tuple_unpack_3__element_1 = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_46 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
assert(tmp_tuple_unpack_3__element_2 == NULL);
tmp_tuple_unpack_3__element_2 = tmp_assign_source_46;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
}
goto try_end_10;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_17;
// End of try:
try_end_10:;
goto try_end_11;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_47;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_47 = tmp_tuple_unpack_3__element_1;
assert(var_padded == NULL);
Py_INCREF(tmp_assign_source_47);
var_padded = tmp_assign_source_47;
}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_48;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_48 = tmp_tuple_unpack_3__element_2;
assert(var_original_area_slice == NULL);
Py_INCREF(tmp_assign_source_48);
var_original_area_slice = tmp_assign_source_48;
}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_49;
PyObject *tmp_xrange_low_2;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(var_padded);
tmp_expression_value_33 = var_padded;
tmp_xrange_low_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_ndim);
if (tmp_xrange_low_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 845;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_49 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
CHECK_OBJECT(tmp_xrange_low_2);
Py_DECREF(tmp_xrange_low_2);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 845;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_axes == NULL);
var_axes = tmp_assign_source_49;
}
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_left_10 = par_mode;
tmp_cmp_expr_right_10 = mod_consts.const_str_plain_constant;
tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 847;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_2 = par_kwargs;
tmp_key_value_2 = mod_consts.const_str_plain_constant_values;
tmp_default_value_1 = const_int_0;
tmp_assign_source_50 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_50 == NULL) {
    tmp_assign_source_50 = tmp_default_value_1;
    Py_INCREF(tmp_assign_source_50);
}
assert(!(tmp_assign_source_50 == NULL));
assert(var_values == NULL);
var_values = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_34;
tmp_called_value_9 = module_var_accessor_numpy$lib$_arraypad_impl$_as_pairs(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__as_pairs);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 849;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_values);
tmp_args_element_value_15 = var_values;
CHECK_OBJECT(var_padded);
tmp_expression_value_34 = var_padded;
tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 849;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 849;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 849;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_values;
    assert(old != NULL);
    var_values = tmp_assign_source_51;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_iter_arg_8;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
tmp_called_value_10 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_axes);
tmp_args_element_value_17 = var_axes;
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_18 = par_pad_width;
CHECK_OBJECT(var_values);
tmp_args_element_value_19 = var_values;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 850;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

if (tmp_iter_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 850;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_52 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
CHECK_OBJECT(tmp_iter_arg_8);
Py_DECREF(tmp_iter_arg_8);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 850;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_4__for_iterator == NULL);
tmp_for_loop_4__for_iterator = tmp_assign_source_52;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_53;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_53 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_53 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 850;
        goto try_except_handler_19;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_53;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_iter_arg_9;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_iter_arg_9 = tmp_for_loop_4__iter_value;
tmp_assign_source_54 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 850;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_55 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 3);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 850;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_56 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 3);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 850;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_57 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 2, 3);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 850;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_3;
    tmp_tuple_unpack_4__element_3 = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 850;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
}
goto try_end_12;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_20;
// End of try:
try_end_12:;
goto try_end_13;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_58;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_58 = tmp_tuple_unpack_4__element_1;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_58;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_59;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_59 = tmp_tuple_unpack_4__element_2;
{
    PyObject *old = var_width_pair;
    var_width_pair = tmp_assign_source_59;
    Py_INCREF(var_width_pair);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_60;
CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
tmp_assign_source_60 = tmp_tuple_unpack_4__element_3;
{
    PyObject *old = var_value_pair;
    var_value_pair = tmp_assign_source_60;
    Py_INCREF(var_value_pair);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;

{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
tmp_called_value_11 = module_var_accessor_numpy$lib$_arraypad_impl$_view_roi(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__view_roi);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 851;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 851;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}

tmp_args_element_value_20 = var_padded;
if (var_original_area_slice == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_original_area_slice);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 851;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}

tmp_args_element_value_21 = var_original_area_slice;
CHECK_OBJECT(var_axis);
tmp_args_element_value_22 = var_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 851;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 851;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
{
    PyObject *old = var_roi;
    var_roi = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
tmp_called_value_12 = module_var_accessor_numpy$lib$_arraypad_impl$_set_pad_area(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__set_pad_area);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 852;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(var_roi);
tmp_args_element_value_23 = var_roi;
CHECK_OBJECT(var_axis);
tmp_args_element_value_24 = var_axis;
CHECK_OBJECT(var_width_pair);
tmp_args_element_value_25 = var_width_pair;
CHECK_OBJECT(var_value_pair);
tmp_args_element_value_26 = var_value_pair;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 852;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_12, call_args);
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 852;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 850;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
goto loop_start_4;
loop_end_4:;
goto try_end_14;
// Exception handler code:
try_except_handler_19:;
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
try_end_14:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
goto branch_end_15;
branch_no_15:;
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_left_11 = par_mode;
tmp_cmp_expr_right_11 = mod_consts.const_str_plain_empty;
tmp_operand_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 854;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 854;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
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
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(par_array);
tmp_expression_value_35 = par_array;
tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 857;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = const_int_0;
tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 857;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_iter_arg_10;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
tmp_called_value_13 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_axes);
tmp_args_element_value_27 = var_axes;
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_28 = par_pad_width;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 861;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
    tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

if (tmp_iter_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_62 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
CHECK_OBJECT(tmp_iter_arg_10);
Py_DECREF(tmp_iter_arg_10);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_5__for_iterator == NULL);
tmp_for_loop_5__for_iterator = tmp_assign_source_62;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_63;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
tmp_next_source_5 = tmp_for_loop_5__for_iterator;
tmp_assign_source_63 = ITERATOR_NEXT(tmp_next_source_5);
if (tmp_assign_source_63 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 861;
        goto try_except_handler_22;
    }
}

{
    PyObject *old = tmp_for_loop_5__iter_value;
    tmp_for_loop_5__iter_value = tmp_assign_source_63;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_iter_arg_11;
CHECK_OBJECT(tmp_for_loop_5__iter_value);
tmp_iter_arg_11 = tmp_for_loop_5__iter_value;
tmp_assign_source_64 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
{
    PyObject *old = tmp_tuple_unpack_5__source_iter;
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_64;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_65;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_65 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 0, 2);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_1;
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_66 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 1, 2);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_2;
    tmp_tuple_unpack_5__element_2 = tmp_assign_source_66;
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



exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
}
goto try_end_15;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto try_except_handler_23;
// End of try:
try_end_15:;
goto try_end_16;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_67;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_67 = tmp_tuple_unpack_5__element_1;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_67;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_68;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_assign_source_68 = tmp_tuple_unpack_5__element_2;
{
    PyObject *old = var_width_pair;
    var_width_pair = tmp_assign_source_68;
    Py_INCREF(var_width_pair);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

{
nuitka_bool tmp_condition_result_18;
int tmp_and_left_truth_8;
nuitka_bool tmp_and_left_value_8;
nuitka_bool tmp_and_right_value_8;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_17;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_6;
if (par_array == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_expression_value_37 = par_array;
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_shape);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
CHECK_OBJECT(var_axis);
tmp_subscript_value_17 = var_axis;
tmp_cmp_expr_left_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_17);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
tmp_cmp_expr_right_13 = const_int_0;
tmp_and_left_value_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
if (tmp_and_left_value_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
if (tmp_and_left_truth_8 == 1) {
    goto and_right_8;
} else {
    goto and_left_8;
}
and_right_8:;
CHECK_OBJECT(var_width_pair);
tmp_any_arg_1 = var_width_pair;
tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_capi_result_1);
assert(!(tmp_truth_name_6 == -1));
tmp_and_right_value_8 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
tmp_condition_result_18 = tmp_and_right_value_8;
goto and_end_8;
and_left_8:;
tmp_condition_result_18 = tmp_and_left_value_8;
and_end_8:;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = mod_consts.const_str_digest_5cddce63c83ac0cfe2b1ec610f8f118b;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(var_axis);
tmp_format_value_4 = var_axis;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 864;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_digest_4eaa566020f4b0ce39e12e20271cd778;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_22;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_make_exception_arg_4 == NULL));
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 863;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 863;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_22;
}
branch_no_18:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
goto loop_start_5;
loop_end_5:;
goto try_end_17;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
goto branch_end_17;
branch_no_17:;
{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_left_14 = par_mode;
tmp_cmp_expr_right_14 = mod_consts.const_str_plain_edge;
tmp_condition_result_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 870;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_69;
PyObject *tmp_iter_arg_12;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
tmp_called_value_14 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_axes);
tmp_args_element_value_29 = var_axes;
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_30 = par_pad_width;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 871;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

if (tmp_iter_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_69 = MAKE_ITERATOR(tstate, tmp_iter_arg_12);
CHECK_OBJECT(tmp_iter_arg_12);
Py_DECREF(tmp_iter_arg_12);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_6__for_iterator == NULL);
tmp_for_loop_6__for_iterator = tmp_assign_source_69;
}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_70;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
tmp_next_source_6 = tmp_for_loop_6__for_iterator;
tmp_assign_source_70 = ITERATOR_NEXT(tmp_next_source_6);
if (tmp_assign_source_70 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 871;
        goto try_except_handler_25;
    }
}

{
    PyObject *old = tmp_for_loop_6__iter_value;
    tmp_for_loop_6__iter_value = tmp_assign_source_70;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_iter_arg_13;
CHECK_OBJECT(tmp_for_loop_6__iter_value);
tmp_iter_arg_13 = tmp_for_loop_6__iter_value;
tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
}
{
    PyObject *old = tmp_tuple_unpack_6__source_iter;
    tmp_tuple_unpack_6__source_iter = tmp_assign_source_71;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_72;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_72 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 0, 2);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 871;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_1;
    tmp_tuple_unpack_6__element_1 = tmp_assign_source_72;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_73 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 1, 2);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 871;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_2;
    tmp_tuple_unpack_6__element_2 = tmp_assign_source_73;
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



exception_lineno = 871;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
}
goto try_end_18;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_26;
// End of try:
try_end_18:;
goto try_end_19;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_25;
// End of try:
try_end_19:;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
{
PyObject *tmp_assign_source_74;
CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
tmp_assign_source_74 = tmp_tuple_unpack_6__element_1;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_74;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;

{
PyObject *tmp_assign_source_75;
CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
tmp_assign_source_75 = tmp_tuple_unpack_6__element_2;
{
    PyObject *old = var_width_pair;
    var_width_pair = tmp_assign_source_75;
    Py_INCREF(var_width_pair);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;

{
PyObject *tmp_assign_source_76;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
tmp_called_value_15 = module_var_accessor_numpy$lib$_arraypad_impl$_view_roi(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__view_roi);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}

tmp_args_element_value_31 = var_padded;
if (var_original_area_slice == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_original_area_slice);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}

tmp_args_element_value_32 = var_original_area_slice;
CHECK_OBJECT(var_axis);
tmp_args_element_value_33 = var_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 872;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
    tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_15, call_args);
}

if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
{
    PyObject *old = var_roi;
    var_roi = tmp_assign_source_76;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_34;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
tmp_called_value_16 = module_var_accessor_numpy$lib$_arraypad_impl$_get_edges(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_edges);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 873;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
CHECK_OBJECT(var_roi);
tmp_args_element_value_34 = var_roi;
CHECK_OBJECT(var_axis);
tmp_args_element_value_35 = var_axis;
CHECK_OBJECT(var_width_pair);
tmp_args_element_value_36 = var_width_pair;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 873;
{
    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_16, call_args);
}

if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 873;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
{
    PyObject *old = var_edge_pair;
    var_edge_pair = tmp_assign_source_77;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_17;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_37;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
PyObject *tmp_args_element_value_40;
tmp_called_value_17 = module_var_accessor_numpy$lib$_arraypad_impl$_set_pad_area(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__set_pad_area);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 874;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
CHECK_OBJECT(var_roi);
tmp_args_element_value_37 = var_roi;
CHECK_OBJECT(var_axis);
tmp_args_element_value_38 = var_axis;
CHECK_OBJECT(var_width_pair);
tmp_args_element_value_39 = var_width_pair;
CHECK_OBJECT(var_edge_pair);
tmp_args_element_value_40 = var_edge_pair;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 874;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_17, call_args);
}

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 874;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
goto loop_start_6;
loop_end_6:;
goto try_end_20;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto frame_exception_exit_1;
// End of try:
try_end_20:;
Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
goto branch_end_19;
branch_no_19:;
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_left_15 = par_mode;
tmp_cmp_expr_right_15 = mod_consts.const_str_plain_linear_ramp;
tmp_condition_result_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_assign_source_78;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_key_value_3;
PyObject *tmp_default_value_2;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_3 = par_kwargs;
tmp_key_value_3 = mod_consts.const_str_plain_end_values;
tmp_default_value_2 = const_int_0;
tmp_assign_source_78 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
if (tmp_assign_source_78 == NULL) {
    tmp_assign_source_78 = tmp_default_value_2;
    Py_INCREF(tmp_assign_source_78);
}
assert(!(tmp_assign_source_78 == NULL));
assert(var_end_values == NULL);
var_end_values = tmp_assign_source_78;
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_41;
PyObject *tmp_args_element_value_42;
PyObject *tmp_expression_value_38;
tmp_called_value_18 = module_var_accessor_numpy$lib$_arraypad_impl$_as_pairs(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__as_pairs);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 878;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_end_values);
tmp_args_element_value_41 = var_end_values;
CHECK_OBJECT(var_padded);
tmp_expression_value_38 = var_padded;
tmp_args_element_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 878;
{
    PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
    tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_42);
Py_DECREF(tmp_args_element_value_42);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_end_values;
    assert(old != NULL);
    var_end_values = tmp_assign_source_79;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_iter_arg_14;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_43;
PyObject *tmp_args_element_value_44;
PyObject *tmp_args_element_value_45;
tmp_called_value_19 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_axes);
tmp_args_element_value_43 = var_axes;
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_44 = par_pad_width;
CHECK_OBJECT(var_end_values);
tmp_args_element_value_45 = var_end_values;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 879;
{
    PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
    tmp_iter_arg_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
}

if (tmp_iter_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_80 = MAKE_ITERATOR(tstate, tmp_iter_arg_14);
CHECK_OBJECT(tmp_iter_arg_14);
Py_DECREF(tmp_iter_arg_14);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_7__for_iterator == NULL);
tmp_for_loop_7__for_iterator = tmp_assign_source_80;
}
// Tried code:
loop_start_7:;
{
PyObject *tmp_next_source_7;
PyObject *tmp_assign_source_81;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
tmp_next_source_7 = tmp_for_loop_7__for_iterator;
tmp_assign_source_81 = ITERATOR_NEXT(tmp_next_source_7);
if (tmp_assign_source_81 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_7;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 879;
        goto try_except_handler_28;
    }
}

{
    PyObject *old = tmp_for_loop_7__iter_value;
    tmp_for_loop_7__iter_value = tmp_assign_source_81;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_82;
PyObject *tmp_iter_arg_15;
CHECK_OBJECT(tmp_for_loop_7__iter_value);
tmp_iter_arg_15 = tmp_for_loop_7__iter_value;
tmp_assign_source_82 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_15);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
{
    PyObject *old = tmp_tuple_unpack_7__source_iter;
    tmp_tuple_unpack_7__source_iter = tmp_assign_source_82;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_83;
PyObject *tmp_unpack_14;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_83 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 0, 3);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_30;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_1;
    tmp_tuple_unpack_7__element_1 = tmp_assign_source_83;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_unpack_15;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_84 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 1, 3);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_30;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_2;
    tmp_tuple_unpack_7__element_2 = tmp_assign_source_84;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_unpack_16;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_16 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_85 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 2, 3);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_30;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_3;
    tmp_tuple_unpack_7__element_3 = tmp_assign_source_85;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_7;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_30;
}
}
goto try_end_21;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto try_except_handler_29;
// End of try:
try_end_21:;
goto try_end_22;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_7__element_3);
tmp_tuple_unpack_7__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
try_end_22:;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
{
PyObject *tmp_assign_source_86;
CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
tmp_assign_source_86 = tmp_tuple_unpack_7__element_1;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_86;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;

{
PyObject *tmp_assign_source_87;
CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
tmp_assign_source_87 = tmp_tuple_unpack_7__element_2;
{
    PyObject *old = var_width_pair;
    var_width_pair = tmp_assign_source_87;
    Py_INCREF(var_width_pair);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;

{
PyObject *tmp_assign_source_88;
CHECK_OBJECT(tmp_tuple_unpack_7__element_3);
tmp_assign_source_88 = tmp_tuple_unpack_7__element_3;
{
    PyObject *old = var_value_pair;
    var_value_pair = tmp_assign_source_88;
    Py_INCREF(var_value_pair);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_3);
tmp_tuple_unpack_7__element_3 = NULL;

{
PyObject *tmp_assign_source_89;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_46;
PyObject *tmp_args_element_value_47;
PyObject *tmp_args_element_value_48;
tmp_called_value_20 = module_var_accessor_numpy$lib$_arraypad_impl$_view_roi(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__view_roi);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 880;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 880;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}

tmp_args_element_value_46 = var_padded;
if (var_original_area_slice == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_original_area_slice);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 880;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}

tmp_args_element_value_47 = var_original_area_slice;
CHECK_OBJECT(var_axis);
tmp_args_element_value_48 = var_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 880;
{
    PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48};
    tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_20, call_args);
}

if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
{
    PyObject *old = var_roi;
    var_roi = tmp_assign_source_89;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_49;
PyObject *tmp_args_element_value_50;
PyObject *tmp_args_element_value_51;
PyObject *tmp_args_element_value_52;
tmp_called_value_21 = module_var_accessor_numpy$lib$_arraypad_impl$_get_linear_ramps(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_linear_ramps);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 881;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
CHECK_OBJECT(var_roi);
tmp_args_element_value_49 = var_roi;
CHECK_OBJECT(var_axis);
tmp_args_element_value_50 = var_axis;
CHECK_OBJECT(var_width_pair);
tmp_args_element_value_51 = var_width_pair;
CHECK_OBJECT(var_value_pair);
tmp_args_element_value_52 = var_value_pair;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 881;
{
    PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
    tmp_assign_source_90 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_21, call_args);
}

if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 881;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
{
    PyObject *old = var_ramp_pair;
    var_ramp_pair = tmp_assign_source_90;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_22;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_53;
PyObject *tmp_args_element_value_54;
PyObject *tmp_args_element_value_55;
PyObject *tmp_args_element_value_56;
tmp_called_value_22 = module_var_accessor_numpy$lib$_arraypad_impl$_set_pad_area(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__set_pad_area);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 882;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
CHECK_OBJECT(var_roi);
tmp_args_element_value_53 = var_roi;
CHECK_OBJECT(var_axis);
tmp_args_element_value_54 = var_axis;
CHECK_OBJECT(var_width_pair);
tmp_args_element_value_55 = var_width_pair;
CHECK_OBJECT(var_ramp_pair);
tmp_args_element_value_56 = var_ramp_pair;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 882;
{
    PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_22, call_args);
}

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 882;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
goto loop_start_7;
loop_end_7:;
goto try_end_23;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_7__iter_value);
tmp_for_loop_7__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
Py_DECREF(tmp_for_loop_7__for_iterator);
tmp_for_loop_7__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto frame_exception_exit_1;
// End of try:
try_end_23:;
Py_XDECREF(tmp_for_loop_7__iter_value);
tmp_for_loop_7__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
Py_DECREF(tmp_for_loop_7__for_iterator);
tmp_for_loop_7__for_iterator = NULL;
goto branch_end_20;
branch_no_20:;
{
bool tmp_condition_result_21;
PyObject *tmp_key_value_4;
PyObject *tmp_dict_arg_value_4;
CHECK_OBJECT(par_mode);
tmp_key_value_4 = par_mode;
CHECK_OBJECT(var_stat_functions);
tmp_dict_arg_value_4 = var_stat_functions;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 884;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assign_source_91;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_key_value_5;
CHECK_OBJECT(var_stat_functions);
tmp_dict_arg_value_5 = var_stat_functions;
CHECK_OBJECT(par_mode);
tmp_key_value_5 = par_mode;
tmp_assign_source_91 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_func == NULL);
var_func = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_key_value_6;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_6 = par_kwargs;
tmp_key_value_6 = mod_consts.const_str_plain_stat_length;
tmp_assign_source_92 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
if (tmp_assign_source_92 == NULL) {
    tmp_assign_source_92 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_92);
}
assert(!(tmp_assign_source_92 == NULL));
assert(var_length == NULL);
var_length = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
tmp_called_value_23 = module_var_accessor_numpy$lib$_arraypad_impl$_as_pairs(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__as_pairs);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 887;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_length);
tmp_tuple_element_8 = var_length;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_39;
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(var_padded);
tmp_expression_value_39 = var_padded;
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_ndim);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 887;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_args_value_3, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_args_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_a49cf6d67d73ee9b51dbb6169697ab19);
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 887;
tmp_assign_source_93 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 887;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_length;
    assert(old != NULL);
    var_length = tmp_assign_source_93;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_iter_arg_16;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_57;
PyObject *tmp_args_element_value_58;
PyObject *tmp_args_element_value_59;
tmp_called_value_24 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_axes);
tmp_args_element_value_57 = var_axes;
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_58 = par_pad_width;
CHECK_OBJECT(var_length);
tmp_args_element_value_59 = var_length;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 888;
{
    PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
    tmp_iter_arg_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_24, call_args);
}

if (tmp_iter_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 888;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_94 = MAKE_ITERATOR(tstate, tmp_iter_arg_16);
CHECK_OBJECT(tmp_iter_arg_16);
Py_DECREF(tmp_iter_arg_16);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 888;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_8__for_iterator == NULL);
tmp_for_loop_8__for_iterator = tmp_assign_source_94;
}
// Tried code:
loop_start_8:;
{
PyObject *tmp_next_source_8;
PyObject *tmp_assign_source_95;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
tmp_next_source_8 = tmp_for_loop_8__for_iterator;
tmp_assign_source_95 = ITERATOR_NEXT(tmp_next_source_8);
if (tmp_assign_source_95 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_8;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 888;
        goto try_except_handler_31;
    }
}

{
    PyObject *old = tmp_for_loop_8__iter_value;
    tmp_for_loop_8__iter_value = tmp_assign_source_95;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_96;
PyObject *tmp_iter_arg_17;
CHECK_OBJECT(tmp_for_loop_8__iter_value);
tmp_iter_arg_17 = tmp_for_loop_8__iter_value;
tmp_assign_source_96 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_17);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 888;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_32;
}
{
    PyObject *old = tmp_tuple_unpack_8__source_iter;
    tmp_tuple_unpack_8__source_iter = tmp_assign_source_96;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_97;
PyObject *tmp_unpack_17;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_17 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_97 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 0, 3);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 888;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_8__element_1;
    tmp_tuple_unpack_8__element_1 = tmp_assign_source_97;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_unpack_18;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_18 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_98 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 1, 3);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 888;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_8__element_2;
    tmp_tuple_unpack_8__element_2 = tmp_assign_source_98;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_unpack_19;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_unpack_19 = tmp_tuple_unpack_8__source_iter;
tmp_assign_source_99 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_19, 2, 3);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 888;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_8__element_3;
    tmp_tuple_unpack_8__element_3 = tmp_assign_source_99;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_8;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_8, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 888;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
}
goto try_end_24;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
Py_DECREF(tmp_tuple_unpack_8__source_iter);
tmp_tuple_unpack_8__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto try_except_handler_32;
// End of try:
try_end_24:;
goto try_end_25;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_8__element_1);
tmp_tuple_unpack_8__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_8__element_2);
tmp_tuple_unpack_8__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_8__element_3);
tmp_tuple_unpack_8__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_31;
// End of try:
try_end_25:;
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
Py_DECREF(tmp_tuple_unpack_8__source_iter);
tmp_tuple_unpack_8__source_iter = NULL;
{
PyObject *tmp_assign_source_100;
CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
tmp_assign_source_100 = tmp_tuple_unpack_8__element_1;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_100;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_8__element_1);
tmp_tuple_unpack_8__element_1 = NULL;

{
PyObject *tmp_assign_source_101;
CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
tmp_assign_source_101 = tmp_tuple_unpack_8__element_2;
{
    PyObject *old = var_width_pair;
    var_width_pair = tmp_assign_source_101;
    Py_INCREF(var_width_pair);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_8__element_2);
tmp_tuple_unpack_8__element_2 = NULL;

{
PyObject *tmp_assign_source_102;
CHECK_OBJECT(tmp_tuple_unpack_8__element_3);
tmp_assign_source_102 = tmp_tuple_unpack_8__element_3;
{
    PyObject *old = var_length_pair;
    var_length_pair = tmp_assign_source_102;
    Py_INCREF(var_length_pair);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_8__element_3);
tmp_tuple_unpack_8__element_3 = NULL;

{
PyObject *tmp_assign_source_103;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_60;
PyObject *tmp_args_element_value_61;
PyObject *tmp_args_element_value_62;
tmp_called_value_25 = module_var_accessor_numpy$lib$_arraypad_impl$_view_roi(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__view_roi);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 889;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 889;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_args_element_value_60 = var_padded;
if (var_original_area_slice == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_original_area_slice);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 889;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_args_element_value_61 = var_original_area_slice;
CHECK_OBJECT(var_axis);
tmp_args_element_value_62 = var_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 889;
{
    PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
    tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_25, call_args);
}

if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 889;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
{
    PyObject *old = var_roi;
    var_roi = tmp_assign_source_103;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_104;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_63;
PyObject *tmp_args_element_value_64;
PyObject *tmp_args_element_value_65;
PyObject *tmp_args_element_value_66;
PyObject *tmp_args_element_value_67;
tmp_called_value_26 = module_var_accessor_numpy$lib$_arraypad_impl$_get_stats(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_stats);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 890;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(var_roi);
tmp_args_element_value_63 = var_roi;
CHECK_OBJECT(var_axis);
tmp_args_element_value_64 = var_axis;
CHECK_OBJECT(var_width_pair);
tmp_args_element_value_65 = var_width_pair;
CHECK_OBJECT(var_length_pair);
tmp_args_element_value_66 = var_length_pair;
if (var_func == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 890;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_args_element_value_67 = var_func;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 890;
{
    PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
    tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_26, call_args);
}

if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 890;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
{
    PyObject *old = var_stat_pair;
    var_stat_pair = tmp_assign_source_104;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_27;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_68;
PyObject *tmp_args_element_value_69;
PyObject *tmp_args_element_value_70;
PyObject *tmp_args_element_value_71;
tmp_called_value_27 = module_var_accessor_numpy$lib$_arraypad_impl$_set_pad_area(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__set_pad_area);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 891;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(var_roi);
tmp_args_element_value_68 = var_roi;
CHECK_OBJECT(var_axis);
tmp_args_element_value_69 = var_axis;
CHECK_OBJECT(var_width_pair);
tmp_args_element_value_70 = var_width_pair;
CHECK_OBJECT(var_stat_pair);
tmp_args_element_value_71 = var_stat_pair;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 891;
{
    PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_27, call_args);
}

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 891;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 888;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
goto loop_start_8;
loop_end_8:;
goto try_end_26;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_8__iter_value);
tmp_for_loop_8__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
Py_DECREF(tmp_for_loop_8__for_iterator);
tmp_for_loop_8__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto frame_exception_exit_1;
// End of try:
try_end_26:;
Py_XDECREF(tmp_for_loop_8__iter_value);
tmp_for_loop_8__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
Py_DECREF(tmp_for_loop_8__for_iterator);
tmp_for_loop_8__for_iterator = NULL;
goto branch_end_21;
branch_no_21:;
{
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_left_16 = par_mode;
tmp_cmp_expr_right_16 = mod_consts.const_frozenset_015ba9fbf8183afba082d06912dc5878;
tmp_res = PySet_Contains(tmp_cmp_expr_right_16, tmp_cmp_expr_left_16);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 893;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_22 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_105;
PyObject *tmp_dict_arg_value_7;
PyObject *tmp_key_value_7;
PyObject *tmp_default_value_3;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_7 = par_kwargs;
tmp_key_value_7 = mod_consts.const_str_plain_reflect_type;
tmp_default_value_3 = mod_consts.const_str_plain_even;
tmp_assign_source_105 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_7, tmp_key_value_7);
if (tmp_assign_source_105 == NULL) {
    tmp_assign_source_105 = tmp_default_value_3;
    Py_INCREF(tmp_assign_source_105);
}
assert(!(tmp_assign_source_105 == NULL));
assert(var_method == NULL);
var_method = tmp_assign_source_105;
}
{
PyObject *tmp_assign_source_106;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_left_17 = par_mode;
tmp_cmp_expr_right_17 = mod_consts.const_str_plain_symmetric;
tmp_assign_source_106 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 895;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_include_edge == NULL);
var_include_edge = tmp_assign_source_106;
}
{
PyObject *tmp_assign_source_107;
PyObject *tmp_iter_arg_18;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_72;
PyObject *tmp_args_element_value_73;
tmp_called_value_28 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_axes);
tmp_args_element_value_72 = var_axes;
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_73 = par_pad_width;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 896;
{
    PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73};
    tmp_iter_arg_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
}

if (tmp_iter_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_107 = MAKE_ITERATOR(tstate, tmp_iter_arg_18);
CHECK_OBJECT(tmp_iter_arg_18);
Py_DECREF(tmp_iter_arg_18);
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_9__for_iterator == NULL);
tmp_for_loop_9__for_iterator = tmp_assign_source_107;
}
// Tried code:
loop_start_9:;
{
PyObject *tmp_next_source_9;
PyObject *tmp_assign_source_108;
CHECK_OBJECT(tmp_for_loop_9__for_iterator);
tmp_next_source_9 = tmp_for_loop_9__for_iterator;
tmp_assign_source_108 = ITERATOR_NEXT(tmp_next_source_9);
if (tmp_assign_source_108 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_9;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 896;
        goto try_except_handler_34;
    }
}

{
    PyObject *old = tmp_for_loop_9__iter_value;
    tmp_for_loop_9__iter_value = tmp_assign_source_108;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_109;
PyObject *tmp_iter_arg_19;
CHECK_OBJECT(tmp_for_loop_9__iter_value);
tmp_iter_arg_19 = tmp_for_loop_9__iter_value;
tmp_assign_source_109 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_19);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_35;
}
{
    PyObject *old = tmp_tuple_unpack_9__source_iter;
    tmp_tuple_unpack_9__source_iter = tmp_assign_source_109;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_110;
PyObject *tmp_unpack_20;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_20 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_110 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_20, 0, 2);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_36;
}
{
    PyObject *old = tmp_tuple_unpack_9__element_1;
    tmp_tuple_unpack_9__element_1 = tmp_assign_source_110;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_111;
PyObject *tmp_unpack_21;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_unpack_21 = tmp_tuple_unpack_9__source_iter;
tmp_assign_source_111 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_21, 1, 2);
if (tmp_assign_source_111 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_36;
}
{
    PyObject *old = tmp_tuple_unpack_9__element_2;
    tmp_tuple_unpack_9__element_2 = tmp_assign_source_111;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_9;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_9, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_36;
}
}
goto try_end_27;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
Py_DECREF(tmp_tuple_unpack_9__source_iter);
tmp_tuple_unpack_9__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto try_except_handler_35;
// End of try:
try_end_27:;
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
Py_DECREF(tmp_tuple_unpack_9__source_iter);
tmp_tuple_unpack_9__source_iter = NULL;
{
PyObject *tmp_assign_source_112;
CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
tmp_assign_source_112 = tmp_tuple_unpack_9__element_1;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_112;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_9__element_1);
tmp_tuple_unpack_9__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_113;
PyObject *tmp_iter_arg_20;
CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
tmp_iter_arg_20 = tmp_tuple_unpack_9__element_2;
tmp_assign_source_113 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_20);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_37;
}
{
    PyObject *old = tmp_tuple_unpack_10__source_iter;
    tmp_tuple_unpack_10__source_iter = tmp_assign_source_113;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_114;
PyObject *tmp_unpack_22;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
tmp_unpack_22 = tmp_tuple_unpack_10__source_iter;
tmp_assign_source_114 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_22, 0, 2);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
{
    PyObject *old = tmp_tuple_unpack_10__element_1;
    tmp_tuple_unpack_10__element_1 = tmp_assign_source_114;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_115;
PyObject *tmp_unpack_23;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
tmp_unpack_23 = tmp_tuple_unpack_10__source_iter;
tmp_assign_source_115 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_23, 1, 2);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
{
    PyObject *old = tmp_tuple_unpack_10__element_2;
    tmp_tuple_unpack_10__element_2 = tmp_assign_source_115;
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



exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
}
}
goto try_end_28;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
Py_DECREF(tmp_tuple_unpack_10__source_iter);
tmp_tuple_unpack_10__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto try_except_handler_37;
// End of try:
try_end_28:;
goto try_end_29;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_10__element_1);
tmp_tuple_unpack_10__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_10__element_2);
tmp_tuple_unpack_10__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto try_except_handler_35;
// End of try:
try_end_29:;
goto try_end_30;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_9__element_1);
tmp_tuple_unpack_9__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_9__element_2);
tmp_tuple_unpack_9__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto try_except_handler_34;
// End of try:
try_end_30:;
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
Py_DECREF(tmp_tuple_unpack_10__source_iter);
tmp_tuple_unpack_10__source_iter = NULL;
{
PyObject *tmp_assign_source_116;
CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
tmp_assign_source_116 = tmp_tuple_unpack_10__element_1;
{
    PyObject *old = var_left_index;
    var_left_index = tmp_assign_source_116;
    Py_INCREF(var_left_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_10__element_1);
tmp_tuple_unpack_10__element_1 = NULL;

{
PyObject *tmp_assign_source_117;
CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
tmp_assign_source_117 = tmp_tuple_unpack_10__element_2;
{
    PyObject *old = var_right_index;
    var_right_index = tmp_assign_source_117;
    Py_INCREF(var_right_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_10__element_2);
tmp_tuple_unpack_10__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_9__element_2);
tmp_tuple_unpack_9__element_2 = NULL;

{
nuitka_bool tmp_condition_result_23;
int tmp_and_left_truth_9;
nuitka_bool tmp_and_left_value_9;
nuitka_bool tmp_and_right_value_9;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_18;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
if (par_array == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}

tmp_expression_value_41 = par_array;
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_shape);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
CHECK_OBJECT(var_axis);
tmp_subscript_value_18 = var_axis;
tmp_cmp_expr_left_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_18);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_cmp_expr_left_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
tmp_cmp_expr_right_18 = const_int_pos_1;
tmp_and_left_value_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
CHECK_OBJECT(tmp_cmp_expr_left_18);
Py_DECREF(tmp_cmp_expr_left_18);
if (tmp_and_left_value_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
if (tmp_and_left_truth_9 == 1) {
    goto and_right_9;
} else {
    goto and_left_9;
}
and_right_9:;
CHECK_OBJECT(var_left_index);
tmp_cmp_expr_left_19 = var_left_index;
tmp_cmp_expr_right_19 = const_int_0;
tmp_or_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_right_index);
tmp_cmp_expr_left_20 = var_right_index;
tmp_cmp_expr_right_20 = const_int_0;
tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
tmp_and_right_value_9 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_9 = tmp_or_left_value_1;
or_end_1:;
tmp_condition_result_23 = tmp_and_right_value_9;
goto and_end_9;
and_left_9:;
tmp_condition_result_23 = tmp_and_left_value_9;
and_end_9:;
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_assign_source_118;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_74;
PyObject *tmp_args_element_value_75;
PyObject *tmp_args_element_value_76;
PyObject *tmp_tuple_element_9;
tmp_called_value_29 = module_var_accessor_numpy$lib$_arraypad_impl$_get_edges(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_edges);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 900;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 900;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}

tmp_args_element_value_74 = var_padded;
CHECK_OBJECT(var_axis);
tmp_args_element_value_75 = var_axis;
CHECK_OBJECT(var_left_index);
tmp_tuple_element_9 = var_left_index;
tmp_args_element_value_76 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_76, 0, tmp_tuple_element_9);
CHECK_OBJECT(var_right_index);
tmp_tuple_element_9 = var_right_index;
PyTuple_SET_ITEM0(tmp_args_element_value_76, 1, tmp_tuple_element_9);
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 900;
{
    PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76};
    tmp_assign_source_118 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_29, call_args);
}

CHECK_OBJECT(tmp_args_element_value_76);
Py_DECREF(tmp_args_element_value_76);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 900;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
{
    PyObject *old = var_edge_pair;
    var_edge_pair = tmp_assign_source_118;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_30;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_77;
PyObject *tmp_args_element_value_78;
PyObject *tmp_args_element_value_79;
PyObject *tmp_tuple_element_10;
PyObject *tmp_args_element_value_80;
tmp_called_value_30 = module_var_accessor_numpy$lib$_arraypad_impl$_set_pad_area(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__set_pad_area);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 901;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 902;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}

tmp_args_element_value_77 = var_padded;
CHECK_OBJECT(var_axis);
tmp_args_element_value_78 = var_axis;
CHECK_OBJECT(var_left_index);
tmp_tuple_element_10 = var_left_index;
tmp_args_element_value_79 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_79, 0, tmp_tuple_element_10);
CHECK_OBJECT(var_right_index);
tmp_tuple_element_10 = var_right_index;
PyTuple_SET_ITEM0(tmp_args_element_value_79, 1, tmp_tuple_element_10);
CHECK_OBJECT(var_edge_pair);
tmp_args_element_value_80 = var_edge_pair;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 901;
{
    PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_30, call_args);
}

CHECK_OBJECT(tmp_args_element_value_79);
Py_DECREF(tmp_args_element_value_79);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 901;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
goto loop_start_9;
branch_no_23:;
{
PyObject *tmp_assign_source_119;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_81;
PyObject *tmp_args_element_value_82;
PyObject *tmp_args_element_value_83;
tmp_called_value_31 = module_var_accessor_numpy$lib$_arraypad_impl$_view_roi(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__view_roi);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 905;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 905;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}

tmp_args_element_value_81 = var_padded;
if (var_original_area_slice == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_original_area_slice);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 905;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}

tmp_args_element_value_82 = var_original_area_slice;
CHECK_OBJECT(var_axis);
tmp_args_element_value_83 = var_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 905;
{
    PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83};
    tmp_assign_source_119 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_31, call_args);
}

if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 905;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
{
    PyObject *old = var_roi;
    var_roi = tmp_assign_source_119;
    Py_XDECREF(old);
}

}
loop_start_10:;
{
bool tmp_condition_result_24;
PyObject *tmp_operand_value_3;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
if (var_left_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_left_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 906;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}

tmp_cmp_expr_left_21 = var_left_index;
tmp_cmp_expr_right_21 = const_int_0;
tmp_or_left_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 906;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 906;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
if (var_right_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_right_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 906;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}

tmp_cmp_expr_left_22 = var_right_index;
tmp_cmp_expr_right_22 = const_int_0;
tmp_or_right_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 906;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
tmp_operand_value_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_operand_value_3 = tmp_or_left_value_2;
or_end_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 906;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
tmp_condition_result_24 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
goto loop_end_10;
branch_no_24:;
// Tried code:
{
PyObject *tmp_assign_source_120;
PyObject *tmp_iter_arg_21;
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_84;
PyObject *tmp_args_element_value_85;
PyObject *tmp_args_element_value_86;
PyObject *tmp_tuple_element_11;
PyObject *tmp_args_element_value_87;
PyObject *tmp_args_element_value_88;
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_19;
PyObject *tmp_args_element_value_89;
tmp_called_value_32 = module_var_accessor_numpy$lib$_arraypad_impl$_set_reflect_both(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__set_reflect_both);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 910;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}
if (var_roi == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_roi);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 911;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}

tmp_args_element_value_84 = var_roi;
if (var_axis == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 911;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}

tmp_args_element_value_85 = var_axis;
if (var_left_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_left_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 911;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}

tmp_tuple_element_11 = var_left_index;
tmp_args_element_value_86 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_86, 0, tmp_tuple_element_11);
if (var_right_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_right_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 911;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_8;
}

tmp_tuple_element_11 = var_right_index;
PyTuple_SET_ITEM0(tmp_args_element_value_86, 1, tmp_tuple_element_11);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_args_element_value_86);
goto try_except_handler_39;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
if (var_method == NULL) {
Py_DECREF(tmp_args_element_value_86);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 912;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}

tmp_args_element_value_87 = var_method;
if (par_array == NULL) {
Py_DECREF(tmp_args_element_value_86);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 912;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}

tmp_expression_value_43 = par_array;
tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_shape);
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_86);

exception_lineno = 912;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}
if (var_axis == NULL) {
Py_DECREF(tmp_args_element_value_86);
Py_DECREF(tmp_expression_value_42);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 912;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}

tmp_subscript_value_19 = var_axis;
tmp_args_element_value_88 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_19);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_args_element_value_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_86);

exception_lineno = 912;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}
if (var_include_edge == NULL) {
Py_DECREF(tmp_args_element_value_86);
Py_DECREF(tmp_args_element_value_88);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_include_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 912;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}

tmp_args_element_value_89 = var_include_edge;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 910;
{
    PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89};
    tmp_iter_arg_21 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_32, call_args);
}

CHECK_OBJECT(tmp_args_element_value_86);
Py_DECREF(tmp_args_element_value_86);
CHECK_OBJECT(tmp_args_element_value_88);
Py_DECREF(tmp_args_element_value_88);
if (tmp_iter_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 910;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}
tmp_assign_source_120 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_21);
CHECK_OBJECT(tmp_iter_arg_21);
Py_DECREF(tmp_iter_arg_21);
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 910;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
}
{
    PyObject *old = tmp_tuple_unpack_11__source_iter;
    tmp_tuple_unpack_11__source_iter = tmp_assign_source_120;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_121;
PyObject *tmp_unpack_24;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
tmp_unpack_24 = tmp_tuple_unpack_11__source_iter;
tmp_assign_source_121 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_24, 0, 2);
if (tmp_assign_source_121 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 910;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_40;
}
{
    PyObject *old = tmp_tuple_unpack_11__element_1;
    tmp_tuple_unpack_11__element_1 = tmp_assign_source_121;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_122;
PyObject *tmp_unpack_25;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
tmp_unpack_25 = tmp_tuple_unpack_11__source_iter;
tmp_assign_source_122 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_25, 1, 2);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 910;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_40;
}
{
    PyObject *old = tmp_tuple_unpack_11__element_2;
    tmp_tuple_unpack_11__element_2 = tmp_assign_source_122;
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



exception_lineno = 910;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_40;
}
}
goto try_end_31;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
Py_DECREF(tmp_tuple_unpack_11__source_iter);
tmp_tuple_unpack_11__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto try_except_handler_39;
// End of try:
try_end_31:;
goto try_end_32;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_11__element_1);
tmp_tuple_unpack_11__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_11__element_2);
tmp_tuple_unpack_11__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto try_except_handler_34;
// End of try:
try_end_32:;
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
Py_DECREF(tmp_tuple_unpack_11__source_iter);
tmp_tuple_unpack_11__source_iter = NULL;
{
PyObject *tmp_assign_source_123;
CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
tmp_assign_source_123 = tmp_tuple_unpack_11__element_1;
{
    PyObject *old = var_left_index;
    var_left_index = tmp_assign_source_123;
    Py_INCREF(var_left_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_11__element_1);
tmp_tuple_unpack_11__element_1 = NULL;

{
PyObject *tmp_assign_source_124;
CHECK_OBJECT(tmp_tuple_unpack_11__element_2);
tmp_assign_source_124 = tmp_tuple_unpack_11__element_2;
{
    PyObject *old = var_right_index;
    var_right_index = tmp_assign_source_124;
    Py_INCREF(var_right_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_11__element_2);
tmp_tuple_unpack_11__element_2 = NULL;

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 906;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
goto loop_start_10;
loop_end_10:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
goto loop_start_9;
loop_end_9:;
goto try_end_33;
// Exception handler code:
try_except_handler_34:;
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
try_end_33:;
Py_XDECREF(tmp_for_loop_9__iter_value);
tmp_for_loop_9__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_9__for_iterator);
CHECK_OBJECT(tmp_for_loop_9__for_iterator);
Py_DECREF(tmp_for_loop_9__for_iterator);
tmp_for_loop_9__for_iterator = NULL;
goto branch_end_22;
branch_no_22:;
{
nuitka_bool tmp_condition_result_25;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_left_23 = par_mode;
tmp_cmp_expr_right_23 = mod_consts.const_str_plain_wrap;
tmp_condition_result_25 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 915;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_125;
PyObject *tmp_iter_arg_22;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_90;
PyObject *tmp_args_element_value_91;
tmp_called_value_33 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_axes);
tmp_args_element_value_90 = var_axes;
CHECK_OBJECT(par_pad_width);
tmp_args_element_value_91 = par_pad_width;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 916;
{
    PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91};
    tmp_iter_arg_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_33, call_args);
}

if (tmp_iter_arg_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_125 = MAKE_ITERATOR(tstate, tmp_iter_arg_22);
CHECK_OBJECT(tmp_iter_arg_22);
Py_DECREF(tmp_iter_arg_22);
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_10__for_iterator == NULL);
tmp_for_loop_10__for_iterator = tmp_assign_source_125;
}
// Tried code:
loop_start_11:;
{
PyObject *tmp_next_source_10;
PyObject *tmp_assign_source_126;
CHECK_OBJECT(tmp_for_loop_10__for_iterator);
tmp_next_source_10 = tmp_for_loop_10__for_iterator;
tmp_assign_source_126 = ITERATOR_NEXT(tmp_next_source_10);
if (tmp_assign_source_126 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_11;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
exception_lineno = 916;
        goto try_except_handler_41;
    }
}

{
    PyObject *old = tmp_for_loop_10__iter_value;
    tmp_for_loop_10__iter_value = tmp_assign_source_126;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_127;
PyObject *tmp_iter_arg_23;
CHECK_OBJECT(tmp_for_loop_10__iter_value);
tmp_iter_arg_23 = tmp_for_loop_10__iter_value;
tmp_assign_source_127 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_23);
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_42;
}
{
    PyObject *old = tmp_tuple_unpack_12__source_iter;
    tmp_tuple_unpack_12__source_iter = tmp_assign_source_127;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_128;
PyObject *tmp_unpack_26;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_unpack_26 = tmp_tuple_unpack_12__source_iter;
tmp_assign_source_128 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_26, 0, 2);
if (tmp_assign_source_128 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_43;
}
{
    PyObject *old = tmp_tuple_unpack_12__element_1;
    tmp_tuple_unpack_12__element_1 = tmp_assign_source_128;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_129;
PyObject *tmp_unpack_27;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_unpack_27 = tmp_tuple_unpack_12__source_iter;
tmp_assign_source_129 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_27, 1, 2);
if (tmp_assign_source_129 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_43;
}
{
    PyObject *old = tmp_tuple_unpack_12__element_2;
    tmp_tuple_unpack_12__element_2 = tmp_assign_source_129;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_12;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
tmp_iterator_name_12 = tmp_tuple_unpack_12__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_12, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_43;
}
}
goto try_end_34;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
Py_DECREF(tmp_tuple_unpack_12__source_iter);
tmp_tuple_unpack_12__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto try_except_handler_42;
// End of try:
try_end_34:;
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_12__source_iter);
Py_DECREF(tmp_tuple_unpack_12__source_iter);
tmp_tuple_unpack_12__source_iter = NULL;
{
PyObject *tmp_assign_source_130;
CHECK_OBJECT(tmp_tuple_unpack_12__element_1);
tmp_assign_source_130 = tmp_tuple_unpack_12__element_1;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_130;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_12__element_1);
tmp_tuple_unpack_12__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_131;
PyObject *tmp_iter_arg_24;
CHECK_OBJECT(tmp_tuple_unpack_12__element_2);
tmp_iter_arg_24 = tmp_tuple_unpack_12__element_2;
tmp_assign_source_131 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_24);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_44;
}
{
    PyObject *old = tmp_tuple_unpack_13__source_iter;
    tmp_tuple_unpack_13__source_iter = tmp_assign_source_131;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_132;
PyObject *tmp_unpack_28;
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
tmp_unpack_28 = tmp_tuple_unpack_13__source_iter;
tmp_assign_source_132 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_28, 0, 2);
if (tmp_assign_source_132 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_45;
}
{
    PyObject *old = tmp_tuple_unpack_13__element_1;
    tmp_tuple_unpack_13__element_1 = tmp_assign_source_132;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_133;
PyObject *tmp_unpack_29;
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
tmp_unpack_29 = tmp_tuple_unpack_13__source_iter;
tmp_assign_source_133 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_29, 1, 2);
if (tmp_assign_source_133 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_45;
}
{
    PyObject *old = tmp_tuple_unpack_13__element_2;
    tmp_tuple_unpack_13__element_2 = tmp_assign_source_133;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_13;
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
tmp_iterator_name_13 = tmp_tuple_unpack_13__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_13, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_45;
}
}
goto try_end_35;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
Py_DECREF(tmp_tuple_unpack_13__source_iter);
tmp_tuple_unpack_13__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto try_except_handler_44;
// End of try:
try_end_35:;
goto try_end_36;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_13__element_1);
tmp_tuple_unpack_13__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_13__element_2);
tmp_tuple_unpack_13__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto try_except_handler_42;
// End of try:
try_end_36:;
goto try_end_37;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_12__element_1);
tmp_tuple_unpack_12__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_12__element_2);
tmp_tuple_unpack_12__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto try_except_handler_41;
// End of try:
try_end_37:;
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_13__source_iter);
Py_DECREF(tmp_tuple_unpack_13__source_iter);
tmp_tuple_unpack_13__source_iter = NULL;
{
PyObject *tmp_assign_source_134;
CHECK_OBJECT(tmp_tuple_unpack_13__element_1);
tmp_assign_source_134 = tmp_tuple_unpack_13__element_1;
{
    PyObject *old = var_left_index;
    var_left_index = tmp_assign_source_134;
    Py_INCREF(var_left_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_13__element_1);
tmp_tuple_unpack_13__element_1 = NULL;

{
PyObject *tmp_assign_source_135;
CHECK_OBJECT(tmp_tuple_unpack_13__element_2);
tmp_assign_source_135 = tmp_tuple_unpack_13__element_2;
{
    PyObject *old = var_right_index;
    var_right_index = tmp_assign_source_135;
    Py_INCREF(var_right_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_13__element_2);
tmp_tuple_unpack_13__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_12__element_2);
tmp_tuple_unpack_12__element_2 = NULL;

{
PyObject *tmp_assign_source_136;
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_92;
PyObject *tmp_args_element_value_93;
PyObject *tmp_args_element_value_94;
tmp_called_value_34 = module_var_accessor_numpy$lib$_arraypad_impl$_view_roi(tstate);
if (unlikely(tmp_called_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__view_roi);
}

if (tmp_called_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 917;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 917;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}

tmp_args_element_value_92 = var_padded;
if (var_original_area_slice == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_original_area_slice);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 917;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}

tmp_args_element_value_93 = var_original_area_slice;
CHECK_OBJECT(var_axis);
tmp_args_element_value_94 = var_axis;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 917;
{
    PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94};
    tmp_assign_source_136 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_34, call_args);
}

if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 917;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
{
    PyObject *old = var_roi;
    var_roi = tmp_assign_source_136;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_137;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_20;
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 918;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}

tmp_expression_value_45 = var_padded;
tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_shape);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 918;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
CHECK_OBJECT(var_axis);
tmp_subscript_value_20 = var_axis;
tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_20);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 918;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
CHECK_OBJECT(var_right_index);
tmp_sub_expr_right_3 = var_right_index;
tmp_sub_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 918;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
CHECK_OBJECT(var_left_index);
tmp_sub_expr_right_2 = var_left_index;
tmp_assign_source_137 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 918;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
{
    PyObject *old = var_original_period;
    var_original_period = tmp_assign_source_137;
    Py_XDECREF(old);
}

}
loop_start_12:;
{
bool tmp_condition_result_26;
PyObject *tmp_operand_value_4;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
PyObject *tmp_cmp_expr_left_25;
PyObject *tmp_cmp_expr_right_25;
if (var_left_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_left_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 919;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}

tmp_cmp_expr_left_24 = var_left_index;
tmp_cmp_expr_right_24 = const_int_0;
tmp_or_left_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 919;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 919;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
if (var_right_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_right_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 919;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}

tmp_cmp_expr_left_25 = var_right_index;
tmp_cmp_expr_right_25 = const_int_0;
tmp_or_right_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 919;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
tmp_operand_value_4 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_operand_value_4 = tmp_or_left_value_3;
or_end_3:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 919;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
tmp_condition_result_26 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
goto loop_end_12;
branch_no_26:;
// Tried code:
{
PyObject *tmp_assign_source_138;
PyObject *tmp_iter_arg_25;
PyObject *tmp_called_value_35;
PyObject *tmp_args_element_value_95;
PyObject *tmp_args_element_value_96;
PyObject *tmp_args_element_value_97;
PyObject *tmp_tuple_element_12;
PyObject *tmp_args_element_value_98;
tmp_called_value_35 = module_var_accessor_numpy$lib$_arraypad_impl$_set_wrap_both(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__set_wrap_both);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_46;
}
if (var_roi == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_roi);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 924;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_46;
}

tmp_args_element_value_95 = var_roi;
if (var_axis == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 924;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_46;
}

tmp_args_element_value_96 = var_axis;
if (var_left_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_left_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 924;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_46;
}

tmp_tuple_element_12 = var_left_index;
tmp_args_element_value_97 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_97, 0, tmp_tuple_element_12);
if (var_right_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_right_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 924;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_9;
}

tmp_tuple_element_12 = var_right_index;
PyTuple_SET_ITEM0(tmp_args_element_value_97, 1, tmp_tuple_element_12);
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_args_element_value_97);
goto try_except_handler_46;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
if (var_original_period == NULL) {
Py_DECREF(tmp_args_element_value_97);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_original_period);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 924;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_46;
}

tmp_args_element_value_98 = var_original_period;
frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame.f_lineno = 923;
{
    PyObject *call_args[] = {tmp_args_element_value_95, tmp_args_element_value_96, tmp_args_element_value_97, tmp_args_element_value_98};
    tmp_iter_arg_25 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_35, call_args);
}

CHECK_OBJECT(tmp_args_element_value_97);
Py_DECREF(tmp_args_element_value_97);
if (tmp_iter_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_46;
}
tmp_assign_source_138 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_25);
CHECK_OBJECT(tmp_iter_arg_25);
Py_DECREF(tmp_iter_arg_25);
if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_46;
}
{
    PyObject *old = tmp_tuple_unpack_14__source_iter;
    tmp_tuple_unpack_14__source_iter = tmp_assign_source_138;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_139;
PyObject *tmp_unpack_30;
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
tmp_unpack_30 = tmp_tuple_unpack_14__source_iter;
tmp_assign_source_139 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_30, 0, 2);
if (tmp_assign_source_139 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_47;
}
{
    PyObject *old = tmp_tuple_unpack_14__element_1;
    tmp_tuple_unpack_14__element_1 = tmp_assign_source_139;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_140;
PyObject *tmp_unpack_31;
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
tmp_unpack_31 = tmp_tuple_unpack_14__source_iter;
tmp_assign_source_140 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_31, 1, 2);
if (tmp_assign_source_140 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_47;
}
{
    PyObject *old = tmp_tuple_unpack_14__element_2;
    tmp_tuple_unpack_14__element_2 = tmp_assign_source_140;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_14;
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
tmp_iterator_name_14 = tmp_tuple_unpack_14__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_14, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_47;
}
}
goto try_end_38;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
Py_DECREF(tmp_tuple_unpack_14__source_iter);
tmp_tuple_unpack_14__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto try_except_handler_46;
// End of try:
try_end_38:;
goto try_end_39;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_14__element_1);
tmp_tuple_unpack_14__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_14__element_2);
tmp_tuple_unpack_14__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto try_except_handler_41;
// End of try:
try_end_39:;
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_14__source_iter);
Py_DECREF(tmp_tuple_unpack_14__source_iter);
tmp_tuple_unpack_14__source_iter = NULL;
{
PyObject *tmp_assign_source_141;
CHECK_OBJECT(tmp_tuple_unpack_14__element_1);
tmp_assign_source_141 = tmp_tuple_unpack_14__element_1;
{
    PyObject *old = var_left_index;
    var_left_index = tmp_assign_source_141;
    Py_INCREF(var_left_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_14__element_1);
tmp_tuple_unpack_14__element_1 = NULL;

{
PyObject *tmp_assign_source_142;
CHECK_OBJECT(tmp_tuple_unpack_14__element_2);
tmp_assign_source_142 = tmp_tuple_unpack_14__element_2;
{
    PyObject *old = var_right_index;
    var_right_index = tmp_assign_source_142;
    Py_INCREF(var_right_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_14__element_2);
tmp_tuple_unpack_14__element_2 = NULL;

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 919;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
goto loop_start_12;
loop_end_12:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 916;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
}
goto loop_start_11;
loop_end_11:;
goto try_end_40;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_10__iter_value);
tmp_for_loop_10__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_10__for_iterator);
CHECK_OBJECT(tmp_for_loop_10__for_iterator);
Py_DECREF(tmp_for_loop_10__for_iterator);
tmp_for_loop_10__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto frame_exception_exit_1;
// End of try:
try_end_40:;
Py_XDECREF(tmp_for_loop_10__iter_value);
tmp_for_loop_10__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_10__for_iterator);
CHECK_OBJECT(tmp_for_loop_10__for_iterator);
Py_DECREF(tmp_for_loop_10__for_iterator);
tmp_for_loop_10__for_iterator = NULL;
branch_no_25:;
branch_end_22:;
branch_end_21:;
branch_end_20:;
branch_end_19:;
branch_end_17:;
branch_no_16:;
branch_end_15:;
if (var_padded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padded);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 926;
type_description_1 = "oooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_padded;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad,
    type_description_1,
    par_array,
    par_pad_width,
    par_mode,
    par_kwargs,
    var_seq,
    var_axis,
    var_width,
    var_both,
    var_before,
    var_after,
    var_invalid,
    var_function,
    var_padded,
    var__,
    var_view,
    var_inds,
    var_ind,
    var_allowed_kwargs,
    var_unsupported_kwargs,
    var_stat_functions,
    var_original_area_slice,
    var_axes,
    var_values,
    var_width_pair,
    var_value_pair,
    var_roi,
    var_edge_pair,
    var_end_values,
    var_ramp_pair,
    var_func,
    var_length,
    var_length_pair,
    var_stat_pair,
    var_method,
    var_include_edge,
    var_left_index,
    var_right_index,
    var_original_period
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad == cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad);
    cache_frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraypad_impl$$$function__13_pad);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_array);
par_array = NULL;
CHECK_OBJECT(par_pad_width);
CHECK_OBJECT(par_pad_width);
Py_DECREF(par_pad_width);
par_pad_width = NULL;
Py_XDECREF(var_seq);
var_seq = NULL;
Py_XDECREF(var_axis);
var_axis = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_both);
var_both = NULL;
Py_XDECREF(var_before);
var_before = NULL;
Py_XDECREF(var_after);
var_after = NULL;
Py_XDECREF(var_invalid);
var_invalid = NULL;
Py_XDECREF(var_function);
var_function = NULL;
Py_XDECREF(var_padded);
var_padded = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_view);
var_view = NULL;
Py_XDECREF(var_inds);
var_inds = NULL;
Py_XDECREF(var_ind);
var_ind = NULL;
Py_XDECREF(var_allowed_kwargs);
var_allowed_kwargs = NULL;
Py_XDECREF(var_unsupported_kwargs);
var_unsupported_kwargs = NULL;
Py_XDECREF(var_stat_functions);
var_stat_functions = NULL;
Py_XDECREF(var_original_area_slice);
var_original_area_slice = NULL;
Py_XDECREF(var_axes);
var_axes = NULL;
Py_XDECREF(var_values);
var_values = NULL;
Py_XDECREF(var_width_pair);
var_width_pair = NULL;
Py_XDECREF(var_value_pair);
var_value_pair = NULL;
Py_XDECREF(var_roi);
var_roi = NULL;
Py_XDECREF(var_edge_pair);
var_edge_pair = NULL;
Py_XDECREF(var_end_values);
var_end_values = NULL;
Py_XDECREF(var_ramp_pair);
var_ramp_pair = NULL;
Py_XDECREF(var_func);
var_func = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_length_pair);
var_length_pair = NULL;
Py_XDECREF(var_stat_pair);
var_stat_pair = NULL;
Py_XDECREF(var_method);
var_method = NULL;
Py_XDECREF(var_include_edge);
var_include_edge = NULL;
Py_XDECREF(var_left_index);
var_left_index = NULL;
Py_XDECREF(var_right_index);
var_right_index = NULL;
Py_XDECREF(var_original_period);
var_original_period = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_array);
par_array = NULL;
Py_XDECREF(par_pad_width);
par_pad_width = NULL;
Py_XDECREF(var_seq);
var_seq = NULL;
Py_XDECREF(var_axis);
var_axis = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_both);
var_both = NULL;
Py_XDECREF(var_before);
var_before = NULL;
Py_XDECREF(var_after);
var_after = NULL;
Py_XDECREF(var_invalid);
var_invalid = NULL;
Py_XDECREF(var_function);
var_function = NULL;
Py_XDECREF(var_padded);
var_padded = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_view);
var_view = NULL;
Py_XDECREF(var_inds);
var_inds = NULL;
Py_XDECREF(var_ind);
var_ind = NULL;
Py_XDECREF(var_allowed_kwargs);
var_allowed_kwargs = NULL;
Py_XDECREF(var_unsupported_kwargs);
var_unsupported_kwargs = NULL;
Py_XDECREF(var_stat_functions);
var_stat_functions = NULL;
Py_XDECREF(var_original_area_slice);
var_original_area_slice = NULL;
Py_XDECREF(var_axes);
var_axes = NULL;
Py_XDECREF(var_values);
var_values = NULL;
Py_XDECREF(var_width_pair);
var_width_pair = NULL;
Py_XDECREF(var_value_pair);
var_value_pair = NULL;
Py_XDECREF(var_roi);
var_roi = NULL;
Py_XDECREF(var_edge_pair);
var_edge_pair = NULL;
Py_XDECREF(var_end_values);
var_end_values = NULL;
Py_XDECREF(var_ramp_pair);
var_ramp_pair = NULL;
Py_XDECREF(var_func);
var_func = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_length_pair);
var_length_pair = NULL;
Py_XDECREF(var_stat_pair);
var_stat_pair = NULL;
Py_XDECREF(var_method);
var_method = NULL;
Py_XDECREF(var_include_edge);
var_include_edge = NULL;
Py_XDECREF(var_left_index);
var_left_index = NULL;
Py_XDECREF(var_right_index);
var_right_index = NULL;
Py_XDECREF(var_original_period);
var_original_period = NULL;
// Re-raise.
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$lib$_arraypad_impl$$$function__13_pad$$$genexpr__1_genexpr_locals {
PyObject *var_ind;
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

static PyObject *numpy$lib$_arraypad_impl$$$function__13_pad$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_arraypad_impl$$$function__13_pad$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$lib$_arraypad_impl$$$function__13_pad$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_ind = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_386f28347a37407be86d8b8d745468b3, module_numpy$lib$_arraypad_impl, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 811;
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
    PyObject *old = generator_heap->var_ind;
    generator_heap->var_ind = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_ind);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_ind);
tmp_add_expr_left_1 = generator_heap->var_ind;
tmp_add_expr_right_1 = mod_consts.const_tuple_ellipsis_tuple;
tmp_expression_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 811;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 811;
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


generator_heap->exception_lineno = 811;
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
    generator_heap->var_ind
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

Py_XDECREF(generator_heap->var_ind);
generator_heap->var_ind = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_ind);
generator_heap->var_ind = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$_arraypad_impl$$$function__13_pad$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_arraypad_impl$$$function__13_pad$$$genexpr__1_genexpr_context,
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_fd096b3979fb57a7dd585a7ce3a49e25,
#endif
        code_objects_386f28347a37407be86d8b8d745468b3,
        closure,
        1,
#if 1
        sizeof(struct numpy$lib$_arraypad_impl$$$function__13_pad$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both,
        mod_consts.const_str_plain__set_wrap_both,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a81eea36467e7385f3ab6a95ca345d84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_89f1b91e10adcc5e9a54a1da6f8e7a64,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__11__as_pairs(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__11__as_pairs,
        mod_consts.const_str_plain__as_pairs,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6b2809d09ee9208f44c0274383dd2dbe,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_d6b6b2294a6e0e409f6a3deb6d8986b9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__12__pad_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__12__pad_dispatcher,
        mod_consts.const_str_plain__pad_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_47f0cb83a8465c10d6c6b3be7c5f5c7e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__13_pad(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__13_pad,
        mod_consts.const_str_plain_pad,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_007734c99cae469ce03774e993fc1b6c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_cc2fd7e45e21e2de8058694fbd0122e4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__1__round_if_needed(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__1__round_if_needed,
        mod_consts.const_str_plain__round_if_needed,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3bad05f228ee79806591ad42992e4b12,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_03f245eba4da96ccab846f63766af4a7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis,
        mod_consts.const_str_plain__slice_at_axis,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a16f54acce22406c45de7520e114536b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_aff7bd1837bb2b5d336035cb48fdcd1c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__3__view_roi(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__3__view_roi,
        mod_consts.const_str_plain__view_roi,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8b028ddf3be40bb5fff8855275459e2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_0fce7212064f6f1f07beb3780d921c3f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__4__pad_simple(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__4__pad_simple,
        mod_consts.const_str_plain__pad_simple,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f9c11ef755ea3c75b7c18efd6cfdc53d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_a016ea4fb5e73a4a8295525f5bef3d29,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__5__set_pad_area(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__5__set_pad_area,
        mod_consts.const_str_plain__set_pad_area,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cf22845a1d97b996bf865eeae26a3432,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_1bfce939787827f6acde20c4d259d98b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__6__get_edges(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__6__get_edges,
        mod_consts.const_str_plain__get_edges,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7d4d398accbe3e5d43ed7cc5bbf935ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_0ead47059378d801021b15a3a2c39daf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps,
        mod_consts.const_str_plain__get_linear_ramps,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c146d72414cc53dc0bed47ea9ab07d4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_18ac93c4c9f584955a470cfa75d787ff,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__8__get_stats(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__8__get_stats,
        mod_consts.const_str_plain__get_stats,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2c5e5c1cdfc1e62c87554dd2d5b8a3d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_88efd53ead07eb173da6628b99a430de,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both,
        mod_consts.const_str_plain__set_reflect_both,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_68ea94e40b1895e47017549901bb5179,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraypad_impl,
        mod_consts.const_str_digest_7afac852ff6edd143a16d90137f7e413,
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

static function_impl_code const function_table_numpy$lib$_arraypad_impl[] = {
impl_numpy$lib$_arraypad_impl$$$function__1__round_if_needed,
impl_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis,
impl_numpy$lib$_arraypad_impl$$$function__3__view_roi,
impl_numpy$lib$_arraypad_impl$$$function__4__pad_simple,
impl_numpy$lib$_arraypad_impl$$$function__5__set_pad_area,
impl_numpy$lib$_arraypad_impl$$$function__6__get_edges,
impl_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps,
impl_numpy$lib$_arraypad_impl$$$function__8__get_stats,
impl_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both,
impl_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both,
impl_numpy$lib$_arraypad_impl$$$function__11__as_pairs,
impl_numpy$lib$_arraypad_impl$$$function__12__pad_dispatcher,
impl_numpy$lib$_arraypad_impl$$$function__13_pad,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$lib$_arraypad_impl);
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
        module_numpy$lib$_arraypad_impl,
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
        function_table_numpy$lib$_arraypad_impl,
        sizeof(function_table_numpy$lib$_arraypad_impl) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.lib._arraypad_impl";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$lib$_arraypad_impl(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$_arraypad_impl");

    // Store the module for future use.
    module_numpy$lib$_arraypad_impl = module;

    moduledict_numpy$lib$_arraypad_impl = MODULE_DICT(module_numpy$lib$_arraypad_impl);

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
        PRINT_STRING("numpy$lib$_arraypad_impl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$_arraypad_impl: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$_arraypad_impl: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._arraypad_impl" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$_arraypad_impl\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$_arraypad_impl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_arraypad_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_arraypad_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_arraypad_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_arraypad_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$_arraypad_impl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$_arraypad_impl);
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

        UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraypad_impl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_5ad18139b34c6f99a052e7399060ad1e;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$lib$_arraypad_impl = MAKE_MODULE_FRAME(code_objects_812e5f34a4022348096d6a78aad3afa3, module_numpy$lib$_arraypad_impl);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraypad_impl);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraypad_impl) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$lib$_arraypad_impl$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$lib$_arraypad_impl$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_arraypad_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_arraypad_impl->m_frame.f_lineno = 8;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_arraypad_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_array_function_dispatch_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_arraypad_impl->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_arraypad_impl,
        mod_consts.const_str_plain_array_function_dispatch,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_array_function_dispatch);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$_arraypad_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ndindex_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$lib$_arraypad_impl->m_frame.f_lineno = 10;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$lib$_arraypad_impl,
        mod_consts.const_str_plain_ndindex,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ndindex);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ndindex, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST1(tstate, mod_consts.const_str_plain_pad);
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;

tmp_assign_source_9 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__1__round_if_needed(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__round_if_needed, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;

tmp_assign_source_10 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__2__slice_at_axis(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__slice_at_axis, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;

tmp_assign_source_11 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__3__view_roi(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__view_roi, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_12 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__4__pad_simple(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_simple, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;

tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__5__set_pad_area(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_pad_area, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__6__get_edges(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_edges, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__7__get_linear_ramps(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_linear_ramps, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__8__get_stats(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_stats, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__9__set_reflect_both(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_reflect_both, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__10__set_wrap_both(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__set_wrap_both, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__11__as_pairs(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__as_pairs, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__12__pad_dispatcher(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pad_dispatcher, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_defaults_5;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraypad_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 546;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_numpy$lib$_arraypad_impl$_pad_dispatcher(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
frame_frame_numpy$lib$_arraypad_impl->m_frame.f_lineno = 546;
tmp_called_value_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;

    goto frame_exception_exit_1;
}
tmp_defaults_5 = mod_consts.const_tuple_str_plain_constant_tuple;
Py_INCREF(tmp_defaults_5);

tmp_args_element_value_1 = MAKE_FUNCTION_numpy$lib$_arraypad_impl$$$function__13_pad(tstate, tmp_defaults_5);

frame_frame_numpy$lib$_arraypad_impl->m_frame.f_lineno = 546;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_pad, tmp_assign_source_21);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraypad_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraypad_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraypad_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$lib$_arraypad_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$_arraypad_impl", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._arraypad_impl" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$_arraypad_impl);
    return module_numpy$lib$_arraypad_impl;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraypad_impl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$_arraypad_impl", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'numpy$lib$_histograms_impl'
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



/* The "module_numpy$lib$_histograms_impl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$_histograms_impl;
PyDictObject *moduledict_numpy$lib$_histograms_impl;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__unsigned_subtract;
PyObject *const_str_plain_max;
PyObject *const_str_plain_min;
PyObject *const_str_digest_6ee1a2f71b807a229ed2c96d1e64d5d5;
PyObject *const_str_plain__ptp;
PyObject *const_str_plain_np;
PyObject *const_str_plain_sqrt;
PyObject *const_str_plain_size;
PyObject *const_str_digest_f2611f10d20cfe900c497209ec5904ae;
PyObject *const_str_plain_log2;
PyObject *const_str_digest_4b25f49ae6c2f56579440792d14ae6a3;
PyObject *const_float_2_0;
PyObject *const_float_0_3333333333333333;
PyObject *const_str_digest_4fe5cffd5e52c813d913573733b38d46;
PyObject *const_float_24_0;
PyObject *const_str_plain_pi;
PyObject *const_float_0_5;
PyObject *const_str_plain_std;
PyObject *const_str_digest_126c24fa072903e3f0d47fa71f5c46d4;
PyObject *const_str_plain_jhat;
PyObject *const_str_digest_0fd412be68fda30b7d8200dff02a084e;
PyObject *const_int_pos_100;
PyObject *const_str_plain__range;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_5edbc2f26ee97665f4b7769eeaba00a7;
PyObject *const_str_plain_RuntimeWarning;
PyObject *const_dict_2254aca578e492e580f4e46a40647b9b;
PyObject *const_str_digest_f13dbaaef70fd5e866c4d530ed33a747;
PyObject *const_str_plain_ptp_x;
PyObject *const_str_plain_histogram;
PyObject *const_str_plain_x;
PyObject *const_tuple_str_plain_bins_str_plain_range_tuple;
PyObject *const_str_plain_n;
PyObject *const_int_pos_2;
PyObject *const_str_plain_dot;
PyObject *const_float_6_0;
PyObject *const_int_pos_3;
PyObject *const_str_plain_mean;
PyObject *const_str_plain_true_divide;
PyObject *const_str_plain_power;
PyObject *const_str_plain_absolute;
PyObject *const_str_digest_c62131e403645d778322adf39d0e4c98;
PyObject *const_str_plain_subtract;
PyObject *const_str_plain_percentile;
PyObject *const_int_pos_75;
PyObject *const_int_pos_25;
PyObject *const_float_minus_0_3333333333333333;
PyObject *const_str_digest_8e15b1be02fb3043215104e9eb57a4d4;
PyObject *const_str_plain__hist_bin_fd;
PyObject *const_str_plain__hist_bin_sturges;
PyObject *const_str_plain__hist_bin_sqrt;
PyObject *const_str_digest_4cc2c6a5b5def2d684d469b9e6148ef4;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_bool;
PyObject *const_str_digest_d949dc1e1361aded3f04c871c74577b5;
PyObject *const_str_digest_2f10f3aac0af954837b555bf8d7e64bd;
PyObject *const_str_plain_uint8;
PyObject *const_str_digest_771455868b5fb99e8bf9207335e12d20;
PyObject *const_str_plain_astype;
PyObject *const_str_plain_shape;
PyObject *const_str_plain_a;
PyObject *const_str_digest_ab62ef9e1e0a621517e2efda8ed1e995;
PyObject *const_str_plain_ravel;
PyObject *const_str_digest_8552d50bc8df8546bbd1e0564276af33;
PyObject *const_str_digest_ebb66978bbbca4473fc0ea06c02391f4;
PyObject *const_str_plain_isfinite;
PyObject *const_str_digest_174a350a6f315b2215d69663dba7f92c;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_digest_6ddb6786cb6aed201f7dc79ca77979e8;
PyObject *const_tuple_int_0_int_pos_1_tuple;
PyObject *const_str_digest_54e3e56d15bc8901d081a3c1887cf9bf;
PyObject *const_str_plain_first_edge;
PyObject *const_str_plain_last_edge;
PyObject *const_str_digest_1bc43257067aeb2135a5f29eb538efc7;
PyObject *const_str_plain_byte;
PyObject *const_str_plain_ubyte;
PyObject *const_str_plain_short;
PyObject *const_str_plain_ushort;
PyObject *const_str_plain_intc;
PyObject *const_str_plain_uintc;
PyObject *const_str_plain_int_;
PyObject *const_str_plain_uint;
PyObject *const_str_plain_longlong;
PyObject *const_str_plain_ulonglong;
PyObject *const_str_plain_result_type;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain_unsafe;
PyObject *const_tuple_str_plain_casting_str_plain_dtype_tuple;
PyObject *const_str_digest_f5a2334568c058c943c705bf4e734aa2;
PyObject *const_str_plain__hist_bin_selectors;
PyObject *const_str_digest_43ade2c9399cae245ad292142a7a849f;
PyObject *const_str_digest_8f4feae6666d6286958836942304ebb9;
PyObject *const_str_plain__get_outer_edges;
PyObject *const_str_plain_logical_and;
PyObject *const_str_plain_reduce;
PyObject *const_str_plain_issubdtype;
PyObject *const_str_plain_integer;
PyObject *const_str_plain_ceil;
PyObject *const_str_plain_ndim;
PyObject *const_str_plain_operator;
PyObject *const_str_plain_index;
PyObject *const_str_digest_187e8a092d90bb33273f86353a526cfc;
PyObject *const_str_digest_de822264a87a8f251ed358c29ef1e728;
PyObject *const_str_plain_any;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_digest_100ecf9040cd8cf695cf29d8f85c977d;
PyObject *const_str_digest_356e1443c2d562ea3a8727214b874ff1;
PyObject *const_str_plain_linspace;
PyObject *const_str_plain_bin_type;
PyObject *const_tuple_str_plain_endpoint_str_plain_dtype_tuple;
PyObject *const_str_digest_2d786d4bf6b8399acb47ef3364f94e3b;
PyObject *const_str_digest_33983fc1d02dd38f6e08cb05c034bc88;
PyObject *const_str_digest_99d14c6036fa6269382498e9baa3d9a3;
PyObject *const_str_plain_concatenate;
PyObject *const_str_plain_searchsorted;
PyObject *const_str_plain_left;
PyObject *const_slice_int_neg_1_none_none;
PyObject *const_str_plain_right;
PyObject *const_str_digest_9f10145a7f3d60501e48731baa0252b9;
PyObject *const_str_plain__ravel_and_check_weights;
PyObject *const_str_plain__get_bin_edges;
PyObject *const_str_digest_1c850fcf2a1ca647f9fc0608c3cfcdaf;
PyObject *const_str_plain_intp;
PyObject *const_int_pos_65536;
PyObject *const_str_plain_can_cast;
PyObject *const_str_plain_double;
PyObject *const_str_plain_zeros;
PyObject *const_str_plain_BLOCK;
PyObject *const_str_plain_bin_edges;
PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
PyObject *const_str_plain_norm_denom;
PyObject *const_str_plain_norm_numerator;
PyObject *const_str_plain_n_equal_bins;
PyObject *const_str_plain_ntype;
PyObject *const_str_plain_kind;
PyObject *const_str_plain_c;
PyObject *const_str_plain_real;
PyObject *const_str_plain_bincount;
PyObject *const_tuple_str_plain_weights_str_plain_minlength_tuple;
PyObject *const_str_plain_imag;
PyObject *const_str_plain_sort;
PyObject *const_str_plain_cum_n;
PyObject *const_str_plain__search_sorted_inclusive;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_argsort;
PyObject *const_str_plain_zero;
PyObject *const_str_plain_cumsum;
PyObject *const_str_plain_diff;
PyObject *const_str_plain_array;
PyObject *const_str_digest_a649bf60bf84e3e87c1590fb5cbad58c;
PyObject *const_str_plain_sample;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_suppress;
PyObject *const_tuple_type_TypeError_tuple;
PyObject *const_str_plain_bins;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_weights;
PyObject *const_str_plain__histogramdd_dispatcher;
PyObject *const_tuple_type_AttributeError_type_ValueError_tuple;
PyObject *const_str_plain_atleast_2d;
PyObject *const_str_plain_T;
PyObject *const_str_plain_empty;
PyObject *const_str_digest_0221a4dc3c37225cf5d316ceeffc51f5;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_501dd2c789346deefe2dddd8ff4becbd;
PyObject *const_str_digest_d1389b573d48790e9da91f79c93f40a7;
PyObject *const_str_digest_f1aa002c445aed7bcf2c43bb331dfb4d;
PyObject *const_slice_none_none_none;
PyObject *const_str_digest_39be9943bd6fa0d4c7105858b312b765;
PyObject *const_str_plain_edges;
PyObject *const_str_digest_ccb1256e900177bd2a9674c0b855f065;
PyObject *const_str_digest_7088b215ac661140e6a7ad56c5202027;
PyObject *const_str_plain_nbin;
PyObject *const_str_plain_dedges;
PyObject *const_str_plain_ravel_multi_index;
PyObject *const_str_plain_prod;
PyObject *const_tuple_str_plain_minlength_tuple;
PyObject *const_str_plain_reshape;
PyObject *const_tuple_type_float_str_plain_safe_tuple;
PyObject *const_tuple_str_plain_casting_tuple;
PyObject *const_tuple_slice_int_pos_1_int_neg_1_none_tuple;
PyObject *const_str_plain_ones;
PyObject *const_str_plain_D;
PyObject *const_str_plain_hist;
PyObject *const_str_digest_c36188fbce638baed40e442f74a20029;
PyObject *const_str_digest_c6c625c309a9b0ae140b94984d9de2ab;
PyObject *const_dict_607b85ec57ab5596c680ca014e9c8645;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_0ce187624ef22ccd08ff04d3de49f4e9;
PyObject *const_str_digest_f3824405d2304e81109b98c68808ad2e;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_218a55714e76c818c59b93d99676c0b2;
PyObject *const_tuple_str_plain_overrides_tuple;
PyObject *const_str_plain_overrides;
PyObject *const_str_plain_histogramdd;
PyObject *const_str_plain_histogram_bin_edges;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_array_function_dispatch;
PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
PyObject *const_str_plain__hist_bin_rice;
PyObject *const_str_plain__hist_bin_scott;
PyObject *const_str_plain__hist_bin_stone;
PyObject *const_str_plain__hist_bin_doane;
PyObject *const_str_plain__hist_bin_auto;
PyObject *const_str_plain_stone;
PyObject *const_str_plain_auto;
PyObject *const_str_plain_doane;
PyObject *const_str_plain_fd;
PyObject *const_str_plain_rice;
PyObject *const_str_plain_scott;
PyObject *const_str_plain_sturges;
PyObject *const_str_plain__histogram_bin_edges_dispatcher;
PyObject *const_tuple_int_pos_10_none_none_tuple;
PyObject *const_tuple_none_none_none_none_tuple;
PyObject *const_str_plain__histogram_dispatcher;
PyObject *const_tuple_int_pos_10_none_none_none_tuple;
PyObject *const_str_digest_d8e1483f2ffe71893f65b582ceaca34d;
PyObject *const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple;
PyObject *const_str_digest_4b1bfbbb5a28b78cd55325f925bd56f8;
PyObject *const_tuple_53f8348fbccb786e4f0fe380bac0f7b0_tuple;
PyObject *const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple;
PyObject *const_tuple_1b7b1bb76f0cd887b765f252b00252c4_tuple;
PyObject *const_tuple_707a4481a62b09650e80b69d8214f005_tuple;
PyObject *const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple;
PyObject *const_tuple_str_plain_x_str_plain_range_tuple;
PyObject *const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple;
PyObject *const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple;
PyObject *const_tuple_e5bbdcf52b8afd237141701bf859d51a_tuple;
PyObject *const_tuple_e21997098a340426a142ddd1666a12dc_tuple;
PyObject *const_tuple_str_plain_x_tuple;
PyObject *const_tuple_str_plain_a_str_plain_weights_str_plain_msg_tuple;
PyObject *const_tuple_str_plain_a_str_plain_v_tuple;
PyObject *const_tuple_1463e74831e234c85e5c445b144c231a_tuple;
PyObject *const_tuple_eadf81e3a2c8745f6d8c98e0c04c2b4a_tuple;
PyObject *const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple;
PyObject *const_tuple_41fdd810e3b7f6dce47ecd4a7a438db7_tuple;
PyObject *const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple;
PyObject *const_tuple_str_plain_n_str_plain_ptp_x_str_plain_range_str_plain_x_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[245];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.lib._histograms_impl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__unsigned_subtract);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ee1a2f71b807a229ed2c96d1e64d5d5);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__ptp);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2611f10d20cfe900c497209ec5904ae);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_log2);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b25f49ae6c2f56579440792d14ae6a3);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_float_2_0);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_float_0_3333333333333333);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_4fe5cffd5e52c813d913573733b38d46);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_float_24_0);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_pi);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_std);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_126c24fa072903e3f0d47fa71f5c46d4);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_jhat);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_0fd412be68fda30b7d8200dff02a084e);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__range);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_5edbc2f26ee97665f4b7769eeaba00a7);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeWarning);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_f13dbaaef70fd5e866c4d530ed33a747);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_ptp_x);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_histogram);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bins_str_plain_range_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_dot);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_float_6_0);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_mean);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_true_divide);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_power);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_absolute);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_c62131e403645d778322adf39d0e4c98);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_subtract);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_percentile);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_75);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_25);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_float_minus_0_3333333333333333);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e15b1be02fb3043215104e9eb57a4d4);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_fd);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_sturges);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_sqrt);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_4cc2c6a5b5def2d684d469b9e6148ef4);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_d949dc1e1361aded3f04c871c74577b5);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f10f3aac0af954837b555bf8d7e64bd);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_uint8);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_771455868b5fb99e8bf9207335e12d20);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_astype);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_a);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab62ef9e1e0a621517e2efda8ed1e995);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_ravel);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_8552d50bc8df8546bbd1e0564276af33);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_ebb66978bbbca4473fc0ea06c02391f4);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_isfinite);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_174a350a6f315b2215d69663dba7f92c);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ddb6786cb6aed201f7dc79ca77979e8);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_54e3e56d15bc8901d081a3c1887cf9bf);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_first_edge);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_edge);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bc43257067aeb2135a5f29eb538efc7);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_byte);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ubyte);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_short);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_ushort);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_intc);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_uintc);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_int_);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_uint);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_longlong);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_ulonglong);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_result_type);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_casting_str_plain_dtype_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5a2334568c058c943c705bf4e734aa2);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_selectors);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_43ade2c9399cae245ad292142a7a849f);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f4feae6666d6286958836942304ebb9);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_outer_edges);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_logical_and);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_reduce);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_issubdtype);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_integer);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_ceil);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_index);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_187e8a092d90bb33273f86353a526cfc);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_de822264a87a8f251ed358c29ef1e728);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_any);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_100ecf9040cd8cf695cf29d8f85c977d);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_356e1443c2d562ea3a8727214b874ff1);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_linspace);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_bin_type);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_endpoint_str_plain_dtype_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d786d4bf6b8399acb47ef3364f94e3b);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_33983fc1d02dd38f6e08cb05c034bc88);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_99d14c6036fa6269382498e9baa3d9a3);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_searchsorted);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_left);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_slice_int_neg_1_none_none);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_right);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f10145a7f3d60501e48731baa0252b9);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__ravel_and_check_weights);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_bin_edges);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c850fcf2a1ca647f9fc0608c3cfcdaf);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_intp);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_int_pos_65536);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_cast);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_double);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_zeros);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_BLOCK);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_bin_edges);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_dict_a7ab110deec347786bcfa718065f5388);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_norm_denom);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_norm_numerator);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_n_equal_bins);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ntype);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_kind);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_real);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_bincount);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_weights_str_plain_minlength_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_imag);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_cum_n);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain__search_sorted_inclusive);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_argsort);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_zero);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_cumsum);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_diff);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_a649bf60bf84e3e87c1590fb5cbad58c);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_sample);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_bins);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_weights);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain__histogramdd_dispatcher);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_type_ValueError_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_atleast_2d);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_0221a4dc3c37225cf5d316ceeffc51f5);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_501dd2c789346deefe2dddd8ff4becbd);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1389b573d48790e9da91f79c93f40a7);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1aa002c445aed7bcf2c43bb331dfb4d);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_none);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_39be9943bd6fa0d4c7105858b312b765);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_edges);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccb1256e900177bd2a9674c0b855f065);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_7088b215ac661140e6a7ad56c5202027);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_nbin);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_dedges);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_ravel_multi_index);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_prod);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minlength_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_type_float_str_plain_safe_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_casting_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_slice_int_pos_1_int_neg_1_none_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_ones);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_D);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_hist);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_c36188fbce638baed40e442f74a20029);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6c625c309a9b0ae140b94984d9de2ab);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_607b85ec57ab5596c680ca014e9c8645);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ce187624ef22ccd08ff04d3de49f4e9);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3824405d2304e81109b98c68808ad2e);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_overrides_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_overrides);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_histogramdd);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_histogram_bin_edges);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_rice);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_scott);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_stone);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_doane);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_auto);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_stone);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_doane);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_fd);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_rice);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_scott);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_sturges);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain__histogram_bin_edges_dispatcher);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_none_none_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain__histogram_dispatcher);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_none_none_none_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8e1483f2ffe71893f65b582ceaca34d);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b1bfbbb5a28b78cd55325f925bd56f8);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_53f8348fbccb786e4f0fe380bac0f7b0_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_1b7b1bb76f0cd887b765f252b00252c4_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_707a4481a62b09650e80b69d8214f005_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_range_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_e5bbdcf52b8afd237141701bf859d51a_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_e21997098a340426a142ddd1666a12dc_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_weights_str_plain_msg_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_v_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_1463e74831e234c85e5c445b144c231a_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_eadf81e3a2c8745f6d8c98e0c04c2b4a_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_41fdd810e3b7f6dce47ecd4a7a438db7_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_str_plain_ptp_x_str_plain_range_str_plain_x_tuple);
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
void checkModuleConstants_numpy$lib$_histograms_impl(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__unsigned_subtract));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unsigned_subtract);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ee1a2f71b807a229ed2c96d1e64d5d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ee1a2f71b807a229ed2c96d1e64d5d5);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__ptp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ptp);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sqrt);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2611f10d20cfe900c497209ec5904ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2611f10d20cfe900c497209ec5904ae);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_log2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log2);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b25f49ae6c2f56579440792d14ae6a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b25f49ae6c2f56579440792d14ae6a3);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_float_2_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_2_0);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_float_0_3333333333333333));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_3333333333333333);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_4fe5cffd5e52c813d913573733b38d46));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4fe5cffd5e52c813d913573733b38d46);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_float_24_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_24_0);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_pi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pi);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_float_0_5));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_5);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_std));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_std);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_126c24fa072903e3f0d47fa71f5c46d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_126c24fa072903e3f0d47fa71f5c46d4);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_jhat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jhat);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_0fd412be68fda30b7d8200dff02a084e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0fd412be68fda30b7d8200dff02a084e);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__range));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__range);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_5edbc2f26ee97665f4b7769eeaba00a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5edbc2f26ee97665f4b7769eeaba00a7);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RuntimeWarning);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_f13dbaaef70fd5e866c4d530ed33a747));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f13dbaaef70fd5e866c4d530ed33a747);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_ptp_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ptp_x);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_histogram));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_histogram);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bins_str_plain_range_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bins_str_plain_range_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_dot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dot);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_float_6_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_6_0);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_mean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mean);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_true_divide));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true_divide);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_power));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_power);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_absolute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_absolute);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_c62131e403645d778322adf39d0e4c98));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c62131e403645d778322adf39d0e4c98);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_subtract));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subtract);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_percentile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_percentile);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_75));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_75);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_25));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_25);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_float_minus_0_3333333333333333));
CHECK_OBJECT_DEEP(mod_consts.const_float_minus_0_3333333333333333);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e15b1be02fb3043215104e9eb57a4d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e15b1be02fb3043215104e9eb57a4d4);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hist_bin_fd);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_sturges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hist_bin_sturges);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_sqrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hist_bin_sqrt);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_4cc2c6a5b5def2d684d469b9e6148ef4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4cc2c6a5b5def2d684d469b9e6148ef4);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_d949dc1e1361aded3f04c871c74577b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d949dc1e1361aded3f04c871c74577b5);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f10f3aac0af954837b555bf8d7e64bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f10f3aac0af954837b555bf8d7e64bd);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_uint8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uint8);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_771455868b5fb99e8bf9207335e12d20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_771455868b5fb99e8bf9207335e12d20);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_astype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astype);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_a));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_a);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab62ef9e1e0a621517e2efda8ed1e995));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab62ef9e1e0a621517e2efda8ed1e995);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_ravel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ravel);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_8552d50bc8df8546bbd1e0564276af33));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8552d50bc8df8546bbd1e0564276af33);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_ebb66978bbbca4473fc0ea06c02391f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ebb66978bbbca4473fc0ea06c02391f4);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_isfinite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isfinite);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_174a350a6f315b2215d69663dba7f92c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_174a350a6f315b2215d69663dba7f92c);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ddb6786cb6aed201f7dc79ca77979e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ddb6786cb6aed201f7dc79ca77979e8);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_pos_1_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_54e3e56d15bc8901d081a3c1887cf9bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54e3e56d15bc8901d081a3c1887cf9bf);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_first_edge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_first_edge);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_edge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_edge);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bc43257067aeb2135a5f29eb538efc7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bc43257067aeb2135a5f29eb538efc7);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_byte));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byte);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_ubyte));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ubyte);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_short));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_short);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_ushort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ushort);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_intc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intc);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_uintc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uintc);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_int_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_int_);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_uint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uint);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_longlong));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_longlong);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_ulonglong));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ulonglong);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_result_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result_type);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsafe);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_casting_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_casting_str_plain_dtype_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5a2334568c058c943c705bf4e734aa2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5a2334568c058c943c705bf4e734aa2);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_selectors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hist_bin_selectors);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_43ade2c9399cae245ad292142a7a849f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43ade2c9399cae245ad292142a7a849f);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f4feae6666d6286958836942304ebb9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f4feae6666d6286958836942304ebb9);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_outer_edges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_outer_edges);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_logical_and));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logical_and);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_reduce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reduce);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_issubdtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issubdtype);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_integer);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_ceil));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ceil);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operator);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_index);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_187e8a092d90bb33273f86353a526cfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_187e8a092d90bb33273f86353a526cfc);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_de822264a87a8f251ed358c29ef1e728));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de822264a87a8f251ed358c29ef1e728);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_any);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_100ecf9040cd8cf695cf29d8f85c977d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_100ecf9040cd8cf695cf29d8f85c977d);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_356e1443c2d562ea3a8727214b874ff1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_356e1443c2d562ea3a8727214b874ff1);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_linspace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linspace);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_bin_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bin_type);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_endpoint_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_endpoint_str_plain_dtype_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d786d4bf6b8399acb47ef3364f94e3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d786d4bf6b8399acb47ef3364f94e3b);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_33983fc1d02dd38f6e08cb05c034bc88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33983fc1d02dd38f6e08cb05c034bc88);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_99d14c6036fa6269382498e9baa3d9a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99d14c6036fa6269382498e9baa3d9a3);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_concatenate);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_searchsorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_searchsorted);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_left);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_slice_int_neg_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_neg_1_none_none);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_right));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_right);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f10145a7f3d60501e48731baa0252b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f10145a7f3d60501e48731baa0252b9);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__ravel_and_check_weights));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ravel_and_check_weights);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_bin_edges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_bin_edges);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c850fcf2a1ca647f9fc0608c3cfcdaf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c850fcf2a1ca647f9fc0608c3cfcdaf);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_intp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intp);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_int_pos_65536));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65536);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_cast);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_double));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_double);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_zeros));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zeros);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_BLOCK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BLOCK);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_bin_edges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bin_edges);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_dict_a7ab110deec347786bcfa718065f5388));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a7ab110deec347786bcfa718065f5388);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_norm_denom));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_norm_denom);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_norm_numerator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_norm_numerator);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_n_equal_bins));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n_equal_bins);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ntype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ntype);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_kind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kind);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_real));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_real);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_bincount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bincount);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_weights_str_plain_minlength_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_weights_str_plain_minlength_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_imag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_imag);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_cum_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cum_n);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain__search_sorted_inclusive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__search_sorted_inclusive);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_argsort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argsort);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_zero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zero);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_cumsum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cumsum);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_diff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_diff);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_a649bf60bf84e3e87c1590fb5cbad58c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a649bf60bf84e3e87c1590fb5cbad58c);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_sample));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sample);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suppress);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_TypeError_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_bins));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bins);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_weights));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_weights);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain__histogramdd_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__histogramdd_dispatcher);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_type_ValueError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_AttributeError_type_ValueError_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_atleast_2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_atleast_2d);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_0221a4dc3c37225cf5d316ceeffc51f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0221a4dc3c37225cf5d316ceeffc51f5);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_501dd2c789346deefe2dddd8ff4becbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_501dd2c789346deefe2dddd8ff4becbd);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1389b573d48790e9da91f79c93f40a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1389b573d48790e9da91f79c93f40a7);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1aa002c445aed7bcf2c43bb331dfb4d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1aa002c445aed7bcf2c43bb331dfb4d);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_none);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_39be9943bd6fa0d4c7105858b312b765));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39be9943bd6fa0d4c7105858b312b765);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_edges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_edges);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccb1256e900177bd2a9674c0b855f065));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccb1256e900177bd2a9674c0b855f065);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_7088b215ac661140e6a7ad56c5202027));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7088b215ac661140e6a7ad56c5202027);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_nbin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nbin);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_dedges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dedges);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_ravel_multi_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ravel_multi_index);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_prod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prod);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minlength_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_minlength_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_reshape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reshape);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_type_float_str_plain_safe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_float_str_plain_safe_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_casting_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_casting_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_slice_int_pos_1_int_neg_1_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_slice_int_pos_1_int_neg_1_none_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_ones));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ones);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_D));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_D);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_hist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hist);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_c36188fbce638baed40e442f74a20029));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c36188fbce638baed40e442f74a20029);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6c625c309a9b0ae140b94984d9de2ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c6c625c309a9b0ae140b94984d9de2ab);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_607b85ec57ab5596c680ca014e9c8645));
CHECK_OBJECT_DEEP(mod_consts.const_dict_607b85ec57ab5596c680ca014e9c8645);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ce187624ef22ccd08ff04d3de49f4e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ce187624ef22ccd08ff04d3de49f4e9);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3824405d2304e81109b98c68808ad2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3824405d2304e81109b98c68808ad2e);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_overrides_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_overrides_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_overrides));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overrides);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_histogramdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_histogramdd);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_histogram_bin_edges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_histogram_bin_edges);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_dispatch);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_rice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hist_bin_rice);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_scott));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hist_bin_scott);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_stone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hist_bin_stone);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_doane));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hist_bin_doane);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain__hist_bin_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hist_bin_auto);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_stone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stone);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_doane));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_doane);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fd);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_rice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rice);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_scott));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scott);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_sturges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sturges);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain__histogram_bin_edges_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__histogram_bin_edges_dispatcher);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_10_none_none_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain__histogram_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__histogram_dispatcher);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_10_none_none_none_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8e1483f2ffe71893f65b582ceaca34d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8e1483f2ffe71893f65b582ceaca34d);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b1bfbbb5a28b78cd55325f925bd56f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b1bfbbb5a28b78cd55325f925bd56f8);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_53f8348fbccb786e4f0fe380bac0f7b0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_53f8348fbccb786e4f0fe380bac0f7b0_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_1b7b1bb76f0cd887b765f252b00252c4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1b7b1bb76f0cd887b765f252b00252c4_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_707a4481a62b09650e80b69d8214f005_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_707a4481a62b09650e80b69d8214f005_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_range_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_range_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_e5bbdcf52b8afd237141701bf859d51a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e5bbdcf52b8afd237141701bf859d51a_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_e21997098a340426a142ddd1666a12dc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e21997098a340426a142ddd1666a12dc_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_weights_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_weights_str_plain_msg_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_v_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_v_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_1463e74831e234c85e5c445b144c231a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1463e74831e234c85e5c445b144c231a_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_eadf81e3a2c8745f6d8c98e0c04c2b4a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_eadf81e3a2c8745f6d8c98e0c04c2b4a_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_41fdd810e3b7f6dce47ecd4a7a438db7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_41fdd810e3b7f6dce47ecd4a7a438db7_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_str_plain_ptp_x_str_plain_range_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_n_str_plain_ptp_x_str_plain_range_str_plain_x_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 27
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
static PyObject *module_var_accessor_numpy$lib$_histograms_impl$RuntimeWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RuntimeWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RuntimeWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RuntimeWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RuntimeWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_get_bin_edges(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_bin_edges);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_bin_edges);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_bin_edges, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_bin_edges);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_bin_edges, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_bin_edges);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_bin_edges);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_bin_edges);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_get_outer_edges(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_outer_edges);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_outer_edges);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_outer_edges, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_outer_edges);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_outer_edges, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_outer_edges);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_outer_edges);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_outer_edges);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_auto(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_auto);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_auto);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_auto, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_auto);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_auto, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_auto);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_auto);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_auto);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_doane(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_doane);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_doane);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_doane, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_doane);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_doane, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_doane);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_doane);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_doane);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_fd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_fd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_fd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_fd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_fd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_fd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_fd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_fd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_fd);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_rice(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_rice);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_rice);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_rice, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_rice);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_rice, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_rice);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_rice);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_rice);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_scott(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_scott);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_scott);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_scott, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_scott);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_scott, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_scott);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_scott);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_scott);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_selectors(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_selectors);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_selectors);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_selectors, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_selectors);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_selectors, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_selectors);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_selectors);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_selectors);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_sqrt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sqrt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_sqrt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_sqrt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_sqrt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_sqrt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sqrt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sqrt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sqrt);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_stone(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_stone);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_stone);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_stone, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_stone);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_stone, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_stone);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_stone);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_stone);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_sturges(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sturges);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_sturges);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_sturges, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__hist_bin_sturges);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__hist_bin_sturges, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sturges);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sturges);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sturges);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_histogram_bin_edges_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_bin_edges_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__histogram_bin_edges_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__histogram_bin_edges_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__histogram_bin_edges_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__histogram_bin_edges_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_bin_edges_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_bin_edges_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_bin_edges_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_histogram_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__histogram_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__histogram_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__histogram_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__histogram_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_histogramdd_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogramdd_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__histogramdd_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__histogramdd_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__histogramdd_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__histogramdd_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogramdd_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogramdd_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__histogramdd_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_ptp(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ptp);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ptp);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ptp, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ptp);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ptp, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ptp);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ptp);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ptp);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_range(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__range);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__range);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__range, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__range);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__range, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__range);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__range);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__range);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_ravel_and_check_weights(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ravel_and_check_weights);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ravel_and_check_weights);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ravel_and_check_weights, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ravel_and_check_weights);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ravel_and_check_weights, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ravel_and_check_weights);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ravel_and_check_weights);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ravel_and_check_weights);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_search_sorted_inclusive(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__search_sorted_inclusive);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__search_sorted_inclusive);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__search_sorted_inclusive, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__search_sorted_inclusive);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__search_sorted_inclusive, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__search_sorted_inclusive);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__search_sorted_inclusive);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__search_sorted_inclusive);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$_unsigned_subtract(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unsigned_subtract);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unsigned_subtract);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unsigned_subtract, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unsigned_subtract);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unsigned_subtract, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unsigned_subtract);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unsigned_subtract);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unsigned_subtract);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$array_function_dispatch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$contextlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$operator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$overrides(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overrides);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overrides, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overrides);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overrides, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_histograms_impl$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_histograms_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_histograms_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_histograms_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6cadb169bcabae521dc1e6e45b7d704c;
static PyCodeObject *code_objects_3f27ba1e8b2a9fc0b266bb777605ae95;
static PyCodeObject *code_objects_9c6889644ad76181ba2cbbf2e46179cc;
static PyCodeObject *code_objects_2445c974a6d473a6f71df0cfd43059e4;
static PyCodeObject *code_objects_c0eb41f9bfa7e05942a65309f3f6eaad;
static PyCodeObject *code_objects_62f3590772a96f35ea6d9ca887768e00;
static PyCodeObject *code_objects_d981bfa46d67b5e0770fae44f93e098b;
static PyCodeObject *code_objects_d1e069f958ec33004806838adfc38b80;
static PyCodeObject *code_objects_1f4262ce71a93cec9cd92caaf76c37ca;
static PyCodeObject *code_objects_73baa15fb8d2ee52441391765757fa81;
static PyCodeObject *code_objects_a7285ee1b73e13ac46bc9ed3fa797ff8;
static PyCodeObject *code_objects_11744f4dcdfeed1eb2d72c05d52694d4;
static PyCodeObject *code_objects_a167795ec4cf3f438d4e734564fff77e;
static PyCodeObject *code_objects_c86220704a5dadbdd629568094e68830;
static PyCodeObject *code_objects_93d7fa5582c7f3e6c9d4755e700bd5bf;
static PyCodeObject *code_objects_fac794a611a0a152cffc543803d12249;
static PyCodeObject *code_objects_e75042a773f2f14961e01f41580ca393;
static PyCodeObject *code_objects_5fa6581d17755ad54540e31d4291b722;
static PyCodeObject *code_objects_5a9cdf9b620ce8c47d9b843f050a3538;
static PyCodeObject *code_objects_ffc7a1e18f7d8dfad6ce597f8ef10804;
static PyCodeObject *code_objects_f66d8e992d4aa55172ec06fb1e8267a0;
static PyCodeObject *code_objects_3d0c91ee4a05c7524e64b38b96c0690e;
static PyCodeObject *code_objects_d3056a5200f3bb82942e4184a11f320c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d8e1483f2ffe71893f65b582ceaca34d); CHECK_OBJECT(module_filename_obj);
code_objects_6cadb169bcabae521dc1e6e45b7d704c = MAKE_CODE_OBJECT(module_filename_obj, 1040, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_0ce187624ef22ccd08ff04d3de49f4e9, mod_consts.const_tuple_e258eb649547c9f72ba5cdf191708e5a_tuple, NULL, 1, 0, 0);
code_objects_3f27ba1e8b2a9fc0b266bb777605ae95 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_4b1bfbbb5a28b78cd55325f925bd56f8, mod_consts.const_str_digest_4b1bfbbb5a28b78cd55325f925bd56f8, NULL, NULL, 0, 0, 0);
code_objects_9c6889644ad76181ba2cbbf2e46179cc = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_bin_edges, mod_consts.const_str_plain__get_bin_edges, mod_consts.const_tuple_53f8348fbccb786e4f0fe380bac0f7b0_tuple, NULL, 4, 0, 0);
code_objects_2445c974a6d473a6f71df0cfd43059e4 = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_outer_edges, mod_consts.const_str_plain__get_outer_edges, mod_consts.const_tuple_dacc1dc377fca3f704875d128efd5c49_tuple, NULL, 2, 0, 0);
code_objects_c0eb41f9bfa7e05942a65309f3f6eaad = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__hist_bin_auto, mod_consts.const_str_plain__hist_bin_auto, mod_consts.const_tuple_1b7b1bb76f0cd887b765f252b00252c4_tuple, NULL, 2, 0, 0);
code_objects_62f3590772a96f35ea6d9ca887768e00 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__hist_bin_doane, mod_consts.const_str_plain__hist_bin_doane, mod_consts.const_tuple_707a4481a62b09650e80b69d8214f005_tuple, NULL, 2, 0, 0);
code_objects_d981bfa46d67b5e0770fae44f93e098b = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__hist_bin_fd, mod_consts.const_str_plain__hist_bin_fd, mod_consts.const_tuple_str_plain_x_str_plain_range_str_plain_iqr_tuple, NULL, 2, 0, 0);
code_objects_d1e069f958ec33004806838adfc38b80 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__hist_bin_rice, mod_consts.const_str_plain__hist_bin_rice, mod_consts.const_tuple_str_plain_x_str_plain_range_tuple, NULL, 2, 0, 0);
code_objects_1f4262ce71a93cec9cd92caaf76c37ca = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__hist_bin_scott, mod_consts.const_str_plain__hist_bin_scott, mod_consts.const_tuple_str_plain_x_str_plain_range_tuple, NULL, 2, 0, 0);
code_objects_73baa15fb8d2ee52441391765757fa81 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__hist_bin_sqrt, mod_consts.const_str_plain__hist_bin_sqrt, mod_consts.const_tuple_str_plain_x_str_plain_range_tuple, NULL, 2, 0, 0);
code_objects_a7285ee1b73e13ac46bc9ed3fa797ff8 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__hist_bin_stone, mod_consts.const_str_plain__hist_bin_stone, mod_consts.const_tuple_6284ebbd90994a4cfedc01f6b50b1d82_tuple, NULL, 2, 0, 0);
code_objects_11744f4dcdfeed1eb2d72c05d52694d4 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__hist_bin_sturges, mod_consts.const_str_plain__hist_bin_sturges, mod_consts.const_tuple_str_plain_x_str_plain_range_tuple, NULL, 2, 0, 0);
code_objects_a167795ec4cf3f438d4e734564fff77e = MAKE_CODE_OBJECT(module_filename_obj, 469, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__histogram_bin_edges_dispatcher, mod_consts.const_str_plain__histogram_bin_edges_dispatcher, mod_consts.const_tuple_str_plain_a_str_plain_bins_str_plain_range_str_plain_weights_tuple, NULL, 4, 0, 0);
code_objects_c86220704a5dadbdd629568094e68830 = MAKE_CODE_OBJECT(module_filename_obj, 680, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__histogram_dispatcher, mod_consts.const_str_plain__histogram_dispatcher, mod_consts.const_tuple_e5bbdcf52b8afd237141701bf859d51a_tuple, NULL, 5, 0, 0);
code_objects_93d7fa5582c7f3e6c9d4755e700bd5bf = MAKE_CODE_OBJECT(module_filename_obj, 902, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__histogramdd_dispatcher, mod_consts.const_str_plain__histogramdd_dispatcher, mod_consts.const_tuple_e21997098a340426a142ddd1666a12dc_tuple, NULL, 5, 0, 0);
code_objects_fac794a611a0a152cffc543803d12249 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ptp, mod_consts.const_str_plain__ptp, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_e75042a773f2f14961e01f41580ca393 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ravel_and_check_weights, mod_consts.const_str_plain__ravel_and_check_weights, mod_consts.const_tuple_str_plain_a_str_plain_weights_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_5fa6581d17755ad54540e31d4291b722 = MAKE_CODE_OBJECT(module_filename_obj, 457, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__search_sorted_inclusive, mod_consts.const_str_plain__search_sorted_inclusive, mod_consts.const_tuple_str_plain_a_str_plain_v_tuple, NULL, 2, 0, 0);
code_objects_5a9cdf9b620ce8c47d9b843f050a3538 = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unsigned_subtract, mod_consts.const_str_plain__unsigned_subtract, mod_consts.const_tuple_1463e74831e234c85e5c445b144c231a_tuple, NULL, 2, 0, 0);
code_objects_ffc7a1e18f7d8dfad6ce597f8ef10804 = MAKE_CODE_OBJECT(module_filename_obj, 686, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_histogram, mod_consts.const_str_plain_histogram, mod_consts.const_tuple_eadf81e3a2c8745f6d8c98e0c04c2b4a_tuple, NULL, 5, 0, 0);
code_objects_f66d8e992d4aa55172ec06fb1e8267a0 = MAKE_CODE_OBJECT(module_filename_obj, 474, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_histogram_bin_edges, mod_consts.const_str_plain_histogram_bin_edges, mod_consts.const_tuple_9a8ad637f4ec3e8cc7e093bf1fe25cfc_tuple, NULL, 4, 0, 0);
code_objects_3d0c91ee4a05c7524e64b38b96c0690e = MAKE_CODE_OBJECT(module_filename_obj, 914, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_histogramdd, mod_consts.const_str_plain_histogramdd, mod_consts.const_tuple_41fdd810e3b7f6dce47ecd4a7a438db7_tuple, NULL, 5, 0, 0);
code_objects_d3056a5200f3bb82942e4184a11f320c = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_jhat, mod_consts.const_str_digest_0fd412be68fda30b7d8200dff02a084e, mod_consts.const_tuple_d83e8e7b1a5d7f670a77f7933a9224e0_tuple, mod_consts.const_tuple_str_plain_n_str_plain_ptp_x_str_plain_range_str_plain_x_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher$$$genobj__1__histogramdd_dispatcher(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_numpy$lib$_histograms_impl$$$function__20_histogramdd$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__11__get_outer_edges(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__13__get_bin_edges(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__15__histogram_bin_edges_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__17__histogram_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__18_histogram(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__1__ptp(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__20_histogramdd(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$lib$_histograms_impl$$$function__1__ptp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp = MAKE_FUNCTION_FRAME(tstate, code_objects_fac794a611a0a152cffc543803d12249, module_numpy$lib$_histograms_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp = cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_unsigned_subtract(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unsigned_subtract);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_called_instance_1 = par_x;
frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp->m_frame.f_lineno = 29;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_max);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_called_instance_2 = par_x;
frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp->m_frame.f_lineno = 29;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_min);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp->m_frame.f_lineno = 29;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp == cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__1__ptp);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_range = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt = NULL;

    // Actual function body.
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
par_range = NULL;

if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt = MAKE_FUNCTION_FRAME(tstate, code_objects_73baa15fb8d2ee52441391765757fa81, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt = cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt) == 2);

// Framed code:
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_ptp(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ptp);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt->m_frame.f_lineno = 50;
tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_expression_value_2 = par_x;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt->m_frame.f_lineno = 50;
tmp_truediv_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt,
    type_description_1,
    par_x,
    par_range
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt == cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_range = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges = NULL;

    // Actual function body.
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
par_range = NULL;

if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges = MAKE_FUNCTION_FRAME(tstate, code_objects_11744f4dcdfeed1eb2d72c05d52694d4, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges = cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges) == 2);

// Framed code:
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_ptp(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ptp);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges->m_frame.f_lineno = 73;
tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_log2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_expression_value_2 = par_x;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges->m_frame.f_lineno = 73;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = const_float_1_0;
tmp_truediv_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges,
    type_description_1,
    par_x,
    par_range
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges == cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_range = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice = NULL;

    // Actual function body.
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
par_range = NULL;

if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice = MAKE_FUNCTION_FRAME(tstate, code_objects_d1e069f958ec33004806838adfc38b80, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice = cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice) == 2);

// Framed code:
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_ptp(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ptp);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice->m_frame.f_lineno = 97;
tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_float_2_0;
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_pow_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_pow_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_pow_expr_right_1 = mod_consts.const_float_0_3333333333333333;
tmp_mult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
CHECK_OBJECT(tmp_pow_expr_left_1);
Py_DECREF(tmp_pow_expr_left_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice,
    type_description_1,
    par_x,
    par_range
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice == cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_range = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott = NULL;

    // Actual function body.
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
par_range = NULL;

if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott = MAKE_FUNCTION_FRAME(tstate, code_objects_1f4262ce71a93cec9cd92caaf76c37ca, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott = cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott) == 2);

// Framed code:
{
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_pow_expr_left_2;
PyObject *tmp_pow_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_mult_expr_left_2 = mod_consts.const_float_24_0;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_pow_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pi);
if (tmp_pow_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_pow_expr_right_2 = mod_consts.const_float_0_5;
tmp_mult_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
CHECK_OBJECT(tmp_pow_expr_left_2);
Py_DECREF(tmp_pow_expr_left_2);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_expression_value_2 = par_x;
tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_pow_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_pow_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_pow_expr_right_1 = mod_consts.const_float_0_3333333333333333;
tmp_mult_expr_left_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
CHECK_OBJECT(tmp_pow_expr_left_1);
Py_DECREF(tmp_pow_expr_left_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott->m_frame.f_lineno = 119;
tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_std, tmp_args_element_value_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott,
    type_description_1,
    par_x,
    par_range
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott == cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_x = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_range = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *var_n = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_ptp_x = Nuitka_Cell_NewEmpty();
PyObject *var_jhat = NULL;
PyObject *var_nbins_upper_bound = NULL;
PyObject *var_nbins = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone = MAKE_FUNCTION_FRAME(tstate, code_objects_a7285ee1b73e13ac46bc9ed3fa797ff8, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone = cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_x));
tmp_expression_value_1 = Nuitka_Cell_GET(par_x);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_n) == NULL);
Nuitka_Cell_SET(var_n, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_ptp(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ptp);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_x));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_x);
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone->m_frame.f_lineno = 148;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_ptp_x) == NULL);
Nuitka_Cell_SET(var_ptp_x, tmp_assign_source_2);

}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(Nuitka_Cell_GET(var_n));
tmp_cmp_expr_left_1 = Nuitka_Cell_GET(var_n);
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(Nuitka_Cell_GET(var_ptp_x));
tmp_cmp_expr_left_2 = Nuitka_Cell_GET(var_ptp_x);
tmp_cmp_expr_right_2 = const_int_0;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ccccooo";
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
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = var_n;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_ptp_x;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_range;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_x;
Py_INCREF(tmp_closure_1[3]);
tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat(tstate, tmp_closure_1);

assert(var_jhat == NULL);
var_jhat = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_2 != NULL);
tmp_args_element_value_2 = mod_consts.const_int_pos_100;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_n));
tmp_args_element_value_4 = Nuitka_Cell_GET(var_n);
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone->m_frame.f_lineno = 157;
tmp_int_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_sqrt, tmp_args_element_value_4);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone->m_frame.f_lineno = 157;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
assert(var_nbins_upper_bound == NULL);
var_nbins_upper_bound = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_3 != NULL);
tmp_called_value_4 = module_var_accessor_numpy$lib$_histograms_impl$_range(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__range);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = const_int_pos_1;
CHECK_OBJECT(var_nbins_upper_bound);
tmp_add_expr_left_1 = var_nbins_upper_bound;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_jhat);
tmp_kw_call_dict_value_0_1 = var_jhat;
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone->m_frame.f_lineno = 158;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
assert(var_nbins == NULL);
var_nbins = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_nbins);
tmp_cmp_expr_left_3 = var_nbins;
CHECK_OBJECT(var_nbins_upper_bound);
tmp_cmp_expr_right_3 = var_nbins_upper_bound;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ccccooo";
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_histograms_impl$warnings(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_warn);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_5edbc2f26ee97665f4b7769eeaba00a7;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$lib$_histograms_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "ccccooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone->m_frame.f_lineno = 160;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
CHECK_OBJECT(Nuitka_Cell_GET(var_ptp_x));
tmp_truediv_expr_left_1 = Nuitka_Cell_GET(var_ptp_x);
CHECK_OBJECT(var_nbins);
tmp_truediv_expr_right_1 = var_nbins;
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ccccooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone,
    type_description_1,
    par_x,
    par_range,
    var_n,
    var_ptp_x,
    var_jhat,
    var_nbins_upper_bound,
    var_nbins
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone == cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_x);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
par_x = NULL;
CHECK_OBJECT(par_range);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
par_range = NULL;
CHECK_OBJECT(var_n);
CHECK_OBJECT(var_n);
Py_DECREF(var_n);
var_n = NULL;
CHECK_OBJECT(var_ptp_x);
CHECK_OBJECT(var_ptp_x);
Py_DECREF(var_ptp_x);
var_ptp_x = NULL;
Py_XDECREF(var_jhat);
var_jhat = NULL;
Py_XDECREF(var_nbins_upper_bound);
var_nbins_upper_bound = NULL;
Py_XDECREF(var_nbins);
var_nbins = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_x);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
par_x = NULL;
CHECK_OBJECT(par_range);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
par_range = NULL;
CHECK_OBJECT(var_n);
CHECK_OBJECT(var_n);
Py_DECREF(var_n);
var_n = NULL;
CHECK_OBJECT(var_ptp_x);
CHECK_OBJECT(var_ptp_x);
Py_DECREF(var_ptp_x);
var_ptp_x = NULL;
Py_XDECREF(var_jhat);
var_jhat = NULL;
Py_XDECREF(var_nbins_upper_bound);
var_nbins_upper_bound = NULL;
Py_XDECREF(var_nbins);
var_nbins = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_nbins = python_pars[0];
PyObject *var_hh = NULL;
PyObject *var_p_k = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat = MAKE_FUNCTION_FRAME(tstate, code_objects_d3056a5200f3bb82942e4184a11f320c, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat = cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ptp_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_truediv_expr_left_1 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_nbins);
tmp_truediv_expr_right_1 = par_nbins;
tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
assert(var_hh == NULL);
var_hh = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_histogram);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(self->m_closure[3]);
CHECK_OBJECT(par_nbins);
tmp_kw_call_dict_value_0_1 = par_nbins;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_range);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(self->m_closure[2]);
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat->m_frame.f_lineno = 154;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_bins_str_plain_range_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_truediv_expr_left_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_truediv_expr_right_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
assert(var_p_k == NULL);
var_p_k = tmp_assign_source_2;
}
{
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_sub_expr_left_1 = mod_consts.const_int_pos_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 155;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_add_expr_right_1 = const_int_pos_1;
tmp_mult_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_p_k);
tmp_called_instance_1 = var_p_k;
CHECK_OBJECT(var_p_k);
tmp_args_element_value_1 = var_p_k;
frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat->m_frame.f_lineno = 155;
tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dot, tmp_args_element_value_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 155;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_hh);
tmp_truediv_expr_right_3 = var_hh;
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooocccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat,
    type_description_1,
    par_nbins,
    var_hh,
    var_p_k,
    self->m_closure[1],
    self->m_closure[3],
    self->m_closure[2],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat == cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_hh);
CHECK_OBJECT(var_hh);
Py_DECREF(var_hh);
var_hh = NULL;
CHECK_OBJECT(var_p_k);
CHECK_OBJECT(var_p_k);
Py_DECREF(var_p_k);
var_p_k = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_hh);
var_hh = NULL;
Py_XDECREF(var_p_k);
var_p_k = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_nbins);
Py_DECREF(par_nbins);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_nbins);
Py_DECREF(par_nbins);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_range = python_pars[1];
PyObject *var_sg1 = NULL;
PyObject *var_sigma = NULL;
PyObject *var_temp = NULL;
PyObject *var_g1 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
par_range = NULL;

// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane = MAKE_FUNCTION_FRAME(tstate, code_objects_62f3590772a96f35ea6d9ca887768e00, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane = cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_2;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_5;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_float_6_0;
CHECK_OBJECT(par_x);
tmp_expression_value_3 = par_x;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_size);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = mod_consts.const_int_pos_2;
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_expression_value_4 = par_x;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_size);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = const_float_1_0;
tmp_mult_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_expression_value_5 = par_x;
tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_size);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_truediv_expr_left_1);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = mod_consts.const_int_pos_3;
tmp_mult_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_truediv_expr_left_1);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 185;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_sg1 == NULL);
var_sg1 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 186;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_std, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_sigma == NULL);
var_sigma = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_sigma);
tmp_cmp_expr_left_2 = var_sigma;
tmp_cmp_expr_right_2 = const_float_0_0;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_x);
tmp_sub_expr_left_2 = par_x;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 191;
tmp_sub_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_mean, tmp_args_element_value_3);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_temp == NULL);
var_temp = tmp_assign_source_3;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_temp);
tmp_args_element_value_4 = var_temp;
CHECK_OBJECT(var_sigma);
tmp_args_element_value_5 = var_sigma;
CHECK_OBJECT(var_temp);
tmp_args_element_value_6 = var_temp;
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_true_divide,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_instance_4 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_temp);
tmp_args_element_value_7 = var_temp;
tmp_args_element_value_8 = mod_consts.const_int_pos_3;
CHECK_OBJECT(var_temp);
tmp_args_element_value_9 = var_temp;
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 193;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_power,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_10;
tmp_called_instance_5 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_temp);
tmp_args_element_value_10 = var_temp;
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 194;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_mean, tmp_args_element_value_10);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_g1 == NULL);
var_g1 = tmp_assign_source_4;
}
{
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_11;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_13;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_14;
tmp_called_value_2 = module_var_accessor_numpy$lib$_histograms_impl$_ptp(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ptp);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_11 = par_x;
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 195;
tmp_truediv_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_11);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = const_float_1_0;
tmp_expression_value_6 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 195;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_log2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 195;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_expression_value_7 = par_x;
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_size);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 195;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 195;
tmp_add_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 195;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_FLOAT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 195;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_truediv_expr_left_2);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 196;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_log2);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 196;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_5 = const_float_1_0;
tmp_called_instance_6 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_truediv_expr_left_2);
Py_DECREF(tmp_add_expr_left_3);
Py_DECREF(tmp_called_value_4);

exception_lineno = 196;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_g1);
tmp_args_element_value_14 = var_g1;
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 196;
tmp_truediv_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_absolute, tmp_args_element_value_14);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);
Py_DECREF(tmp_add_expr_left_3);
Py_DECREF(tmp_called_value_4);

exception_lineno = 196;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_sg1);
tmp_truediv_expr_right_3 = var_sg1;
tmp_add_expr_right_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);
Py_DECREF(tmp_add_expr_left_3);
Py_DECREF(tmp_called_value_4);

exception_lineno = 196;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_FLOAT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);
Py_DECREF(tmp_add_expr_left_3);
Py_DECREF(tmp_called_value_4);

exception_lineno = 196;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame.f_lineno = 196;
tmp_add_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 196;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 196;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane,
    type_description_1,
    par_x,
    par_range,
    var_sg1,
    var_sigma,
    var_temp,
    var_g1
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane == cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = const_float_0_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_sg1);
var_sg1 = NULL;
Py_XDECREF(var_sigma);
var_sigma = NULL;
Py_XDECREF(var_temp);
var_temp = NULL;
Py_XDECREF(var_g1);
var_g1 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sg1);
var_sg1 = NULL;
Py_XDECREF(var_sigma);
var_sigma = NULL;
Py_XDECREF(var_temp);
var_temp = NULL;
Py_XDECREF(var_g1);
var_g1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_range = python_pars[1];
PyObject *var_iqr = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
par_range = NULL;

// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd = MAKE_FUNCTION_FRAME(tstate, code_objects_d981bfa46d67b5e0770fae44f93e098b, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd = cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_subtract);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
tmp_args_element_value_2 = MAKE_LIST2(tstate, mod_consts.const_int_pos_75,mod_consts.const_int_pos_25);
frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_direct_call_arg2_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_percentile,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_iqr == NULL);
var_iqr = tmp_assign_source_1;
}
{
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_expression_value_2;
tmp_mult_expr_left_2 = mod_consts.const_float_2_0;
CHECK_OBJECT(var_iqr);
tmp_mult_expr_right_2 = var_iqr;
tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_expression_value_2 = par_x;
tmp_pow_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_pow_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 227;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_pow_expr_right_1 = mod_consts.const_float_minus_0_3333333333333333;
tmp_mult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
CHECK_OBJECT(tmp_pow_expr_left_1);
Py_DECREF(tmp_pow_expr_left_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 227;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd,
    type_description_1,
    par_x,
    par_range,
    var_iqr
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd == cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_iqr);
CHECK_OBJECT(var_iqr);
Py_DECREF(var_iqr);
var_iqr = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_iqr);
var_iqr = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_range = python_pars[1];
PyObject *var_fd_bw = NULL;
PyObject *var_sturges_bw = NULL;
PyObject *var_sqrt_bw = NULL;
PyObject *var_fd_bw_corrected = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto = MAKE_FUNCTION_FRAME(tstate, code_objects_c0eb41f9bfa7e05942a65309f3f6eaad, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto = cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_fd(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__hist_bin_fd);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
CHECK_OBJECT(par_range);
tmp_args_element_value_2 = par_range;
frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto->m_frame.f_lineno = 259;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_fd_bw == NULL);
var_fd_bw = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_sturges(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__hist_bin_sturges);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_range);
tmp_args_element_value_4 = par_range;
frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto->m_frame.f_lineno = 260;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_sturges_bw == NULL);
var_sturges_bw = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_sqrt(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__hist_bin_sqrt);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_5 = par_x;
CHECK_OBJECT(par_range);
tmp_args_element_value_6 = par_range;
frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto->m_frame.f_lineno = 261;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_sqrt_bw == NULL);
var_sqrt_bw = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(var_fd_bw);
tmp_args_element_value_7 = var_fd_bw;
CHECK_OBJECT(var_sqrt_bw);
tmp_truediv_expr_left_1 = var_sqrt_bw;
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_args_element_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto->m_frame.f_lineno = 263;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_fd_bw_corrected == NULL);
var_fd_bw_corrected = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_5 != NULL);
CHECK_OBJECT(var_fd_bw_corrected);
tmp_args_element_value_9 = var_fd_bw_corrected;
CHECK_OBJECT(var_sturges_bw);
tmp_args_element_value_10 = var_sturges_bw;
frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto->m_frame.f_lineno = 264;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto,
    type_description_1,
    par_x,
    par_range,
    var_fd_bw,
    var_sturges_bw,
    var_sqrt_bw,
    var_fd_bw_corrected
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto == cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_fd_bw);
CHECK_OBJECT(var_fd_bw);
Py_DECREF(var_fd_bw);
var_fd_bw = NULL;
CHECK_OBJECT(var_sturges_bw);
CHECK_OBJECT(var_sturges_bw);
Py_DECREF(var_sturges_bw);
var_sturges_bw = NULL;
CHECK_OBJECT(var_sqrt_bw);
CHECK_OBJECT(var_sqrt_bw);
Py_DECREF(var_sqrt_bw);
var_sqrt_bw = NULL;
CHECK_OBJECT(var_fd_bw_corrected);
CHECK_OBJECT(var_fd_bw_corrected);
Py_DECREF(var_fd_bw_corrected);
var_fd_bw_corrected = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_fd_bw);
var_fd_bw = NULL;
Py_XDECREF(var_sturges_bw);
var_sturges_bw = NULL;
Py_XDECREF(var_sqrt_bw);
var_sqrt_bw = NULL;
Py_XDECREF(var_fd_bw_corrected);
var_fd_bw_corrected = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_weights = python_pars[1];
PyObject *var_msg = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights = MAKE_FUNCTION_FRAME(tstate, code_objects_e75042a773f2f14961e01f41580ca393, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights = cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights->m_frame.f_lineno = 280;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dtype);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_bool);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_d949dc1e1361aded3f04c871c74577b5;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_a);
tmp_expression_value_3 = par_a;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_2f10f3aac0af954837b555bf8d7e64bd;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_expression_value_4 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_uint8);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_771455868b5fb99e8bf9207335e12d20;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_histograms_impl$warnings(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg);
tmp_tuple_element_2 = var_msg;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_numpy$lib$_histograms_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights->m_frame.f_lineno = 285;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_a);
tmp_expression_value_6 = par_a;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_astype);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 286;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_uint8);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 286;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights->m_frame.f_lineno = 286;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_2 = par_weights;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_weights);
tmp_args_element_value_3 = par_weights;
frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights->m_frame.f_lineno = 289;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_asarray, tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_weights;
    assert(old != NULL);
    par_weights = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_weights);
tmp_expression_value_8 = par_weights;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (par_a == NULL) {
Py_DECREF(tmp_cmp_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_a;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_shape);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_ab62ef9e1e0a621517e2efda8ed1e995;
frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights->m_frame.f_lineno = 291;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 291;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_weights);
tmp_called_instance_3 = par_weights;
frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights->m_frame.f_lineno = 293;
tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_weights;
    assert(old != NULL);
    par_weights = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_4;
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = par_a;
frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights->m_frame.f_lineno = 294;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    par_a = tmp_assign_source_6;
    Py_XDECREF(old);
}

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights,
    type_description_1,
    par_a,
    par_weights,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights == cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(par_a);
tmp_tuple_element_3 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_weights);
tmp_tuple_element_3 = par_weights;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_a);
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
par_a = NULL;
CHECK_OBJECT(par_weights);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
par_weights = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_weights);
par_weights = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl_numpy$lib$_histograms_impl$$$function__11__get_outer_edges(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_range = python_pars[1];
PyObject *var_first_edge = NULL;
PyObject *var_last_edge = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges = MAKE_FUNCTION_FRAME(tstate, code_objects_2445c974a6d473a6f71df0cfd43059e4, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges = cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_range);
tmp_cmp_expr_left_1 = par_range;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
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
CHECK_OBJECT(par_range);
tmp_iter_arg_1 = par_range;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooo";
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



exception_lineno = 304;
type_description_1 = "oooo";
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



exception_lineno = 304;
type_description_1 = "oooo";
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



exception_lineno = 304;
type_description_1 = "oooo";
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
assert(var_first_edge == NULL);
Py_INCREF(tmp_assign_source_4);
var_first_edge = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_last_edge == NULL);
Py_INCREF(tmp_assign_source_5);
var_last_edge = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_first_edge);
tmp_cmp_expr_left_2 = var_first_edge;
CHECK_OBJECT(var_last_edge);
tmp_cmp_expr_right_2 = var_last_edge;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_ebb66978bbbca4473fc0ea06c02391f4;
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame.f_lineno = 306;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 306;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_first_edge);
tmp_args_element_value_1 = var_first_edge;
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame.f_lineno = 308;
tmp_and_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isfinite, tmp_args_element_value_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 308;
type_description_1 = "oooo";
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
tmp_called_instance_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_last_edge);
tmp_args_element_value_2 = var_last_edge;
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame.f_lineno = 308;
tmp_and_right_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_isfinite, tmp_args_element_value_2);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_operand_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_174a350a6f315b2215d69663dba7f92c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_first_edge);
tmp_format_value_1 = var_first_edge;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_last_edge);
tmp_format_value_2 = var_last_edge;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_6ddb6786cb6aed201f7dc79ca77979e8;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame.f_lineno = 309;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 309;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_3:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = mod_consts.const_tuple_int_0_int_pos_1_tuple;
tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
assert(var_first_edge == NULL);
Py_INCREF(tmp_assign_source_9);
var_first_edge = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
assert(var_last_edge == NULL);
Py_INCREF(tmp_assign_source_10);
var_last_edge = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

goto branch_end_4;
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_a);
tmp_called_instance_3 = par_a;
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame.f_lineno = 315;
tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_min);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_iter_arg_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_instance_4;
PyTuple_SET_ITEM(tmp_iter_arg_3, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_a);
tmp_called_instance_4 = par_a;
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame.f_lineno = 315;
tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_max);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_iter_arg_3, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_iter_arg_3);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_11 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
assert(!(tmp_assign_source_11 == NULL));
assert(tmp_tuple_unpack_3__source_iter == NULL);
tmp_tuple_unpack_3__source_iter = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_1 == NULL);
tmp_tuple_unpack_3__element_1 = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_2 == NULL);
tmp_tuple_unpack_3__element_2 = tmp_assign_source_13;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_3__element_1;
assert(var_first_edge == NULL);
Py_INCREF(tmp_assign_source_14);
var_first_edge = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_15 = tmp_tuple_unpack_3__element_2;
assert(var_last_edge == NULL);
Py_INCREF(tmp_assign_source_15);
var_last_edge = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_4;
tmp_called_instance_5 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_first_edge);
tmp_args_element_value_3 = var_first_edge;
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame.f_lineno = 316;
tmp_and_left_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_isfinite, tmp_args_element_value_3);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 316;
type_description_1 = "oooo";
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
tmp_called_instance_6 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_last_edge);
tmp_args_element_value_4 = var_last_edge;
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame.f_lineno = 316;
tmp_and_right_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_isfinite, tmp_args_element_value_4);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooo";
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


exception_lineno = 316;
type_description_1 = "oooo";
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
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_54e3e56d15bc8901d081a3c1887cf9bf;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_first_edge);
tmp_format_value_3 = var_first_edge;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_last_edge);
tmp_format_value_4 = var_last_edge;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_6ddb6786cb6aed201f7dc79ca77979e8;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_3 == NULL));
frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame.f_lineno = 317;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 317;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_5:;
branch_end_4:;
branch_end_1:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (var_first_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_first_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = var_first_edge;
if (var_last_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_4 = var_last_edge;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_16;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
if (var_first_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_first_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 322;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_1 = var_first_edge;
tmp_sub_expr_right_1 = mod_consts.const_float_0_5;
tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_first_edge;
    var_first_edge = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (var_last_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 323;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = var_last_edge;
tmp_add_expr_right_1 = mod_consts.const_float_0_5;
tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_last_edge;
    var_last_edge = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_tuple_element_4;
if (var_first_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_first_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 325;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_4 = var_first_edge;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
if (var_last_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 325;
type_description_1 = "oooo";
    goto tuple_build_exception_4;
}

tmp_tuple_element_4 = var_last_edge;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges,
    type_description_1,
    par_a,
    par_range,
    var_first_edge,
    var_last_edge
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges == cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__11__get_outer_edges);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_first_edge);
var_first_edge = NULL;
Py_XDECREF(var_last_edge);
var_last_edge = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_first_edge);
var_first_edge = NULL;
Py_XDECREF(var_last_edge);
var_last_edge = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_b = python_pars[1];
PyObject *var_signed_to_unsigned = NULL;
PyObject *var_dt = NULL;
PyObject *var_unsigned_dt = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract = MAKE_FUNCTION_FRAME(tstate, code_objects_5a9cdf9b620ce8c47d9b843f050a3538, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract = cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_byte);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 337;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ubyte);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 337;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_3 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_short);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_4 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 338;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ushort);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 338;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 339;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_intc);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_6 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 339;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_uintc);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 339;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_7 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 340;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_int_);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_8 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 340;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_uint);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 340;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_9 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 341;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_longlong);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_expression_value_10 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 341;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ulonglong);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 341;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_signed_to_unsigned == NULL);
var_signed_to_unsigned = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_b);
tmp_args_element_value_2 = par_b;
frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract->m_frame.f_lineno = 343;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_result_type,
        call_args
    );
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_dt == NULL);
var_dt = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_signed_to_unsigned);
tmp_dict_arg_value_1 = var_signed_to_unsigned;
CHECK_OBJECT(var_dt);
tmp_expression_value_11 = var_dt;
tmp_key_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_type);
if (tmp_key_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
CHECK_OBJECT(tmp_key_value_1);
Py_DECREF(tmp_key_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_unsigned_dt == NULL);
var_unsigned_dt = tmp_assign_source_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_12 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_subtract);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_b);
tmp_kw_call_arg_value_1_1 = par_b;
CHECK_OBJECT(var_dt);
tmp_kw_call_dict_value_0_1 = var_dt;
frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract->m_frame.f_lineno = 347;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 344;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract->m_frame)) {
        frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_1:;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_13 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_subtract);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_14 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 352;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_asarray);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 352;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_3 = par_a;
CHECK_OBJECT(var_dt);
tmp_kw_call_dict_value_0_2 = var_dt;
frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract->m_frame.f_lineno = 352;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_kw_call_arg_value_0_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 352;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 352;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_asarray);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 352;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_b);
tmp_kw_call_arg_value_0_4 = par_b;
CHECK_OBJECT(var_dt);
tmp_kw_call_dict_value_0_3 = var_dt;
frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract->m_frame.f_lineno = 352;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_kw_call_arg_value_1_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 352;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_4 = mod_consts.const_str_plain_unsafe;
CHECK_OBJECT(var_unsigned_dt);
tmp_kw_call_dict_value_1_1 = var_unsigned_dt;
frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract->m_frame.f_lineno = 352;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_casting_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract,
    type_description_1,
    par_a,
    par_b,
    var_signed_to_unsigned,
    var_dt,
    var_unsigned_dt
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract == cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_signed_to_unsigned);
CHECK_OBJECT(var_signed_to_unsigned);
Py_DECREF(var_signed_to_unsigned);
var_signed_to_unsigned = NULL;
CHECK_OBJECT(var_dt);
CHECK_OBJECT(var_dt);
Py_DECREF(var_dt);
var_dt = NULL;
Py_XDECREF(var_unsigned_dt);
var_unsigned_dt = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_signed_to_unsigned);
var_signed_to_unsigned = NULL;
Py_XDECREF(var_dt);
var_dt = NULL;
Py_XDECREF(var_unsigned_dt);
var_unsigned_dt = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__13__get_bin_edges(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_bins = python_pars[1];
PyObject *par_range = python_pars[2];
PyObject *par_weights = python_pars[3];
PyObject *var_n_equal_bins = NULL;
PyObject *var_bin_edges = NULL;
PyObject *var_bin_name = NULL;
PyObject *var_first_edge = NULL;
PyObject *var_last_edge = NULL;
PyObject *var_keep = NULL;
PyObject *var_width = NULL;
PyObject *var_delta = NULL;
PyObject *var_e = NULL;
PyObject *var_bin_type = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_n_equal_bins == NULL);
Py_INCREF(tmp_assign_source_1);
var_n_equal_bins = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
assert(var_bin_edges == NULL);
Py_INCREF(tmp_assign_source_2);
var_bin_edges = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges = MAKE_FUNCTION_FRAME(tstate, code_objects_9c6889644ad76181ba2cbbf2e46179cc, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges = cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_bins);
tmp_isinstance_inst_1 = par_bins;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooooooooooo";
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
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_bins);
tmp_assign_source_3 = par_bins;
assert(var_bin_name == NULL);
Py_INCREF(tmp_assign_source_3);
var_bin_name = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_bin_name);
tmp_cmp_expr_left_1 = var_bin_name;
tmp_cmp_expr_right_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_selectors(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__hist_bin_selectors);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooooooooo";
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
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_bin_name);
tmp_operand_value_1 = var_bin_name;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_43ade2c9399cae245ad292142a7a849f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 386;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 386;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_2 = par_weights;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_8f4feae6666d6286958836942304ebb9;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 389;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 389;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_get_outer_edges(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_outer_edges);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_range);
tmp_args_element_value_2 = par_range;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 392;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooooooooo";
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



exception_lineno = 392;
type_description_1 = "oooooooooooooo";
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



exception_lineno = 392;
type_description_1 = "oooooooooooooo";
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



exception_lineno = 392;
type_description_1 = "oooooooooooooo";
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
assert(var_first_edge == NULL);
Py_INCREF(tmp_assign_source_7);
var_first_edge = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var_last_edge == NULL);
Py_INCREF(tmp_assign_source_8);
var_last_edge = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_range);
tmp_cmp_expr_left_3 = par_range;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_a);
tmp_cmp_expr_left_4 = par_a;
CHECK_OBJECT(var_first_edge);
tmp_cmp_expr_right_4 = var_first_edge;
tmp_assign_source_9 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_keep == NULL);
var_keep = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_ibitand_expr_left_1;
PyObject *tmp_ibitand_expr_right_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_keep);
tmp_ibitand_expr_left_1 = var_keep;
CHECK_OBJECT(par_a);
tmp_cmp_expr_left_5 = par_a;
CHECK_OBJECT(var_last_edge);
tmp_cmp_expr_right_5 = var_last_edge;
tmp_ibitand_expr_right_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_ibitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITAND_OBJECT_OBJECT(&tmp_ibitand_expr_left_1, tmp_ibitand_expr_right_1);
CHECK_OBJECT(tmp_ibitand_expr_right_1);
Py_DECREF(tmp_ibitand_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = tmp_ibitand_expr_left_1;
var_keep = tmp_assign_source_10;

}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 398;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_logical_and);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_keep);
tmp_args_element_value_3 = var_keep;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 398;
tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_reduce, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooooooooooooo";
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
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
CHECK_OBJECT(var_keep);
tmp_subscript_value_1 = var_keep;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_5:;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_3;
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 401;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = par_a;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "oooooooooooooo";
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = const_int_pos_1;
{
    PyObject *old = var_n_equal_bins;
    assert(old != NULL);
    var_n_equal_bins = tmp_assign_source_12;
    Py_INCREF(var_n_equal_bins);
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_tuple_element_2;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_selectors(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__hist_bin_selectors);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bin_name);
tmp_subscript_value_2 = var_bin_name;
tmp_called_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_a == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 405;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = par_a;
CHECK_OBJECT(var_first_edge);
tmp_tuple_element_2 = var_first_edge;
tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_5, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_last_edge);
tmp_tuple_element_2 = var_last_edge;
PyTuple_SET_ITEM0(tmp_args_element_value_5, 1, tmp_tuple_element_2);
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 405;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_width == NULL);
var_width = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_1;
CHECK_OBJECT(var_width);
tmp_truth_name_1 = CHECK_IF_TRUE(var_width);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_7;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_issubdtype);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_a == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_a;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_integer);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 407;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_width);
tmp_cmp_expr_left_7 = var_width;
tmp_cmp_expr_right_7 = const_int_pos_1;
tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_8 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = const_int_pos_1;
{
    PyObject *old = var_width;
    assert(old != NULL);
    var_width = tmp_assign_source_14;
    Py_INCREF(var_width);
    Py_DECREF(old);
}

}
branch_no_8:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_numpy$lib$_histograms_impl$_unsigned_subtract(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unsigned_subtract);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 409;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_last_edge);
tmp_args_element_value_8 = var_last_edge;
CHECK_OBJECT(var_first_edge);
tmp_args_element_value_9 = var_first_edge;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 409;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_delta == NULL);
var_delta = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_10;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
tmp_expression_value_8 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 410;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ceil);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_delta);
tmp_truediv_expr_left_1 = var_delta;
CHECK_OBJECT(var_width);
tmp_truediv_expr_right_1 = var_width;
tmp_args_element_value_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 410;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 410;
tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_n_equal_bins;
    assert(old != NULL);
    var_n_equal_bins = tmp_assign_source_16;
    Py_DECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = const_int_pos_1;
{
    PyObject *old = var_n_equal_bins;
    assert(old != NULL);
    var_n_equal_bins = tmp_assign_source_17;
    Py_INCREF(var_n_equal_bins);
    Py_DECREF(old);
}

}
branch_end_7:;
branch_end_6:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_11;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_bins);
tmp_args_element_value_11 = par_bins;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 416;
tmp_cmp_expr_left_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_ndim, tmp_args_element_value_11);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = const_int_0;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_12;
tmp_expression_value_9 = module_var_accessor_numpy$lib$_histograms_impl$operator(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_operator);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 418;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_index);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_bins);
tmp_args_element_value_12 = par_bins;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 418;
tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_n_equal_bins;
    assert(old != NULL);
    var_n_equal_bins = tmp_assign_source_18;
    Py_DECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_19); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_19);
var_e = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_187e8a092d90bb33273f86353a526cfc;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 420;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 421;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooooo";
goto try_except_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_10;
branch_no_10:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 417;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame)) {
        frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooo";
goto try_except_handler_5;
branch_end_10:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_n_equal_bins);
tmp_cmp_expr_left_10 = var_n_equal_bins;
tmp_cmp_expr_right_10 = const_int_pos_1;
tmp_condition_result_11 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooooooooooooo";
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
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_de822264a87a8f251ed358c29ef1e728;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 423;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 423;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_11:;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_7 = module_var_accessor_numpy$lib$_histograms_impl$_get_outer_edges(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_outer_edges);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_13 = par_a;
CHECK_OBJECT(par_range);
tmp_args_element_value_14 = par_range;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 425;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_22;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;
assert(var_first_edge == NULL);
Py_INCREF(tmp_assign_source_23);
var_first_edge = tmp_assign_source_23;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;
assert(var_last_edge == NULL);
Py_INCREF(tmp_assign_source_24);
var_last_edge = tmp_assign_source_24;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

goto branch_end_9;
branch_no_9:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_15;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 427;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_bins);
tmp_args_element_value_15 = par_bins;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 427;
tmp_cmp_expr_left_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ndim, tmp_args_element_value_15);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = const_int_pos_1;
tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_16;
tmp_called_instance_4 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 428;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_bins);
tmp_args_element_value_16 = par_bins;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 428;
tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_asarray, tmp_args_element_value_16);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bin_edges;
    assert(old != NULL);
    var_bin_edges = tmp_assign_source_25;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_17;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
int tmp_truth_name_3;
tmp_expression_value_10 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 429;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_any);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bin_edges);
tmp_expression_value_11 = var_bin_edges;
tmp_subscript_value_3 = mod_consts.const_slice_none_int_neg_1_none;
tmp_cmp_expr_left_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_3);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 429;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bin_edges);
tmp_expression_value_12 = var_bin_edges;
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_cmp_expr_right_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 429;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_right_12);
Py_DECREF(tmp_cmp_expr_right_12);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 429;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 429;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 429;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
tmp_make_exception_arg_5 = mod_consts.const_str_digest_100ecf9040cd8cf695cf29d8f85c977d;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 430;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 430;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_13:;
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
tmp_make_exception_arg_6 = mod_consts.const_str_digest_356e1443c2d562ea3a8727214b874ff1;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 434;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 434;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_12:;
branch_end_9:;
branch_end_1:;
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(var_n_equal_bins);
tmp_cmp_expr_left_13 = var_n_equal_bins;
tmp_cmp_expr_right_13 = Py_None;
tmp_condition_result_14 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
tmp_expression_value_13 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_result_type);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_first_edge == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_first_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_18 = var_first_edge;
if (var_last_edge == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_19 = var_last_edge;
if (par_a == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_20 = par_a;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 440;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_bin_type == NULL);
var_bin_type = tmp_assign_source_26;
}
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_expression_value_15;
int tmp_truth_name_4;
tmp_expression_value_14 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 441;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_issubdtype);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bin_type);
tmp_args_element_value_21 = var_bin_type;
tmp_expression_value_15 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 441;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_integer);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 441;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 441;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 441;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_15 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
tmp_called_instance_5 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 442;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bin_type);
tmp_args_element_value_23 = var_bin_type;
tmp_args_element_value_24 = (PyObject *)&PyFloat_Type;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 442;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_assign_source_27 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_result_type,
        call_args
    );
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bin_type;
    assert(old != NULL);
    var_bin_type = tmp_assign_source_27;
    Py_DECREF(old);
}

}
branch_no_15:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_16 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_linspace);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_first_edge == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_first_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 446;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = var_first_edge;
if (var_last_edge == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 446;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_1 = var_last_edge;
CHECK_OBJECT(var_n_equal_bins);
tmp_add_expr_left_1 = var_n_equal_bins;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_kw_call_arg_value_2_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 446;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = Py_True;
if (var_bin_type == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_arg_value_2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bin_type);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 447;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = var_bin_type;
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 445;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_endpoint_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bin_edges;
    assert(old != NULL);
    var_bin_edges = tmp_assign_source_28;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_25;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_5;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_6;
int tmp_truth_name_5;
tmp_expression_value_17 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 448;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_any);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bin_edges);
tmp_expression_value_18 = var_bin_edges;
tmp_subscript_value_5 = mod_consts.const_slice_none_int_neg_1_none;
tmp_cmp_expr_left_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_5);
if (tmp_cmp_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 448;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bin_edges);
tmp_expression_value_19 = var_bin_edges;
tmp_subscript_value_6 = mod_consts.const_slice_int_pos_1_none_none;
tmp_cmp_expr_right_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_6);
if (tmp_cmp_expr_right_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_cmp_expr_left_14);

exception_lineno = 448;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_25 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
CHECK_OBJECT(tmp_cmp_expr_left_14);
Py_DECREF(tmp_cmp_expr_left_14);
CHECK_OBJECT(tmp_cmp_expr_right_14);
Py_DECREF(tmp_cmp_expr_right_14);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 448;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 448;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 448;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_2d786d4bf6b8399acb47ef3364f94e3b;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_n_equal_bins);
tmp_format_value_2 = var_n_equal_bins;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_33983fc1d02dd38f6e08cb05c034bc88;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_7 == NULL));
frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame.f_lineno = 449;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 449;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_16:;
{
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(var_bin_edges);
tmp_tuple_element_4 = var_bin_edges;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_5;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
if (var_first_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_first_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 452;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_2;
}

tmp_tuple_element_5 = var_first_edge;
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_5);
if (var_last_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 452;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_3;
}

tmp_tuple_element_5 = var_last_edge;
PyTuple_SET_ITEM0(tmp_tuple_element_4, 1, tmp_tuple_element_5);
CHECK_OBJECT(var_n_equal_bins);
tmp_tuple_element_5 = var_n_equal_bins;
PyTuple_SET_ITEM0(tmp_tuple_element_4, 2, tmp_tuple_element_5);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_tuple_element_4);
goto tuple_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
goto frame_return_exit_1;
}
goto branch_end_14;
branch_no_14:;
{
PyObject *tmp_tuple_element_6;
CHECK_OBJECT(var_bin_edges);
tmp_tuple_element_6 = var_bin_edges;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_6);
goto frame_return_exit_1;
}
branch_end_14:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges,
    type_description_1,
    par_a,
    par_bins,
    par_range,
    par_weights,
    var_n_equal_bins,
    var_bin_edges,
    var_bin_name,
    var_first_edge,
    var_last_edge,
    var_keep,
    var_width,
    var_delta,
    var_e,
    var_bin_type
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges == cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__13__get_bin_edges);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_a);
par_a = NULL;
CHECK_OBJECT(var_n_equal_bins);
CHECK_OBJECT(var_n_equal_bins);
Py_DECREF(var_n_equal_bins);
var_n_equal_bins = NULL;
CHECK_OBJECT(var_bin_edges);
CHECK_OBJECT(var_bin_edges);
Py_DECREF(var_bin_edges);
var_bin_edges = NULL;
Py_XDECREF(var_bin_name);
var_bin_name = NULL;
Py_XDECREF(var_first_edge);
var_first_edge = NULL;
Py_XDECREF(var_last_edge);
var_last_edge = NULL;
Py_XDECREF(var_keep);
var_keep = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_delta);
var_delta = NULL;
Py_XDECREF(var_bin_type);
var_bin_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(var_n_equal_bins);
var_n_equal_bins = NULL;
CHECK_OBJECT(var_bin_edges);
CHECK_OBJECT(var_bin_edges);
Py_DECREF(var_bin_edges);
var_bin_edges = NULL;
Py_XDECREF(var_bin_name);
var_bin_name = NULL;
Py_XDECREF(var_first_edge);
var_first_edge = NULL;
Py_XDECREF(var_last_edge);
var_last_edge = NULL;
Py_XDECREF(var_keep);
var_keep = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_delta);
var_delta = NULL;
Py_XDECREF(var_bin_type);
var_bin_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_bins);
Py_DECREF(par_bins);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_bins);
Py_DECREF(par_bins);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_v = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive = MAKE_FUNCTION_FRAME(tstate, code_objects_5fa6581d17755ad54540e31d4291b722, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive = cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 463;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_concatenate);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_searchsorted);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 464;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_v);
tmp_expression_value_3 = par_v;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_neg_1_none;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 464;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_left;
frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive->m_frame.f_lineno = 464;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 464;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_5;
PyTuple_SET_ITEM(tmp_args_element_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_a);
tmp_expression_value_4 = par_a;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_searchsorted);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_v);
tmp_expression_value_5 = par_v;
tmp_subscript_value_2 = mod_consts.const_slice_int_neg_1_none_none;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 465;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain_right;
frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive->m_frame.f_lineno = 465;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive->m_frame.f_lineno = 463;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive,
    type_description_1,
    par_a,
    par_v
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive == cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_v);
Py_DECREF(par_v);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_v);
Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__15__histogram_bin_edges_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_bins = python_pars[1];
PyObject *par_range = python_pars[2];
PyObject *par_weights = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_bins);
tmp_tuple_element_1 = par_bins;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_weights);
tmp_tuple_element_1 = par_weights;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_bins);
Py_DECREF(par_bins);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_bins = python_pars[1];
PyObject *par_range = python_pars[2];
PyObject *par_weights = python_pars[3];
PyObject *var_bin_edges = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges = MAKE_FUNCTION_FRAME(tstate, code_objects_f66d8e992d4aa55172ec06fb1e8267a0, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges = cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_ravel_and_check_weights(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ravel_and_check_weights);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 675;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_weights);
tmp_args_element_value_2 = par_weights;
frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges->m_frame.f_lineno = 675;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 675;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 675;
type_description_1 = "oooooo";
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



exception_lineno = 675;
type_description_1 = "oooooo";
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



exception_lineno = 675;
type_description_1 = "oooooo";
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



exception_lineno = 675;
type_description_1 = "oooooo";
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
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_4;
    Py_INCREF(par_a);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = par_weights;
    assert(old != NULL);
    par_weights = tmp_assign_source_5;
    Py_INCREF(par_weights);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_2 = module_var_accessor_numpy$lib$_histograms_impl$_get_bin_edges(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_bin_edges);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 676;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_3 = par_a;
CHECK_OBJECT(par_bins);
tmp_args_element_value_4 = par_bins;
CHECK_OBJECT(par_range);
tmp_args_element_value_5 = par_range;
CHECK_OBJECT(par_weights);
tmp_args_element_value_6 = par_weights;
frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges->m_frame.f_lineno = 676;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 676;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 676;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 676;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 676;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 676;
type_description_1 = "oooooo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges,
    type_description_1,
    par_a,
    par_bins,
    par_range,
    par_weights,
    var_bin_edges,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges == cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
assert(var_bin_edges == NULL);
Py_INCREF(tmp_assign_source_9);
var_bin_edges = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_10);
var__ = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

CHECK_OBJECT(var_bin_edges);
tmp_return_value = var_bin_edges;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_a);
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
par_a = NULL;
CHECK_OBJECT(par_weights);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
par_weights = NULL;
CHECK_OBJECT(var_bin_edges);
CHECK_OBJECT(var_bin_edges);
Py_DECREF(var_bin_edges);
var_bin_edges = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_weights);
par_weights = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_bins);
Py_DECREF(par_bins);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_bins);
Py_DECREF(par_bins);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__17__histogram_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_bins = python_pars[1];
PyObject *par_range = python_pars[2];
PyObject *par_density = python_pars[3];
PyObject *par_weights = python_pars[4];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_bins);
tmp_tuple_element_1 = par_bins;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_weights);
tmp_tuple_element_1 = par_weights;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_bins);
Py_DECREF(par_bins);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
CHECK_OBJECT(par_density);
Py_DECREF(par_density);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__18_histogram(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_bins = python_pars[1];
PyObject *par_range = python_pars[2];
PyObject *par_density = python_pars[3];
PyObject *par_weights = python_pars[4];
PyObject *var_bin_edges = NULL;
PyObject *var_uniform_bins = NULL;
PyObject *var_ntype = NULL;
PyObject *var_BLOCK = NULL;
PyObject *var_simple_weights = NULL;
PyObject *var_first_edge = NULL;
PyObject *var_last_edge = NULL;
PyObject *var_n_equal_bins = NULL;
PyObject *var_n = NULL;
PyObject *var_norm_numerator = NULL;
PyObject *var_norm_denom = NULL;
PyObject *var_i = NULL;
PyObject *var_tmp_a = NULL;
PyObject *var_tmp_w = NULL;
PyObject *var_keep = NULL;
PyObject *var_f_indices = NULL;
PyObject *var_indices = NULL;
PyObject *var_decrement = NULL;
PyObject *var_increment = NULL;
PyObject *var_cum_n = NULL;
PyObject *var_sa = NULL;
PyObject *var_zero = NULL;
PyObject *var_sorting_index = NULL;
PyObject *var_sw = NULL;
PyObject *var_cw = NULL;
PyObject *var_bin_index = NULL;
PyObject *var_db = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
PyObject *tmp_inplace_assign_2__value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_inplace_assign_subscript_2__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_2__target = NULL;
PyObject *tmp_inplace_assign_subscript_2__value = NULL;
PyObject *tmp_inplace_assign_subscript_3__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_3__target = NULL;
PyObject *tmp_inplace_assign_subscript_3__value = NULL;
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
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram;
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
int tmp_res;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram = MAKE_FUNCTION_FRAME(tstate, code_objects_ffc7a1e18f7d8dfad6ce597f8ef10804, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram = cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_ravel_and_check_weights(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ravel_and_check_weights);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 790;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_weights);
tmp_args_element_value_2 = par_weights;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 790;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooooooooooooooooooooooo";
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



exception_lineno = 790;
type_description_1 = "oooooooooooooooooooooooooooooooo";
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



exception_lineno = 790;
type_description_1 = "oooooooooooooooooooooooooooooooo";
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



exception_lineno = 790;
type_description_1 = "oooooooooooooooooooooooooooooooo";
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
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_4;
    Py_INCREF(par_a);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = par_weights;
    assert(old != NULL);
    par_weights = tmp_assign_source_5;
    Py_INCREF(par_weights);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_2 = module_var_accessor_numpy$lib$_histograms_impl$_get_bin_edges(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_bin_edges);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 792;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_3 = par_a;
CHECK_OBJECT(par_bins);
tmp_args_element_value_4 = par_bins;
CHECK_OBJECT(par_range);
tmp_args_element_value_5 = par_range;
CHECK_OBJECT(par_weights);
tmp_args_element_value_6 = par_weights;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 792;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 792;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 792;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 792;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 792;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 792;
type_description_1 = "oooooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
assert(var_bin_edges == NULL);
Py_INCREF(tmp_assign_source_9);
var_bin_edges = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
assert(var_uniform_bins == NULL);
Py_INCREF(tmp_assign_source_10);
var_uniform_bins = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_1 = par_weights;
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
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 796;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dtype);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 796;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 796;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_intp);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 796;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 796;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 796;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ntype == NULL);
var_ntype = tmp_assign_source_11;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_weights);
tmp_expression_value_3 = par_weights;
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ntype == NULL);
var_ntype = tmp_assign_source_12;
}
branch_end_1:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_int_pos_65536;
assert(var_BLOCK == NULL);
Py_INCREF(tmp_assign_source_13);
var_BLOCK = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_2 = par_weights;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 808;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_can_cast);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 808;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_weights);
tmp_expression_value_5 = par_weights;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 808;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 808;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_double);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 808;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 808;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_or_left_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 808;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 808;
type_description_1 = "oooooooooooooooooooooooooooooooo";
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
tmp_expression_value_7 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 809;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_can_cast);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 809;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_weights);
tmp_expression_value_8 = par_weights;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 809;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = (PyObject *)&PyComplex_Type;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 809;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 809;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_assign_source_14 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_14 = tmp_or_left_value_1;
or_end_1:;
assert(var_simple_weights == NULL);
var_simple_weights = tmp_assign_source_14;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_uniform_bins);
tmp_cmp_expr_left_3 = var_uniform_bins;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_simple_weights);
tmp_truth_name_1 = CHECK_IF_TRUE(var_simple_weights);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 812;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_uniform_bins);
tmp_iter_arg_3 = var_uniform_bins;
tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 816;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_3__source_iter == NULL);
tmp_tuple_unpack_3__source_iter = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 816;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_1 == NULL);
tmp_tuple_unpack_3__element_1 = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 816;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_2 == NULL);
tmp_tuple_unpack_3__element_2 = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 2, 3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 816;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_3 == NULL);
tmp_tuple_unpack_3__element_3 = tmp_assign_source_18;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 816;
type_description_1 = "oooooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_19 = tmp_tuple_unpack_3__element_1;
assert(var_first_edge == NULL);
Py_INCREF(tmp_assign_source_19);
var_first_edge = tmp_assign_source_19;
}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_20 = tmp_tuple_unpack_3__element_2;
assert(var_last_edge == NULL);
Py_INCREF(tmp_assign_source_20);
var_last_edge = tmp_assign_source_20;
}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
tmp_assign_source_21 = tmp_tuple_unpack_3__element_3;
assert(var_n_equal_bins == NULL);
Py_INCREF(tmp_assign_source_21);
var_n_equal_bins = tmp_assign_source_21;
}
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;

{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 819;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n_equal_bins);
tmp_args_element_value_12 = var_n_equal_bins;
CHECK_OBJECT(var_ntype);
tmp_args_element_value_13 = var_ntype;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 819;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_22 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_zeros,
        call_args
    );
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 819;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_n == NULL);
var_n = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(var_n_equal_bins);
tmp_assign_source_23 = var_n_equal_bins;
assert(var_norm_numerator == NULL);
Py_INCREF(tmp_assign_source_23);
var_norm_numerator = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_value_6 = module_var_accessor_numpy$lib$_histograms_impl$_unsigned_subtract(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unsigned_subtract);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 823;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_last_edge);
tmp_args_element_value_14 = var_last_edge;
CHECK_OBJECT(var_first_edge);
tmp_args_element_value_15 = var_first_edge;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 823;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 823;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_norm_denom == NULL);
var_norm_denom = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_len_arg_1;
PyObject *tmp_args_element_value_18;
tmp_called_value_7 = module_var_accessor_numpy$lib$_histograms_impl$_range(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__range);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 829;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = const_int_0;
CHECK_OBJECT(par_a);
tmp_len_arg_1 = par_a;
tmp_args_element_value_17 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 829;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_BLOCK);
tmp_args_element_value_18 = var_BLOCK;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 829;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 829;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_25 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 829;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_25;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_26 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooo";
exception_lineno = 829;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_27 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_27;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_a);
tmp_expression_value_9 = par_a;
CHECK_OBJECT(var_i);
tmp_start_value_1 = var_i;
CHECK_OBJECT(var_i);
tmp_add_expr_left_1 = var_i;
if (var_BLOCK == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BLOCK);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 830;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_add_expr_right_1 = var_BLOCK;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 830;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 830;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_tmp_a;
    var_tmp_a = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_4 = par_weights;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = Py_None;
{
    PyObject *old = var_tmp_w;
    var_tmp_w = tmp_assign_source_29;
    Py_INCREF(var_tmp_w);
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(par_weights);
tmp_expression_value_10 = par_weights;
CHECK_OBJECT(var_i);
tmp_start_value_2 = var_i;
CHECK_OBJECT(var_i);
tmp_add_expr_left_2 = var_i;
if (var_BLOCK == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BLOCK);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 834;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_add_expr_right_2 = var_BLOCK;
tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_stop_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 834;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_stop_value_2);
Py_DECREF(tmp_stop_value_2);
assert(!(tmp_subscript_value_2 == NULL));
tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 834;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_tmp_w;
    var_tmp_w = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
branch_end_3:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_tmp_a);
tmp_cmp_expr_left_5 = var_tmp_a;
if (var_first_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_first_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 837;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_5 = var_first_edge;
tmp_assign_source_31 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_keep;
    var_keep = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_ibitand_expr_left_1;
PyObject *tmp_ibitand_expr_right_1;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_keep);
tmp_ibitand_expr_left_1 = var_keep;
CHECK_OBJECT(var_tmp_a);
tmp_cmp_expr_left_6 = var_tmp_a;
CHECK_OBJECT(var_last_edge);
tmp_cmp_expr_right_6 = var_last_edge;
tmp_ibitand_expr_right_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_ibitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 838;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = INPLACE_OPERATION_BITAND_OBJECT_OBJECT(&tmp_ibitand_expr_left_1, tmp_ibitand_expr_right_1);
CHECK_OBJECT(tmp_ibitand_expr_right_1);
Py_DECREF(tmp_ibitand_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 838;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_32 = tmp_ibitand_expr_left_1;
var_keep = tmp_assign_source_32;

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_19;
tmp_expression_value_11 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_logical_and);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_keep);
tmp_args_element_value_19 = var_keep;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 839;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_reduce, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_tmp_a);
tmp_expression_value_12 = var_tmp_a;
CHECK_OBJECT(var_keep);
tmp_subscript_value_3 = var_keep;
tmp_assign_source_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 840;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_tmp_a;
    assert(old != NULL);
    var_tmp_a = tmp_assign_source_33;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_tmp_w);
tmp_cmp_expr_left_7 = var_tmp_w;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_tmp_w);
tmp_expression_value_13 = var_tmp_w;
CHECK_OBJECT(var_keep);
tmp_subscript_value_4 = var_keep;
tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_4);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_tmp_w;
    assert(old != NULL);
    var_tmp_w = tmp_assign_source_34;
    Py_DECREF(old);
}

}
branch_no_5:;
branch_no_4:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(var_tmp_a);
tmp_expression_value_14 = var_tmp_a;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_astype);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 847;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_bin_edges == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bin_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 847;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_15 = var_bin_edges;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_dtype);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 847;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_a7ab110deec347786bcfa718065f5388);
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 847;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 847;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_tmp_a;
    assert(old != NULL);
    var_tmp_a = tmp_assign_source_35;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
tmp_called_value_9 = module_var_accessor_numpy$lib$_histograms_impl$_unsigned_subtract(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unsigned_subtract);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 851;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_tmp_a);
tmp_args_element_value_20 = var_tmp_a;
if (var_first_edge == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_first_edge);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 851;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_21 = var_first_edge;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 851;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 851;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_norm_denom == NULL) {
Py_DECREF(tmp_truediv_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_norm_denom);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 851;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truediv_expr_right_1 = var_norm_denom;
tmp_mult_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 851;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_norm_numerator == NULL) {
Py_DECREF(tmp_mult_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_norm_numerator);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 852;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_mult_expr_right_1 = var_norm_numerator;
tmp_assign_source_36 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 852;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_f_indices;
    var_f_indices = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_22;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(var_f_indices);
tmp_expression_value_16 = var_f_indices;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_astype);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 853;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_17 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 853;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_intp);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 853;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 853;
tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 853;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_indices;
    var_indices = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(var_indices);
tmp_assign_source_38 = var_indices;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_38;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_indices);
tmp_cmp_expr_left_8 = var_indices;
if (var_n_equal_bins == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n_equal_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 854;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_cmp_expr_right_8 = var_n_equal_bins;
tmp_assign_source_39 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 854;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_18 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_5 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_5);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 854;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_subscript_1__value;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 854;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_41 = tmp_isub_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_41;

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_1 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 854;
type_description_1 = "oooooooooooooooooooooooooooooooo";
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

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_7:;
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
{
PyObject *tmp_assign_source_42;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_tmp_a);
tmp_cmp_expr_left_9 = var_tmp_a;
if (var_bin_edges == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bin_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 858;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_19 = var_bin_edges;
CHECK_OBJECT(var_indices);
tmp_subscript_value_6 = var_indices;
tmp_cmp_expr_right_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_6);
if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 858;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_42 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 858;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_decrement;
    var_decrement = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
CHECK_OBJECT(var_indices);
tmp_assign_source_43 = var_indices;
{
    PyObject *old = tmp_inplace_assign_subscript_2__target;
    tmp_inplace_assign_subscript_2__target = tmp_assign_source_43;
    Py_INCREF(tmp_inplace_assign_subscript_2__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
CHECK_OBJECT(var_decrement);
tmp_assign_source_44 = var_decrement;
{
    PyObject *old = tmp_inplace_assign_subscript_2__subscript;
    tmp_inplace_assign_subscript_2__subscript = tmp_assign_source_44;
    Py_INCREF(tmp_inplace_assign_subscript_2__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_expression_value_20 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_subscript_value_7 = tmp_inplace_assign_subscript_2__subscript;
tmp_assign_source_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_7);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_inplace_assign_subscript_2__value;
    tmp_inplace_assign_subscript_2__value = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_isub_expr_left_2;
PyObject *tmp_isub_expr_right_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_isub_expr_left_2 = tmp_inplace_assign_subscript_2__value;
tmp_isub_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_46 = tmp_isub_expr_left_2;
tmp_inplace_assign_subscript_2__value = tmp_assign_source_46;

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_ass_subvalue_2 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_ass_subscribed_2 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_ass_subscript_2 = tmp_inplace_assign_subscript_2__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
Py_DECREF(tmp_inplace_assign_subscript_2__subscript);
tmp_inplace_assign_subscript_2__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
Py_DECREF(tmp_inplace_assign_subscript_2__subscript);
tmp_inplace_assign_subscript_2__subscript = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
Py_DECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_8;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_tmp_a);
tmp_cmp_expr_left_10 = var_tmp_a;
if (var_bin_edges == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bin_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_21 = var_bin_edges;
CHECK_OBJECT(var_indices);
tmp_add_expr_left_3 = var_indices;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_subscript_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_subscript_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_cmp_expr_right_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_bitand_expr_left_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_indices);
tmp_cmp_expr_left_11 = var_indices;
if (var_n_equal_bins == NULL) {
Py_DECREF(tmp_bitand_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n_equal_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_sub_expr_left_1 = var_n_equal_bins;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_cmp_expr_right_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_bitand_expr_right_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_right_11);
Py_DECREF(tmp_cmp_expr_right_11);
if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_47 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
CHECK_OBJECT(tmp_bitand_expr_right_1);
Py_DECREF(tmp_bitand_expr_right_1);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_increment;
    var_increment = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
CHECK_OBJECT(var_indices);
tmp_assign_source_48 = var_indices;
{
    PyObject *old = tmp_inplace_assign_subscript_3__target;
    tmp_inplace_assign_subscript_3__target = tmp_assign_source_48;
    Py_INCREF(tmp_inplace_assign_subscript_3__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_49;
CHECK_OBJECT(var_increment);
tmp_assign_source_49 = var_increment;
{
    PyObject *old = tmp_inplace_assign_subscript_3__subscript;
    tmp_inplace_assign_subscript_3__subscript = tmp_assign_source_49;
    Py_INCREF(tmp_inplace_assign_subscript_3__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_50;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_9;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
tmp_expression_value_22 = tmp_inplace_assign_subscript_3__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
tmp_subscript_value_9 = tmp_inplace_assign_subscript_3__subscript;
tmp_assign_source_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_9);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_inplace_assign_subscript_3__value;
    tmp_inplace_assign_subscript_3__value = tmp_assign_source_50;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_3__value;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_assign_source_51 = tmp_iadd_expr_left_1;
tmp_inplace_assign_subscript_3__value = tmp_assign_source_51;

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__value);
tmp_ass_subvalue_3 = tmp_inplace_assign_subscript_3__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
tmp_ass_subscribed_3 = tmp_inplace_assign_subscript_3__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
tmp_ass_subscript_3 = tmp_inplace_assign_subscript_3__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooooooooooooooooooooooooooooo";
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

CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
Py_DECREF(tmp_inplace_assign_subscript_3__target);
tmp_inplace_assign_subscript_3__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
Py_DECREF(tmp_inplace_assign_subscript_3__subscript);
tmp_inplace_assign_subscript_3__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_3__value);
tmp_inplace_assign_subscript_3__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_8;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
Py_DECREF(tmp_inplace_assign_subscript_3__target);
tmp_inplace_assign_subscript_3__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
Py_DECREF(tmp_inplace_assign_subscript_3__subscript);
tmp_inplace_assign_subscript_3__subscript = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_3__value);
Py_DECREF(tmp_inplace_assign_subscript_3__value);
tmp_inplace_assign_subscript_3__value = NULL;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_23;
if (var_ntype == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 866;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_23 = var_ntype;
tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_kind);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 866;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_cmp_expr_right_12 = mod_consts.const_str_plain_c;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 866;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_expression_value_24;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 867;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_24 = var_n;
tmp_assign_source_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_real);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_inplace_assign_1__value;
    tmp_inplace_assign_1__value = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_53;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_25;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_26;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_2 = tmp_inplace_assign_1__value;
tmp_expression_value_25 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 867;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_bincount);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_indices);
tmp_kw_call_arg_value_0_1 = var_indices;
CHECK_OBJECT(var_tmp_w);
tmp_expression_value_26 = var_tmp_w;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_real);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 867;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
if (var_n_equal_bins == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n_equal_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 868;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_kw_call_dict_value_1_1 = var_n_equal_bins;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 867;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_weights_str_plain_minlength_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_assign_source_53 = tmp_iadd_expr_left_2;
tmp_inplace_assign_1__value = tmp_assign_source_53;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 867;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_assattr_target_1 = var_n;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_real, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
}
goto try_end_10;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_8;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_expression_value_27;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 869;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_27 = var_n;
tmp_assign_source_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_imag);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_inplace_assign_2__value;
    tmp_inplace_assign_2__value = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_28;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_expression_value_29;
PyObject *tmp_kw_call_dict_value_1_2;
CHECK_OBJECT(tmp_inplace_assign_2__value);
tmp_iadd_expr_left_3 = tmp_inplace_assign_2__value;
tmp_expression_value_28 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 869;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_bincount);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_indices);
tmp_kw_call_arg_value_0_2 = var_indices;
CHECK_OBJECT(var_tmp_w);
tmp_expression_value_29 = var_tmp_w;
tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_imag);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 869;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
if (var_n_equal_bins == NULL) {
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_kw_call_dict_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n_equal_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 870;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_kw_call_dict_value_1_2 = var_n_equal_bins;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 869;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_iadd_expr_right_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_str_plain_weights_str_plain_minlength_tuple);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_assign_source_55 = tmp_iadd_expr_left_3;
tmp_inplace_assign_2__value = tmp_assign_source_55;

}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_inplace_assign_2__value);
tmp_assattr_value_2 = tmp_inplace_assign_2__value;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 869;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_assattr_target_2 = var_n;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_imag, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
}
goto try_end_11;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_2__value);
CHECK_OBJECT(tmp_inplace_assign_2__value);
Py_DECREF(tmp_inplace_assign_2__value);
tmp_inplace_assign_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_8;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_inplace_assign_2__value);
CHECK_OBJECT(tmp_inplace_assign_2__value);
Py_DECREF(tmp_inplace_assign_2__value);
tmp_inplace_assign_2__value = NULL;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_30;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_31;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
PyObject *tmp_args_element_value_23;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_iadd_expr_left_4 = var_n;
tmp_expression_value_31 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_bincount);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_indices);
tmp_kw_call_arg_value_0_3 = var_indices;
CHECK_OBJECT(var_tmp_w);
tmp_kw_call_dict_value_0_3 = var_tmp_w;
if (var_n_equal_bins == NULL) {
Py_DECREF(tmp_called_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n_equal_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 873;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_1_3 = var_n_equal_bins;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 872;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
    tmp_expression_value_30 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts.const_tuple_str_plain_weights_str_plain_minlength_tuple);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_astype);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_ntype == NULL) {
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 873;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_23 = var_ntype;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 872;
tmp_iadd_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_iadd_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
CHECK_OBJECT(tmp_iadd_expr_right_4);
Py_DECREF(tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_56 = tmp_iadd_expr_left_4;
var_n = tmp_assign_source_56;

}
branch_end_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 829;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_1;
loop_end_1:;
goto try_end_12;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_24;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_element_value_25;
tmp_expression_value_32 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 876;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_zeros);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bin_edges);
tmp_expression_value_33 = var_bin_edges;
tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 876;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ntype);
tmp_args_element_value_25 = var_ntype;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 876;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cum_n == NULL);
var_cum_n = tmp_assign_source_57;
}
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_13 = par_weights;
tmp_cmp_expr_right_13 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
PyObject *tmp_len_arg_2;
PyObject *tmp_args_element_value_28;
tmp_called_value_16 = module_var_accessor_numpy$lib$_histograms_impl$_range(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__range);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 878;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_26 = const_int_0;
CHECK_OBJECT(par_a);
tmp_len_arg_2 = par_a;
tmp_args_element_value_27 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_BLOCK);
tmp_args_element_value_28 = var_BLOCK;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 878;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_58 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_58;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_59;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_59 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_59 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooo";
exception_lineno = 878;
        goto try_except_handler_14;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_59;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_60;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_60 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_60;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_34;
PyObject *tmp_args_element_value_29;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_10;
PyObject *tmp_start_value_3;
PyObject *tmp_stop_value_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
tmp_expression_value_34 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_sort);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(par_a);
tmp_expression_value_35 = par_a;
CHECK_OBJECT(var_i);
tmp_start_value_3 = var_i;
CHECK_OBJECT(var_i);
tmp_add_expr_left_4 = var_i;
if (var_BLOCK == NULL) {
Py_DECREF(tmp_called_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BLOCK);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_add_expr_right_4 = var_BLOCK;
tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_stop_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_subscript_value_10 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
CHECK_OBJECT(tmp_stop_value_3);
Py_DECREF(tmp_stop_value_3);
assert(!(tmp_subscript_value_10 == NULL));
tmp_args_element_value_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 879;
tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_29);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 879;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = var_sa;
    var_sa = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_30;
PyObject *tmp_args_element_value_31;
if (var_cum_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cum_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 880;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_iadd_expr_left_5 = var_cum_n;
tmp_called_value_18 = module_var_accessor_numpy$lib$_histograms_impl$_search_sorted_inclusive(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__search_sorted_inclusive);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 880;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(var_sa);
tmp_args_element_value_30 = var_sa;
if (var_bin_edges == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bin_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 880;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_args_element_value_31 = var_bin_edges;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 880;
{
    PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
    tmp_iadd_expr_right_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

if (tmp_iadd_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
CHECK_OBJECT(tmp_iadd_expr_right_5);
Py_DECREF(tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_assign_source_62 = tmp_iadd_expr_left_5;
var_cum_n = tmp_assign_source_62;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
goto loop_start_2;
loop_end_2:;
goto try_end_13;
// Exception handler code:
try_except_handler_14:;
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
try_end_13:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_36;
PyObject *tmp_kw_call_value_0_1;
tmp_expression_value_36 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 882;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_zeros);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 882;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ntype);
tmp_kw_call_value_0_1 = var_ntype;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 882;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_63 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_19, mod_consts.const_tuple_int_pos_1_tuple, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 882;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_zero == NULL);
var_zero = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_iter_arg_6;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_len_arg_3;
PyObject *tmp_args_element_value_34;
tmp_called_value_20 = module_var_accessor_numpy$lib$_histograms_impl$_range(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__range);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_32 = const_int_0;
CHECK_OBJECT(par_a);
tmp_len_arg_3 = par_a;
tmp_args_element_value_33 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_BLOCK);
tmp_args_element_value_34 = var_BLOCK;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 883;
{
    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
    tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_64 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_64;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_65;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_65 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_65 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooo";
exception_lineno = 883;
        goto try_except_handler_15;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_66;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_66 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_66;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_11;
PyObject *tmp_start_value_4;
PyObject *tmp_stop_value_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
CHECK_OBJECT(par_a);
tmp_expression_value_37 = par_a;
CHECK_OBJECT(var_i);
tmp_start_value_4 = var_i;
CHECK_OBJECT(var_i);
tmp_add_expr_left_5 = var_i;
if (var_BLOCK == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BLOCK);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 884;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_add_expr_right_5 = var_BLOCK;
tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_stop_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 884;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_subscript_value_11 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_4);
CHECK_OBJECT(tmp_stop_value_4);
Py_DECREF(tmp_stop_value_4);
assert(!(tmp_subscript_value_11 == NULL));
tmp_assign_source_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_11);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 884;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = var_tmp_a;
    var_tmp_a = tmp_assign_source_67;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_12;
PyObject *tmp_start_value_5;
PyObject *tmp_stop_value_5;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
CHECK_OBJECT(par_weights);
tmp_expression_value_38 = par_weights;
CHECK_OBJECT(var_i);
tmp_start_value_5 = var_i;
CHECK_OBJECT(var_i);
tmp_add_expr_left_6 = var_i;
if (var_BLOCK == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BLOCK);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 885;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_add_expr_right_6 = var_BLOCK;
tmp_stop_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
if (tmp_stop_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_subscript_value_12 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_5, tmp_stop_value_5);
CHECK_OBJECT(tmp_stop_value_5);
Py_DECREF(tmp_stop_value_5);
assert(!(tmp_subscript_value_12 == NULL));
tmp_assign_source_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_12);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = var_tmp_w;
    var_tmp_w = tmp_assign_source_68;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_35;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 886;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(var_tmp_a);
tmp_args_element_value_35 = var_tmp_a;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 886;
tmp_assign_source_69 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_argsort, tmp_args_element_value_35);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = var_sorting_index;
    var_sorting_index = tmp_assign_source_69;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_13;
CHECK_OBJECT(var_tmp_a);
tmp_expression_value_39 = var_tmp_a;
CHECK_OBJECT(var_sorting_index);
tmp_subscript_value_13 = var_sorting_index;
tmp_assign_source_70 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_13);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 887;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = var_sa;
    var_sa = tmp_assign_source_70;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_14;
CHECK_OBJECT(var_tmp_w);
tmp_expression_value_40 = var_tmp_w;
CHECK_OBJECT(var_sorting_index);
tmp_subscript_value_14 = var_sorting_index;
tmp_assign_source_71 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_14);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 888;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = var_sw;
    var_sw = tmp_assign_source_71;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_41;
PyObject *tmp_args_element_value_36;
PyObject *tmp_tuple_element_2;
tmp_expression_value_41 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 889;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_concatenate);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 889;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
if (var_zero == NULL) {
Py_DECREF(tmp_called_value_21);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_zero);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 889;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_tuple_element_2 = var_zero;
tmp_args_element_value_36 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_instance_4;
PyTuple_SET_ITEM0(tmp_args_element_value_36, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_sw);
tmp_called_instance_4 = var_sw;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 889;
tmp_tuple_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_cumsum);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 889;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_36, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_21);
Py_DECREF(tmp_args_element_value_36);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 889;
tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_36);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 889;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = var_cw;
    var_cw = tmp_assign_source_72;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_37;
PyObject *tmp_args_element_value_38;
tmp_called_value_22 = module_var_accessor_numpy$lib$_histograms_impl$_search_sorted_inclusive(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__search_sorted_inclusive);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 890;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(var_sa);
tmp_args_element_value_37 = var_sa;
if (var_bin_edges == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bin_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 890;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_args_element_value_38 = var_bin_edges;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 890;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
    tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
}

if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 890;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = var_bin_index;
    var_bin_index = tmp_assign_source_73;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_iadd_expr_left_6;
PyObject *tmp_iadd_expr_right_6;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_15;
if (var_cum_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cum_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 891;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_iadd_expr_left_6 = var_cum_n;
CHECK_OBJECT(var_cw);
tmp_expression_value_42 = var_cw;
CHECK_OBJECT(var_bin_index);
tmp_subscript_value_15 = var_bin_index;
tmp_iadd_expr_right_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_15);
if (tmp_iadd_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 891;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
CHECK_OBJECT(tmp_iadd_expr_right_6);
Py_DECREF(tmp_iadd_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 891;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_assign_source_74 = tmp_iadd_expr_left_6;
var_cum_n = tmp_assign_source_74;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
goto loop_start_3;
loop_end_3:;
goto try_end_14;
// Exception handler code:
try_except_handler_15:;
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
branch_end_7:;
{
PyObject *tmp_assign_source_75;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_43;
PyObject *tmp_args_element_value_39;
tmp_expression_value_43 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 893;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_diff);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 893;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_cum_n == NULL) {
Py_DECREF(tmp_called_value_23);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cum_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 893;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_39 = var_cum_n;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 893;
tmp_assign_source_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_39);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 893;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_n == NULL);
var_n = tmp_assign_source_75;
}
branch_end_2:;
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_2;
CHECK_OBJECT(par_density);
tmp_truth_name_2 = CHECK_IF_TRUE(par_density);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 895;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_76;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_44;
PyObject *tmp_args_element_value_40;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_element_value_41;
PyObject *tmp_args_element_value_42;
tmp_expression_value_44 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_array);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_45 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_24);

exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_diff);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_bin_edges == NULL) {
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_called_value_25);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bin_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_41 = var_bin_edges;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 896;
tmp_args_element_value_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_41);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
if (tmp_args_element_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_42 = (PyObject *)&PyFloat_Type;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 896;
{
    PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_42};
    tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
}

CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_db == NULL);
var_db = tmp_assign_source_76;
}
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_called_instance_5;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truediv_expr_left_3 = var_n;
CHECK_OBJECT(var_db);
tmp_truediv_expr_right_3 = var_db;
tmp_truediv_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_n == NULL) {
Py_DECREF(tmp_truediv_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_5 = var_n;
frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame.f_lineno = 897;
tmp_truediv_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, const_str_plain_sum);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
if (var_bin_edges == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bin_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}

tmp_tuple_element_3 = var_bin_edges;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
goto frame_return_exit_1;
}
branch_no_8:;
{
PyObject *tmp_tuple_element_4;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 899;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_4 = var_n;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
if (var_bin_edges == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bin_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 899;
type_description_1 = "oooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}

tmp_tuple_element_4 = var_bin_edges;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram,
    type_description_1,
    par_a,
    par_bins,
    par_range,
    par_density,
    par_weights,
    var_bin_edges,
    var_uniform_bins,
    var_ntype,
    var_BLOCK,
    var_simple_weights,
    var_first_edge,
    var_last_edge,
    var_n_equal_bins,
    var_n,
    var_norm_numerator,
    var_norm_denom,
    var_i,
    var_tmp_a,
    var_tmp_w,
    var_keep,
    var_f_indices,
    var_indices,
    var_decrement,
    var_increment,
    var_cum_n,
    var_sa,
    var_zero,
    var_sorting_index,
    var_sw,
    var_cw,
    var_bin_index,
    var_db
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram == cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__18_histogram);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_a);
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
par_a = NULL;
CHECK_OBJECT(par_weights);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
par_weights = NULL;
Py_XDECREF(var_bin_edges);
var_bin_edges = NULL;
CHECK_OBJECT(var_uniform_bins);
CHECK_OBJECT(var_uniform_bins);
Py_DECREF(var_uniform_bins);
var_uniform_bins = NULL;
Py_XDECREF(var_ntype);
var_ntype = NULL;
Py_XDECREF(var_BLOCK);
var_BLOCK = NULL;
CHECK_OBJECT(var_simple_weights);
CHECK_OBJECT(var_simple_weights);
Py_DECREF(var_simple_weights);
var_simple_weights = NULL;
Py_XDECREF(var_first_edge);
var_first_edge = NULL;
Py_XDECREF(var_last_edge);
var_last_edge = NULL;
Py_XDECREF(var_n_equal_bins);
var_n_equal_bins = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_norm_numerator);
var_norm_numerator = NULL;
Py_XDECREF(var_norm_denom);
var_norm_denom = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp_a);
var_tmp_a = NULL;
Py_XDECREF(var_tmp_w);
var_tmp_w = NULL;
Py_XDECREF(var_keep);
var_keep = NULL;
Py_XDECREF(var_f_indices);
var_f_indices = NULL;
Py_XDECREF(var_indices);
var_indices = NULL;
Py_XDECREF(var_decrement);
var_decrement = NULL;
Py_XDECREF(var_increment);
var_increment = NULL;
Py_XDECREF(var_cum_n);
var_cum_n = NULL;
Py_XDECREF(var_sa);
var_sa = NULL;
Py_XDECREF(var_zero);
var_zero = NULL;
Py_XDECREF(var_sorting_index);
var_sorting_index = NULL;
Py_XDECREF(var_sw);
var_sw = NULL;
Py_XDECREF(var_cw);
var_cw = NULL;
Py_XDECREF(var_bin_index);
var_bin_index = NULL;
Py_XDECREF(var_db);
var_db = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_weights);
par_weights = NULL;
Py_XDECREF(var_bin_edges);
var_bin_edges = NULL;
Py_XDECREF(var_uniform_bins);
var_uniform_bins = NULL;
Py_XDECREF(var_ntype);
var_ntype = NULL;
Py_XDECREF(var_BLOCK);
var_BLOCK = NULL;
Py_XDECREF(var_simple_weights);
var_simple_weights = NULL;
Py_XDECREF(var_first_edge);
var_first_edge = NULL;
Py_XDECREF(var_last_edge);
var_last_edge = NULL;
Py_XDECREF(var_n_equal_bins);
var_n_equal_bins = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_norm_numerator);
var_norm_numerator = NULL;
Py_XDECREF(var_norm_denom);
var_norm_denom = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp_a);
var_tmp_a = NULL;
Py_XDECREF(var_tmp_w);
var_tmp_w = NULL;
Py_XDECREF(var_keep);
var_keep = NULL;
Py_XDECREF(var_f_indices);
var_f_indices = NULL;
Py_XDECREF(var_indices);
var_indices = NULL;
Py_XDECREF(var_decrement);
var_decrement = NULL;
Py_XDECREF(var_increment);
var_increment = NULL;
Py_XDECREF(var_cum_n);
var_cum_n = NULL;
Py_XDECREF(var_sa);
var_sa = NULL;
Py_XDECREF(var_zero);
var_zero = NULL;
Py_XDECREF(var_sorting_index);
var_sorting_index = NULL;
Py_XDECREF(var_sw);
var_sw = NULL;
Py_XDECREF(var_cw);
var_cw = NULL;
Py_XDECREF(var_bin_index);
var_bin_index = NULL;
Py_XDECREF(var_db);
var_db = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_bins);
Py_DECREF(par_bins);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
CHECK_OBJECT(par_density);
Py_DECREF(par_density);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_bins);
Py_DECREF(par_bins);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
CHECK_OBJECT(par_density);
Py_DECREF(par_density);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_sample = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_bins = Nuitka_Cell_New1(python_pars[1]);
PyObject *par_range = python_pars[2];
PyObject *par_density = python_pars[3];
struct Nuitka_CellObject *par_weights = Nuitka_Cell_New1(python_pars[4]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = par_bins;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = Nuitka_Cell_New0(par_density);
tmp_closure_1[2] = Nuitka_Cell_New0(par_range);
tmp_closure_1[3] = par_sample;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_weights;
Py_INCREF(tmp_closure_1[4]);
tmp_return_value = MAKE_GENERATOR_numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher$$$genobj__1__histogramdd_dispatcher(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_sample);
CHECK_OBJECT(par_sample);
Py_DECREF(par_sample);
par_sample = NULL;
CHECK_OBJECT(par_bins);
CHECK_OBJECT(par_bins);
Py_DECREF(par_bins);
par_bins = NULL;
CHECK_OBJECT(par_range);
CHECK_OBJECT(par_range);
Py_DECREF(par_range);
par_range = NULL;
CHECK_OBJECT(par_density);
CHECK_OBJECT(par_density);
Py_DECREF(par_density);
par_density = NULL;
CHECK_OBJECT(par_weights);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
par_weights = NULL;
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
struct numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher$$$genobj__1__histogramdd_dispatcher_locals {
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher$$$genobj__1__histogramdd_dispatcher_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher$$$genobj__1__histogramdd_dispatcher_locals *generator_heap = (struct numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher$$$genobj__1__histogramdd_dispatcher_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_93d7fa5582c7f3e6c9d4755e700bd5bf, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sample);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 904;
generator_heap->type_description_1 = "ccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[3]);
generator_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_shape);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 904;
generator_heap->type_description_1 = "ccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sample);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 905;
generator_heap->type_description_1 = "ccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[3]);
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 905;
generator_heap->type_description_1 = "ccccc";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_yieldfrom_result_1;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sample);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 907;
generator_heap->type_description_1 = "ccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[3]);
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 2;
generator->m_yield_from = tmp_expression_value_3;
return NULL;

yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 907;
generator_heap->type_description_1 = "ccccc";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
}
branch_end_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$contextlib(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 908;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_1;
}
generator->m_frame->m_frame.f_lineno = 908;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_suppress,
    PyTuple_GET_ITEM(mod_consts.const_tuple_type_TypeError_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 908;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_1;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_4 = generator_heap->tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 908;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_1;
}
generator->m_frame->m_frame.f_lineno = 908;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 908;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_1;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_5 = generator_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 908;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_1;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_6;
PyObject *tmp_yieldfrom_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_bins);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 909;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_3;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
Py_INCREF(tmp_expression_value_6);
generator->m_yield_return_index = 3;
generator->m_yield_from = tmp_expression_value_6;
return NULL;

yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 909;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_3;
}
tmp_yieldfrom_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_2);
Py_DECREF(tmp_yieldfrom_result_2);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_2 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 908;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 908;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_4;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 908;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_4;
}
tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 908;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccc";
goto try_except_handler_4;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 908;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccc";
goto try_except_handler_4;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_3 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 908;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 908;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_4 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 908;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 908;
generator_heap->type_description_1 = "ccccc";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
{
PyObject *tmp_expression_value_7;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_weights);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 910;
generator_heap->type_description_1 = "ccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[4]);
Py_INCREF(tmp_expression_value_7);
generator->m_yield_return_index = 4;
return tmp_expression_value_7;
yield_return_4:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 910;
generator_heap->type_description_1 = "ccccc";
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
    generator->m_closure[3],
    generator->m_closure[0],
    generator->m_closure[2],
    generator->m_closure[1],
    generator->m_closure[4]
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

static PyObject *MAKE_GENERATOR_numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher$$$genobj__1__histogramdd_dispatcher(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher$$$genobj__1__histogramdd_dispatcher_context,
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_plain__histogramdd_dispatcher,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_93d7fa5582c7f3e6c9d4755e700bd5bf,
        closure,
        5,
#if 1
        sizeof(struct numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher$$$genobj__1__histogramdd_dispatcher_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$lib$_histograms_impl$$$function__20_histogramdd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_sample = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_bins = python_pars[1];
PyObject *par_range = python_pars[2];
PyObject *par_density = python_pars[3];
PyObject *par_weights = python_pars[4];
PyObject *var_N = NULL;
PyObject *var_D = NULL;
PyObject *var_nbin = NULL;
struct Nuitka_CellObject *var_edges = Nuitka_Cell_NewEmpty();
PyObject *var_dedges = NULL;
PyObject *var_M = NULL;
PyObject *var_i = NULL;
PyObject *var_smin = NULL;
PyObject *var_smax = NULL;
PyObject *var_n = NULL;
PyObject *var_e = NULL;
PyObject *var_Ncount = NULL;
PyObject *var_on_edge = NULL;
PyObject *var_xy = NULL;
PyObject *var_hist = NULL;
PyObject *var_core = NULL;
PyObject *var_s = NULL;
PyObject *var_shape = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionStackItem exception_preserved_3;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd = MAKE_FUNCTION_FRAME(tstate, code_objects_3d0c91ee4a05c7524e64b38b96c0690e, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_type_description == NULL);
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd = cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd) == 2);

// Framed code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_sample));
tmp_expression_value_1 = Nuitka_Cell_GET(par_sample);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_shape);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 983;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 983;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_3;
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



exception_lineno = 983;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_4;
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



exception_lineno = 983;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_4;
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



exception_lineno = 983;
type_description_1 = "cooooooocoooooooooooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_N == NULL);
Py_INCREF(tmp_assign_source_4);
var_N = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_D == NULL);
Py_INCREF(tmp_assign_source_5);
var_D = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_AttributeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 984;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 986;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_sample));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_sample);
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 986;
tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_atleast_2d, tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 986;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_T);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 986;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = Nuitka_Cell_GET(par_sample);
    Nuitka_Cell_SET(par_sample, tmp_assign_source_6);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_sample));
tmp_expression_value_3 = Nuitka_Cell_GET(par_sample);
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_shape);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 987;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 987;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_6;
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



exception_lineno = 987;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_7;
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



exception_lineno = 987;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_7;
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



exception_lineno = 987;
type_description_1 = "cooooooocoooooooooooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
assert(var_N == NULL);
Py_INCREF(tmp_assign_source_10);
var_N = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
assert(var_D == NULL);
Py_INCREF(tmp_assign_source_11);
var_D = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 981;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame)) {
        frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "cooooooocoooooooooooooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 989;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_empty);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 989;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_D);
tmp_args_element_value_2 = var_D;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 989;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_intp);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 989;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 989;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 989;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_nbin == NULL);
var_nbin = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
CHECK_OBJECT(var_D);
tmp_mult_expr_left_1 = var_D;
tmp_mult_expr_right_1 = MAKE_LIST1(tstate, Py_None);
tmp_assign_source_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LIST(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 990;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_edges) == NULL);
Nuitka_Cell_SET(var_edges, tmp_assign_source_13);

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
CHECK_OBJECT(var_D);
tmp_mult_expr_left_2 = var_D;
tmp_mult_expr_right_2 = MAKE_LIST1(tstate, Py_None);
tmp_assign_source_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LIST(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 991;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dedges == NULL);
var_dedges = tmp_assign_source_14;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_2 = par_weights;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 993;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_weights);
tmp_args_element_value_4 = par_weights;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 993;
tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_asarray, tmp_args_element_value_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 993;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_weights;
    assert(old != NULL);
    par_weights = tmp_assign_source_15;
    Py_DECREF(old);
}

}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_bins);
tmp_len_arg_1 = par_bins;
tmp_assign_source_16 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 996;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_8;
}
assert(var_M == NULL);
var_M = tmp_assign_source_16;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_M);
tmp_cmp_expr_left_3 = var_M;
CHECK_OBJECT(var_D);
tmp_cmp_expr_right_3 = var_D;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 997;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_8;
}
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_0221a4dc3c37225cf5d316ceeffc51f5;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 998;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 998;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cooooooocoooooooooooooo";
goto try_except_handler_8;
}
branch_no_3:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_D);
tmp_mult_expr_left_3 = var_D;
CHECK_OBJECT(par_bins);
tmp_list_element_1 = par_bins;
tmp_mult_expr_right_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_mult_expr_right_3, 0, tmp_list_element_1);
tmp_assign_source_17 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LIST(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1003;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = par_bins;
    assert(old != NULL);
    par_bins = tmp_assign_source_17;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 995;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame)) {
        frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "cooooooocoooooooooooooo";
goto try_except_handler_9;
branch_end_4:;
goto try_end_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_range);
tmp_cmp_expr_left_5 = par_range;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
tmp_mult_expr_left_4 = mod_consts.const_tuple_none_tuple;
CHECK_OBJECT(var_D);
tmp_mult_expr_right_4 = var_D;
tmp_assign_source_18 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1007;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_range;
    assert(old != NULL);
    par_range = tmp_assign_source_18;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_range);
tmp_len_arg_2 = par_range;
tmp_cmp_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1008;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_D);
tmp_cmp_expr_right_6 = var_D;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1008;
type_description_1 = "cooooooocoooooooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_501dd2c789346deefe2dddd8ff4becbd;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1009;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 1009;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cooooooocoooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
branch_end_5:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_numpy$lib$_histograms_impl$_range(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__range);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1012;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_D);
tmp_args_element_value_5 = var_D;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1012;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_5);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1012;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1012;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_19;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_20 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "cooooooocoooooooooooooo";
exception_lineno = 1012;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_21 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_21;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
tmp_expression_value_6 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1013;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ndim);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1013;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (par_bins == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1013;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_7 = par_bins;
CHECK_OBJECT(var_i);
tmp_subscript_value_1 = var_i;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1013;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1013;
tmp_cmp_expr_left_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1013;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_cmp_expr_right_7 = const_int_0;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1013;
type_description_1 = "cooooooocoooooooooooooo";
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
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
if (par_bins == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1014;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_8 = par_bins;
CHECK_OBJECT(var_i);
tmp_subscript_value_2 = var_i;
tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1014;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_cmp_expr_right_8 = const_int_pos_1;
tmp_condition_result_8 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1014;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_d1389b573d48790e9da91f79c93f40a7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_i);
tmp_format_value_1 = var_i;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1016;
type_description_1 = "cooooooocoooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_f1aa002c445aed7bcf2c43bb331dfb4d;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_3 == NULL));
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1015;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 1015;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cooooooocoooooooooooooo";
goto try_except_handler_10;
}
branch_no_8:;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
tmp_called_value_4 = module_var_accessor_numpy$lib$_histograms_impl$_get_outer_edges(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_outer_edges);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_11;
}
if (Nuitka_Cell_GET(par_sample) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sample);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_9 = Nuitka_Cell_GET(par_sample);
tmp_tuple_element_2 = mod_consts.const_slice_none_none_none;
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_i);
tmp_tuple_element_2 = var_i;
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_11;
}
if (par_range == NULL) {
Py_DECREF(tmp_args_element_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_range);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_10 = par_range;
CHECK_OBJECT(var_i);
tmp_subscript_value_4 = var_i;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_4);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_11;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1017;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_11;
}
tmp_assign_source_22 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_24;
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



exception_lineno = 1017;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_12;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_11;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_10;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_25 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_smin;
    var_smin = tmp_assign_source_25;
    Py_INCREF(var_smin);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_26 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_smax;
    var_smax = tmp_assign_source_26;
    Py_INCREF(var_smax);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_5;
tmp_expression_value_11 = module_var_accessor_numpy$lib$_histograms_impl$operator(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_operator);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1019;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_13;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_index);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1019;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_13;
}
if (par_bins == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1019;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_13;
}

tmp_expression_value_12 = par_bins;
CHECK_OBJECT(var_i);
tmp_subscript_value_5 = var_i;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_5);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 1019;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_13;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1019;
tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1019;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
goto try_end_11;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_11);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_28); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_28);
var_e = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_3 = mod_consts.const_str_digest_d1389b573d48790e9da91f79c93f40a7;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_i);
tmp_format_value_2 = var_i;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1023;
type_description_1 = "cooooooocoooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_39be9943bd6fa0d4c7105858b312b765;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_4 == NULL));
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1022;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_4;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 1024;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "cooooooocoooooooooooooo";
goto try_except_handler_15;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_14;
// End of try:
goto branch_end_9;
branch_no_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 1018;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame)) {
        frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "cooooooocoooooooooooooo";
goto try_except_handler_14;
branch_end_9:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_10;
// End of try:
// End of try:
try_end_11:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_13 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1026;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_linspace);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1026;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_smin);
tmp_args_element_value_10 = var_smin;
CHECK_OBJECT(var_smax);
tmp_args_element_value_11 = var_smax;
CHECK_OBJECT(var_n);
tmp_add_expr_left_1 = var_n;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1026;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1026;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1026;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(var_edges) == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1026;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_ass_subscribed_1 = Nuitka_Cell_GET(var_edges);
CHECK_OBJECT(var_i);
tmp_ass_subscript_1 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1026;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_6;
tmp_expression_value_14 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1027;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_ndim);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1027;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (par_bins == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1027;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_15 = par_bins;
CHECK_OBJECT(var_i);
tmp_subscript_value_6 = var_i;
tmp_args_element_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_6);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 1027;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1027;
tmp_cmp_expr_left_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1027;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_cmp_expr_right_10 = const_int_pos_1;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1027;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_7;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_expression_value_16 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1028;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_asarray);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1028;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (par_bins == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bins);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1028;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_17 = par_bins;
CHECK_OBJECT(var_i);
tmp_subscript_value_7 = var_i;
tmp_args_element_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_7);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 1028;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1028;
tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1028;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(var_edges) == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1028;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_ass_subscribed_2 = Nuitka_Cell_GET(var_edges);
CHECK_OBJECT(var_i);
tmp_ass_subscript_2 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1028;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_15;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_8;
PyObject *tmp_subscript_value_9;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_10;
PyObject *tmp_subscript_value_11;
int tmp_truth_name_1;
tmp_expression_value_18 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_any);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(var_edges) == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_20 = Nuitka_Cell_GET(var_edges);
CHECK_OBJECT(var_i);
tmp_subscript_value_8 = var_i;
tmp_expression_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_8);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_subscript_value_9 = mod_consts.const_slice_none_int_neg_1_none;
tmp_cmp_expr_left_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(var_edges) == NULL) {
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_cmp_expr_left_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_22 = Nuitka_Cell_GET(var_edges);
CHECK_OBJECT(var_i);
tmp_subscript_value_10 = var_i;
tmp_expression_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_10);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_cmp_expr_left_11);

exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_subscript_value_11 = mod_consts.const_slice_int_pos_1_none_none;
tmp_cmp_expr_right_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_cmp_expr_left_11);

exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_args_element_value_15 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
CHECK_OBJECT(tmp_cmp_expr_right_11);
Py_DECREF(tmp_cmp_expr_right_11);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1029;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 1029;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_11 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_d1389b573d48790e9da91f79c93f40a7;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_i);
tmp_format_value_3 = var_i;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1031;
type_description_1 = "cooooooocoooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_ccb1256e900177bd2a9674c0b855f065;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_make_exception_arg_5 == NULL));
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1030;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 1030;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cooooooocoooooooooooooo";
goto try_except_handler_10;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = mod_consts.const_str_digest_d1389b573d48790e9da91f79c93f40a7;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_i);
tmp_format_value_4 = var_i;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1034;
type_description_1 = "cooooooocoooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_7088b215ac661140e6a7ad56c5202027;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_make_exception_arg_6 == NULL));
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1033;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 1033;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cooooooocoooooooooooooo";
goto try_except_handler_10;
}
branch_end_10:;
branch_end_7:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_add_expr_left_2;
nuitka_digit tmp_add_expr_right_2;
PyObject *tmp_len_arg_3;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_12;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (Nuitka_Cell_GET(var_edges) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1036;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_23 = Nuitka_Cell_GET(var_edges);
CHECK_OBJECT(var_i);
tmp_subscript_value_12 = var_i;
tmp_len_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_12);
if (tmp_len_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1036;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_add_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_3);
CHECK_OBJECT(tmp_len_arg_3);
Py_DECREF(tmp_len_arg_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1036;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_add_expr_right_2 = 1;
tmp_ass_subvalue_3 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
assert(!(tmp_ass_subvalue_3 == NULL));
if (var_nbin == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nbin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1036;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_ass_subscribed_3 = var_nbin;
CHECK_OBJECT(var_i);
tmp_ass_subscript_3 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1036;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_13;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_expression_value_24 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1037;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_diff);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1037;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(var_edges) == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1037;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_25 = Nuitka_Cell_GET(var_edges);
CHECK_OBJECT(var_i);
tmp_subscript_value_13 = var_i;
tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_13);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 1037;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1037;
tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1037;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
if (var_dedges == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dedges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1037;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}

tmp_ass_subscribed_4 = var_dedges;
CHECK_OBJECT(var_i);
tmp_ass_subscript_4 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1037;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1012;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_1;
loop_end_1:;
goto try_end_12;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_tuple_arg_1;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_17;
tmp_called_value_11 = module_var_accessor_numpy$lib$_histograms_impl$_range(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__range);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1043;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_D);
tmp_args_element_value_17 = var_D;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1043;
tmp_iter_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_17);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1043;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_30 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1043;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_30;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = var_edges;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[2] = par_sample;
Py_INCREF(tmp_closure_1[2]);
tmp_tuple_arg_1 = MAKE_GENERATOR_numpy$lib$_histograms_impl$$$function__20_histogramdd$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_16;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_assign_source_29 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1040;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_Ncount == NULL);
var_Ncount = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_6;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_18;
tmp_called_value_12 = module_var_accessor_numpy$lib$_histograms_impl$_range(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__range);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1049;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_D);
tmp_args_element_value_18 = var_D;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1049;
tmp_iter_arg_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_18);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1049;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_31 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1049;
type_description_1 = "cooooooocoooooooooooooo";
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
tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_32 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "cooooooocoooooooooooooo";
exception_lineno = 1049;
        goto try_except_handler_17;
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_33;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_14;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_15;
PyObject *tmp_subscript_value_16;
if (Nuitka_Cell_GET(par_sample) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sample);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1051;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_17;
}

tmp_expression_value_26 = Nuitka_Cell_GET(par_sample);
tmp_tuple_element_6 = mod_consts.const_slice_none_none_none;
tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_i);
tmp_tuple_element_6 = var_i;
PyTuple_SET_ITEM0(tmp_subscript_value_14, 1, tmp_tuple_element_6);
tmp_cmp_expr_left_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_14);
CHECK_OBJECT(tmp_subscript_value_14);
Py_DECREF(tmp_subscript_value_14);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1051;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_17;
}
if (Nuitka_Cell_GET(var_edges) == NULL) {
Py_DECREF(tmp_cmp_expr_left_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1051;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_17;
}

tmp_expression_value_28 = Nuitka_Cell_GET(var_edges);
CHECK_OBJECT(var_i);
tmp_subscript_value_15 = var_i;
tmp_expression_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_15);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 1051;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_17;
}
tmp_subscript_value_16 = const_int_neg_1;
tmp_cmp_expr_right_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_16, -1);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 1051;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_17;
}
tmp_assign_source_34 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_right_12);
Py_DECREF(tmp_cmp_expr_right_12);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1051;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = var_on_edge;
    var_on_edge = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_17;
CHECK_OBJECT(var_Ncount);
tmp_expression_value_29 = var_Ncount;
CHECK_OBJECT(var_i);
tmp_subscript_value_17 = var_i;
tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_17);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1053;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
CHECK_OBJECT(var_on_edge);
tmp_assign_source_36 = var_on_edge;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_36;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_18;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_30 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_18 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_18);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1053;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_18;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_subscript_1__value;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1053;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_18;
}
tmp_assign_source_38 = tmp_isub_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_38;

}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_5 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_5 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_5 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1053;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_18;
}
}
goto try_end_13;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_17;
// End of try:
try_end_13:;
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
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1049;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_17;
}
goto loop_start_2;
loop_end_2:;
goto try_end_14;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
tmp_expression_value_31 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1057;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_ravel_multi_index);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1057;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_Ncount);
tmp_args_element_value_19 = var_Ncount;
if (var_nbin == NULL) {
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nbin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1057;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_20 = var_nbin;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1057;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1057;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_xy == NULL);
var_xy = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_32;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_instance_3;
tmp_expression_value_32 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1061;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_bincount);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1061;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_xy);
tmp_kw_call_arg_value_0_1 = var_xy;
CHECK_OBJECT(par_weights);
tmp_kw_call_arg_value_1_1 = par_weights;
if (var_nbin == NULL) {
Py_DECREF(tmp_called_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nbin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1061;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_3 = var_nbin;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1061;
tmp_kw_call_dict_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_prod);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 1061;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1061;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts.const_tuple_str_plain_minlength_tuple);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1061;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_hist == NULL);
var_hist = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_element_value_21;
CHECK_OBJECT(var_hist);
tmp_expression_value_33 = var_hist;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_reshape);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1064;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nbin == NULL) {
Py_DECREF(tmp_called_value_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nbin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1064;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_21 = var_nbin;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1064;
tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1064;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hist;
    assert(old != NULL);
    var_hist = tmp_assign_source_41;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(var_hist);
tmp_expression_value_34 = var_hist;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_astype);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1067;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1067;
tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts.const_tuple_type_float_str_plain_safe_tuple, 0), mod_consts.const_tuple_str_plain_casting_tuple);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1067;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hist;
    assert(old != NULL);
    var_hist = tmp_assign_source_42;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
CHECK_OBJECT(var_D);
tmp_mult_expr_left_5 = var_D;
tmp_mult_expr_right_5 = mod_consts.const_tuple_slice_int_pos_1_int_neg_1_none_tuple;
tmp_assign_source_43 = BINARY_OPERATION_MULT_OBJECT_OBJECT_TUPLE(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1070;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_core == NULL);
var_core = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_19;
CHECK_OBJECT(var_hist);
tmp_expression_value_35 = var_hist;
CHECK_OBJECT(var_core);
tmp_subscript_value_19 = var_core;
tmp_assign_source_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_19);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1071;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hist;
    assert(old != NULL);
    var_hist = tmp_assign_source_44;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_2;
CHECK_OBJECT(par_density);
tmp_truth_name_2 = CHECK_IF_TRUE(par_density);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1073;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_hist);
tmp_called_instance_4 = var_hist;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1075;
tmp_assign_source_45 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, const_str_plain_sum);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1075;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_s == NULL);
var_s = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_iter_arg_7;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_22;
tmp_called_value_17 = module_var_accessor_numpy$lib$_histograms_impl$_range(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__range);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1076;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_D);
tmp_args_element_value_22 = var_D;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1076;
tmp_iter_arg_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_22);
if (tmp_iter_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1076;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_46 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
CHECK_OBJECT(tmp_iter_arg_7);
Py_DECREF(tmp_iter_arg_7);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1076;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_46;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_47;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_47 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_47 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "cooooooocoooooooooooooo";
exception_lineno = 1076;
        goto try_except_handler_19;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_48 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_48;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_36;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
tmp_expression_value_36 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1077;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_ones);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1077;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
if (var_D == NULL) {
Py_DECREF(tmp_called_value_18);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_D);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1077;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}

tmp_args_element_value_23 = var_D;
tmp_args_element_value_24 = (PyObject *)&PyLong_Type;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1077;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1077;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
{
    PyObject *old = var_shape;
    var_shape = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_20;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
if (var_nbin == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nbin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1078;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}

tmp_expression_value_37 = var_nbin;
CHECK_OBJECT(var_i);
tmp_subscript_value_20 = var_i;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_20);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1078;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
tmp_sub_expr_right_1 = mod_consts.const_int_pos_2;
tmp_ass_subvalue_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_ass_subvalue_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1078;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(var_shape);
tmp_ass_subscribed_6 = var_shape;
CHECK_OBJECT(var_i);
tmp_ass_subscript_6 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1078;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_21;
PyObject *tmp_args_element_value_25;
if (var_hist == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hist);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1079;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}

tmp_truediv_expr_left_1 = var_hist;
if (var_dedges == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dedges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1079;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}

tmp_expression_value_38 = var_dedges;
CHECK_OBJECT(var_i);
tmp_subscript_value_21 = var_i;
tmp_called_instance_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_21);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1079;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(var_shape);
tmp_args_element_value_25 = var_shape;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1079;
tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_reshape, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1079;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
tmp_assign_source_50 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1079;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
{
    PyObject *old = var_hist;
    var_hist = tmp_assign_source_50;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1076;
type_description_1 = "cooooooocoooooooooooooo";
    goto try_except_handler_19;
}
goto loop_start_3;
loop_end_3:;
goto try_end_15;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_itruediv_expr_left_1;
PyObject *tmp_itruediv_expr_right_1;
if (var_hist == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hist);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1080;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_itruediv_expr_left_1 = var_hist;
CHECK_OBJECT(var_s);
tmp_itruediv_expr_right_1 = var_s;
tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1080;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_51 = tmp_itruediv_expr_left_1;
var_hist = tmp_assign_source_51;

}
branch_no_12:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_called_instance_6;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_expression_value_39;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_call_result_2;
int tmp_truth_name_3;
CHECK_OBJECT(var_hist);
tmp_expression_value_39 = var_hist;
tmp_cmp_expr_left_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_shape);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1082;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_nbin == NULL) {
Py_DECREF(tmp_cmp_expr_left_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nbin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1082;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_2 = var_nbin;
tmp_sub_expr_right_2 = mod_consts.const_int_pos_2;
tmp_cmp_expr_right_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_cmp_expr_right_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_13);

exception_lineno = 1082;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_6 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
CHECK_OBJECT(tmp_cmp_expr_right_13);
Py_DECREF(tmp_cmp_expr_right_13);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1082;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1082;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_any);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1082;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 1082;
type_description_1 = "cooooooocoooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
tmp_make_exception_arg_7 = mod_consts.const_str_digest_c36188fbce638baed40e442f74a20029;
frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame.f_lineno = 1083;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 1083;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cooooooocoooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_13:;
{
PyObject *tmp_tuple_element_7;
CHECK_OBJECT(var_hist);
tmp_tuple_element_7 = var_hist;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_7);
if (Nuitka_Cell_GET(var_edges) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_edges);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1085;
type_description_1 = "cooooooocoooooooooooooo";
    goto tuple_build_exception_5;
}

tmp_tuple_element_7 = Nuitka_Cell_GET(var_edges);
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_7);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd,
    type_description_1,
    par_sample,
    par_bins,
    par_range,
    par_density,
    par_weights,
    var_N,
    var_D,
    var_nbin,
    var_edges,
    var_dedges,
    var_M,
    var_i,
    var_smin,
    var_smax,
    var_n,
    var_e,
    var_Ncount,
    var_on_edge,
    var_xy,
    var_hist,
    var_core,
    var_s,
    var_shape
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd == cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd);
    cache_frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_histograms_impl$$$function__20_histogramdd);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_sample);
CHECK_OBJECT(par_sample);
Py_DECREF(par_sample);
par_sample = NULL;
Py_XDECREF(par_bins);
par_bins = NULL;
Py_XDECREF(par_range);
par_range = NULL;
CHECK_OBJECT(par_weights);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
par_weights = NULL;
CHECK_OBJECT(var_N);
CHECK_OBJECT(var_N);
Py_DECREF(var_N);
var_N = NULL;
Py_XDECREF(var_D);
var_D = NULL;
Py_XDECREF(var_nbin);
var_nbin = NULL;
CHECK_OBJECT(var_edges);
CHECK_OBJECT(var_edges);
Py_DECREF(var_edges);
var_edges = NULL;
Py_XDECREF(var_dedges);
var_dedges = NULL;
Py_XDECREF(var_M);
var_M = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_smin);
var_smin = NULL;
Py_XDECREF(var_smax);
var_smax = NULL;
Py_XDECREF(var_n);
var_n = NULL;
CHECK_OBJECT(var_Ncount);
CHECK_OBJECT(var_Ncount);
Py_DECREF(var_Ncount);
var_Ncount = NULL;
Py_XDECREF(var_on_edge);
var_on_edge = NULL;
CHECK_OBJECT(var_xy);
CHECK_OBJECT(var_xy);
Py_DECREF(var_xy);
var_xy = NULL;
CHECK_OBJECT(var_hist);
CHECK_OBJECT(var_hist);
Py_DECREF(var_hist);
var_hist = NULL;
CHECK_OBJECT(var_core);
CHECK_OBJECT(var_core);
Py_DECREF(var_core);
var_core = NULL;
Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_sample);
CHECK_OBJECT(par_sample);
Py_DECREF(par_sample);
par_sample = NULL;
Py_XDECREF(par_bins);
par_bins = NULL;
Py_XDECREF(par_range);
par_range = NULL;
Py_XDECREF(par_weights);
par_weights = NULL;
Py_XDECREF(var_N);
var_N = NULL;
Py_XDECREF(var_D);
var_D = NULL;
Py_XDECREF(var_nbin);
var_nbin = NULL;
CHECK_OBJECT(var_edges);
CHECK_OBJECT(var_edges);
Py_DECREF(var_edges);
var_edges = NULL;
Py_XDECREF(var_dedges);
var_dedges = NULL;
Py_XDECREF(var_M);
var_M = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_smin);
var_smin = NULL;
Py_XDECREF(var_smax);
var_smax = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_Ncount);
var_Ncount = NULL;
Py_XDECREF(var_on_edge);
var_on_edge = NULL;
Py_XDECREF(var_xy);
var_xy = NULL;
Py_XDECREF(var_hist);
var_hist = NULL;
Py_XDECREF(var_core);
var_core = NULL;
Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_density);
Py_DECREF(par_density);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_density);
Py_DECREF(par_density);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$lib$_histograms_impl$$$function__20_histogramdd$$$genexpr__1_genexpr_locals {
PyObject *var_i;
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

static PyObject *numpy$lib$_histograms_impl$$$function__20_histogramdd$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_histograms_impl$$$function__20_histogramdd$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$lib$_histograms_impl$$$function__20_histogramdd$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_i = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6cadb169bcabae521dc1e6e45b7d704c, module_numpy$lib$_histograms_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Nocc";
generator_heap->exception_lineno = 1040;
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
    PyObject *old = generator_heap->var_i;
    generator_heap->var_i = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kwargs_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_histograms_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 1042;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_searchsorted);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 1042;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_edges);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 1042;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_i);
tmp_subscript_value_1 = generator_heap->var_i;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 1042;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sample);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 1042;
generator_heap->type_description_1 = "Nocc";
    goto tuple_build_exception_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_tuple_element_2 = mod_consts.const_slice_none_none_none;
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(generator_heap->var_i);
tmp_tuple_element_2 = generator_heap->var_i;
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 1042;
generator_heap->type_description_1 = "Nocc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_607b85ec57ab5596c680ca014e9c8645);
generator->m_frame->m_frame.f_lineno = 1042;
tmp_expression_value_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 1042;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_kwargs_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_kwargs_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 1042;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 1040;
generator_heap->type_description_1 = "Nocc";
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
    generator_heap->var_i,
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$_histograms_impl$$$function__20_histogramdd$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_histograms_impl$$$function__20_histogramdd$$$genexpr__1_genexpr_context,
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_0ce187624ef22ccd08ff04d3de49f4e9,
#endif
        code_objects_6cadb169bcabae521dc1e6e45b7d704c,
        closure,
        3,
#if 1
        sizeof(struct numpy$lib$_histograms_impl$$$function__20_histogramdd$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights,
        mod_consts.const_str_plain__ravel_and_check_weights,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e75042a773f2f14961e01f41580ca393,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_8552d50bc8df8546bbd1e0564276af33,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__11__get_outer_edges(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__11__get_outer_edges,
        mod_consts.const_str_plain__get_outer_edges,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2445c974a6d473a6f71df0cfd43059e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_1bc43257067aeb2135a5f29eb538efc7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract,
        mod_consts.const_str_plain__unsigned_subtract,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5a9cdf9b620ce8c47d9b843f050a3538,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_f5a2334568c058c943c705bf4e734aa2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__13__get_bin_edges(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__13__get_bin_edges,
        mod_consts.const_str_plain__get_bin_edges,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9c6889644ad76181ba2cbbf2e46179cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_99d14c6036fa6269382498e9baa3d9a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive,
        mod_consts.const_str_plain__search_sorted_inclusive,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5fa6581d17755ad54540e31d4291b722,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_9f10145a7f3d60501e48731baa0252b9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__15__histogram_bin_edges_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__15__histogram_bin_edges_dispatcher,
        mod_consts.const_str_plain__histogram_bin_edges_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a167795ec4cf3f438d4e734564fff77e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges,
        mod_consts.const_str_plain_histogram_bin_edges,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f66d8e992d4aa55172ec06fb1e8267a0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_1c850fcf2a1ca647f9fc0608c3cfcdaf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__17__histogram_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__17__histogram_dispatcher,
        mod_consts.const_str_plain__histogram_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c86220704a5dadbdd629568094e68830,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__18_histogram(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__18_histogram,
        mod_consts.const_str_plain_histogram,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ffc7a1e18f7d8dfad6ce597f8ef10804,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_a649bf60bf84e3e87c1590fb5cbad58c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher,
        mod_consts.const_str_plain__histogramdd_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_93d7fa5582c7f3e6c9d4755e700bd5bf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__1__ptp(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__1__ptp,
        mod_consts.const_str_plain__ptp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fac794a611a0a152cffc543803d12249,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_6ee1a2f71b807a229ed2c96d1e64d5d5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__20_histogramdd(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__20_histogramdd,
        mod_consts.const_str_plain_histogramdd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3d0c91ee4a05c7524e64b38b96c0690e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_c6c625c309a9b0ae140b94984d9de2ab,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt,
        mod_consts.const_str_plain__hist_bin_sqrt,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_73baa15fb8d2ee52441391765757fa81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_f2611f10d20cfe900c497209ec5904ae,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges,
        mod_consts.const_str_plain__hist_bin_sturges,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_11744f4dcdfeed1eb2d72c05d52694d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_4b25f49ae6c2f56579440792d14ae6a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice,
        mod_consts.const_str_plain__hist_bin_rice,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d1e069f958ec33004806838adfc38b80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_4fe5cffd5e52c813d913573733b38d46,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott,
        mod_consts.const_str_plain__hist_bin_scott,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1f4262ce71a93cec9cd92caaf76c37ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_126c24fa072903e3f0d47fa71f5c46d4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone,
        mod_consts.const_str_plain__hist_bin_stone,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a7285ee1b73e13ac46bc9ed3fa797ff8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_f13dbaaef70fd5e866c4d530ed33a747,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat,
        mod_consts.const_str_plain_jhat,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0fd412be68fda30b7d8200dff02a084e,
#endif
        code_objects_d3056a5200f3bb82942e4184a11f320c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane,
        mod_consts.const_str_plain__hist_bin_doane,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_62f3590772a96f35ea6d9ca887768e00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_c62131e403645d778322adf39d0e4c98,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd,
        mod_consts.const_str_plain__hist_bin_fd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d981bfa46d67b5e0770fae44f93e098b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_8e15b1be02fb3043215104e9eb57a4d4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto,
        mod_consts.const_str_plain__hist_bin_auto,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c0eb41f9bfa7e05942a65309f3f6eaad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_histograms_impl,
        mod_consts.const_str_digest_4cc2c6a5b5def2d684d469b9e6148ef4,
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

static function_impl_code const function_table_numpy$lib$_histograms_impl[] = {
impl_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone$$$function__1_jhat,
impl_numpy$lib$_histograms_impl$$$function__1__ptp,
impl_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt,
impl_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges,
impl_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice,
impl_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott,
impl_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone,
impl_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane,
impl_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd,
impl_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto,
impl_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights,
impl_numpy$lib$_histograms_impl$$$function__11__get_outer_edges,
impl_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract,
impl_numpy$lib$_histograms_impl$$$function__13__get_bin_edges,
impl_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive,
impl_numpy$lib$_histograms_impl$$$function__15__histogram_bin_edges_dispatcher,
impl_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges,
impl_numpy$lib$_histograms_impl$$$function__17__histogram_dispatcher,
impl_numpy$lib$_histograms_impl$$$function__18_histogram,
impl_numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher,
impl_numpy$lib$_histograms_impl$$$function__20_histogramdd,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$lib$_histograms_impl);
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
        module_numpy$lib$_histograms_impl,
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
        function_table_numpy$lib$_histograms_impl,
        sizeof(function_table_numpy$lib$_histograms_impl) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.lib._histograms_impl";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$lib$_histograms_impl(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$_histograms_impl");

    // Store the module for future use.
    module_numpy$lib$_histograms_impl = module;

    moduledict_numpy$lib$_histograms_impl = MODULE_DICT(module_numpy$lib$_histograms_impl);

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
        PRINT_STRING("numpy$lib$_histograms_impl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$_histograms_impl: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$_histograms_impl: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._histograms_impl" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$_histograms_impl\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$_histograms_impl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_histograms_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_histograms_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_histograms_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_histograms_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$_histograms_impl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$_histograms_impl);
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

        UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_numpy$lib$_histograms_impl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_f3824405d2304e81109b98c68808ad2e;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$lib$_histograms_impl = MAKE_MODULE_FRAME(code_objects_3f27ba1e8b2a9fc0b266bb777605ae95, module_numpy$lib$_histograms_impl);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_histograms_impl);
assert(Py_REFCNT(frame_frame_numpy$lib$_histograms_impl) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$lib$_histograms_impl$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$lib$_histograms_impl$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_histograms_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 4;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_histograms_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 6;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_operator, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$_histograms_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 7;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$lib$_histograms_impl;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 9;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$lib$_histograms_impl;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_overrides_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 10;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_histograms_impl,
        mod_consts.const_str_plain_overrides,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_overrides);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_LIST3(tstate, mod_consts.const_str_plain_histogram,mod_consts.const_str_plain_histogramdd,mod_consts.const_str_plain_histogram_bin_edges);
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kwargs_value_1;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_1 == NULL));
tmp_expression_value_1 = module_var_accessor_numpy$lib$_histograms_impl$overrides(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array_function_dispatch);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 15;

    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 14;
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = (PyObject *)&PyRange_Type;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__range, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;

tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__1__ptp(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ptp, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__2__hist_bin_sqrt(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sqrt, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__3__hist_bin_sturges(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_sturges, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__4__hist_bin_rice(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_rice, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__5__hist_bin_scott(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_scott, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__6__hist_bin_stone(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_stone, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__7__hist_bin_doane(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_doane, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__8__hist_bin_fd(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_fd, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__9__hist_bin_auto(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_auto, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_stone;
tmp_dict_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_stone(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_assign_source_22 = _PyDict_NewPresized( 8 );
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_auto;
tmp_dict_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_auto(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_doane;
tmp_dict_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_doane(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_fd;
tmp_dict_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_fd(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_rice;
tmp_dict_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_rice(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_scott;
tmp_dict_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_scott(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_sqrt;
tmp_dict_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_sqrt(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_sturges;
tmp_dict_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_hist_bin_sturges(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__hist_bin_selectors, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;

tmp_assign_source_23 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__10__ravel_and_check_weights(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ravel_and_check_weights, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__11__get_outer_edges(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_outer_edges, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__12__unsigned_subtract(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unsigned_subtract, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__13__get_bin_edges(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__get_bin_edges, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;

tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__14__search_sorted_inclusive(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__search_sorted_inclusive, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__15__histogram_bin_edges_dispatcher(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_bin_edges_dispatcher, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_defaults_2;
tmp_called_value_3 = module_var_accessor_numpy$lib$_histograms_impl$array_function_dispatch(tstate);
assert(!(tmp_called_value_3 == NULL));
tmp_args_element_value_1 = module_var_accessor_numpy$lib$_histograms_impl$_histogram_bin_edges_dispatcher(tstate);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 473;
tmp_called_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = mod_consts.const_tuple_int_pos_10_none_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_2 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__16_histogram_bin_edges(tstate, tmp_defaults_2);

frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 473;
tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_histogram_bin_edges, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__17__histogram_dispatcher(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogram_dispatcher, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_defaults_4;
tmp_called_value_5 = module_var_accessor_numpy$lib$_histograms_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 685;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_numpy$lib$_histograms_impl$_histogram_dispatcher(tstate);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 685;
tmp_called_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = mod_consts.const_tuple_int_pos_10_none_none_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_args_element_value_4 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__18_histogram(tstate, tmp_defaults_4);

frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 685;
tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_histogram, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__19__histogramdd_dispatcher(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__histogramdd_dispatcher, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_defaults_6;
tmp_called_value_7 = module_var_accessor_numpy$lib$_histograms_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 913;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_numpy$lib$_histograms_impl$_histogramdd_dispatcher(tstate);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 913;
tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 913;

    goto frame_exception_exit_1;
}
tmp_defaults_6 = mod_consts.const_tuple_int_pos_10_none_none_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_args_element_value_6 = MAKE_FUNCTION_numpy$lib$_histograms_impl$$$function__20_histogramdd(tstate, tmp_defaults_6);

frame_frame_numpy$lib$_histograms_impl->m_frame.f_lineno = 913;
tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 913;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_histogramdd, tmp_assign_source_33);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_histograms_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_histograms_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_histograms_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$lib$_histograms_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$_histograms_impl", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._histograms_impl" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$_histograms_impl);
    return module_numpy$lib$_histograms_impl;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_histograms_impl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$_histograms_impl", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

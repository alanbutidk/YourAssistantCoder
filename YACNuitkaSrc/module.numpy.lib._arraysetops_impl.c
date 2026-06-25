/* Generated code for Python module 'numpy$lib$_arraysetops_impl'
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



/* The "module_numpy$lib$_arraysetops_impl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$_arraysetops_impl;
PyDictObject *moduledict_numpy$lib$_arraysetops_impl;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__array_converter;
PyObject *const_str_plain_ravel;
PyObject *const_str_plain_dtype;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_plain_np;
PyObject *const_str_plain_asanyarray;
PyObject *const_str_plain_can_cast;
PyObject *const_dict_4d1d638075572819465a0c6d70cdff6f;
PyObject *const_str_digest_e08f63ecbf620f851ca4e714bb4ab129;
PyObject *const_str_digest_b3f3dfe1ab2517588b909ff06557b1ae;
PyObject *const_str_plain_max;
PyObject *const_str_plain_empty_like;
PyObject *const_tuple_str_plain_shape_tuple;
PyObject *const_str_plain_to_begin;
PyObject *const_str_plain_to_end;
PyObject *const_str_plain_subtract;
PyObject *const_str_plain_wrap;
PyObject *const_str_digest_159c02158f7b53d2c703458d42de1119;
PyObject *const_str_digest_94070f785594269319e95420aafba160;
PyObject *const_str_plain_ndim;
PyObject *const_str_plain_normalize_axis_index;
PyObject *const_str_plain__unique1d;
PyObject *const_str_plain_shape;
PyObject *const_tuple_a2b6b442735eb782b7911919e650df8e_tuple;
PyObject *const_str_plain__unpack_tuple;
PyObject *const_str_plain_moveaxis;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_AxisError;
PyObject *const_str_plain_reshape;
PyObject *const_str_plain_prod;
PyObject *const_str_plain_intp;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain_ascontiguousarray;
PyObject *const_str_plain_f;
PyObject *const_str_plain_ar;
PyObject *const_str_plain_view;
PyObject *const_str_plain_empty;
PyObject *const_str_digest_5ca0074fb0e496362acafc9ddb672117;
PyObject *const_tuple_str_plain_dt_tuple;
PyObject *const_str_plain_reshape_uniq;
PyObject *const_str_digest_2399a938eda4ea95116fd53ead1746d9;
PyObject *const_str_digest_f9e1517fa83cb50e4191b75cf956d1af;
PyObject *const_str_plain_orig_dtype;
PyObject *const_str_plain_orig_shape;
PyObject *const_str_plain_axis;
PyObject *const_str_plain_flatten;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain_ma;
PyObject *const_str_plain_is_masked;
PyObject *const_str_plain__unique_hash;
PyObject *const_tuple_str_plain_equal_nan_tuple;
PyObject *const_str_plain_sort;
PyObject *const_str_plain_argsort;
PyObject *const_str_plain_mergesort;
PyObject *const_str_plain_quicksort;
PyObject *const_tuple_str_plain_kind_tuple;
PyObject *const_str_plain_bool;
PyObject *const_slice_none_int_pos_1_none;
PyObject *const_str_plain_kind;
PyObject *const_str_plain_cfmM;
PyObject *const_str_plain_isnan;
PyObject *const_str_plain_c;
PyObject *const_str_plain_searchsorted;
PyObject *const_dict_c81e51d900f46841d2257bc020593429;
PyObject *const_str_plain_perm;
PyObject *const_str_plain_cumsum;
PyObject *const_str_plain_concatenate;
PyObject *const_str_plain_nonzero;
PyObject *const_str_plain_size;
PyObject *const_str_plain_diff;
PyObject *const_str_digest_49680f7a10a4c70a1744307ac2993721;
PyObject *const_str_plain_unique;
PyObject *const_dict_df4c98799d6e49d20369796c738dda30;
PyObject *const_str_plain_UniqueAllResult;
PyObject *const_str_digest_b46f15756fa70ff1f27f45fbfc907102;
PyObject *const_dict_8302f42fe4123f02958d026c86270768;
PyObject *const_str_plain_UniqueCountsResult;
PyObject *const_str_digest_dcd1bf0a1d9a5833fe69a6bab03ced22;
PyObject *const_dict_163d731226c8c6630d917fca57cedf63;
PyObject *const_str_plain_UniqueInverseResult;
PyObject *const_str_digest_f388a9e7560449049759440bfc958540;
PyObject *const_dict_e06bbcef47da40b9f22c7cad299d9757;
PyObject *const_str_digest_bb8b2ce52978ff09d6ee25da5b591122;
PyObject *const_dict_ddb6199cf8f69226979904abcecd9a1f;
PyObject *const_dict_87c1abaa6fcb4c6f72874144a9717b89;
PyObject *const_str_plain_aux;
PyObject *const_str_plain_aux_sort_indices;
PyObject *const_str_plain_ind1;
PyObject *const_str_plain_ind2;
PyObject *const_str_digest_e60ec630175207d797f3d8fe90ccfd60;
PyObject *const_dict_21b0a41bf986b828d73b3708697d69bd;
PyObject *const_str_digest_81fece70b8010926ce63f7a7f926a307;
PyObject *const_tuple_int_neg_1_int_pos_1_tuple;
PyObject *const_frozenset_a0be6b1f4bf7d652d8fd81f97e88eeb0;
PyObject *const_str_digest_51f88d264bb151a0fded555528d2b074;
PyObject *const_str_digest_a3dd71dc957005a9a37348ae59ad8a1b;
PyObject *const_str_plain_ar2;
PyObject *const_frozenset_e7c85c4ff0b081d243fb4f2ad8035f18;
PyObject *const_str_plain_ones_like;
PyObject *const_dict_8a6ce79bb59f45c062c2a0027a3a0c33;
PyObject *const_str_plain_zeros_like;
PyObject *const_str_plain_astype;
PyObject *const_str_plain_uint8;
PyObject *const_str_plain_min;
PyObject *const_int_pos_6;
PyObject *const_str_plain_ar1;
PyObject *const_str_plain_iinfo;
PyObject *const_str_plain_table;
PyObject *const_str_plain_ones;
PyObject *const_str_plain_zeros;
PyObject *const_str_plain_array;
PyObject *const_str_plain_isin_helper_ar;
PyObject *const_str_plain_ar2_min;
PyObject *const_str_plain_unsafe;
PyObject *const_tuple_str_plain_dtype_str_plain_out_str_plain_casting_tuple;
PyObject *const_str_digest_30d3a0a82fe6ad106ffc0582d4770657;
PyObject *const_str_digest_e14fa0ecece41a415979a54ee2168941;
PyObject *const_str_plain_hasobject;
PyObject *const_float_0_145;
PyObject *const_str_plain_mask;
PyObject *const_dict_a631262f796736f0defb811197d235ff;
PyObject *const_tuple_str_plain_mergesort_tuple;
PyObject *const_str_plain_rev_idx;
PyObject *const_tuple_str_plain_u_str_plain_i_str_plain_b_tuple;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_5ca915ac125e535884f51445b76efccb;
PyObject *const_str_plain__isin;
PyObject *const_tuple_str_plain_assume_unique_str_plain_invert_str_plain_kind_tuple;
PyObject *const_str_digest_3eef25edfe99c8f73532d320461dd475;
PyObject *const_str_digest_51fbaac2a911826292ac39e8aedb47b7;
PyObject *const_dict_983b85267f0872f55cb0f16db8944e2c;
PyObject *const_str_digest_1fd1963a07d76e4d6528f406bcea488c;
PyObject *const_str_digest_2eb01ea1ccdd460f3d69ac689b99e7ea;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_NamedTuple;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_218a55714e76c818c59b93d99676c0b2;
PyObject *const_tuple_str_plain_overrides_tuple;
PyObject *const_str_plain_overrides;
PyObject *const_str_digest_1955d320fcf10915350aecf079948e27;
PyObject *const_tuple_str_plain__array_converter_str_plain__unique_hash_tuple;
PyObject *const_str_digest_dc70fd02c50ba4537c7ec253ddeee882;
PyObject *const_tuple_str_plain_normalize_axis_index_tuple;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_array_function_dispatch;
PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
PyObject *const_list_ef0b344b41fd2f743537c9f299ee9d3d_list;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_plain__ediff1d_dispatcher;
PyObject *const_str_plain_ediff1d;
PyObject *const_tuple_none_none_none_none_tuple;
PyObject *const_dict_a3564c71f0485a5048224a5abe4e14c4;
PyObject *const_str_plain__unique_dispatcher;
PyObject *const_tuple_false_false_false_none_tuple;
PyObject *const_dict_8677dc9a13dddc8b99336bb0a8dedac9;
PyObject *const_tuple_false_false_false_tuple;
PyObject *const_dict_6d2bc3aa30203647e3b0ed0b18c3ab5c;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_2f3373d3945639a816fe15901cbc9366;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_419;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain_values;
PyObject *const_str_plain_indices;
PyObject *const_str_plain_inverse_indices;
PyObject *const_str_plain_counts;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_426;
PyObject *const_int_pos_431;
PyObject *const_str_plain__unique_all_dispatcher;
PyObject *const_str_plain_unique_all;
PyObject *const_str_plain__unique_counts_dispatcher;
PyObject *const_str_plain_unique_counts;
PyObject *const_str_plain__unique_inverse_dispatcher;
PyObject *const_str_plain_unique_inverse;
PyObject *const_str_plain__unique_values_dispatcher;
PyObject *const_str_plain_unique_values;
PyObject *const_str_plain__intersect1d_dispatcher;
PyObject *const_tuple_false_false_tuple;
PyObject *const_str_plain_intersect1d;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain__setxor1d_dispatcher;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain_setxor1d;
PyObject *const_dict_a16bac130fcfe6f2a81ba0b001c15548;
PyObject *const_str_plain__isin_dispatcher;
PyObject *const_str_plain_isin;
PyObject *const_str_plain__union1d_dispatcher;
PyObject *const_str_plain_union1d;
PyObject *const_str_plain__setdiff1d_dispatcher;
PyObject *const_str_plain_setdiff1d;
PyObject *const_str_digest_b579f0ee2d75d97b3848c9ef98784548;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ar_tuple;
PyObject *const_str_digest_8190282a37983cc1ed02d06c827eab03;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple;
PyObject *const_tuple_7230b6c015d858d151877841040d25b5_tuple;
PyObject *const_tuple_3a3cca624295ba18837f62601befabf1_tuple;
PyObject *const_tuple_1205433d655fb6eb5590a87042e99694_tuple;
PyObject *const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple;
PyObject *const_tuple_str_plain_ar1_str_plain_ar2_tuple;
PyObject *const_tuple_7157afcc8b585046aab266428dfb216f_tuple;
PyObject *const_tuple_str_plain_x_tuple;
PyObject *const_tuple_b841780232a3080700d31ba438179039_tuple;
PyObject *const_tuple_71eaedcfafb137dc44db8345200a6b26_tuple;
PyObject *const_tuple_68b0e8b51e080936de466a607a4206ae_tuple;
PyObject *const_tuple_09d53a2146e575bf037650905ae75d75_tuple;
PyObject *const_tuple_str_plain_axis_str_plain_orig_dtype_str_plain_orig_shape_tuple;
PyObject *const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple;
PyObject *const_tuple_8807b318664037cbb090dcb4ab904bff_tuple;
PyObject *const_tuple_str_plain_x_str_plain_result_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[219];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.lib._arraysetops_impl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__array_converter);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_ravel);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_asanyarray);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_cast);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_dict_4d1d638075572819465a0c6d70cdff6f);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_e08f63ecbf620f851ca4e714bb4ab129);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3f3dfe1ab2517588b909ff06557b1ae);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty_like);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shape_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_begin);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_end);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_subtract);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_159c02158f7b53d2c703458d42de1119);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_94070f785594269319e95420aafba160);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__unique1d);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_a2b6b442735eb782b7911919e650df8e_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__unpack_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_AxisError);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_prod);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_intp);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_ascontiguousarray);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_f);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_ar);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_view);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ca0074fb0e496362acafc9ddb672117);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dt_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape_uniq);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_2399a938eda4ea95116fd53ead1746d9);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9e1517fa83cb50e4191b75cf956d1af);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_orig_dtype);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_orig_shape);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_axis);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_flatten);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_ma);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_masked);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__unique_hash);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_equal_nan_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_argsort);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_mergesort);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_quicksort);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kind_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_kind);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_cfmM);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_isnan);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_searchsorted);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_c81e51d900f46841d2257bc020593429);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_perm);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_cumsum);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_nonzero);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_diff);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_49680f7a10a4c70a1744307ac2993721);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_unique);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_df4c98799d6e49d20369796c738dda30);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_UniqueAllResult);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_b46f15756fa70ff1f27f45fbfc907102);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_dict_8302f42fe4123f02958d026c86270768);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_UniqueCountsResult);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcd1bf0a1d9a5833fe69a6bab03ced22);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_dict_163d731226c8c6630d917fca57cedf63);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_UniqueInverseResult);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_f388a9e7560449049759440bfc958540);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_e06bbcef47da40b9f22c7cad299d9757);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb8b2ce52978ff09d6ee25da5b591122);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_dict_ddb6199cf8f69226979904abcecd9a1f);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_87c1abaa6fcb4c6f72874144a9717b89);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_aux);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_aux_sort_indices);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_ind1);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_ind2);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_e60ec630175207d797f3d8fe90ccfd60);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_81fece70b8010926ce63f7a7f926a307);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_int_pos_1_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_frozenset_a0be6b1f4bf7d652d8fd81f97e88eeb0);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_51f88d264bb151a0fded555528d2b074);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3dd71dc957005a9a37348ae59ad8a1b);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_ar2);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_frozenset_e7c85c4ff0b081d243fb4f2ad8035f18);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_ones_like);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_zeros_like);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_astype);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_uint8);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_ar1);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_iinfo);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_table);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ones);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_zeros);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_isin_helper_ar);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_ar2_min);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_out_str_plain_casting_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_30d3a0a82fe6ad106ffc0582d4770657);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_e14fa0ecece41a415979a54ee2168941);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_hasobject);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_float_0_145);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_mask);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_dict_a631262f796736f0defb811197d235ff);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mergesort_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_rev_idx);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_u_str_plain_i_str_plain_b_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ca915ac125e535884f51445b76efccb);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain__isin);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_assume_unique_str_plain_invert_str_plain_kind_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_3eef25edfe99c8f73532d320461dd475);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_51fbaac2a911826292ac39e8aedb47b7);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_983b85267f0872f55cb0f16db8944e2c);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fd1963a07d76e4d6528f406bcea488c);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_2eb01ea1ccdd460f3d69ac689b99e7ea);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_overrides_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_overrides);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__array_converter_str_plain__unique_hash_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc70fd02c50ba4537c7ec253ddeee882);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normalize_axis_index_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_list_ef0b344b41fd2f743537c9f299ee9d3d_list);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain__ediff1d_dispatcher);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_ediff1d);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_a3564c71f0485a5048224a5abe4e14c4);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain__unique_dispatcher);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_none_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_8677dc9a13dddc8b99336bb0a8dedac9);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_dict_6d2bc3aa30203647e3b0ed0b18c3ab5c);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f3373d3945639a816fe15901cbc9366);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_419);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_indices);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_inverse_indices);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_counts);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_int_pos_426);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_431);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain__unique_all_dispatcher);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_unique_all);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain__unique_counts_dispatcher);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_unique_counts);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain__unique_inverse_dispatcher);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_unique_inverse);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain__unique_values_dispatcher);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_unique_values);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain__intersect1d_dispatcher);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_intersect1d);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain__setxor1d_dispatcher);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_setxor1d);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_a16bac130fcfe6f2a81ba0b001c15548);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain__isin_dispatcher);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_isin);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain__union1d_dispatcher);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_union1d);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain__setdiff1d_dispatcher);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_setdiff1d);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_b579f0ee2d75d97b3848c9ef98784548);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ar_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_8190282a37983cc1ed02d06c827eab03);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_7230b6c015d858d151877841040d25b5_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_3a3cca624295ba18837f62601befabf1_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_1205433d655fb6eb5590a87042e99694_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_7157afcc8b585046aab266428dfb216f_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_b841780232a3080700d31ba438179039_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_71eaedcfafb137dc44db8345200a6b26_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_68b0e8b51e080936de466a607a4206ae_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_09d53a2146e575bf037650905ae75d75_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_orig_dtype_str_plain_orig_shape_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_8807b318664037cbb090dcb4ab904bff_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_result_tuple);
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
void checkModuleConstants_numpy$lib$_arraysetops_impl(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__array_converter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__array_converter);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_ravel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ravel);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_asanyarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asanyarray);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_cast);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_dict_4d1d638075572819465a0c6d70cdff6f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4d1d638075572819465a0c6d70cdff6f);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_e08f63ecbf620f851ca4e714bb4ab129));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e08f63ecbf620f851ca4e714bb4ab129);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3f3dfe1ab2517588b909ff06557b1ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3f3dfe1ab2517588b909ff06557b1ae);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty_like);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shape_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shape_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_begin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_begin);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_end));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_end);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_subtract));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subtract);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_159c02158f7b53d2c703458d42de1119));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_159c02158f7b53d2c703458d42de1119);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_94070f785594269319e95420aafba160));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94070f785594269319e95420aafba160);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_axis_index);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__unique1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unique1d);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_a2b6b442735eb782b7911919e650df8e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a2b6b442735eb782b7911919e650df8e_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__unpack_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unpack_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moveaxis);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_AxisError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AxisError);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_reshape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reshape);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_prod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prod);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_intp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intp);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_ascontiguousarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ascontiguousarray);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_f));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_ar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ar);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_view));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_view);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ca0074fb0e496362acafc9ddb672117));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ca0074fb0e496362acafc9ddb672117);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dt_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_reshape_uniq));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reshape_uniq);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_2399a938eda4ea95116fd53ead1746d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2399a938eda4ea95116fd53ead1746d9);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9e1517fa83cb50e4191b75cf956d1af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9e1517fa83cb50e4191b75cf956d1af);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_orig_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_orig_dtype);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_orig_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_orig_shape);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_axis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_axis);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_flatten));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flatten);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_ma));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ma);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_masked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_masked);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__unique_hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unique_hash);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_equal_nan_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_equal_nan_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_argsort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argsort);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_mergesort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mergesort);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_quicksort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quicksort);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kind_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_kind_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_1_none);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_kind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kind);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_cfmM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cfmM);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_isnan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isnan);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_searchsorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_searchsorted);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_c81e51d900f46841d2257bc020593429));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c81e51d900f46841d2257bc020593429);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_perm));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_perm);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_cumsum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cumsum);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_concatenate);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_nonzero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nonzero);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_diff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_diff);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_49680f7a10a4c70a1744307ac2993721));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_49680f7a10a4c70a1744307ac2993721);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_unique));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unique);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_df4c98799d6e49d20369796c738dda30));
CHECK_OBJECT_DEEP(mod_consts.const_dict_df4c98799d6e49d20369796c738dda30);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_UniqueAllResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UniqueAllResult);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_b46f15756fa70ff1f27f45fbfc907102));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b46f15756fa70ff1f27f45fbfc907102);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_dict_8302f42fe4123f02958d026c86270768));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8302f42fe4123f02958d026c86270768);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_UniqueCountsResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UniqueCountsResult);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcd1bf0a1d9a5833fe69a6bab03ced22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcd1bf0a1d9a5833fe69a6bab03ced22);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_dict_163d731226c8c6630d917fca57cedf63));
CHECK_OBJECT_DEEP(mod_consts.const_dict_163d731226c8c6630d917fca57cedf63);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_UniqueInverseResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UniqueInverseResult);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_f388a9e7560449049759440bfc958540));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f388a9e7560449049759440bfc958540);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_e06bbcef47da40b9f22c7cad299d9757));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e06bbcef47da40b9f22c7cad299d9757);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb8b2ce52978ff09d6ee25da5b591122));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb8b2ce52978ff09d6ee25da5b591122);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_dict_ddb6199cf8f69226979904abcecd9a1f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ddb6199cf8f69226979904abcecd9a1f);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_87c1abaa6fcb4c6f72874144a9717b89));
CHECK_OBJECT_DEEP(mod_consts.const_dict_87c1abaa6fcb4c6f72874144a9717b89);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_aux));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aux);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_aux_sort_indices));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aux_sort_indices);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_ind1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ind1);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_ind2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ind2);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_e60ec630175207d797f3d8fe90ccfd60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e60ec630175207d797f3d8fe90ccfd60);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_81fece70b8010926ce63f7a7f926a307));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81fece70b8010926ce63f7a7f926a307);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_int_pos_1_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_frozenset_a0be6b1f4bf7d652d8fd81f97e88eeb0));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_a0be6b1f4bf7d652d8fd81f97e88eeb0);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_51f88d264bb151a0fded555528d2b074));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51f88d264bb151a0fded555528d2b074);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3dd71dc957005a9a37348ae59ad8a1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3dd71dc957005a9a37348ae59ad8a1b);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_ar2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ar2);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_frozenset_e7c85c4ff0b081d243fb4f2ad8035f18));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_e7c85c4ff0b081d243fb4f2ad8035f18);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_ones_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ones_like);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_zeros_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zeros_like);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_astype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astype);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_uint8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uint8);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_6));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_6);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_ar1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ar1);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_iinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iinfo);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_table);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ones));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ones);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_zeros));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zeros);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_isin_helper_ar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isin_helper_ar);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_ar2_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ar2_min);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsafe);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_out_str_plain_casting_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_str_plain_out_str_plain_casting_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_30d3a0a82fe6ad106ffc0582d4770657));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30d3a0a82fe6ad106ffc0582d4770657);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_e14fa0ecece41a415979a54ee2168941));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e14fa0ecece41a415979a54ee2168941);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_hasobject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hasobject);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_float_0_145));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_145);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mask);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_dict_a631262f796736f0defb811197d235ff));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a631262f796736f0defb811197d235ff);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mergesort_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mergesort_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_rev_idx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rev_idx);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_u_str_plain_i_str_plain_b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_u_str_plain_i_str_plain_b_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ca915ac125e535884f51445b76efccb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ca915ac125e535884f51445b76efccb);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain__isin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__isin);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_assume_unique_str_plain_invert_str_plain_kind_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_assume_unique_str_plain_invert_str_plain_kind_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_3eef25edfe99c8f73532d320461dd475));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3eef25edfe99c8f73532d320461dd475);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_51fbaac2a911826292ac39e8aedb47b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51fbaac2a911826292ac39e8aedb47b7);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_983b85267f0872f55cb0f16db8944e2c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_983b85267f0872f55cb0f16db8944e2c);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fd1963a07d76e4d6528f406bcea488c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1fd1963a07d76e4d6528f406bcea488c);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_2eb01ea1ccdd460f3d69ac689b99e7ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2eb01ea1ccdd460f3d69ac689b99e7ea);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_overrides_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_overrides_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_overrides));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overrides);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__array_converter_str_plain__unique_hash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__array_converter_str_plain__unique_hash_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc70fd02c50ba4537c7ec253ddeee882));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc70fd02c50ba4537c7ec253ddeee882);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normalize_axis_index_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_normalize_axis_index_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_dispatch);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_list_ef0b344b41fd2f743537c9f299ee9d3d_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_ef0b344b41fd2f743537c9f299ee9d3d_list);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain__ediff1d_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ediff1d_dispatcher);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_ediff1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ediff1d);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_a3564c71f0485a5048224a5abe4e14c4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a3564c71f0485a5048224a5abe4e14c4);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain__unique_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unique_dispatcher);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_false_none_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_8677dc9a13dddc8b99336bb0a8dedac9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8677dc9a13dddc8b99336bb0a8dedac9);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_false_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_dict_6d2bc3aa30203647e3b0ed0b18c3ab5c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6d2bc3aa30203647e3b0ed0b18c3ab5c);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f3373d3945639a816fe15901cbc9366));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f3373d3945639a816fe15901cbc9366);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_419));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_419);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_indices));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_indices);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_inverse_indices));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inverse_indices);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_counts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_counts);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_int_pos_426));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_426);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_431));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_431);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain__unique_all_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unique_all_dispatcher);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_unique_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unique_all);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain__unique_counts_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unique_counts_dispatcher);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_unique_counts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unique_counts);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain__unique_inverse_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unique_inverse_dispatcher);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_unique_inverse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unique_inverse);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain__unique_values_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unique_values_dispatcher);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_unique_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unique_values);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain__intersect1d_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__intersect1d_dispatcher);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_intersect1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intersect1d);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain__setxor1d_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__setxor1d_dispatcher);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_setxor1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setxor1d);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_a16bac130fcfe6f2a81ba0b001c15548));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a16bac130fcfe6f2a81ba0b001c15548);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain__isin_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__isin_dispatcher);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_isin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isin);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain__union1d_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__union1d_dispatcher);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_union1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_union1d);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain__setdiff1d_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__setdiff1d_dispatcher);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_setdiff1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setdiff1d);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_b579f0ee2d75d97b3848c9ef98784548));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b579f0ee2d75d97b3848c9ef98784548);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ar_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ar_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_8190282a37983cc1ed02d06c827eab03));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8190282a37983cc1ed02d06c827eab03);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_7230b6c015d858d151877841040d25b5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7230b6c015d858d151877841040d25b5_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_3a3cca624295ba18837f62601befabf1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3a3cca624295ba18837f62601befabf1_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_1205433d655fb6eb5590a87042e99694_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1205433d655fb6eb5590a87042e99694_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_7157afcc8b585046aab266428dfb216f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7157afcc8b585046aab266428dfb216f_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_b841780232a3080700d31ba438179039_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b841780232a3080700d31ba438179039_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_71eaedcfafb137dc44db8345200a6b26_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_71eaedcfafb137dc44db8345200a6b26_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_68b0e8b51e080936de466a607a4206ae_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_68b0e8b51e080936de466a607a4206ae_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_09d53a2146e575bf037650905ae75d75_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_09d53a2146e575bf037650905ae75d75_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_orig_dtype_str_plain_orig_shape_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axis_str_plain_orig_dtype_str_plain_orig_shape_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_8807b318664037cbb090dcb4ab904bff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8807b318664037cbb090dcb4ab904bff_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_result_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 26
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
static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$NamedTuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$UniqueAllResult(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueAllResult);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UniqueAllResult);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UniqueAllResult, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UniqueAllResult);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UniqueAllResult, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueAllResult);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueAllResult);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueAllResult);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$UniqueCountsResult(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueCountsResult);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UniqueCountsResult);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UniqueCountsResult, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UniqueCountsResult);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UniqueCountsResult, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueCountsResult);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueCountsResult);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueCountsResult);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$UniqueInverseResult(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueInverseResult);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UniqueInverseResult);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UniqueInverseResult, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UniqueInverseResult);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UniqueInverseResult, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueInverseResult);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueInverseResult);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueInverseResult);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_array_converter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__array_converter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__array_converter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__array_converter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__array_converter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__array_converter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__array_converter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__array_converter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__array_converter);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_ediff1d_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ediff1d_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ediff1d_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ediff1d_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ediff1d_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ediff1d_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ediff1d_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ediff1d_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ediff1d_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_intersect1d_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__intersect1d_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__intersect1d_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__intersect1d_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__intersect1d_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__intersect1d_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__intersect1d_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__intersect1d_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__intersect1d_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_isin(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__isin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__isin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__isin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__isin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__isin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__isin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__isin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__isin);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_isin_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__isin_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__isin_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__isin_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__isin_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__isin_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__isin_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__isin_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__isin_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_setdiff1d_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__setdiff1d_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__setdiff1d_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__setdiff1d_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__setdiff1d_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__setdiff1d_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__setdiff1d_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__setdiff1d_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__setdiff1d_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_setxor1d_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__setxor1d_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__setxor1d_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__setxor1d_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__setxor1d_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__setxor1d_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__setxor1d_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__setxor1d_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__setxor1d_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_union1d_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__union1d_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__union1d_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__union1d_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__union1d_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__union1d_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__union1d_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__union1d_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__union1d_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_unique1d(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique1d);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique1d);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique1d, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique1d);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique1d, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique1d);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique1d);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unique1d);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_unique_all_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_all_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_all_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_all_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_all_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_all_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_all_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_all_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_all_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_unique_counts_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_counts_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_counts_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_counts_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_counts_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_counts_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_counts_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_counts_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_counts_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_unique_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_unique_hash(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_hash);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_hash);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_hash, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_hash);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_hash, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_hash);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_hash);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_hash);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_unique_inverse_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_inverse_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_inverse_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_inverse_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_inverse_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_inverse_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_inverse_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_inverse_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_inverse_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_unique_values_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_values_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_values_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_values_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unique_values_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unique_values_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_values_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_values_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_values_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$_unpack_tuple(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unpack_tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unpack_tuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unpack_tuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unpack_tuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unpack_tuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unpack_tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unpack_tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unpack_tuple);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$normalize_axis_index(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_axis_index);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_axis_index, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_axis_index);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_axis_index, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$overrides(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_arraysetops_impl$unique(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_arraysetops_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_arraysetops_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_unique);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_arraysetops_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unique);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unique, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unique);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unique, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_unique);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_unique);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unique);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1dca8fec92bfa7e38bf67ef004462981;
static PyCodeObject *code_objects_aef77ccec8ad9895fd1eda91d8a8a0a2;
static PyCodeObject *code_objects_bd1b7966979dfa9549df6f19da1c34f7;
static PyCodeObject *code_objects_95e036a26c947fd9040ec1323d386c3b;
static PyCodeObject *code_objects_bfe42e0923cb8d7d44764944a11b261e;
static PyCodeObject *code_objects_c57528dc83d014d33a4a599e283660f9;
static PyCodeObject *code_objects_82867b13a0aaa4cb75af8097fe0f6f04;
static PyCodeObject *code_objects_220e3322b140e72881f69dc8ee45454d;
static PyCodeObject *code_objects_03c9483188a00597b6c362b9ea84c263;
static PyCodeObject *code_objects_2abc302ba5c45be27a95ce435a8dd81d;
static PyCodeObject *code_objects_d10cab6eaf7965dc75627b7d603346c6;
static PyCodeObject *code_objects_fc2c94c8cf63f2558eecdd75b2b328bb;
static PyCodeObject *code_objects_20905b48475dd171b996c541abd729eb;
static PyCodeObject *code_objects_2b5aa3678170c6b7fcf60f8069d2fff8;
static PyCodeObject *code_objects_3ff579ec2e5141cbaf693b18e47f3e1f;
static PyCodeObject *code_objects_e653144060b44d07efc3937322a1ff96;
static PyCodeObject *code_objects_2a3f42ad7e05a707d97e28dac38cd42d;
static PyCodeObject *code_objects_e27733e7672f984722bf8e9ce7edfc79;
static PyCodeObject *code_objects_5930a9be9c28a2a38073733de4d22b66;
static PyCodeObject *code_objects_86769f79464802f803b10e8cd5927dd7;
static PyCodeObject *code_objects_dc19b1d559a1b464c125012b16338813;
static PyCodeObject *code_objects_9c9a3fb2503d9f121f93c899eb3f45fc;
static PyCodeObject *code_objects_b2ce8d1c624745ca9b36ca0298453fe7;
static PyCodeObject *code_objects_e9c109515082744aaca3245171c7261a;
static PyCodeObject *code_objects_6e343e76eeb495b91c01397143287b55;
static PyCodeObject *code_objects_550712a7ae09241e6305391c9839fc8b;
static PyCodeObject *code_objects_4947d91741c1a8ab3171ba30a5127f0b;
static PyCodeObject *code_objects_7b919ec89b3879a575f4d117c2a95384;
static PyCodeObject *code_objects_e2d6cfa596b019d402cc4f6b6a1843e6;
static PyCodeObject *code_objects_cbfbd751016f3b7d5ad257a401bac169;
static PyCodeObject *code_objects_b71c935952488c58822c5f4f127619a3;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b579f0ee2d75d97b3848c9ef98784548); CHECK_OBJECT(module_filename_obj);
code_objects_1dca8fec92bfa7e38bf67ef004462981 = MAKE_CODE_OBJECT(module_filename_obj, 820, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_5ca915ac125e535884f51445b76efccb, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ar_tuple, NULL, 1, 0, 0);
code_objects_aef77ccec8ad9895fd1eda91d8a8a0a2 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_8190282a37983cc1ed02d06c827eab03, mod_consts.const_str_digest_8190282a37983cc1ed02d06c827eab03, NULL, NULL, 0, 0, 0);
code_objects_bd1b7966979dfa9549df6f19da1c34f7 = MAKE_CODE_OBJECT(module_filename_obj, 419, 0, mod_consts.const_str_plain_UniqueAllResult, mod_consts.const_str_plain_UniqueAllResult, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_95e036a26c947fd9040ec1323d386c3b = MAKE_CODE_OBJECT(module_filename_obj, 426, 0, mod_consts.const_str_plain_UniqueCountsResult, mod_consts.const_str_plain_UniqueCountsResult, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bfe42e0923cb8d7d44764944a11b261e = MAKE_CODE_OBJECT(module_filename_obj, 431, 0, mod_consts.const_str_plain_UniqueInverseResult, mod_consts.const_str_plain_UniqueInverseResult, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c57528dc83d014d33a4a599e283660f9 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ediff1d_dispatcher, mod_consts.const_str_plain__ediff1d_dispatcher, mod_consts.const_tuple_str_plain_ary_str_plain_to_end_str_plain_to_begin_tuple, NULL, 3, 0, 0);
code_objects_82867b13a0aaa4cb75af8097fe0f6f04 = MAKE_CODE_OBJECT(module_filename_obj, 661, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__intersect1d_dispatcher, mod_consts.const_str_plain__intersect1d_dispatcher, mod_consts.const_tuple_7230b6c015d858d151877841040d25b5_tuple, NULL, 4, 0, 0);
code_objects_220e3322b140e72881f69dc8ee45454d = MAKE_CODE_OBJECT(module_filename_obj, 806, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__isin, mod_consts.const_str_plain__isin, mod_consts.const_tuple_3a3cca624295ba18837f62601befabf1_tuple, NULL, 4, 1, 0);
code_objects_03c9483188a00597b6c362b9ea84c263 = MAKE_CODE_OBJECT(module_filename_obj, 953, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__isin_dispatcher, mod_consts.const_str_plain__isin_dispatcher, mod_consts.const_tuple_1205433d655fb6eb5590a87042e99694_tuple, NULL, 4, 1, 0);
code_objects_2abc302ba5c45be27a95ce435a8dd81d = MAKE_CODE_OBJECT(module_filename_obj, 1116, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__setdiff1d_dispatcher, mod_consts.const_str_plain__setdiff1d_dispatcher, mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple, NULL, 3, 0, 0);
code_objects_d10cab6eaf7965dc75627b7d603346c6 = MAKE_CODE_OBJECT(module_filename_obj, 758, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__setxor1d_dispatcher, mod_consts.const_str_plain__setxor1d_dispatcher, mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple, NULL, 3, 0, 0);
code_objects_fc2c94c8cf63f2558eecdd75b2b328bb = MAKE_CODE_OBJECT(module_filename_obj, 1079, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__union1d_dispatcher, mod_consts.const_str_plain__union1d_dispatcher, mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_tuple, NULL, 2, 0, 0);
code_objects_20905b48475dd171b996c541abd729eb = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unique1d, mod_consts.const_str_plain__unique1d, mod_consts.const_tuple_7157afcc8b585046aab266428dfb216f_tuple, NULL, 4, 4, 0);
code_objects_2b5aa3678170c6b7fcf60f8069d2fff8 = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unique_all_dispatcher, mod_consts.const_str_plain__unique_all_dispatcher, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 1);
code_objects_3ff579ec2e5141cbaf693b18e47f3e1f = MAKE_CODE_OBJECT(module_filename_obj, 500, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unique_counts_dispatcher, mod_consts.const_str_plain__unique_counts_dispatcher, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 1);
code_objects_e653144060b44d07efc3937322a1ff96 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unique_dispatcher, mod_consts.const_str_plain__unique_dispatcher, mod_consts.const_tuple_b841780232a3080700d31ba438179039_tuple, NULL, 5, 2, 0);
code_objects_2a3f42ad7e05a707d97e28dac38cd42d = MAKE_CODE_OBJECT(module_filename_obj, 556, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unique_inverse_dispatcher, mod_consts.const_str_plain__unique_inverse_dispatcher, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 1);
code_objects_e27733e7672f984722bf8e9ce7edfc79 = MAKE_CODE_OBJECT(module_filename_obj, 613, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unique_values_dispatcher, mod_consts.const_str_plain__unique_values_dispatcher, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 1);
code_objects_5930a9be9c28a2a38073733de4d22b66 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unpack_tuple, mod_consts.const_str_plain__unpack_tuple, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_86769f79464802f803b10e8cd5927dd7 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ediff1d, mod_consts.const_str_plain_ediff1d, mod_consts.const_tuple_71eaedcfafb137dc44db8345200a6b26_tuple, NULL, 3, 0, 0);
code_objects_dc19b1d559a1b464c125012b16338813 = MAKE_CODE_OBJECT(module_filename_obj, 667, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_intersect1d, mod_consts.const_str_plain_intersect1d, mod_consts.const_tuple_68b0e8b51e080936de466a607a4206ae_tuple, NULL, 4, 0, 0);
code_objects_9c9a3fb2503d9f121f93c899eb3f45fc = MAKE_CODE_OBJECT(module_filename_obj, 959, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_isin, mod_consts.const_str_plain_isin, mod_consts.const_tuple_1205433d655fb6eb5590a87042e99694_tuple, NULL, 4, 1, 0);
code_objects_b2ce8d1c624745ca9b36ca0298453fe7 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_reshape_uniq, mod_consts.const_str_digest_2399a938eda4ea95116fd53ead1746d9, mod_consts.const_tuple_09d53a2146e575bf037650905ae75d75_tuple, mod_consts.const_tuple_str_plain_axis_str_plain_orig_dtype_str_plain_orig_shape_tuple, 1, 0, 0);
code_objects_e9c109515082744aaca3245171c7261a = MAKE_CODE_OBJECT(module_filename_obj, 1121, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_setdiff1d, mod_consts.const_str_plain_setdiff1d, mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_str_plain_assume_unique_tuple, NULL, 3, 0, 0);
code_objects_6e343e76eeb495b91c01397143287b55 = MAKE_CODE_OBJECT(module_filename_obj, 763, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_setxor1d, mod_consts.const_str_plain_setxor1d, mod_consts.const_tuple_667d35020589c5c4bccfcabd72ba34fc_tuple, NULL, 3, 0, 0);
code_objects_550712a7ae09241e6305391c9839fc8b = MAKE_CODE_OBJECT(module_filename_obj, 1084, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_union1d, mod_consts.const_str_plain_union1d, mod_consts.const_tuple_str_plain_ar1_str_plain_ar2_tuple, NULL, 2, 0, 0);
code_objects_4947d91741c1a8ab3171ba30a5127f0b = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unique, mod_consts.const_str_plain_unique, mod_consts.const_tuple_8807b318664037cbb090dcb4ab904bff_tuple, NULL, 5, 2, 0);
code_objects_7b919ec89b3879a575f4d117c2a95384 = MAKE_CODE_OBJECT(module_filename_obj, 441, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unique_all, mod_consts.const_str_plain_unique_all, mod_consts.const_tuple_str_plain_x_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_e2d6cfa596b019d402cc4f6b6a1843e6 = MAKE_CODE_OBJECT(module_filename_obj, 505, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unique_counts, mod_consts.const_str_plain_unique_counts, mod_consts.const_tuple_str_plain_x_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_cbfbd751016f3b7d5ad257a401bac169 = MAKE_CODE_OBJECT(module_filename_obj, 561, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unique_inverse, mod_consts.const_str_plain_unique_inverse, mod_consts.const_tuple_str_plain_x_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_b71c935952488c58822c5f4f127619a3 = MAKE_CODE_OBJECT(module_filename_obj, 618, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unique_values, mod_consts.const_str_plain_unique_values, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$lib$_arraysetops_impl$$$function__19__isin$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__10_unique_counts(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__11__unique_inverse_dispatcher(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__13__unique_values_dispatcher(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__14_unique_values(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__15__intersect1d_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__16_intersect1d(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__17__setxor1d_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__18_setxor1d(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__19__isin(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__1__ediff1d_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__20__isin_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__21_isin(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__22__union1d_dispatcher(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__23_union1d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__24__setdiff1d_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__2_ediff1d(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__4__unique_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__5_unique(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__6__unique1d(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__7__unique_all_dispatcher(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__8_unique_all(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__9__unique_counts_dispatcher(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__1__ediff1d_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ary = python_pars[0];
PyObject *par_to_end = python_pars[1];
PyObject *par_to_begin = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_ary);
tmp_tuple_element_1 = par_ary;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_to_end);
tmp_tuple_element_1 = par_to_end;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_to_begin);
tmp_tuple_element_1 = par_to_begin;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ary);
Py_DECREF(par_ary);
CHECK_OBJECT(par_to_end);
Py_DECREF(par_to_end);
CHECK_OBJECT(par_to_begin);
Py_DECREF(par_to_begin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__2_ediff1d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ary = python_pars[0];
PyObject *par_to_end = python_pars[1];
PyObject *par_to_begin = python_pars[2];
PyObject *var_conv = NULL;
PyObject *var_dtype_req = NULL;
PyObject *var_l_begin = NULL;
PyObject *var_l_end = NULL;
PyObject *var_l_diff = NULL;
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d = MAKE_FUNCTION_FRAME(tstate, code_objects_86769f79464802f803b10e8cd5927dd7, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$_array_converter(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__array_converter);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ary);
tmp_args_element_value_1 = par_ary;
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 85;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_conv == NULL);
var_conv = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_conv);
tmp_expression_value_1 = var_conv;
tmp_subscript_value_1 = const_int_0;
tmp_called_instance_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 87;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ravel);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ary;
    assert(old != NULL);
    par_ary = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_ary);
tmp_expression_value_2 = par_ary;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dtype_req == NULL);
var_dtype_req = tmp_assign_source_3;
}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_to_begin);
tmp_cmp_expr_left_1 = par_to_begin;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_to_end);
tmp_cmp_expr_left_2 = par_to_end;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_ary);
tmp_expression_value_3 = par_ary;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_none_none;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ary);
tmp_expression_value_4 = par_ary;
tmp_subscript_value_3 = mod_consts.const_slice_none_int_neg_1_none;
tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 94;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_to_begin);
tmp_cmp_expr_left_3 = par_to_begin;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = const_int_0;
assert(var_l_begin == NULL);
Py_INCREF(tmp_assign_source_4);
var_l_begin = tmp_assign_source_4;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_to_begin);
tmp_args_element_value_2 = par_to_begin;
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 99;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_to_begin;
    assert(old != NULL);
    par_to_begin = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_can_cast);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_to_begin);
tmp_tuple_element_1 = par_to_begin;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_dtype_req);
tmp_tuple_element_1 = var_dtype_req;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_4d1d638075572819465a0c6d70cdff6f);
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 100;
tmp_operand_value_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_e08f63ecbf620f851ca4e714bb4ab129;
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 101;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 101;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_to_begin);
tmp_called_instance_3 = par_to_begin;
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 104;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_to_begin;
    assert(old != NULL);
    par_to_begin = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_to_begin);
tmp_len_arg_1 = par_to_begin;
tmp_assign_source_7 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_l_begin == NULL);
var_l_begin = tmp_assign_source_7;
}
branch_end_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_to_end);
tmp_cmp_expr_left_4 = par_to_end;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_0;
assert(var_l_end == NULL);
Py_INCREF(tmp_assign_source_8);
var_l_end = tmp_assign_source_8;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_3;
tmp_called_instance_4 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_to_end);
tmp_args_element_value_3 = par_to_end;
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 110;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_to_end;
    assert(old != NULL);
    par_to_end = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_6 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_can_cast);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_to_end);
tmp_tuple_element_2 = par_to_end;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_dtype_req);
tmp_tuple_element_2 = var_dtype_req;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_4d1d638075572819465a0c6d70cdff6f);
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 111;
tmp_operand_value_2 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
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
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_b3f3dfe1ab2517588b909ff06557b1ae;
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 112;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 112;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(par_to_end);
tmp_called_instance_5 = par_to_end;
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 115;
tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_to_end;
    assert(old != NULL);
    par_to_end = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_to_end);
tmp_len_arg_2 = par_to_end;
tmp_assign_source_11 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_l_end == NULL);
var_l_end = tmp_assign_source_11;
}
branch_end_4:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_sub_expr_left_2;
nuitka_digit tmp_sub_expr_right_2;
PyObject *tmp_len_arg_3;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(par_ary);
tmp_len_arg_3 = par_ary;
tmp_sub_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = 1;
tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
assert(!(tmp_args_element_value_4 == NULL));
tmp_args_element_value_5 = const_int_0;
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 119;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_l_diff == NULL);
var_l_diff = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
tmp_expression_value_7 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_empty_like);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ary);
tmp_kw_call_arg_value_0_1 = par_ary;
CHECK_OBJECT(var_l_diff);
tmp_add_expr_left_2 = var_l_diff;
CHECK_OBJECT(var_l_begin);
tmp_add_expr_right_2 = var_l_begin;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 120;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_l_end);
tmp_add_expr_right_1 = var_l_end;
tmp_kw_call_dict_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 120;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 120;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_shape_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_13;
}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
nuitka_digit tmp_cmp_expr_right_5;
CHECK_OBJECT(var_l_begin);
tmp_cmp_expr_left_5 = var_l_begin;
tmp_cmp_expr_right_5 = 0;
tmp_condition_result_6 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_stop_value_1;
if (par_to_begin == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_begin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subvalue_1 = par_to_begin;
CHECK_OBJECT(var_result);
tmp_ass_subscribed_1 = var_result;
CHECK_OBJECT(var_l_begin);
tmp_stop_value_1 = var_l_begin;
tmp_ass_subscript_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_ass_subscript_1 == NULL));
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
nuitka_digit tmp_cmp_expr_right_6;
CHECK_OBJECT(var_l_end);
tmp_cmp_expr_left_6 = var_l_end;
tmp_cmp_expr_right_6 = 0;
tmp_condition_result_7 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_start_value_1;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_stop_value_2;
if (par_to_end == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_end);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subvalue_2 = par_to_end;
CHECK_OBJECT(var_result);
tmp_ass_subscribed_2 = var_result;
CHECK_OBJECT(var_l_begin);
tmp_add_expr_left_3 = var_l_begin;
CHECK_OBJECT(var_l_diff);
tmp_add_expr_right_3 = var_l_diff;
tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_ass_subscript_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_ass_subscript_2 == NULL));
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_6;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
tmp_expression_value_8 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_subtract);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ary);
tmp_expression_value_9 = par_ary;
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 126;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ary);
tmp_expression_value_10 = par_ary;
tmp_subscript_value_5 = mod_consts.const_slice_none_int_neg_1_none;
tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 126;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_expression_value_11 = var_result;
CHECK_OBJECT(var_l_begin);
tmp_start_value_2 = var_l_begin;
CHECK_OBJECT(var_l_begin);
tmp_add_expr_left_4 = var_l_begin;
CHECK_OBJECT(var_l_diff);
tmp_add_expr_right_4 = var_l_diff;
tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_stop_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 126;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_3);
CHECK_OBJECT(tmp_stop_value_3);
Py_DECREF(tmp_stop_value_3);
assert(!(tmp_subscript_value_6 == NULL));
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 126;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 126;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(var_conv);
tmp_called_instance_6 = var_conv;
CHECK_OBJECT(var_result);
tmp_args_element_value_9 = var_result;
frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame.f_lineno = 128;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_wrap, tmp_args_element_value_9);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d,
    type_description_1,
    par_ary,
    par_to_end,
    par_to_begin,
    var_conv,
    var_dtype_req,
    var_l_begin,
    var_l_end,
    var_l_diff,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__2_ediff1d);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_ary);
CHECK_OBJECT(par_ary);
Py_DECREF(par_ary);
par_ary = NULL;
Py_XDECREF(par_to_end);
par_to_end = NULL;
Py_XDECREF(par_to_begin);
par_to_begin = NULL;
CHECK_OBJECT(var_conv);
CHECK_OBJECT(var_conv);
Py_DECREF(var_conv);
var_conv = NULL;
CHECK_OBJECT(var_dtype_req);
CHECK_OBJECT(var_dtype_req);
Py_DECREF(var_dtype_req);
var_dtype_req = NULL;
Py_XDECREF(var_l_begin);
var_l_begin = NULL;
Py_XDECREF(var_l_end);
var_l_end = NULL;
Py_XDECREF(var_l_diff);
var_l_diff = NULL;
Py_XDECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_ary);
par_ary = NULL;
Py_XDECREF(par_to_end);
par_to_end = NULL;
Py_XDECREF(par_to_begin);
par_to_begin = NULL;
Py_XDECREF(var_conv);
var_conv = NULL;
Py_XDECREF(var_dtype_req);
var_dtype_req = NULL;
Py_XDECREF(var_l_begin);
var_l_begin = NULL;
Py_XDECREF(var_l_end);
var_l_end = NULL;
Py_XDECREF(var_l_diff);
var_l_diff = NULL;
Py_XDECREF(var_result);
var_result = NULL;
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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple = MAKE_FUNCTION_FRAME(tstate, code_objects_5930a9be9c28a2a38073733de4d22b66, module_numpy$lib$_arraysetops_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_x);
tmp_len_arg_1 = par_x;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
CHECK_OBJECT(par_x);
tmp_return_value = par_x;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple);

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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__4__unique_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar = python_pars[0];
PyObject *par_return_index = python_pars[1];
PyObject *par_return_inverse = python_pars[2];
PyObject *par_return_counts = python_pars[3];
PyObject *par_axis = python_pars[4];
PyObject *par_equal_nan = python_pars[5];
PyObject *par_sorted = python_pars[6];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_ar);
tmp_tuple_element_1 = par_ar;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ar);
Py_DECREF(par_ar);
CHECK_OBJECT(par_return_index);
Py_DECREF(par_return_index);
CHECK_OBJECT(par_return_inverse);
Py_DECREF(par_return_inverse);
CHECK_OBJECT(par_return_counts);
Py_DECREF(par_return_counts);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_equal_nan);
Py_DECREF(par_equal_nan);
CHECK_OBJECT(par_sorted);
Py_DECREF(par_sorted);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__5_unique(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar = python_pars[0];
PyObject *par_return_index = python_pars[1];
PyObject *par_return_inverse = python_pars[2];
PyObject *par_return_counts = python_pars[3];
struct Nuitka_CellObject *par_axis = Nuitka_Cell_New1(python_pars[4]);
PyObject *par_equal_nan = python_pars[5];
PyObject *par_sorted = python_pars[6];
PyObject *var_ret = NULL;
PyObject *var_inverse_shape = NULL;
struct Nuitka_CellObject *var_orig_shape = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_orig_dtype = Nuitka_Cell_NewEmpty();
PyObject *var_dtype = NULL;
PyObject *var_consolidated = NULL;
PyObject *var_e = NULL;
PyObject *var_reshape_uniq = NULL;
PyObject *var_output = NULL;
PyObject *outline_0_var_i = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique = MAKE_FUNCTION_FRAME(tstate, code_objects_4947d91741c1a8ab3171ba30a5127f0b, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar);
tmp_args_element_value_1 = par_ar;
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 292;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar;
    assert(old != NULL);
    par_ar = tmp_assign_source_1;
    Py_DECREF(old);
}

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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_axis));
tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_axis);
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_ar);
tmp_expression_value_1 = par_ar;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooocooooccoooNoo";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_axis));
tmp_cmp_expr_left_3 = Nuitka_Cell_GET(par_axis);
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$normalize_axis_index(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_normalize_axis_index);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_axis));
tmp_args_element_value_2 = Nuitka_Cell_GET(par_axis);
CHECK_OBJECT(par_ar);
tmp_expression_value_2 = par_ar;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 295;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraysetops_impl$_unique1d(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unique1d);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar);
tmp_kw_call_arg_value_0_1 = par_ar;
CHECK_OBJECT(par_return_index);
tmp_kw_call_arg_value_1_1 = par_return_index;
CHECK_OBJECT(par_return_inverse);
tmp_kw_call_arg_value_2_1 = par_return_inverse;
CHECK_OBJECT(par_return_counts);
tmp_kw_call_arg_value_3_1 = par_return_counts;
CHECK_OBJECT(par_equal_nan);
tmp_kw_call_dict_value_0_1 = par_equal_nan;
CHECK_OBJECT(par_ar);
tmp_expression_value_3 = par_ar;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_shape);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = Py_None;
CHECK_OBJECT(par_sorted);
tmp_kw_call_dict_value_3_1 = par_sorted;
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 296;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_a2b6b442735eb782b7911919e650df8e_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_numpy$lib$_arraysetops_impl$_unpack_tuple(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unpack_tuple);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_args_element_value_4 = var_ret;
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 299;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_ar);
tmp_args_element_value_5 = par_ar;
CHECK_OBJECT(Nuitka_Cell_GET(par_axis));
tmp_args_element_value_6 = Nuitka_Cell_GET(par_axis);
tmp_args_element_value_7 = const_int_0;
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 303;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_moveaxis,
        call_args
    );
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_ar;
    assert(old != NULL);
    par_ar = tmp_assign_source_3;
    Py_DECREF(old);
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_expression_value_5 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_exceptions);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_AxisError);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_8;
PyObject *tmp_raise_cause_1;
tmp_expression_value_7 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_exceptions);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_AxisError);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_axis));
tmp_args_element_value_8 = Nuitka_Cell_GET(par_axis);
CHECK_OBJECT(par_ar);
tmp_expression_value_8 = par_ar;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 306;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 306;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_3;
}
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 306;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooocooooccoooNoo";
goto try_except_handler_3;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 302;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame)) {
        frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooocooooccoooNoo";
goto try_except_handler_3;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_9;
tmp_mult_expr_left_1 = MAKE_LIST1(tstate, const_int_pos_1);
CHECK_OBJECT(par_ar);
tmp_expression_value_9 = par_ar;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndim);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 307;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
assert(var_inverse_shape == NULL);
var_inverse_shape = tmp_assign_source_4;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_ar);
tmp_expression_value_11 = par_ar;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_shape);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_inverse_shape);
tmp_ass_subscribed_1 = var_inverse_shape;
CHECK_OBJECT(Nuitka_Cell_GET(par_axis));
tmp_ass_subscript_1 = Nuitka_Cell_GET(par_axis);
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_ar);
tmp_expression_value_12 = par_ar;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_shape);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_4;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_ar);
tmp_expression_value_13 = par_ar;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_dtype);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooocooooccoooNoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_iter_arg_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
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



exception_lineno = 311;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_5;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
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

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
assert(Nuitka_Cell_GET(var_orig_shape) == NULL);
Py_INCREF(tmp_assign_source_8);
Nuitka_Cell_SET(var_orig_shape, tmp_assign_source_8);

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
assert(Nuitka_Cell_GET(var_orig_dtype) == NULL);
Py_INCREF(tmp_assign_source_9);
Nuitka_Cell_SET(var_orig_dtype, tmp_assign_source_9);

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_ar);
tmp_expression_value_14 = par_ar;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_reshape);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_orig_shape));
tmp_expression_value_15 = Nuitka_Cell_GET(var_orig_shape);
tmp_subscript_value_2 = const_int_0;
tmp_args_element_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_2, 0);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 312;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_16 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 312;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_prod);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 312;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_orig_shape));
tmp_expression_value_17 = Nuitka_Cell_GET(var_orig_shape);
tmp_subscript_value_3 = mod_consts.const_slice_int_pos_1_none_none;
tmp_kw_call_arg_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_3);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_called_value_6);

exception_lineno = 312;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_18 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 312;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_intp);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_10);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 312;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 312;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 312;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 312;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar;
    assert(old != NULL);
    par_ar = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_12;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar);
tmp_args_element_value_12 = par_ar;
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 313;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ascontiguousarray, tmp_args_element_value_12);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar;
    assert(old != NULL);
    par_ar = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_ar);
tmp_expression_value_20 = par_ar;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_shape);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_6;
}
tmp_subscript_value_4 = const_int_pos_1;
tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 1);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_6;
}
tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_6;
}
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_6;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_14;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_15 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooocooooccoooNoo";
exception_lineno = 314;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_16 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_i;
    outline_0_var_i = tmp_assign_source_16;
    Py_INCREF(outline_0_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_tuple_element_3 = mod_consts.const_str_plain_f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(outline_0_var_i);
tmp_format_value_1 = outline_0_var_i;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooocooooccoooNoo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_tuple_element_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_tuple_element_2 == NULL));
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyTuple_SET_ITEM(tmp_append_value_1, 0, tmp_tuple_element_2);
if (par_ar == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 314;
type_description_1 = "oooocooooccoooNoo";
    goto tuple_build_exception_3;
}

tmp_expression_value_21 = par_ar;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_dtype);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooocooooccoooNoo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_append_value_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_7;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_12 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_12);
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
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 314;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_dtype == NULL);
var_dtype = tmp_assign_source_12;
}
// Tried code:
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_5;
if (par_ar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}

tmp_expression_value_23 = par_ar;
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_shape);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}
tmp_subscript_value_5 = const_int_pos_1;
tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_5, 1);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_13;
if (par_ar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 322;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}

tmp_called_instance_4 = par_ar;
CHECK_OBJECT(var_dtype);
tmp_args_element_value_13 = var_dtype;
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 322;
tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_view, tmp_args_element_value_13);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}
assert(var_consolidated == NULL);
var_consolidated = tmp_assign_source_17;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_24;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_len_arg_1;
PyObject *tmp_kw_call_dict_value_0_3;
tmp_expression_value_24 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_empty);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}
if (par_ar == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 329;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}

tmp_len_arg_1 = par_ar;
tmp_kw_call_arg_value_0_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_kw_call_arg_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 329;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_dtype);
tmp_kw_call_dict_value_0_3 = var_dtype;
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 329;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_0_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_8;
}
assert(var_consolidated == NULL);
var_consolidated = tmp_assign_source_18;
}
branch_end_4:;
goto try_end_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_expression_value_25;
PyObject *tmp_raise_cause_2;
tmp_kw_call_arg_value_0_4 = mod_consts.const_str_digest_5ca0074fb0e496362acafc9ddb672117;
if (par_ar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 333;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_10;
}

tmp_expression_value_25 = par_ar;
tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_dict_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_10;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 333;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
    tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts.const_tuple_str_plain_dt_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_4);
Py_DECREF(tmp_kw_call_dict_value_0_4);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooocooooccoooNoo";
    goto try_except_handler_10;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 333;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_2 = var_e;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 333;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "oooocooooccoooNoo";
goto try_except_handler_10;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 320;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame)) {
        frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooocooooccoooNoo";
goto try_except_handler_9;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_4:;
{
PyObject *tmp_assign_source_20;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_axis;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_orig_dtype;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = var_orig_shape;
Py_INCREF(tmp_closure_1[2]);
tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq(tstate, tmp_closure_1);

assert(var_reshape_uniq == NULL);
var_reshape_uniq = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_kw_call_arg_value_3_2;
PyObject *tmp_kw_call_dict_value_0_5;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_2;
tmp_called_value_8 = module_var_accessor_numpy$lib$_arraysetops_impl$_unique1d(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unique1d);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_consolidated);
tmp_kw_call_arg_value_0_5 = var_consolidated;
CHECK_OBJECT(par_return_index);
tmp_kw_call_arg_value_1_2 = par_return_index;
CHECK_OBJECT(par_return_inverse);
tmp_kw_call_arg_value_2_2 = par_return_inverse;
CHECK_OBJECT(par_return_counts);
tmp_kw_call_arg_value_3_2 = par_return_counts;
CHECK_OBJECT(par_equal_nan);
tmp_kw_call_dict_value_0_5 = par_equal_nan;
CHECK_OBJECT(var_inverse_shape);
tmp_kw_call_dict_value_1_2 = var_inverse_shape;
CHECK_OBJECT(Nuitka_Cell_GET(par_axis));
tmp_kw_call_dict_value_2_2 = Nuitka_Cell_GET(par_axis);
CHECK_OBJECT(par_sorted);
tmp_kw_call_dict_value_3_2 = par_sorted;
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 342;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_a2b6b442735eb782b7911919e650df8e_tuple);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_6;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_reshape_uniq);
tmp_called_value_9 = var_reshape_uniq;
CHECK_OBJECT(var_output);
tmp_expression_value_26 = var_output;
tmp_subscript_value_6 = const_int_0;
tmp_args_element_value_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_6, 0);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 346;
tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_add_expr_left_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_output);
tmp_expression_value_27 = var_output;
tmp_subscript_value_7 = mod_consts.const_slice_int_pos_1_none_none;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_7);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 346;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_output;
    assert(old != NULL);
    var_output = tmp_assign_source_22;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_15;
tmp_called_value_10 = module_var_accessor_numpy$lib$_arraysetops_impl$_unpack_tuple(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unpack_tuple);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_1 = "oooocooooccoooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_output);
tmp_args_element_value_15 = var_output;
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame.f_lineno = 347;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_15);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooocooooccoooNoo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique,
    type_description_1,
    par_ar,
    par_return_index,
    par_return_inverse,
    par_return_counts,
    par_axis,
    par_equal_nan,
    par_sorted,
    var_ret,
    var_inverse_shape,
    var_orig_shape,
    var_orig_dtype,
    var_dtype,
    var_consolidated,
    var_e,
    NULL,
    var_reshape_uniq,
    var_output
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_ar);
par_ar = NULL;
CHECK_OBJECT(par_axis);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
par_axis = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_inverse_shape);
var_inverse_shape = NULL;
CHECK_OBJECT(var_orig_shape);
CHECK_OBJECT(var_orig_shape);
Py_DECREF(var_orig_shape);
var_orig_shape = NULL;
CHECK_OBJECT(var_orig_dtype);
CHECK_OBJECT(var_orig_dtype);
Py_DECREF(var_orig_dtype);
var_orig_dtype = NULL;
Py_XDECREF(var_dtype);
var_dtype = NULL;
Py_XDECREF(var_consolidated);
var_consolidated = NULL;
Py_XDECREF(var_reshape_uniq);
var_reshape_uniq = NULL;
Py_XDECREF(var_output);
var_output = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_ar);
par_ar = NULL;
CHECK_OBJECT(par_axis);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
par_axis = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_inverse_shape);
var_inverse_shape = NULL;
CHECK_OBJECT(var_orig_shape);
CHECK_OBJECT(var_orig_shape);
Py_DECREF(var_orig_shape);
var_orig_shape = NULL;
CHECK_OBJECT(var_orig_dtype);
CHECK_OBJECT(var_orig_dtype);
Py_DECREF(var_orig_dtype);
var_orig_dtype = NULL;
Py_XDECREF(var_dtype);
var_dtype = NULL;
Py_XDECREF(var_consolidated);
var_consolidated = NULL;
Py_XDECREF(var_reshape_uniq);
var_reshape_uniq = NULL;
Py_XDECREF(var_output);
var_output = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_return_index);
Py_DECREF(par_return_index);
CHECK_OBJECT(par_return_inverse);
Py_DECREF(par_return_inverse);
CHECK_OBJECT(par_return_counts);
Py_DECREF(par_return_counts);
CHECK_OBJECT(par_equal_nan);
Py_DECREF(par_equal_nan);
CHECK_OBJECT(par_sorted);
Py_DECREF(par_sorted);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_return_index);
Py_DECREF(par_return_index);
CHECK_OBJECT(par_return_inverse);
Py_DECREF(par_return_inverse);
CHECK_OBJECT(par_return_counts);
Py_DECREF(par_return_counts);
CHECK_OBJECT(par_equal_nan);
Py_DECREF(par_equal_nan);
CHECK_OBJECT(par_sorted);
Py_DECREF(par_sorted);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_uniq = python_pars[0];
PyObject *var_n = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq = MAKE_FUNCTION_FRAME(tstate, code_objects_b2ce8d1c624745ca9b36ca0298453fe7, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_uniq);
tmp_len_arg_1 = par_uniq;
tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
assert(var_n == NULL);
var_n = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_uniq);
tmp_expression_value_1 = par_uniq;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_view);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_dtype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 337;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq->m_frame.f_lineno = 337;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_uniq;
    assert(old != NULL);
    par_uniq = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_uniq);
tmp_expression_value_2 = par_uniq;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_reshape);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n);
tmp_tuple_element_1 = var_n;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_shape);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 338;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_direct_call_arg3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_direct_call_arg3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 338;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_3 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_uniq;
    assert(old != NULL);
    par_uniq = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 339;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_uniq);
tmp_args_element_value_2 = par_uniq;
tmp_args_element_value_3 = const_int_0;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 339;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq->m_frame.f_lineno = 339;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_uniq;
    assert(old != NULL);
    par_uniq = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq,
    type_description_1,
    par_uniq,
    var_n,
    self->m_closure[1],
    self->m_closure[2],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_uniq);
tmp_return_value = par_uniq;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_uniq);
CHECK_OBJECT(par_uniq);
Py_DECREF(par_uniq);
par_uniq = NULL;
CHECK_OBJECT(var_n);
CHECK_OBJECT(var_n);
Py_DECREF(var_n);
var_n = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_uniq);
par_uniq = NULL;
Py_XDECREF(var_n);
var_n = NULL;
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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__6__unique1d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar = python_pars[0];
PyObject *par_return_index = python_pars[1];
PyObject *par_return_inverse = python_pars[2];
PyObject *par_return_counts = python_pars[3];
PyObject *par_equal_nan = python_pars[4];
PyObject *par_inverse_shape = python_pars[5];
PyObject *par_axis = python_pars[6];
PyObject *par_sorted = python_pars[7];
PyObject *var_optional_indices = NULL;
PyObject *var_conv = NULL;
PyObject *var_ar_ = NULL;
PyObject *var_hash_unique = NULL;
PyObject *var_perm = NULL;
PyObject *var_aux = NULL;
PyObject *var_mask = NULL;
PyObject *var_aux_firstnan = NULL;
PyObject *var_ret = NULL;
PyObject *var_imask = NULL;
PyObject *var_inv_idx = NULL;
PyObject *var_idx = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d = MAKE_FUNCTION_FRAME(tstate, code_objects_20905b48475dd171b996c541abd729eb, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar);
tmp_args_element_value_1 = par_ar;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 358;
tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 358;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_flatten);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar;
    assert(old != NULL);
    par_ar = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_ar);
tmp_expression_value_1 = par_ar;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_shape);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_called_instance_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_2;
tmp_called_instance_4 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar);
tmp_args_element_value_2 = par_ar;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 362;
tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_asarray, tmp_args_element_value_2);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 362;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_flatten);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar;
    assert(old != NULL);
    par_ar = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(par_return_index);
tmp_or_left_value_1 = par_return_index;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_return_inverse);
tmp_or_right_value_1 = par_return_inverse;
tmp_assign_source_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_3 = tmp_or_left_value_1;
or_end_1:;
assert(var_optional_indices == NULL);
Py_INCREF(tmp_assign_source_3);
var_optional_indices = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_optional_indices);
tmp_operand_value_1 = var_optional_indices;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_return_counts);
tmp_operand_value_2 = par_return_counts;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ma);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_is_masked);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 367;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = par_ar;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 367;
tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraysetops_impl$_array_converter(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__array_converter);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 370;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = par_ar;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 370;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_conv == NULL);
var_conv = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_conv);
tmp_iter_arg_1 = var_conv;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 1);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "oooooooooooooooooooo";
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
assert(var_ar_ == NULL);
Py_INCREF(tmp_assign_source_7);
var_ar_ = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_3 = module_var_accessor_numpy$lib$_arraysetops_impl$_unique_hash(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unique_hash);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_ar_);
tmp_kw_call_arg_value_0_1 = var_ar_;
CHECK_OBJECT(par_equal_nan);
tmp_kw_call_dict_value_0_1 = par_equal_nan;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 373;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_equal_nan_tuple);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_9 = tmp_assignment_expr_1__value;
assert(var_hash_unique == NULL);
Py_INCREF(tmp_assign_source_9);
var_hash_unique = tmp_assign_source_9;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_2 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_2);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_2 = Py_NotImplemented;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_sorted);
tmp_truth_name_1 = CHECK_IF_TRUE(par_sorted);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_hash_unique);
tmp_expression_value_4 = var_hash_unique;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sort);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 376;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_conv);
tmp_called_instance_5 = var_conv;
CHECK_OBJECT(var_hash_unique);
tmp_args_element_value_5 = var_hash_unique;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 378;
tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_wrap, tmp_args_element_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
goto frame_return_exit_1;
}
branch_no_3:;
branch_no_2:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
CHECK_OBJECT(var_optional_indices);
tmp_truth_name_2 = CHECK_IF_TRUE(var_optional_indices);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_1;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_3;
if (par_ar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 382;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = par_ar;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_argsort);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_return_index);
tmp_truth_name_3 = CHECK_IF_TRUE(par_return_index);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 382;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_kw_call_value_0_1 = mod_consts.const_str_plain_mergesort;
goto condexpr_end_1;
condexpr_false_1:;
tmp_kw_call_value_0_1 = mod_consts.const_str_plain_quicksort;
condexpr_end_1:;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 382;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_kind_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_perm == NULL);
var_perm = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
if (par_ar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 383;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_ar;
CHECK_OBJECT(var_perm);
tmp_subscript_value_1 = var_perm;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_aux == NULL);
var_aux = tmp_assign_source_11;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
if (par_ar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 385;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_ar;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sort);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 385;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_12;
if (par_ar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 386;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_12 = par_ar;
assert(var_aux == NULL);
Py_INCREF(tmp_assign_source_12);
var_aux = tmp_assign_source_12;
}
branch_end_5:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_expression_value_10;
tmp_expression_value_8 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_empty);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aux);
tmp_expression_value_9 = var_aux;
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_shape);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 387;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 387;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_bool);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 387;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 387;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mask == NULL);
var_mask = tmp_assign_source_13;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = Py_True;
CHECK_OBJECT(var_mask);
tmp_ass_subscribed_1 = var_mask;
tmp_ass_subscript_1 = mod_consts.const_slice_none_int_pos_1_none;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_4;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_2;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
int tmp_truth_name_5;
CHECK_OBJECT(par_equal_nan);
tmp_truth_name_4 = CHECK_IF_TRUE(par_equal_nan);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_aux);
tmp_expression_value_12 = var_aux;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_shape);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_and_left_value_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(var_aux);
tmp_expression_value_14 = var_aux;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_cfmM;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
tmp_expression_value_15 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_isnan);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aux);
tmp_expression_value_16 = var_aux;
tmp_subscript_value_3 = const_int_neg_1;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_3, -1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 390;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 390;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 390;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
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
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_aux);
tmp_expression_value_18 = var_aux;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_c;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooooooooooooo";
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
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_19 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_searchsorted);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_6 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 392;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aux);
tmp_args_element_value_7 = var_aux;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 392;
tmp_tuple_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_isnan, tmp_args_element_value_7);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 392;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_True;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_c81e51d900f46841d2257bc020593429);
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 392;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_aux_firstnan == NULL);
var_aux_firstnan = tmp_assign_source_14;
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_20 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_searchsorted);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aux);
tmp_tuple_element_3 = var_aux;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_aux);
tmp_expression_value_21 = var_aux;
tmp_subscript_value_4 = const_int_neg_1;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_4, -1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_c81e51d900f46841d2257bc020593429);
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 394;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_aux_firstnan == NULL);
var_aux_firstnan = tmp_assign_source_15;
}
branch_end_7:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_aux_firstnan);
tmp_cmp_expr_left_6 = var_aux_firstnan;
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_9 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_6;
PyObject *tmp_stop_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_3;
CHECK_OBJECT(var_aux);
tmp_expression_value_22 = var_aux;
tmp_start_value_1 = const_int_pos_1;
CHECK_OBJECT(var_aux_firstnan);
tmp_stop_value_1 = var_aux_firstnan;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_5 == NULL));
tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aux);
tmp_expression_value_23 = var_aux;
CHECK_OBJECT(var_aux_firstnan);
tmp_sub_expr_left_1 = var_aux_firstnan;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_stop_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_stop_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 397;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_2);
CHECK_OBJECT(tmp_stop_value_2);
Py_DECREF(tmp_stop_value_2);
assert(!(tmp_subscript_value_6 == NULL));
tmp_cmp_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 397;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_2 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_ass_subscribed_2 = var_mask;
tmp_start_value_2 = const_int_pos_1;
CHECK_OBJECT(var_aux_firstnan);
tmp_stop_value_3 = var_aux_firstnan;
tmp_ass_subscript_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_3);
assert(!(tmp_ass_subscript_2 == NULL));
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_8:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = Py_True;
CHECK_OBJECT(var_mask);
tmp_ass_subscribed_3 = var_mask;
CHECK_OBJECT(var_aux_firstnan);
tmp_ass_subscript_3 = var_aux_firstnan;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
PyObject *tmp_start_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_stop_value_4;
tmp_ass_subvalue_4 = Py_False;
CHECK_OBJECT(var_mask);
tmp_ass_subscribed_4 = var_mask;
CHECK_OBJECT(var_aux_firstnan);
tmp_add_expr_left_1 = var_aux_firstnan;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_start_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_start_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_4 = Py_None;
tmp_ass_subscript_4 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_4);
CHECK_OBJECT(tmp_start_value_3);
Py_DECREF(tmp_start_value_3);
assert(!(tmp_ass_subscript_4 == NULL));
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscript_4);
Py_DECREF(tmp_ass_subscript_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_7;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_8;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
CHECK_OBJECT(var_aux);
tmp_expression_value_24 = var_aux;
tmp_subscript_value_7 = mod_consts.const_slice_int_pos_1_none_none;
tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_7);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aux);
tmp_expression_value_25 = var_aux;
tmp_subscript_value_8 = mod_consts.const_slice_none_int_neg_1_none;
tmp_cmp_expr_right_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_8);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 401;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_5 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_ass_subscribed_5 = var_mask;
tmp_ass_subscript_5 = mod_consts.const_slice_int_pos_1_none_none;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_6:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_9;
CHECK_OBJECT(var_aux);
tmp_expression_value_26 = var_aux;
CHECK_OBJECT(var_mask);
tmp_subscript_value_9 = var_mask;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_9);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_4);
assert(var_ret == NULL);
var_ret = tmp_assign_source_16;
}
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_6;
CHECK_OBJECT(par_return_index);
tmp_truth_name_6 = CHECK_IF_TRUE(par_return_index);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_10;
CHECK_OBJECT(var_ret);
tmp_iadd_expr_left_1 = var_ret;
if (var_perm == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_perm);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 405;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_27 = var_perm;
CHECK_OBJECT(var_mask);
tmp_subscript_value_10 = var_mask;
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_10);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_iadd_expr_right_1, 0, tmp_tuple_element_5);
tmp_result = INPLACE_OPERATION_ADD_TUPLE_TUPLE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_17 = tmp_iadd_expr_left_1;
var_ret = tmp_assign_source_17;

}
branch_no_9:;
{
nuitka_bool tmp_condition_result_11;
int tmp_truth_name_7;
CHECK_OBJECT(par_return_inverse);
tmp_truth_name_7 = CHECK_IF_TRUE(par_return_inverse);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_8;
tmp_called_instance_7 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 407;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_args_element_value_8 = var_mask;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 407;
tmp_sub_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_cumsum, tmp_args_element_value_8);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_assign_source_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_imask == NULL);
var_imask = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_28;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_expression_value_29;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_expression_value_30;
tmp_expression_value_28 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_empty);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_expression_value_29 = var_mask;
tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_shape);
if (tmp_kw_call_arg_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 408;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_30 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_arg_value_0_3);

exception_lineno = 408;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_intp);
if (tmp_kw_call_dict_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_call_arg_value_0_3);

exception_lineno = 408;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 408;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_0_3);
CHECK_OBJECT(tmp_kw_call_dict_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_inv_idx == NULL);
var_inv_idx = tmp_assign_source_19;
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
CHECK_OBJECT(var_imask);
tmp_ass_subvalue_6 = var_imask;
CHECK_OBJECT(var_inv_idx);
tmp_ass_subscribed_6 = var_inv_idx;
if (var_perm == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_perm);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 409;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_6 = var_perm;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_tuple_element_6;
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(var_ret);
tmp_iadd_expr_left_2 = var_ret;
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_9 = par_axis;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_12 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(var_inv_idx);
tmp_called_instance_8 = var_inv_idx;
CHECK_OBJECT(par_inverse_shape);
tmp_args_element_value_9 = par_inverse_shape;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 410;
tmp_tuple_element_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_reshape, tmp_args_element_value_9);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_inv_idx);
tmp_tuple_element_6 = var_inv_idx;
Py_INCREF(tmp_tuple_element_6);
condexpr_end_2:;
tmp_iadd_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_iadd_expr_right_2, 0, tmp_tuple_element_6);
tmp_result = INPLACE_OPERATION_ADD_TUPLE_TUPLE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
assert(!(tmp_result == false));
tmp_assign_source_20 = tmp_iadd_expr_left_2;
var_ret = tmp_assign_source_20;

}
branch_no_10:;
{
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_8;
CHECK_OBJECT(par_return_counts);
tmp_truth_name_8 = CHECK_IF_TRUE(par_return_counts);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_element_value_10;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_11;
PyObject *tmp_tuple_element_7;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_32;
tmp_expression_value_31 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_concatenate);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_9 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 412;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_args_element_value_11 = var_mask;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 412;
tmp_add_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_nonzero, tmp_args_element_value_11);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 412;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_expression_value_32 = var_mask;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_size);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 412;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_7 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_tuple_element_7, 0, tmp_list_element_1);
tmp_add_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_add_expr_right_2, 0, tmp_tuple_element_7);
tmp_args_element_value_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 412;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 412;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_idx == NULL);
var_idx = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_called_instance_10;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(var_ret);
tmp_iadd_expr_left_3 = var_ret;
tmp_called_instance_10 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 413;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_idx);
tmp_args_element_value_12 = var_idx;
frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame.f_lineno = 413;
tmp_tuple_element_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_diff, tmp_args_element_value_12);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_iadd_expr_right_3, 0, tmp_tuple_element_8);
tmp_result = INPLACE_OPERATION_ADD_TUPLE_TUPLE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
assert(!(tmp_result == false));
tmp_assign_source_22 = tmp_iadd_expr_left_3;
var_ret = tmp_assign_source_22;

}
branch_no_11:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d,
    type_description_1,
    par_ar,
    par_return_index,
    par_return_inverse,
    par_return_counts,
    par_equal_nan,
    par_inverse_shape,
    par_axis,
    par_sorted,
    var_optional_indices,
    var_conv,
    var_ar_,
    var_hash_unique,
    var_perm,
    var_aux,
    var_mask,
    var_aux_firstnan,
    var_ret,
    var_imask,
    var_inv_idx,
    var_idx
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__6__unique1d);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_ret);
tmp_return_value = var_ret;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_ar);
par_ar = NULL;
CHECK_OBJECT(var_optional_indices);
CHECK_OBJECT(var_optional_indices);
Py_DECREF(var_optional_indices);
var_optional_indices = NULL;
Py_XDECREF(var_conv);
var_conv = NULL;
Py_XDECREF(var_ar_);
var_ar_ = NULL;
Py_XDECREF(var_hash_unique);
var_hash_unique = NULL;
Py_XDECREF(var_perm);
var_perm = NULL;
Py_XDECREF(var_aux);
var_aux = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_aux_firstnan);
var_aux_firstnan = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_imask);
var_imask = NULL;
Py_XDECREF(var_inv_idx);
var_inv_idx = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_ar);
par_ar = NULL;
Py_XDECREF(var_optional_indices);
var_optional_indices = NULL;
Py_XDECREF(var_conv);
var_conv = NULL;
Py_XDECREF(var_ar_);
var_ar_ = NULL;
Py_XDECREF(var_hash_unique);
var_hash_unique = NULL;
Py_XDECREF(var_perm);
var_perm = NULL;
Py_XDECREF(var_aux);
var_aux = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_aux_firstnan);
var_aux_firstnan = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_imask);
var_imask = NULL;
Py_XDECREF(var_inv_idx);
var_inv_idx = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_return_index);
Py_DECREF(par_return_index);
CHECK_OBJECT(par_return_inverse);
Py_DECREF(par_return_inverse);
CHECK_OBJECT(par_return_counts);
Py_DECREF(par_return_counts);
CHECK_OBJECT(par_equal_nan);
Py_DECREF(par_equal_nan);
CHECK_OBJECT(par_inverse_shape);
Py_DECREF(par_inverse_shape);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_sorted);
Py_DECREF(par_sorted);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_return_index);
Py_DECREF(par_return_index);
CHECK_OBJECT(par_return_inverse);
Py_DECREF(par_return_inverse);
CHECK_OBJECT(par_return_counts);
Py_DECREF(par_return_counts);
CHECK_OBJECT(par_equal_nan);
Py_DECREF(par_equal_nan);
CHECK_OBJECT(par_inverse_shape);
Py_DECREF(par_inverse_shape);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_sorted);
Py_DECREF(par_sorted);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__7__unique_all_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__8_unique_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all = MAKE_FUNCTION_FRAME(tstate, code_objects_7b919ec89b3879a575f4d117c2a95384, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 490;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_df4c98799d6e49d20369796c738dda30);
frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all->m_frame.f_lineno = 490;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_numpy$lib$_arraysetops_impl$UniqueAllResult(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UniqueAllResult);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 497;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_direct_call_arg2_1 = var_result;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all,
    type_description_1,
    par_x,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__8_unique_all);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__9__unique_counts_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__10_unique_counts(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts = MAKE_FUNCTION_FRAME(tstate, code_objects_e2d6cfa596b019d402cc4f6b6a1843e6, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 546;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_8302f42fe4123f02958d026c86270768);
frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts->m_frame.f_lineno = 546;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_numpy$lib$_arraysetops_impl$UniqueCountsResult(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UniqueCountsResult);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 553;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_direct_call_arg2_1 = var_result;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts,
    type_description_1,
    par_x,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__10_unique_counts);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__11__unique_inverse_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse = MAKE_FUNCTION_FRAME(tstate, code_objects_cbfbd751016f3b7d5ad257a401bac169, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 603;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_163d731226c8c6630d917fca57cedf63);
frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse->m_frame.f_lineno = 603;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_numpy$lib$_arraysetops_impl$UniqueInverseResult(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UniqueInverseResult);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 610;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_direct_call_arg2_1 = var_result;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse,
    type_description_1,
    par_x,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__13__unique_values_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__14_unique_values(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values = MAKE_FUNCTION_FRAME(tstate, code_objects_b71c935952488c58822c5f4f127619a3, module_numpy$lib$_arraysetops_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 651;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_e06bbcef47da40b9f22c7cad299d9757);
frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values->m_frame.f_lineno = 651;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__14_unique_values);

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


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__15__intersect1d_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar1 = python_pars[0];
PyObject *par_ar2 = python_pars[1];
PyObject *par_assume_unique = python_pars[2];
PyObject *par_return_indices = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_ar1);
tmp_tuple_element_1 = par_ar1;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_ar2);
tmp_tuple_element_1 = par_ar2;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ar1);
Py_DECREF(par_ar1);
CHECK_OBJECT(par_ar2);
Py_DECREF(par_ar2);
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
CHECK_OBJECT(par_return_indices);
Py_DECREF(par_return_indices);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__16_intersect1d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar1 = python_pars[0];
PyObject *par_ar2 = python_pars[1];
PyObject *par_assume_unique = python_pars[2];
PyObject *par_return_indices = python_pars[3];
PyObject *var_ind1 = NULL;
PyObject *var_ind2 = NULL;
PyObject *var_aux = NULL;
PyObject *var_aux_sort_indices = NULL;
PyObject *var_mask = NULL;
PyObject *var_int1d = NULL;
PyObject *var_ar1_indices = NULL;
PyObject *var_ar2_indices = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d = MAKE_FUNCTION_FRAME(tstate, code_objects_dc19b1d559a1b464c125012b16338813, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 722;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_args_element_value_1 = par_ar1;
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 722;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar1;
    assert(old != NULL);
    par_ar1 = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 723;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar2);
tmp_args_element_value_2 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 723;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar2;
    assert(old != NULL);
    par_ar2 = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_assume_unique);
tmp_operand_value_1 = par_assume_unique;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "oooooooooooo";
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
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_return_indices);
tmp_truth_name_1 = CHECK_IF_TRUE(par_return_indices);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "oooooooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 727;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_ar1);
tmp_tuple_element_1 = par_ar1;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_ddb6199cf8f69226979904abcecd9a1f);
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 727;
tmp_iter_arg_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
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



exception_lineno = 727;
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



exception_lineno = 727;
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



exception_lineno = 727;
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
{
    PyObject *old = par_ar1;
    assert(old != NULL);
    par_ar1 = tmp_assign_source_6;
    Py_INCREF(par_ar1);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_ind1 == NULL);
Py_INCREF(tmp_assign_source_7);
var_ind1 = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 728;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_ar2);
tmp_tuple_element_2 = par_ar2;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_ddb6199cf8f69226979904abcecd9a1f);
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 728;
tmp_iter_arg_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 728;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 728;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 728;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = par_ar2;
    assert(old != NULL);
    par_ar2 = tmp_assign_source_11;
    Py_INCREF(par_ar2);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
assert(var_ind2 == NULL);
Py_INCREF(tmp_assign_source_12);
var_ind2 = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 730;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_args_element_value_3 = par_ar1;
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 730;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 730;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar1;
    assert(old != NULL);
    par_ar1 = tmp_assign_source_13;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 731;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar2);
tmp_args_element_value_4 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 731;
tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 731;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar2;
    assert(old != NULL);
    par_ar2 = tmp_assign_source_14;
    Py_DECREF(old);
}

}
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_ar1);
tmp_called_instance_3 = par_ar1;
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 733;
tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 733;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar1;
    assert(old != NULL);
    par_ar1 = tmp_assign_source_15;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(par_ar2);
tmp_called_instance_4 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 734;
tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 734;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar2;
    assert(old != NULL);
    par_ar2 = tmp_assign_source_16;
    Py_DECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_tuple_element_3;
tmp_called_instance_5 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 736;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_tuple_element_3 = par_ar1;
tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_5, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_ar2);
tmp_tuple_element_3 = par_ar2;
PyTuple_SET_ITEM0(tmp_args_element_value_5, 1, tmp_tuple_element_3);
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 736;
tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_concatenate, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 736;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_aux == NULL);
var_aux = tmp_assign_source_17;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(par_return_indices);
tmp_truth_name_2 = CHECK_IF_TRUE(par_return_indices);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 738;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_argsort);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 738;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aux);
tmp_tuple_element_4 = var_aux;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_87c1abaa6fcb4c6f72874144a9717b89);
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 738;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 738;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_aux_sort_indices == NULL);
var_aux_sort_indices = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_aux);
tmp_expression_value_2 = var_aux;
CHECK_OBJECT(var_aux_sort_indices);
tmp_subscript_value_1 = var_aux_sort_indices;
tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 739;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_aux;
    assert(old != NULL);
    var_aux = tmp_assign_source_19;
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_aux);
tmp_expression_value_3 = var_aux;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sort);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 741;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame.f_lineno = 741;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 741;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_end_3:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
if (var_aux == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aux);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 743;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = var_aux;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_none_none;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (var_aux == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aux);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 743;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = var_aux;
tmp_subscript_value_3 = mod_consts.const_slice_none_int_neg_1_none;
tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 743;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mask == NULL);
var_mask = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_4;
PyObject *tmp_subscript_value_5;
if (var_aux == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aux);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 744;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = var_aux;
tmp_subscript_value_4 = mod_consts.const_slice_none_int_neg_1_none;
tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_subscript_value_5 = var_mask;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_int1d == NULL);
var_int1d = tmp_assign_source_21;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_3;
CHECK_OBJECT(par_return_indices);
tmp_truth_name_3 = CHECK_IF_TRUE(par_return_indices);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_6;
PyObject *tmp_subscript_value_7;
if (var_aux_sort_indices == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aux_sort_indices);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 747;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = var_aux_sort_indices;
tmp_subscript_value_6 = mod_consts.const_slice_none_int_neg_1_none;
tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_6);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_subscript_value_7 = var_mask;
tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ar1_indices == NULL);
var_ar1_indices = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_8;
PyObject *tmp_subscript_value_9;
PyObject *tmp_expression_value_12;
if (var_aux_sort_indices == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aux_sort_indices);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 748;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = var_aux_sort_indices;
tmp_subscript_value_8 = mod_consts.const_slice_int_pos_1_none_none;
tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_8);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 748;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_subscript_value_9 = var_mask;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 748;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_expression_value_12 = par_ar1;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_size);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 748;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 748;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ar2_indices == NULL);
var_ar2_indices = tmp_assign_source_23;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_assume_unique);
tmp_operand_value_2 = par_assume_unique;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_assign_source_24;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_10;
if (var_ind1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ind1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 750;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = var_ind1;
CHECK_OBJECT(var_ar1_indices);
tmp_subscript_value_10 = var_ar1_indices;
tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_10);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 750;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ar1_indices;
    assert(old != NULL);
    var_ar1_indices = tmp_assign_source_24;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_11;
if (var_ind2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ind2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 751;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = var_ind2;
CHECK_OBJECT(var_ar2_indices);
tmp_subscript_value_11 = var_ar2_indices;
tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_11);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 751;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ar2_indices;
    assert(old != NULL);
    var_ar2_indices = tmp_assign_source_25;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_tuple_element_5;
CHECK_OBJECT(var_int1d);
tmp_tuple_element_5 = var_int1d;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_ar1_indices);
tmp_tuple_element_5 = var_ar1_indices;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_5);
CHECK_OBJECT(var_ar2_indices);
tmp_tuple_element_5 = var_ar2_indices;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_5);
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
CHECK_OBJECT(var_int1d);
tmp_return_value = var_int1d;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d,
    type_description_1,
    par_ar1,
    par_ar2,
    par_assume_unique,
    par_return_indices,
    var_ind1,
    var_ind2,
    var_aux,
    var_aux_sort_indices,
    var_mask,
    var_int1d,
    var_ar1_indices,
    var_ar2_indices
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__16_intersect1d);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_ar1);
CHECK_OBJECT(par_ar1);
Py_DECREF(par_ar1);
par_ar1 = NULL;
CHECK_OBJECT(par_ar2);
CHECK_OBJECT(par_ar2);
Py_DECREF(par_ar2);
par_ar2 = NULL;
Py_XDECREF(var_ind1);
var_ind1 = NULL;
Py_XDECREF(var_ind2);
var_ind2 = NULL;
Py_XDECREF(var_aux);
var_aux = NULL;
Py_XDECREF(var_aux_sort_indices);
var_aux_sort_indices = NULL;
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
CHECK_OBJECT(var_int1d);
CHECK_OBJECT(var_int1d);
Py_DECREF(var_int1d);
var_int1d = NULL;
Py_XDECREF(var_ar1_indices);
var_ar1_indices = NULL;
Py_XDECREF(var_ar2_indices);
var_ar2_indices = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_ar1);
par_ar1 = NULL;
Py_XDECREF(par_ar2);
par_ar2 = NULL;
Py_XDECREF(var_ind1);
var_ind1 = NULL;
Py_XDECREF(var_ind2);
var_ind2 = NULL;
Py_XDECREF(var_aux);
var_aux = NULL;
Py_XDECREF(var_aux_sort_indices);
var_aux_sort_indices = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_int1d);
var_int1d = NULL;
Py_XDECREF(var_ar1_indices);
var_ar1_indices = NULL;
Py_XDECREF(var_ar2_indices);
var_ar2_indices = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
CHECK_OBJECT(par_return_indices);
Py_DECREF(par_return_indices);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
CHECK_OBJECT(par_return_indices);
Py_DECREF(par_return_indices);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__17__setxor1d_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar1 = python_pars[0];
PyObject *par_ar2 = python_pars[1];
PyObject *par_assume_unique = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_ar1);
tmp_tuple_element_1 = par_ar1;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_ar2);
tmp_tuple_element_1 = par_ar2;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ar1);
Py_DECREF(par_ar1);
CHECK_OBJECT(par_ar2);
Py_DECREF(par_ar2);
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__18_setxor1d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar1 = python_pars[0];
PyObject *par_ar2 = python_pars[1];
PyObject *par_assume_unique = python_pars[2];
PyObject *var_aux = NULL;
PyObject *var_flag = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d = MAKE_FUNCTION_FRAME(tstate, code_objects_6e343e76eeb495b91c01397143287b55, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_assume_unique);
tmp_operand_value_1 = par_assume_unique;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 793;
type_description_1 = "ooooo";
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 794;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_args_element_value_1 = par_ar1;
frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d->m_frame.f_lineno = 794;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 794;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar1;
    assert(old != NULL);
    par_ar1 = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 795;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar2);
tmp_args_element_value_2 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d->m_frame.f_lineno = 795;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 795;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar2;
    assert(old != NULL);
    par_ar2 = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 797;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_concatenate);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 797;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_tuple_element_2 = par_ar1;
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_ar2);
tmp_tuple_element_2 = par_ar2;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd);
frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d->m_frame.f_lineno = 797;
tmp_assign_source_3 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 797;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_aux == NULL);
var_aux = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_aux);
tmp_expression_value_2 = var_aux;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(var_aux);
tmp_return_value = var_aux;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_aux);
tmp_expression_value_3 = var_aux;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sort);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 801;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d->m_frame.f_lineno = 801;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 801;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_3;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 802;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_concatenate);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 802;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = MAKE_LIST1(tstate, Py_True);
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM(tmp_args_element_value_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_aux);
tmp_expression_value_5 = var_aux;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 802;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_aux);
tmp_expression_value_6 = var_aux;
tmp_subscript_value_2 = mod_consts.const_slice_none_int_neg_1_none;
tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 802;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_3 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 802;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = MAKE_LIST1(tstate, Py_True);
PyTuple_SET_ITEM(tmp_args_element_value_3, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d->m_frame.f_lineno = 802;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 802;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_flag == NULL);
var_flag = tmp_assign_source_4;
}
{
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_aux);
tmp_expression_value_7 = var_aux;
CHECK_OBJECT(var_flag);
tmp_expression_value_8 = var_flag;
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_bitand_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 803;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_flag);
tmp_expression_value_9 = var_flag;
tmp_subscript_value_5 = mod_consts.const_slice_none_int_neg_1_none;
tmp_bitand_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 803;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
CHECK_OBJECT(tmp_bitand_expr_right_1);
Py_DECREF(tmp_bitand_expr_right_1);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 803;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 803;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d,
    type_description_1,
    par_ar1,
    par_ar2,
    par_assume_unique,
    var_aux,
    var_flag
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__18_setxor1d);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_ar1);
CHECK_OBJECT(par_ar1);
Py_DECREF(par_ar1);
par_ar1 = NULL;
CHECK_OBJECT(par_ar2);
CHECK_OBJECT(par_ar2);
Py_DECREF(par_ar2);
par_ar2 = NULL;
CHECK_OBJECT(var_aux);
CHECK_OBJECT(var_aux);
Py_DECREF(var_aux);
var_aux = NULL;
Py_XDECREF(var_flag);
var_flag = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_ar1);
par_ar1 = NULL;
Py_XDECREF(par_ar2);
par_ar2 = NULL;
Py_XDECREF(var_aux);
var_aux = NULL;
Py_XDECREF(var_flag);
var_flag = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__19__isin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar1 = python_pars[0];
PyObject *par_ar2 = python_pars[1];
PyObject *par_assume_unique = python_pars[2];
PyObject *par_invert = python_pars[3];
PyObject *par_kind = python_pars[4];
nuitka_bool var_is_int_arrays = NUITKA_BOOL_UNASSIGNED;
PyObject *var_use_table_method = NULL;
PyObject *var_ar2_min = NULL;
PyObject *var_ar2_max = NULL;
PyObject *var_ar2_range = NULL;
PyObject *var_below_memory_constraint = NULL;
PyObject *var_range_safe_from_overflow = NULL;
PyObject *var_outgoing_array = NULL;
PyObject *var_isin_helper_ar = NULL;
PyObject *var_basic_mask = NULL;
PyObject *var_in_range_ar1 = NULL;
PyObject *var_dtype = NULL;
PyObject *var_out = NULL;
PyObject *var_contains_object = NULL;
PyObject *var_mask = NULL;
PyObject *var_a = NULL;
PyObject *var_rev_idx = NULL;
PyObject *var_ar = NULL;
PyObject *var_order = NULL;
PyObject *var_sar = NULL;
PyObject *var_bool_ar = NULL;
PyObject *var_flag = NULL;
PyObject *var_ret = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin = MAKE_FUNCTION_FRAME(tstate, code_objects_220e3322b140e72881f69dc8ee45454d, module_numpy$lib$_arraysetops_impl, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 808;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_args_element_value_1 = par_ar1;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 808;
tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_asarray, tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 808;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 808;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ravel);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 808;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar1;
    assert(old != NULL);
    par_ar1 = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_2;
tmp_called_instance_4 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 809;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar2);
tmp_args_element_value_2 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 809;
tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_asarray, tmp_args_element_value_2);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 809;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 809;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ravel);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 809;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar2;
    assert(old != NULL);
    par_ar2 = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_ar2);
tmp_expression_value_1 = par_ar2;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dtype);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 812;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = (PyObject *)&PyBaseObject_Type;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 812;
type_description_1 = "oooooboooooooooooooooooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(par_ar2);
tmp_called_instance_5 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 813;
tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_reshape,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_int_pos_1_tuple, 0)
);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 813;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar2;
    assert(old != NULL);
    par_ar2 = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_kind);
tmp_cmp_expr_left_2 = par_kind;
tmp_cmp_expr_right_2 = mod_consts.const_frozenset_a0be6b1f4bf7d652d8fd81f97e88eeb0;
tmp_res = PySet_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 815;
type_description_1 = "oooooboooooooooooooooooooooo";
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
tmp_tuple_element_1 = mod_consts.const_str_digest_51f88d264bb151a0fded555528d2b074;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_kind);
tmp_format_value_1 = par_kind;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 817;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a3dd71dc957005a9a37348ae59ad8a1b;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 816;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 816;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooboooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_assign_source_4;
PyObject *tmp_all_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_1;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(par_ar1);
tmp_tuple_element_2 = par_ar1;
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_2);
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 820;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto tuple_build_exception_2;
}

tmp_tuple_element_2 = par_ar2;
PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_iter_arg_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_5;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_all_arg_1 = MAKE_GENERATOR_numpy$lib$_arraysetops_impl$$$function__19__isin$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_capi_result_1 = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 820;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
assert(!(tmp_truth_name_1 == -1));
tmp_assign_source_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
var_is_int_arrays = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_6;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
assert(var_is_int_arrays != NUITKA_BOOL_UNASSIGNED);
tmp_and_left_value_1 = (var_is_int_arrays == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_kind);
tmp_cmp_expr_left_3 = par_kind;
tmp_cmp_expr_right_3 = mod_consts.const_frozenset_e7c85c4ff0b081d243fb4f2ad8035f18;
tmp_res = PySet_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 821;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_assign_source_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_assign_source_6 = tmp_and_left_value_1;
and_end_1:;
assert(var_use_table_method == NULL);
Py_INCREF(tmp_assign_source_6);
var_use_table_method = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_use_table_method);
tmp_truth_name_2 = CHECK_IF_TRUE(var_use_table_method);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 823;
type_description_1 = "oooooboooooooooooooooooooooo";
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
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_2;
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 824;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = par_ar2;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 824;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_int_0;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 824;
type_description_1 = "oooooboooooooooooooooooooooo";
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
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_3;
CHECK_OBJECT(par_invert);
tmp_truth_name_3 = CHECK_IF_TRUE(par_invert);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 825;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 826;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ones_like);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 826;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_tuple_element_3 = par_ar1;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 826;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 826;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 828;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_zeros_like);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 828;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_tuple_element_4 = par_ar1;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 828;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 828;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_5:;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_ar1);
tmp_expression_value_5 = par_ar1;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 831;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = (PyObject *)&PyBool_Type;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 831;
type_description_1 = "oooooboooooooooooooooooooooo";
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
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_ar1);
tmp_expression_value_6 = par_ar1;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_astype);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 832;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 832;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_uint8);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 832;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 832;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 832;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar1;
    assert(old != NULL);
    par_ar1 = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_8;
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 833;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_ar2;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_dtype);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 833;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = (PyObject *)&PyBool_Type;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 833;
type_description_1 = "oooooboooooooooooooooooooooo";
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
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_10;
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 834;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_ar2;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_astype);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 834;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 834;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_uint8);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 834;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 834;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 834;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar2;
    par_ar2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_5;
tmp_expression_value_11 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 836;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_min);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 836;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar2 == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 836;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 836;
tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 836;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 836;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ar2_min == NULL);
var_ar2_min = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_int_arg_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_6;
tmp_expression_value_12 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 837;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_max);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar2 == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 837;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 837;
tmp_int_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ar2_max == NULL);
var_ar2_max = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_ar2_max);
tmp_sub_expr_left_1 = var_ar2_max;
CHECK_OBJECT(var_ar2_min);
tmp_sub_expr_right_1 = var_ar2_min;
tmp_assign_source_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ar2_range == NULL);
var_ar2_range = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_ar2_range);
tmp_cmp_expr_left_7 = var_ar2_range;
tmp_mult_expr_left_1 = mod_consts.const_int_pos_6;
if (par_ar1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 843;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = par_ar1;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_size);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 843;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar2 == NULL) {
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 843;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = par_ar2;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_size);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 843;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 843;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 843;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 843;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_below_memory_constraint == NULL);
var_below_memory_constraint = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(var_ar2_range);
tmp_cmp_expr_left_8 = var_ar2_range;
tmp_expression_value_16 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 845;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_iinfo);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 845;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar2 == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 845;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_17 = par_ar2;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 845;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 845;
tmp_expression_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 845;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_max);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 845;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 845;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_range_safe_from_overflow == NULL);
var_range_safe_from_overflow = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_4;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_5;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_range_safe_from_overflow);
tmp_truth_name_4 = CHECK_IF_TRUE(var_range_safe_from_overflow);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 856;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 856;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_below_memory_constraint);
tmp_truth_name_5 = CHECK_IF_TRUE(var_below_memory_constraint);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 857;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 857;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_kind);
tmp_cmp_expr_left_9 = par_kind;
tmp_cmp_expr_right_9 = mod_consts.const_str_plain_table;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 857;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_2 = tmp_or_left_value_1;
or_end_1:;
tmp_condition_result_8 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_8 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_6;
CHECK_OBJECT(par_invert);
tmp_truth_name_6 = CHECK_IF_TRUE(par_invert);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 860;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
tmp_expression_value_18 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 861;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_ones_like);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar1 == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 861;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_5 = par_ar1;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 861;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_outgoing_array == NULL);
var_outgoing_array = tmp_assign_source_14;
}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
tmp_expression_value_19 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 863;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_zeros_like);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar1 == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 863;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_6 = par_ar1;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 863;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
CHECK_OBJECT(tmp_kwargs_value_4);
Py_DECREF(tmp_kwargs_value_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_outgoing_array == NULL);
var_outgoing_array = tmp_assign_source_15;
}
branch_end_9:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_7;
CHECK_OBJECT(par_invert);
tmp_truth_name_7 = CHECK_IF_TRUE(par_invert);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 866;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_7;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_kwargs_value_5;
tmp_expression_value_20 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 867;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_ones);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ar2_range);
tmp_add_expr_left_2 = var_ar2_range;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 867;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_5, 0, tmp_tuple_element_7);
tmp_kwargs_value_5 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 867;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
CHECK_OBJECT(tmp_kwargs_value_5);
Py_DECREF(tmp_kwargs_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_isin_helper_ar == NULL);
var_isin_helper_ar = tmp_assign_source_16;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
tmp_ass_subvalue_1 = const_int_0;
CHECK_OBJECT(var_isin_helper_ar);
tmp_ass_subscribed_1 = var_isin_helper_ar;
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 868;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_2 = par_ar2;
CHECK_OBJECT(var_ar2_min);
tmp_sub_expr_right_2 = var_ar2_min;
tmp_ass_subscript_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_8;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_kwargs_value_6;
tmp_expression_value_21 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 870;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_zeros);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 870;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ar2_range);
tmp_add_expr_left_3 = var_ar2_range;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_tuple_element_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 870;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_6, 0, tmp_tuple_element_8);
tmp_kwargs_value_6 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 870;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
CHECK_OBJECT(tmp_kwargs_value_6);
Py_DECREF(tmp_kwargs_value_6);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 870;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_isin_helper_ar == NULL);
var_isin_helper_ar = tmp_assign_source_17;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
tmp_ass_subvalue_2 = const_int_pos_1;
CHECK_OBJECT(var_isin_helper_ar);
tmp_ass_subscribed_2 = var_isin_helper_ar;
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 871;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_3 = par_ar2;
CHECK_OBJECT(var_ar2_min);
tmp_sub_expr_right_3 = var_ar2_min;
tmp_ass_subscript_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_ass_subscript_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_10:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
if (par_ar1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 874;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_10 = par_ar1;
CHECK_OBJECT(var_ar2_max);
tmp_cmp_expr_right_10 = var_ar2_max;
tmp_bitand_expr_left_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 874;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar1 == NULL) {
Py_DECREF(tmp_bitand_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 874;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_11 = par_ar1;
CHECK_OBJECT(var_ar2_min);
tmp_cmp_expr_right_11 = var_ar2_min;
tmp_bitand_expr_right_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 874;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
CHECK_OBJECT(tmp_bitand_expr_right_1);
Py_DECREF(tmp_bitand_expr_right_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 874;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_basic_mask == NULL);
var_basic_mask = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_1;
if (par_ar1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 875;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = par_ar1;
CHECK_OBJECT(var_basic_mask);
tmp_subscript_value_1 = var_basic_mask;
tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 875;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_in_range_ar1 == NULL);
var_in_range_ar1 = tmp_assign_source_19;
}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(var_in_range_ar1);
tmp_expression_value_23 = var_in_range_ar1;
tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = const_int_0;
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
CHECK_OBJECT(var_outgoing_array);
tmp_return_value = var_outgoing_array;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_11:;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_24;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_25;
tmp_expression_value_24 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 885;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_array);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_ar2_min);
tmp_kw_call_arg_value_0_1 = var_ar2_min;
tmp_expression_value_25 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 885;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_intp);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 885;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 885;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_ar2_min;
    assert(old != NULL);
    var_ar2_min = tmp_assign_source_20;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_26;
tmp_expression_value_26 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 886;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_intp);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(var_dtype == NULL);
var_dtype = tmp_assign_source_21;
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
tmp_cmp_expr_left_13 = EXC_TYPE(tstate);
tmp_cmp_expr_right_13 = PyExc_OverflowError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_27;
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 888;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_27 = par_ar2;
tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_dtype);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 888;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(var_dtype == NULL);
var_dtype = tmp_assign_source_22;
}
goto branch_end_12;
branch_no_12:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 884;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame)) {
        frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooboooooooooooooooooooooo";
goto try_except_handler_4;
branch_end_12:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_28;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_expression_value_29;
tmp_expression_value_28 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 890;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_empty_like);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 890;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_in_range_ar1);
tmp_kw_call_arg_value_0_2 = var_in_range_ar1;
tmp_expression_value_29 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 890;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_intp);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 890;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 890;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 890;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_out == NULL);
var_out = tmp_assign_source_23;
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_2;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_31;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (var_isin_helper_ar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isin_helper_ar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 891;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = var_isin_helper_ar;
tmp_expression_value_31 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 892;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_subtract);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 892;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_in_range_ar1);
tmp_kw_call_arg_value_0_3 = var_in_range_ar1;
if (var_ar2_min == NULL) {
Py_DECREF(tmp_called_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2_min);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 892;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_1 = var_ar2_min;
CHECK_OBJECT(var_dtype);
tmp_kw_call_dict_value_0_3 = var_dtype;
CHECK_OBJECT(var_out);
tmp_kw_call_dict_value_1_1 = var_out;
tmp_kw_call_dict_value_2_1 = mod_consts.const_str_plain_unsafe;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 892;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_subscript_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts.const_tuple_str_plain_dtype_str_plain_out_str_plain_casting_tuple);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 892;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 892;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_outgoing_array);
tmp_ass_subscribed_3 = var_outgoing_array;
CHECK_OBJECT(var_basic_mask);
tmp_ass_subscript_3 = var_basic_mask;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 891;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(var_outgoing_array);
tmp_return_value = var_outgoing_array;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(par_kind);
tmp_cmp_expr_left_14 = par_kind;
tmp_cmp_expr_right_14 = mod_consts.const_str_plain_table;
tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_30d3a0a82fe6ad106ffc0582d4770657;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 897;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 897;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooboooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_13:;
branch_end_8:;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(par_kind);
tmp_cmp_expr_left_15 = par_kind;
tmp_cmp_expr_right_15 = mod_consts.const_str_plain_table;
tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 903;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_e14fa0ecece41a415979a54ee2168941;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 904;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 904;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooboooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_14:;
branch_end_3:;
{
PyObject *tmp_assign_source_24;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
if (par_ar1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 911;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_33 = par_ar1;
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_hasobject);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 911;
type_description_1 = "oooooboooooooooooooooooooooo";
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
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 911;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_35 = par_ar2;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_hasobject);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_24 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_24 = tmp_or_left_value_2;
or_end_2:;
assert(var_contains_object == NULL);
var_contains_object = tmp_assign_source_24;
}
{
nuitka_bool tmp_condition_result_15;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_len_arg_1;
double tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_len_arg_2;
int tmp_truth_name_8;
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 917;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = par_ar2;
tmp_cmp_expr_left_16 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 917;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_2 = 10;
if (par_ar1 == NULL) {
Py_DECREF(tmp_cmp_expr_left_16);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 917;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = par_ar1;
tmp_pow_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_pow_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_16);

exception_lineno = 917;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_pow_expr_right_1 = mod_consts.const_float_0_145;
tmp_mult_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
CHECK_OBJECT(tmp_pow_expr_left_1);
Py_DECREF(tmp_pow_expr_left_1);
assert(!(tmp_mult_expr_right_2 == NULL));
tmp_cmp_expr_right_16 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_2, tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
assert(!(tmp_cmp_expr_right_16 == NULL));
tmp_or_left_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_right_16, tmp_cmp_expr_left_16);
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
CHECK_OBJECT(tmp_cmp_expr_right_16);
Py_DECREF(tmp_cmp_expr_right_16);
assert(!(tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION));
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_contains_object);
tmp_truth_name_8 = CHECK_IF_TRUE(var_contains_object);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 917;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_15 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_15 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
nuitka_bool tmp_condition_result_16;
int tmp_truth_name_9;
CHECK_OBJECT(par_invert);
tmp_truth_name_9 = CHECK_IF_TRUE(par_invert);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 918;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_36;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_9;
PyObject *tmp_len_arg_3;
PyObject *tmp_kwargs_value_7;
tmp_expression_value_36 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 919;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_ones);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 919;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar1 == NULL) {
Py_DECREF(tmp_called_value_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 919;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_3 = par_ar1;
tmp_tuple_element_9 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 919;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_7, 0, tmp_tuple_element_9);
tmp_kwargs_value_7 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 919;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
CHECK_OBJECT(tmp_kwargs_value_7);
Py_DECREF(tmp_kwargs_value_7);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 919;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mask == NULL);
var_mask = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_2;
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 920;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_2 = par_ar2;
tmp_assign_source_26 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 920;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_26;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_27 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooboooooooooooooooooooooo";
exception_lineno = 920;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_28 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_a;
    var_a = tmp_assign_source_28;
    Py_INCREF(var_a);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_ibitand_expr_left_1;
PyObject *tmp_ibitand_expr_right_1;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
if (var_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 921;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_ibitand_expr_left_1 = var_mask;
if (par_ar1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 921;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_cmp_expr_left_17 = par_ar1;
CHECK_OBJECT(var_a);
tmp_cmp_expr_right_17 = var_a;
tmp_ibitand_expr_right_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_ibitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 921;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = INPLACE_OPERATION_BITAND_OBJECT_OBJECT(&tmp_ibitand_expr_left_1, tmp_ibitand_expr_right_1);
CHECK_OBJECT(tmp_ibitand_expr_right_1);
Py_DECREF(tmp_ibitand_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 921;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_29 = tmp_ibitand_expr_left_1;
var_mask = tmp_assign_source_29;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 920;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
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
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_37;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_10;
PyObject *tmp_len_arg_4;
PyObject *tmp_kwargs_value_8;
tmp_expression_value_37 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 923;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_zeros);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 923;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar1 == NULL) {
Py_DECREF(tmp_called_value_16);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 923;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_4 = par_ar1;
tmp_tuple_element_10 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 923;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_8, 0, tmp_tuple_element_10);
tmp_kwargs_value_8 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 923;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
CHECK_OBJECT(tmp_kwargs_value_8);
Py_DECREF(tmp_kwargs_value_8);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 923;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mask == NULL);
var_mask = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_3;
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 924;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_3 = par_ar2;
tmp_assign_source_31 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 924;
type_description_1 = "oooooboooooooooooooooooooooo";
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
type_description_1 = "oooooboooooooooooooooooooooo";
exception_lineno = 924;
        goto try_except_handler_6;
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
    PyObject *old = var_a;
    var_a = tmp_assign_source_33;
    Py_INCREF(var_a);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
if (var_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 925;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_ibitor_expr_left_1 = var_mask;
if (par_ar1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 925;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_cmp_expr_left_18 = par_ar1;
CHECK_OBJECT(var_a);
tmp_cmp_expr_right_18 = var_a;
tmp_ibitor_expr_right_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_ibitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 925;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
CHECK_OBJECT(tmp_ibitor_expr_right_1);
Py_DECREF(tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 925;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_34 = tmp_ibitor_expr_left_1;
var_mask = tmp_assign_source_34;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 924;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
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
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_end_16:;
if (var_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 926;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_mask;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_15:;
{
bool tmp_condition_result_17;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_assume_unique);
tmp_operand_value_1 = par_assume_unique;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 929;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_17 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_38;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_9;
tmp_expression_value_38 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 930;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_unique);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 930;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_7;
}
if (par_ar1 == NULL) {
Py_DECREF(tmp_called_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 930;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_tuple_element_11 = par_ar1;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_11);
tmp_kwargs_value_9 = DICT_COPY(tstate, mod_consts.const_dict_a631262f796736f0defb811197d235ff);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 930;
tmp_iter_arg_4 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
CHECK_OBJECT(tmp_kwargs_value_9);
Py_DECREF(tmp_kwargs_value_9);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 930;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_35 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 930;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_35;
}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_36 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 930;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 930;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_37;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 930;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_38 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_ar1;
    par_ar1 = tmp_assign_source_38;
    Py_INCREF(par_ar1);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_39 = tmp_tuple_unpack_1__element_2;
assert(var_rev_idx == NULL);
Py_INCREF(tmp_assign_source_39);
var_rev_idx = tmp_assign_source_39;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_element_value_8;
tmp_expression_value_39 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 931;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_unique);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 931;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar2 == NULL) {
Py_DECREF(tmp_called_value_18);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 931;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 931;
tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 931;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar2;
    par_ar2 = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
branch_no_17:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_element_value_9;
PyObject *tmp_tuple_element_12;
tmp_expression_value_40 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 933;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_concatenate);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 933;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_ar1 == NULL) {
Py_DECREF(tmp_called_value_19);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 933;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_12 = par_ar1;
tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_9, 0, tmp_tuple_element_12);
if (par_ar2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 933;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto tuple_build_exception_3;
}

tmp_tuple_element_12 = par_ar2;
PyTuple_SET_ITEM0(tmp_args_element_value_9, 1, tmp_tuple_element_12);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_19);
Py_DECREF(tmp_args_element_value_9);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 933;
tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 933;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ar == NULL);
var_ar = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(var_ar);
tmp_expression_value_41 = var_ar;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_argsort);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 937;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 937;
tmp_assign_source_42 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_mergesort_tuple, 0), mod_consts.const_tuple_str_plain_kind_tuple);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 937;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_order == NULL);
var_order = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_ar);
tmp_expression_value_42 = var_ar;
CHECK_OBJECT(var_order);
tmp_subscript_value_3 = var_order;
tmp_assign_source_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 938;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_sar == NULL);
var_sar = tmp_assign_source_43;
}
{
nuitka_bool tmp_condition_result_18;
int tmp_truth_name_10;
CHECK_OBJECT(par_invert);
tmp_truth_name_10 = CHECK_IF_TRUE(par_invert);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 939;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_18 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_sar);
tmp_expression_value_43 = var_sar;
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_cmp_expr_left_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_4);
if (tmp_cmp_expr_left_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 940;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_sar);
tmp_expression_value_44 = var_sar;
tmp_subscript_value_5 = mod_consts.const_slice_none_int_neg_1_none;
tmp_cmp_expr_right_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_5);
if (tmp_cmp_expr_right_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_19);

exception_lineno = 940;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_44 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
CHECK_OBJECT(tmp_cmp_expr_left_19);
Py_DECREF(tmp_cmp_expr_left_19);
CHECK_OBJECT(tmp_cmp_expr_right_19);
Py_DECREF(tmp_cmp_expr_right_19);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 940;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_bool_ar == NULL);
var_bool_ar = tmp_assign_source_44;
}
goto branch_end_18;
branch_no_18:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_6;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_sar);
tmp_expression_value_45 = var_sar;
tmp_subscript_value_6 = mod_consts.const_slice_int_pos_1_none_none;
tmp_cmp_expr_left_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_6);
if (tmp_cmp_expr_left_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 942;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_sar);
tmp_expression_value_46 = var_sar;
tmp_subscript_value_7 = mod_consts.const_slice_none_int_neg_1_none;
tmp_cmp_expr_right_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_7);
if (tmp_cmp_expr_right_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_20);

exception_lineno = 942;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_45 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
CHECK_OBJECT(tmp_cmp_expr_left_20);
Py_DECREF(tmp_cmp_expr_left_20);
CHECK_OBJECT(tmp_cmp_expr_right_20);
Py_DECREF(tmp_cmp_expr_right_20);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 942;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_bool_ar == NULL);
var_bool_ar = tmp_assign_source_45;
}
branch_end_18:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_tuple_element_13;
tmp_called_instance_6 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 943;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bool_ar);
tmp_tuple_element_13 = var_bool_ar;
tmp_args_element_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_list_element_1;
PyTuple_SET_ITEM0(tmp_args_element_value_10, 0, tmp_tuple_element_13);
CHECK_OBJECT(par_invert);
tmp_list_element_1 = par_invert;
tmp_tuple_element_13 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_tuple_element_13, 0, tmp_list_element_1);
PyTuple_SET_ITEM(tmp_args_element_value_10, 1, tmp_tuple_element_13);
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 943;
tmp_assign_source_46 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_concatenate, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 943;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_flag == NULL);
var_flag = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_47;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_48;
PyObject *tmp_kwargs_value_10;
tmp_expression_value_47 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 944;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_empty);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 944;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ar);
tmp_expression_value_48 = var_ar;
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_shape);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_21);

exception_lineno = 944;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_10, 0, tmp_tuple_element_14);
tmp_kwargs_value_10 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame.f_lineno = 944;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
CHECK_OBJECT(tmp_kwargs_value_10);
Py_DECREF(tmp_kwargs_value_10);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 944;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_47;
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(var_flag);
tmp_ass_subvalue_4 = var_flag;
CHECK_OBJECT(var_ret);
tmp_ass_subscribed_4 = var_ret;
CHECK_OBJECT(var_order);
tmp_ass_subscript_4 = var_order;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 945;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_19;
int tmp_truth_name_11;
CHECK_OBJECT(par_assume_unique);
tmp_truth_name_11 = CHECK_IF_TRUE(par_assume_unique);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 947;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_19 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_8;
PyObject *tmp_stop_value_1;
PyObject *tmp_len_arg_5;
CHECK_OBJECT(var_ret);
tmp_expression_value_49 = var_ret;
if (par_ar1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ar1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 948;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_5 = par_ar1;
tmp_stop_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 948;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_8 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_8 == NULL));
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 948;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_9;
CHECK_OBJECT(var_ret);
tmp_expression_value_50 = var_ret;
if (var_rev_idx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rev_idx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 950;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_9 = var_rev_idx;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_9);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 950;
type_description_1 = "oooooboooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_19:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin,
    type_description_1,
    par_ar1,
    par_ar2,
    par_assume_unique,
    par_invert,
    par_kind,
    (int)var_is_int_arrays,
    var_use_table_method,
    var_ar2_min,
    var_ar2_max,
    var_ar2_range,
    var_below_memory_constraint,
    var_range_safe_from_overflow,
    var_outgoing_array,
    var_isin_helper_ar,
    var_basic_mask,
    var_in_range_ar1,
    var_dtype,
    var_out,
    var_contains_object,
    var_mask,
    var_a,
    var_rev_idx,
    var_ar,
    var_order,
    var_sar,
    var_bool_ar,
    var_flag,
    var_ret
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__19__isin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_ar1);
par_ar1 = NULL;
Py_XDECREF(par_ar2);
par_ar2 = NULL;
assert(var_is_int_arrays != NUITKA_BOOL_UNASSIGNED);
var_is_int_arrays = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(var_use_table_method);
CHECK_OBJECT(var_use_table_method);
Py_DECREF(var_use_table_method);
var_use_table_method = NULL;
Py_XDECREF(var_ar2_min);
var_ar2_min = NULL;
Py_XDECREF(var_ar2_max);
var_ar2_max = NULL;
Py_XDECREF(var_ar2_range);
var_ar2_range = NULL;
Py_XDECREF(var_below_memory_constraint);
var_below_memory_constraint = NULL;
Py_XDECREF(var_range_safe_from_overflow);
var_range_safe_from_overflow = NULL;
Py_XDECREF(var_outgoing_array);
var_outgoing_array = NULL;
Py_XDECREF(var_isin_helper_ar);
var_isin_helper_ar = NULL;
Py_XDECREF(var_basic_mask);
var_basic_mask = NULL;
Py_XDECREF(var_in_range_ar1);
var_in_range_ar1 = NULL;
Py_XDECREF(var_dtype);
var_dtype = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_contains_object);
var_contains_object = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_rev_idx);
var_rev_idx = NULL;
Py_XDECREF(var_ar);
var_ar = NULL;
Py_XDECREF(var_order);
var_order = NULL;
Py_XDECREF(var_sar);
var_sar = NULL;
Py_XDECREF(var_bool_ar);
var_bool_ar = NULL;
Py_XDECREF(var_flag);
var_flag = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_ar1);
par_ar1 = NULL;
Py_XDECREF(par_ar2);
par_ar2 = NULL;
var_is_int_arrays = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_use_table_method);
var_use_table_method = NULL;
Py_XDECREF(var_ar2_min);
var_ar2_min = NULL;
Py_XDECREF(var_ar2_max);
var_ar2_max = NULL;
Py_XDECREF(var_ar2_range);
var_ar2_range = NULL;
Py_XDECREF(var_below_memory_constraint);
var_below_memory_constraint = NULL;
Py_XDECREF(var_range_safe_from_overflow);
var_range_safe_from_overflow = NULL;
Py_XDECREF(var_outgoing_array);
var_outgoing_array = NULL;
Py_XDECREF(var_isin_helper_ar);
var_isin_helper_ar = NULL;
Py_XDECREF(var_basic_mask);
var_basic_mask = NULL;
Py_XDECREF(var_in_range_ar1);
var_in_range_ar1 = NULL;
Py_XDECREF(var_dtype);
var_dtype = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_contains_object);
var_contains_object = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_rev_idx);
var_rev_idx = NULL;
Py_XDECREF(var_ar);
var_ar = NULL;
Py_XDECREF(var_order);
var_order = NULL;
Py_XDECREF(var_sar);
var_sar = NULL;
Py_XDECREF(var_bool_ar);
var_bool_ar = NULL;
Py_XDECREF(var_flag);
var_flag = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
CHECK_OBJECT(par_invert);
Py_DECREF(par_invert);
CHECK_OBJECT(par_kind);
Py_DECREF(par_kind);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
CHECK_OBJECT(par_invert);
Py_DECREF(par_invert);
CHECK_OBJECT(par_kind);
Py_DECREF(par_kind);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$lib$_arraysetops_impl$$$function__19__isin$$$genexpr__1_genexpr_locals {
PyObject *var_ar;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *numpy$lib$_arraysetops_impl$$$function__19__isin$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_arraysetops_impl$$$function__19__isin$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$lib$_arraysetops_impl$$$function__19__isin$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_ar = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1dca8fec92bfa7e38bf67ef004462981, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 820;
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
    PyObject *old = generator_heap->var_ar;
    generator_heap->var_ar = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_ar);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_ar);
tmp_expression_value_3 = generator_heap->var_ar;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 820;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 820;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_u_str_plain_i_str_plain_b_tuple;
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 820;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_expression_value_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 820;
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


generator_heap->exception_lineno = 820;
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
    generator_heap->var_ar
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

Py_XDECREF(generator_heap->var_ar);
generator_heap->var_ar = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_ar);
generator_heap->var_ar = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$_arraysetops_impl$$$function__19__isin$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_arraysetops_impl$$$function__19__isin$$$genexpr__1_genexpr_context,
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_5ca915ac125e535884f51445b76efccb,
#endif
        code_objects_1dca8fec92bfa7e38bf67ef004462981,
        closure,
        1,
#if 1
        sizeof(struct numpy$lib$_arraysetops_impl$$$function__19__isin$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__20__isin_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_element = python_pars[0];
PyObject *par_test_elements = python_pars[1];
PyObject *par_assume_unique = python_pars[2];
PyObject *par_invert = python_pars[3];
PyObject *par_kind = python_pars[4];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_element);
tmp_tuple_element_1 = par_element;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_test_elements);
tmp_tuple_element_1 = par_test_elements;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_element);
Py_DECREF(par_element);
CHECK_OBJECT(par_test_elements);
Py_DECREF(par_test_elements);
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
CHECK_OBJECT(par_invert);
Py_DECREF(par_invert);
CHECK_OBJECT(par_kind);
Py_DECREF(par_kind);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__21_isin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_element = python_pars[0];
PyObject *par_test_elements = python_pars[1];
PyObject *par_assume_unique = python_pars[2];
PyObject *par_invert = python_pars[3];
PyObject *par_kind = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin = MAKE_FUNCTION_FRAME(tstate, code_objects_9c9a3fb2503d9f121f93c899eb3f45fc, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1074;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_element);
tmp_args_element_value_1 = par_element;
frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin->m_frame.f_lineno = 1074;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1074;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_element;
    assert(old != NULL);
    par_element = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraysetops_impl$_isin(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__isin);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1075;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_element);
tmp_kw_call_arg_value_0_1 = par_element;
CHECK_OBJECT(par_test_elements);
tmp_kw_call_arg_value_1_1 = par_test_elements;
CHECK_OBJECT(par_assume_unique);
tmp_kw_call_dict_value_0_1 = par_assume_unique;
CHECK_OBJECT(par_invert);
tmp_kw_call_dict_value_1_1 = par_invert;
CHECK_OBJECT(par_kind);
tmp_kw_call_dict_value_2_1 = par_kind;
frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin->m_frame.f_lineno = 1075;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_assume_unique_str_plain_invert_str_plain_kind_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1075;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_reshape);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1075;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_element);
tmp_expression_value_2 = par_element;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1076;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin->m_frame.f_lineno = 1075;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1075;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin,
    type_description_1,
    par_element,
    par_test_elements,
    par_assume_unique,
    par_invert,
    par_kind
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__21_isin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_element);
CHECK_OBJECT(par_element);
Py_DECREF(par_element);
par_element = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_element);
par_element = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_test_elements);
Py_DECREF(par_test_elements);
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
CHECK_OBJECT(par_invert);
Py_DECREF(par_invert);
CHECK_OBJECT(par_kind);
Py_DECREF(par_kind);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_test_elements);
Py_DECREF(par_test_elements);
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
CHECK_OBJECT(par_invert);
Py_DECREF(par_invert);
CHECK_OBJECT(par_kind);
Py_DECREF(par_kind);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__22__union1d_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar1 = python_pars[0];
PyObject *par_ar2 = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_ar1);
tmp_tuple_element_1 = par_ar1;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_ar2);
tmp_tuple_element_1 = par_ar2;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ar1);
Py_DECREF(par_ar1);
CHECK_OBJECT(par_ar2);
Py_DECREF(par_ar2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__23_union1d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar1 = python_pars[0];
PyObject *par_ar2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d = MAKE_FUNCTION_FRAME(tstate, code_objects_550712a7ae09241e6305391c9839fc8b, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_concatenate);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_tuple_element_2 = par_ar1;
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_ar2);
tmp_tuple_element_2 = par_ar2;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd);
frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d->m_frame.f_lineno = 1113;
tmp_args_element_value_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d->m_frame.f_lineno = 1113;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d,
    type_description_1,
    par_ar1,
    par_ar2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__23_union1d);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ar1);
Py_DECREF(par_ar1);
CHECK_OBJECT(par_ar2);
Py_DECREF(par_ar2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ar1);
Py_DECREF(par_ar1);
CHECK_OBJECT(par_ar2);
Py_DECREF(par_ar2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__24__setdiff1d_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar1 = python_pars[0];
PyObject *par_ar2 = python_pars[1];
PyObject *par_assume_unique = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_ar1);
tmp_tuple_element_1 = par_ar1;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_ar2);
tmp_tuple_element_1 = par_ar2;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ar1);
Py_DECREF(par_ar1);
CHECK_OBJECT(par_ar2);
Py_DECREF(par_ar2);
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ar1 = python_pars[0];
PyObject *par_ar2 = python_pars[1];
PyObject *par_assume_unique = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d = MAKE_FUNCTION_FRAME(tstate, code_objects_e9c109515082744aaca3245171c7261a, module_numpy$lib$_arraysetops_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d->m_type_description == NULL);
frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d = cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_assume_unique);
tmp_truth_name_1 = CHECK_IF_TRUE(par_assume_unique);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1153;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1154;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_args_element_value_1 = par_ar1;
frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d->m_frame.f_lineno = 1154;
tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_asarray, tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1154;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d->m_frame.f_lineno = 1154;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ravel);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1154;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar1;
    assert(old != NULL);
    par_ar1 = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_args_element_value_2 = par_ar1;
frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d->m_frame.f_lineno = 1156;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar1;
    assert(old != NULL);
    par_ar1 = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_numpy$lib$_arraysetops_impl$unique(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1157;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar2);
tmp_args_element_value_3 = par_ar2;
frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d->m_frame.f_lineno = 1157;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1157;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ar2;
    assert(old != NULL);
    par_ar2 = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(par_ar1);
tmp_expression_value_1 = par_ar1;
tmp_called_value_3 = module_var_accessor_numpy$lib$_arraysetops_impl$_isin(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__isin);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1158;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ar1);
tmp_tuple_element_1 = par_ar1;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_ar2);
tmp_tuple_element_1 = par_ar2;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_983b85267f0872f55cb0f16db8944e2c);
frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d->m_frame.f_lineno = 1158;
tmp_subscript_value_1 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1158;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1158;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d,
    type_description_1,
    par_ar1,
    par_ar2,
    par_assume_unique
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d == cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d);
    cache_frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_ar1);
CHECK_OBJECT(par_ar1);
Py_DECREF(par_ar1);
par_ar1 = NULL;
CHECK_OBJECT(par_ar2);
CHECK_OBJECT(par_ar2);
Py_DECREF(par_ar2);
par_ar2 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_ar1);
par_ar1 = NULL;
Py_XDECREF(par_ar2);
par_ar2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_assume_unique);
Py_DECREF(par_assume_unique);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__10_unique_counts(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__10_unique_counts,
        mod_consts.const_str_plain_unique_counts,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e2d6cfa596b019d402cc4f6b6a1843e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_dcd1bf0a1d9a5833fe69a6bab03ced22,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__11__unique_inverse_dispatcher(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__11__unique_inverse_dispatcher,
        mod_consts.const_str_plain__unique_inverse_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2a3f42ad7e05a707d97e28dac38cd42d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse,
        mod_consts.const_str_plain_unique_inverse,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cbfbd751016f3b7d5ad257a401bac169,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_f388a9e7560449049759440bfc958540,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__13__unique_values_dispatcher(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__13__unique_values_dispatcher,
        mod_consts.const_str_plain__unique_values_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e27733e7672f984722bf8e9ce7edfc79,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__14_unique_values(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__14_unique_values,
        mod_consts.const_str_plain_unique_values,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b71c935952488c58822c5f4f127619a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_bb8b2ce52978ff09d6ee25da5b591122,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__15__intersect1d_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__15__intersect1d_dispatcher,
        mod_consts.const_str_plain__intersect1d_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_82867b13a0aaa4cb75af8097fe0f6f04,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__16_intersect1d(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__16_intersect1d,
        mod_consts.const_str_plain_intersect1d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dc19b1d559a1b464c125012b16338813,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_e60ec630175207d797f3d8fe90ccfd60,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__17__setxor1d_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__17__setxor1d_dispatcher,
        mod_consts.const_str_plain__setxor1d_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d10cab6eaf7965dc75627b7d603346c6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__18_setxor1d(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__18_setxor1d,
        mod_consts.const_str_plain_setxor1d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6e343e76eeb495b91c01397143287b55,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_81fece70b8010926ce63f7a7f926a307,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__19__isin(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__19__isin,
        mod_consts.const_str_plain__isin,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_220e3322b140e72881f69dc8ee45454d,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__1__ediff1d_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__1__ediff1d_dispatcher,
        mod_consts.const_str_plain__ediff1d_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c57528dc83d014d33a4a599e283660f9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__20__isin_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__20__isin_dispatcher,
        mod_consts.const_str_plain__isin_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_03c9483188a00597b6c362b9ea84c263,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__21_isin(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__21_isin,
        mod_consts.const_str_plain_isin,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9c9a3fb2503d9f121f93c899eb3f45fc,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_3eef25edfe99c8f73532d320461dd475,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__22__union1d_dispatcher(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__22__union1d_dispatcher,
        mod_consts.const_str_plain__union1d_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fc2c94c8cf63f2558eecdd75b2b328bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__23_union1d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__23_union1d,
        mod_consts.const_str_plain_union1d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_550712a7ae09241e6305391c9839fc8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_51fbaac2a911826292ac39e8aedb47b7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__24__setdiff1d_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__24__setdiff1d_dispatcher,
        mod_consts.const_str_plain__setdiff1d_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2abc302ba5c45be27a95ce435a8dd81d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d,
        mod_consts.const_str_plain_setdiff1d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e9c109515082744aaca3245171c7261a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_1fd1963a07d76e4d6528f406bcea488c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__2_ediff1d(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__2_ediff1d,
        mod_consts.const_str_plain_ediff1d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_86769f79464802f803b10e8cd5927dd7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_159c02158f7b53d2c703458d42de1119,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple,
        mod_consts.const_str_plain__unpack_tuple,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5930a9be9c28a2a38073733de4d22b66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_94070f785594269319e95420aafba160,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__4__unique_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__4__unique_dispatcher,
        mod_consts.const_str_plain__unique_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e653144060b44d07efc3937322a1ff96,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__5_unique(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__5_unique,
        mod_consts.const_str_plain_unique,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4947d91741c1a8ab3171ba30a5127f0b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_f9e1517fa83cb50e4191b75cf956d1af,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq,
        mod_consts.const_str_plain_reshape_uniq,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2399a938eda4ea95116fd53ead1746d9,
#endif
        code_objects_b2ce8d1c624745ca9b36ca0298453fe7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__6__unique1d(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__6__unique1d,
        mod_consts.const_str_plain__unique1d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_20905b48475dd171b996c541abd729eb,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_49680f7a10a4c70a1744307ac2993721,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__7__unique_all_dispatcher(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__7__unique_all_dispatcher,
        mod_consts.const_str_plain__unique_all_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2b5aa3678170c6b7fcf60f8069d2fff8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__8_unique_all(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__8_unique_all,
        mod_consts.const_str_plain_unique_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7b919ec89b3879a575f4d117c2a95384,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_digest_b46f15756fa70ff1f27f45fbfc907102,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__9__unique_counts_dispatcher(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_arraysetops_impl$$$function__9__unique_counts_dispatcher,
        mod_consts.const_str_plain__unique_counts_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3ff579ec2e5141cbaf693b18e47f3e1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_arraysetops_impl,
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

static function_impl_code const function_table_numpy$lib$_arraysetops_impl[] = {
impl_numpy$lib$_arraysetops_impl$$$function__5_unique$$$function__1_reshape_uniq,
impl_numpy$lib$_arraysetops_impl$$$function__1__ediff1d_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__2_ediff1d,
impl_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple,
impl_numpy$lib$_arraysetops_impl$$$function__4__unique_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__5_unique,
impl_numpy$lib$_arraysetops_impl$$$function__6__unique1d,
impl_numpy$lib$_arraysetops_impl$$$function__7__unique_all_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__8_unique_all,
impl_numpy$lib$_arraysetops_impl$$$function__9__unique_counts_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__10_unique_counts,
impl_numpy$lib$_arraysetops_impl$$$function__11__unique_inverse_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse,
impl_numpy$lib$_arraysetops_impl$$$function__13__unique_values_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__14_unique_values,
impl_numpy$lib$_arraysetops_impl$$$function__15__intersect1d_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__16_intersect1d,
impl_numpy$lib$_arraysetops_impl$$$function__17__setxor1d_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__18_setxor1d,
impl_numpy$lib$_arraysetops_impl$$$function__19__isin,
impl_numpy$lib$_arraysetops_impl$$$function__20__isin_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__21_isin,
impl_numpy$lib$_arraysetops_impl$$$function__22__union1d_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__23_union1d,
impl_numpy$lib$_arraysetops_impl$$$function__24__setdiff1d_dispatcher,
impl_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$lib$_arraysetops_impl);
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
        module_numpy$lib$_arraysetops_impl,
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
        function_table_numpy$lib$_arraysetops_impl,
        sizeof(function_table_numpy$lib$_arraysetops_impl) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.lib._arraysetops_impl";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$lib$_arraysetops_impl(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$_arraysetops_impl");

    // Store the module for future use.
    module_numpy$lib$_arraysetops_impl = module;

    moduledict_numpy$lib$_arraysetops_impl = MODULE_DICT(module_numpy$lib$_arraysetops_impl);

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
        PRINT_STRING("numpy$lib$_arraysetops_impl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$_arraysetops_impl: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$_arraysetops_impl: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._arraysetops_impl" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$_arraysetops_impl\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$_arraysetops_impl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_arraysetops_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_arraysetops_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_arraysetops_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_arraysetops_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$_arraysetops_impl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$_arraysetops_impl);
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

        UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_2eb01ea1ccdd460f3d69ac689b99e7ea;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$lib$_arraysetops_impl = MAKE_MODULE_FRAME(code_objects_aef77ccec8ad9895fd1eda91d8a8a0a2, module_numpy$lib$_arraysetops_impl);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$lib$_arraysetops_impl$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$lib$_arraysetops_impl$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_plain_NamedTuple,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_arraysetops_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 20;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_arraysetops_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_overrides_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 21;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_plain_overrides,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_overrides);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$_arraysetops_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__array_converter_str_plain__unique_hash_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 22;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_plain__array_converter,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__array_converter);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__array_converter, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_plain__unique_hash,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__unique_hash);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_hash, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_dc70fd02c50ba4537c7ec253ddeee882;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$lib$_arraysetops_impl;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_normalize_axis_index_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 23;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_numpy$lib$_arraysetops_impl,
        mod_consts.const_str_plain_normalize_axis_index,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_normalize_axis_index);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
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
tmp_expression_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$overrides(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overrides);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array_function_dispatch);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 25;
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_LIST11(tstate, mod_consts.const_list_ef0b344b41fd2f743537c9f299ee9d3d_list);
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__1__ediff1d_dispatcher(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ediff1d_dispatcher, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_defaults_2;
tmp_called_value_3 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
assert(!(tmp_called_value_3 == NULL));
tmp_args_element_value_1 = module_var_accessor_numpy$lib$_arraysetops_impl$_ediff1d_dispatcher(tstate);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 40;
tmp_called_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_2 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__2_ediff1d(tstate, tmp_defaults_2);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 40;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ediff1d, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__3__unpack_tuple(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unpack_tuple, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_3;
PyObject *tmp_kw_defaults_1;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_none_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_a3564c71f0485a5048224a5abe4e14c4);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__4__unique_dispatcher(tstate, tmp_defaults_3, tmp_kw_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_dispatcher, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_defaults_4;
PyObject *tmp_kw_defaults_2;
tmp_called_value_5 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_numpy$lib$_arraysetops_impl$_unique_dispatcher(tstate);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 145;
tmp_called_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = mod_consts.const_tuple_false_false_false_none_tuple;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_8677dc9a13dddc8b99336bb0a8dedac9);
Py_INCREF(tmp_defaults_4);

tmp_args_element_value_4 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__5_unique(tstate, tmp_defaults_4, tmp_kw_defaults_2);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 145;
tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_unique, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_5;
PyObject *tmp_kw_defaults_3;
tmp_defaults_5 = mod_consts.const_tuple_false_false_false_tuple;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_6d2bc3aa30203647e3b0ed0b18c3ab5c);
Py_INCREF(tmp_defaults_5);

tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__6__unique1d(tstate, tmp_defaults_5, tmp_kw_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique1d, tmp_assign_source_19);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_numpy$lib$_arraysetops_impl$NamedTuple(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 419;

    goto try_except_handler_2;
}
tmp_assign_source_20 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_21 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_2;
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
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_23;
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


exception_lineno = 419;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_2;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_UniqueAllResult;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 419;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_24;
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


exception_lineno = 419;

    goto try_except_handler_2;
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
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_2;
}
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 419;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 419;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
branch_end_1:;
{
PyObject *tmp_assign_source_26;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2f3373d3945639a816fe15901cbc9366;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_UniqueAllResult;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_419;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_4;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_4;
}
frame_frame_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_2 = MAKE_CLASS_FRAME(tstate, code_objects_bd1b7966979dfa9549df6f19da1c34f7, module_numpy$lib$_arraysetops_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_2);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_8 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, mod_consts.const_str_plain_np);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ndarray);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_1 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_1);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 420;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 420;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_values;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_expression_value_9 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, mod_consts.const_str_plain_np);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndarray);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_2 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_indices;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_expression_value_10 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, mod_consts.const_str_plain_np);

if (tmp_expression_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_10 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 422;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ndarray);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_3 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_3);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 422;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 422;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_inverse_indices;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_expression_value_11 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, mod_consts.const_str_plain_np);

if (tmp_expression_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_11 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ndarray);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_4 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_4);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 423;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 423;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_counts;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_4;
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


exception_lineno = 419;

    goto try_except_handler_4;
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
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_UniqueAllResult;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 419;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_27;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_26 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_26);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419);
locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419);
locals_numpy$lib$_arraysetops_impl$$$class__1_UniqueAllResult_419 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 419;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueAllResult, tmp_assign_source_26);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = module_var_accessor_numpy$lib$_arraysetops_impl$NamedTuple(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 426;

    goto try_except_handler_5;
}
tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_6);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_12 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_31;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_UniqueCountsResult;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 426;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_32;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_15 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
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
PyObject *tmp_expression_value_16;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_16, tmp_name_value_6, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_17;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_17 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_5;
}
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 426;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 426;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_33;
}
branch_end_4:;
{
PyObject *tmp_assign_source_34;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2f3373d3945639a816fe15901cbc9366;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_UniqueCountsResult;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_426;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_7;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_7;
}
frame_frame_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_3 = MAKE_CLASS_FRAME(tstate, code_objects_95e036a26c947fd9040ec1323d386c3b, module_numpy$lib$_arraysetops_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_3);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_expression_value_18 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, mod_consts.const_str_plain_np);

if (tmp_expression_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_18 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 427;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subvalue_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_ndarray);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscribed_5 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 427;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 427;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_values;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_expression_value_19;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_expression_value_19 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, mod_consts.const_str_plain_np);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 428;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subvalue_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_ndarray);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_ass_subvalue_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscribed_6 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_6);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 428;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_6);

exception_lineno = 428;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_counts;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
CHECK_OBJECT(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_7;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_UniqueCountsResult;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 426;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_35;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_34 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426);
locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426);
locals_numpy$lib$_arraysetops_impl$$$class__2_UniqueCountsResult_426 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 426;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueCountsResult, tmp_assign_source_34);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
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
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = module_var_accessor_numpy$lib$_arraysetops_impl$NamedTuple(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 431;

    goto try_except_handler_8;
}
tmp_assign_source_36 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_37 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_20 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_39;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_UniqueInverseResult;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 431;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_40;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_23 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
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
PyObject *tmp_expression_value_24;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_7, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_25;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_8;
}
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 431;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 431;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_41;
}
branch_end_7:;
{
PyObject *tmp_assign_source_42;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2f3373d3945639a816fe15901cbc9366;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_UniqueInverseResult;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_431;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_10;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_10;
}
frame_frame_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_4 = MAKE_CLASS_FRAME(tstate, code_objects_bfe42e0923cb8d7d44764944a11b261e, module_numpy$lib$_arraysetops_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_4);
assert(Py_REFCNT(frame_frame_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_expression_value_26;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_expression_value_26 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, mod_consts.const_str_plain_np);

if (tmp_expression_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_26 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_ass_subvalue_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_ndarray);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_ass_subvalue_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscribed_7 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_7);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_values;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_expression_value_27;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_expression_value_27 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, mod_consts.const_str_plain_np);

if (tmp_expression_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_27 = module_var_accessor_numpy$lib$_arraysetops_impl$np(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 433;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_ass_subvalue_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_ndarray);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_ass_subvalue_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscribed_8 = PyObject_GetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_8);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 433;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_8);

exception_lineno = 433;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_inverse_indices;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
CHECK_OBJECT(tmp_ass_subvalue_8);
Py_DECREF(tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_10;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_UniqueInverseResult;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 431;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_43;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_42 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_42);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431);
locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431);
locals_numpy$lib$_arraysetops_impl$$$class__3_UniqueInverseResult_431 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 431;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_UniqueInverseResult, tmp_assign_source_42);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_44;

tmp_assign_source_44 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__7__unique_all_dispatcher(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_all_dispatcher, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_13 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_numpy$lib$_arraysetops_impl$_unique_all_dispatcher(tstate);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 440;
tmp_called_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_5);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;

    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__8_unique_all(tstate);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 440;
tmp_assign_source_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_unique_all, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;

tmp_assign_source_46 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__9__unique_counts_dispatcher(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_counts_dispatcher, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_14;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_15 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 504;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_numpy$lib$_arraysetops_impl$_unique_counts_dispatcher(tstate);
assert(!(tmp_args_element_value_7 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 504;
tmp_called_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_7);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;

    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__10_unique_counts(tstate);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 504;
tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_unique_counts, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;

tmp_assign_source_48 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__11__unique_inverse_dispatcher(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_inverse_dispatcher, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_16;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_17 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 560;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_numpy$lib$_arraysetops_impl$_unique_inverse_dispatcher(tstate);
assert(!(tmp_args_element_value_9 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 560;
tmp_called_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_9);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;

    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__12_unique_inverse(tstate);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 560;
tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_unique_inverse, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;

tmp_assign_source_50 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__13__unique_values_dispatcher(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__unique_values_dispatcher, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_18;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_19 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 617;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = module_var_accessor_numpy$lib$_arraysetops_impl$_unique_values_dispatcher(tstate);
assert(!(tmp_args_element_value_11 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 617;
tmp_called_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_11);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;

    goto frame_exception_exit_1;
}

tmp_args_element_value_12 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__14_unique_values(tstate);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 617;
tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_unique_values, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_assign_source_52 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__15__intersect1d_dispatcher(tstate, tmp_defaults_6);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__intersect1d_dispatcher, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_20;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_defaults_7;
tmp_called_value_21 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 666;

    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = module_var_accessor_numpy$lib$_arraysetops_impl$_intersect1d_dispatcher(tstate);
assert(!(tmp_args_element_value_13 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 666;
tmp_called_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_13);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;

    goto frame_exception_exit_1;
}
tmp_defaults_7 = mod_consts.const_tuple_false_false_tuple;
Py_INCREF(tmp_defaults_7);

tmp_args_element_value_14 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__16_intersect1d(tstate, tmp_defaults_7);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 666;
tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_intersect1d, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_defaults_8;
tmp_defaults_8 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_8);

tmp_assign_source_54 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__17__setxor1d_dispatcher(tstate, tmp_defaults_8);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__setxor1d_dispatcher, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_22;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_defaults_9;
tmp_called_value_23 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 762;

    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = module_var_accessor_numpy$lib$_arraysetops_impl$_setxor1d_dispatcher(tstate);
assert(!(tmp_args_element_value_15 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 762;
tmp_called_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_15);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 762;

    goto frame_exception_exit_1;
}
tmp_defaults_9 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_9);

tmp_args_element_value_16 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__18_setxor1d(tstate, tmp_defaults_9);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 762;
tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 762;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_setxor1d, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_defaults_10;
PyObject *tmp_kw_defaults_4;
tmp_defaults_10 = mod_consts.const_tuple_false_false_tuple;
tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts.const_dict_a16bac130fcfe6f2a81ba0b001c15548);
Py_INCREF(tmp_defaults_10);

tmp_assign_source_56 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__19__isin(tstate, tmp_defaults_10, tmp_kw_defaults_4);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__isin, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_defaults_11;
PyObject *tmp_kw_defaults_5;
tmp_defaults_11 = mod_consts.const_tuple_none_none_tuple;
tmp_kw_defaults_5 = DICT_COPY(tstate, mod_consts.const_dict_a16bac130fcfe6f2a81ba0b001c15548);
Py_INCREF(tmp_defaults_11);

tmp_assign_source_57 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__20__isin_dispatcher(tstate, tmp_defaults_11, tmp_kw_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__isin_dispatcher, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_24;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_defaults_12;
PyObject *tmp_kw_defaults_6;
tmp_called_value_25 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 958;

    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = module_var_accessor_numpy$lib$_arraysetops_impl$_isin_dispatcher(tstate);
assert(!(tmp_args_element_value_17 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 958;
tmp_called_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_17);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 958;

    goto frame_exception_exit_1;
}
tmp_defaults_12 = mod_consts.const_tuple_false_false_tuple;
tmp_kw_defaults_6 = DICT_COPY(tstate, mod_consts.const_dict_a16bac130fcfe6f2a81ba0b001c15548);
Py_INCREF(tmp_defaults_12);

tmp_args_element_value_18 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__21_isin(tstate, tmp_defaults_12, tmp_kw_defaults_6);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 958;
tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 958;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_isin, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;

tmp_assign_source_59 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__22__union1d_dispatcher(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__union1d_dispatcher, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_26;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
tmp_called_value_27 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1083;

    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = module_var_accessor_numpy$lib$_arraysetops_impl$_union1d_dispatcher(tstate);
assert(!(tmp_args_element_value_19 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 1083;
tmp_called_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_19);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1083;

    goto frame_exception_exit_1;
}

tmp_args_element_value_20 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__23_union1d(tstate);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 1083;
tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1083;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_union1d, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_defaults_13;
tmp_defaults_13 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_13);

tmp_assign_source_61 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__24__setdiff1d_dispatcher(tstate, tmp_defaults_13);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__setdiff1d_dispatcher, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_28;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_defaults_14;
tmp_called_value_29 = module_var_accessor_numpy$lib$_arraysetops_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1120;

    goto frame_exception_exit_1;
}
tmp_args_element_value_21 = module_var_accessor_numpy$lib$_arraysetops_impl$_setdiff1d_dispatcher(tstate);
assert(!(tmp_args_element_value_21 == NULL));
frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 1120;
tmp_called_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_21);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1120;

    goto frame_exception_exit_1;
}
tmp_defaults_14 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_14);

tmp_args_element_value_22 = MAKE_FUNCTION_numpy$lib$_arraysetops_impl$$$function__25_setdiff1d(tstate, tmp_defaults_14);

frame_frame_numpy$lib$_arraysetops_impl->m_frame.f_lineno = 1120;
tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1120;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_setdiff1d, tmp_assign_source_62);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_arraysetops_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_arraysetops_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_arraysetops_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$lib$_arraysetops_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$_arraysetops_impl", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._arraysetops_impl" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$_arraysetops_impl);
    return module_numpy$lib$_arraysetops_impl;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_arraysetops_impl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$_arraysetops_impl", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

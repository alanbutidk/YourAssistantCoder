/* Generated code for Python module 'numpy$lib$_nanfunctions_impl'
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



/* The "module_numpy$lib$_nanfunctions_impl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$_nanfunctions_impl;
PyDictObject *moduledict_numpy$lib$_nanfunctions_impl;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_kind;
PyObject *const_str_plain_fc;
PyObject *const_str_plain_np;
PyObject *const_str_plain_isnan;
PyObject *const_tuple_str_plain_out_tuple;
PyObject *const_str_plain_invert;
PyObject *const_str_digest_8d18509a48f609fc250f6073ff1b4e79;
PyObject *const_str_plain_asanyarray;
PyObject *const_str_plain_object_;
PyObject *const_str_plain_not_equal;
PyObject *const_dict_8a6ce79bb59f45c062c2a0027a3a0c33;
PyObject *const_str_plain_inexact;
PyObject *const_str_plain_array;
PyObject *const_dict_eeec7aac86b0de3c7b9e410669185928;
PyObject *const_str_plain_copyto;
PyObject *const_tuple_str_plain_where_tuple;
PyObject *const_str_plain_a;
PyObject *const_str_digest_c686b92aafd04507a8ef2eb24bbe9679;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain_unsafe;
PyObject *const_tuple_str_plain_where_str_plain_casting_tuple;
PyObject *const_str_digest_17ab71091dc46de8ad2e5fefa8cad1b5;
PyObject *const_str_plain_nonzero;
PyObject *const_str_plain_size;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
PyObject *const_str_plain_RuntimeWarning;
PyObject *const_dict_f5069c97cdc54b2d109afca44cc81281;
PyObject *const_slice_none_int_0_none;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_arr1d;
PyObject *const_str_digest_951672492663cfd3069fdec43acfc89b;
PyObject *const_str_plain_errstate;
PyObject *const_tuple_str_plain_ignore_str_plain_ignore_tuple;
PyObject *const_tuple_str_plain_invalid_str_plain_divide_tuple;
PyObject *const_str_plain_divide;
PyObject *const_tuple_str_plain_out_str_plain_casting_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_8ce5374db89e9524b7b736fd9aa38a30;
PyObject *const_str_plain__NoValue;
PyObject *const_str_plain_keepdims;
PyObject *const_str_plain_initial;
PyObject *const_str_plain_where;
PyObject *const_str_plain_memmap;
PyObject *const_str_plain_fmin;
PyObject *const_str_plain_reduce;
PyObject *const_str_plain_axis;
PyObject *const_str_plain_out;
PyObject *const_str_plain_any;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain__replace_nan;
PyObject *const_str_plain_inf;
PyObject *const_str_plain_amin;
PyObject *const_str_plain_all;
PyObject *const_str_plain__copyto;
PyObject *const_str_plain_nan;
PyObject *const_str_digest_e5906d9b36689902967f4292e56d9fde;
PyObject *const_str_plain_res;
PyObject *const_str_digest_50ab944e47e880a87124da315be41f6f;
PyObject *const_str_plain_fmax;
PyObject *const_str_plain_amax;
PyObject *const_str_digest_9d144bea8ea0a9975b433cd4714bd313;
PyObject *const_tuple_str_plain_axis_tuple;
PyObject *const_str_plain_argmin;
PyObject *const_tuple_str_plain_axis_str_plain_out_str_plain_keepdims_tuple;
PyObject *const_str_digest_e032b81da4cacd8adefbe5f4800334d6;
PyObject *const_str_plain_argmax;
PyObject *const_str_digest_4b71b2220e6dbb4fbca5c75a982e3930;
PyObject *const_tuple_9ee81aa0a0314b5850c123bdc8a7af56_tuple;
PyObject *const_str_digest_c2c6d230c597abbd62867925d55e943e;
PyObject *const_str_plain_prod;
PyObject *const_str_digest_1fe8757e223b7e8862c7cc37a766e75e;
PyObject *const_str_plain_cumsum;
PyObject *const_tuple_str_plain_axis_str_plain_dtype_str_plain_out_tuple;
PyObject *const_str_digest_f194c0896325b6381e92e0eee0267205;
PyObject *const_str_plain_cumprod;
PyObject *const_str_digest_d4d6ea3acdfc3af57e0a77d337ec1c80;
PyObject *const_str_plain_mean;
PyObject *const_tuple_d96307d9cab41acf0ccd5c1f96a95623_tuple;
PyObject *const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8;
PyObject *const_str_digest_32383d08c19cf306ff97b1d17823d642;
PyObject *const_str_plain_intp;
PyObject *const_tuple_c431dd99e8d24915e3eeec18855a81bc_tuple;
PyObject *const_str_plain__divide_by_count;
PyObject *const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d;
PyObject *const_str_digest_645db265f25d335dde17efaf363586c5;
PyObject *const_str_plain__remove_nan_1d;
PyObject *const_tuple_str_plain_overwrite_input_tuple;
PyObject *const_str_plain_median;
PyObject *const_str_digest_377e8a360d995cb2c24674201f2192b3;
PyObject *const_str_plain_ndim;
PyObject *const_str_plain_ravel;
PyObject *const_str_plain__nanmedian1d;
PyObject *const_str_plain_shape;
PyObject *const_int_pos_600;
PyObject *const_str_plain__nanmedian_small;
PyObject *const_str_plain_apply_along_axis;
PyObject *const_str_digest_7a316fc26d408b7e96a662315c3de4b4;
PyObject *const_str_plain_ma;
PyObject *const_str_plain_masked_array;
PyObject *const_tuple_str_plain_axis_str_plain_overwrite_input_tuple;
PyObject *const_str_plain_count_nonzero;
PyObject *const_str_plain_mask;
PyObject *const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61;
PyObject *const_str_plain_m;
PyObject *const_str_plain_timedelta64;
PyObject *const_tuple_str_plain_NaT_tuple;
PyObject *const_str_plain_filled;
PyObject *const_str_digest_0a15098c0feabf71cb6733a75d7cd65e;
PyObject *const_str_plain_nanmean;
PyObject *const_tuple_str_plain_out_str_plain_keepdims_tuple;
PyObject *const_str_plain_fnb;
PyObject *const_str_plain__ureduce;
PyObject *const_str_plain__nanmedian;
PyObject *const_tuple_18c686e0bd0358e411a4b0da67e5f555_tuple;
PyObject *const_str_digest_738859357359a4e81f079544058a2044;
PyObject *const_str_plain_c;
PyObject *const_str_digest_387948cdde59e718248e42c4a519f0df;
PyObject *const_tuple_type_int_type_float_tuple;
PyObject *const_str_plain_true_divide;
PyObject *const_int_pos_100;
PyObject *const_dict_5c510a341eb8ce89f98f64af29a634ed;
PyObject *const_str_plain__quantile_is_valid;
PyObject *const_str_digest_5ab373ae36e2bb6baafef27c86182e81;
PyObject *const_str_plain_inverted_cdf;
PyObject *const_str_digest_088e9f614b14d8815ab178502a92a8b5;
PyObject *const_str_plain__nx;
PyObject *const_str_plain_normalize_axis_tuple;
PyObject *const_dict_b09b449426c4301706aa0d740b37c9fb;
PyObject *const_str_plain__weights_are_valid;
PyObject *const_tuple_str_plain_weights_str_plain_a_str_plain_axis_tuple;
PyObject *const_str_digest_54f0fa2a70d6e0a34413a6cfadeca9d3;
PyObject *const_str_plain__nanquantile_unchecked;
PyObject *const_str_digest_b63492fee4b39d48a97a578c942d8a12;
PyObject *const_str_digest_f47df35bbcf99e0a872c43dc6981620b;
PyObject *const_str_digest_e2e376a4cbd2fd07b62b665adec3f238;
PyObject *const_str_plain__nanquantile_ureduce_func;
PyObject *const_tuple_3c7fc306c33526e1639113b8f7908e11_tuple;
PyObject *const_str_digest_8d3dde78ef0a5edc96e74007dfe8e642;
PyObject *const_str_plain__nanquantile_1d;
PyObject *const_tuple_str_plain_weights_str_plain_weak_q_tuple;
PyObject *const_str_plain_moveaxis;
PyObject *const_str_plain_empty_like;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_tuple_str_plain_shape_tuple;
PyObject *const_str_plain_ndindex;
PyObject *const_str_plain_q;
PyObject *const_str_plain_overwrite_input;
PyObject *const_str_plain_method;
PyObject *const_str_plain_weak_q;
PyObject *const_tuple_b1467dc269a4f1f3b72fac89532d10b0_tuple;
PyObject *const_str_plain_result;
PyObject *const_tuple_ellipsis_tuple;
PyObject *const_str_digest_37878329c1abd065a32003dde103c8a0;
PyObject *const_tuple_str_plain_second_arr1d_str_plain_overwrite_input_tuple;
PyObject *const_str_plain_full;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain__quantile_unchecked;
PyObject *const_tuple_9c97561f86ec8e3fcd0cc0b6b32e30a0_tuple;
PyObject *const_str_digest_015216c5b219450fb6d318ae3b644283;
PyObject *const_str_plain_var;
PyObject *const_tuple_43312485dd84a9a9350f83af88a63f88_tuple;
PyObject *const_str_digest_3a44b2d0cbcfdd60365e2c2ef1412d28;
PyObject *const_str_plain_matrix;
PyObject *const_str_plain_subtract;
PyObject *const_tuple_str_plain_out_str_plain_casting_str_plain_where_tuple;
PyObject *const_str_plain_complexfloating;
PyObject *const_str_plain_multiply;
PyObject *const_str_plain_conj;
PyObject *const_tuple_str_plain_out_str_plain_where_tuple;
PyObject *const_str_plain_real;
PyObject *const_str_plain_squeeze;
PyObject *const_str_plain_cnt;
PyObject *const_str_digest_bbd396d9bb37b13c133fa37fab502bba;
PyObject *const_str_digest_6f3135ec41c8e22e97e5f4f3b47b530a;
PyObject *const_str_plain_nanvar;
PyObject *const_str_plain_sqrt;
PyObject *const_str_digest_1e0db9f057cbf187aaa8480786d07980;
PyObject *const_str_digest_1eff39d55cf507065c2737d687444033;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_b7a345dfe4be14248864e7854d4e6836;
PyObject *const_str_plain__core;
PyObject *const_str_plain_numeric;
PyObject *const_str_digest_218a55714e76c818c59b93d99676c0b2;
PyObject *const_tuple_str_plain_overrides_tuple;
PyObject *const_str_plain_overrides;
PyObject *const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8;
PyObject *const_tuple_str_plain__function_base_impl_tuple;
PyObject *const_str_plain__function_base_impl;
PyObject *const_str_digest_d7f534cd93611b81223c377d3a08aa34;
PyObject *const_tuple_str_plain__weights_are_valid_tuple;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_array_function_dispatch;
PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
PyObject *const_list_e328792b501ba3bfe9ef50afeb6f0d39_list;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain__nan_mask;
PyObject *const_tuple_none_false_tuple;
PyObject *const_tuple_none_none_none_none_none_tuple;
PyObject *const_str_plain__nanmin_dispatcher;
PyObject *const_str_plain_nanmin;
PyObject *const_str_plain__nanmax_dispatcher;
PyObject *const_str_plain_nanmax;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_63956881baf8acd3fe830e4cb2d32e40;
PyObject *const_str_plain__nanargmin_dispatcher;
PyObject *const_str_plain_nanargmin;
PyObject *const_str_plain__nanargmax_dispatcher;
PyObject *const_str_plain_nanargmax;
PyObject *const_tuple_none_none_none_none_none_none_tuple;
PyObject *const_str_plain__nansum_dispatcher;
PyObject *const_str_plain_nansum;
PyObject *const_str_plain__nanprod_dispatcher;
PyObject *const_str_plain_nanprod;
PyObject *const_str_plain__nancumsum_dispatcher;
PyObject *const_str_plain_nancumsum;
PyObject *const_str_plain__nancumprod_dispatcher;
PyObject *const_str_plain_nancumprod;
PyObject *const_tuple_none_none_none_none_tuple;
PyObject *const_dict_391cb2ca1b0c1b73affb5787863e84c6;
PyObject *const_str_plain__nanmean_dispatcher;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_none_none_false_tuple;
PyObject *const_str_plain__nanmedian_dispatcher;
PyObject *const_str_plain_nanmedian;
PyObject *const_dict_ef43cd7b90cbd93aa9666d3f02bf52f0;
PyObject *const_str_plain__nanpercentile_dispatcher;
PyObject *const_str_plain_linear;
PyObject *const_str_plain_nanpercentile;
PyObject *const_str_plain__nanquantile_dispatcher;
PyObject *const_str_plain_nanquantile;
PyObject *const_tuple_none_none_false_str_plain_linear_false_tuple;
PyObject *const_str_plain_weights;
PyObject *const_uniontype_tuple_type_int_anon_NoneType_tuple;
PyObject *const_tuple_false_str_plain_linear_none_false_tuple;
PyObject *const_dict_6cc7fa10a321425870fa24d1626c45e7;
PyObject *const_str_plain__nanvar_dispatcher;
PyObject *const_str_plain_correction;
PyObject *const_str_plain__nanstd_dispatcher;
PyObject *const_str_plain_nanstd;
PyObject *const_str_digest_03358de93f26ed9603866d67733899fd;
PyObject *const_str_digest_982bc1503f1911f0e8876d8cd4fc53a9;
PyObject *const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple;
PyObject *const_tuple_str_plain_a_str_plain_b_str_plain_out_tuple;
PyObject *const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple;
PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple;
PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple;
PyObject *const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple;
PyObject *const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple;
PyObject *const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple;
PyObject *const_tuple_8c0c0403c74f46da2dd69c3912d6eadb_tuple;
PyObject *const_tuple_7c21073cfd531e35bd169034434d02b4_tuple;
PyObject *const_tuple_d107e3220808f0571ce5e4acef997b82_tuple;
PyObject *const_tuple_c644d711d8d944a04761d867ac35e5a5_tuple;
PyObject *const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple;
PyObject *const_tuple_4fdda21a497a36fc00f23b59d7449b6e_tuple;
PyObject *const_tuple_fdaebeb0c57ee5b7e979261b84e55e0e_tuple;
PyObject *const_tuple_aca1c2a8efe02bba0c8eb1b8ab3c2e10_tuple;
PyObject *const_tuple_50793be4a4d5b9b43b10b92e566e3198_tuple;
PyObject *const_tuple_7687e937d64b1ee7824fb1aa07597685_tuple;
PyObject *const_tuple_b9bb2e11b19302684d1feb06a4e21bc6_tuple;
PyObject *const_tuple_acfaad50c55d762c110253c18919c3d1_tuple;
PyObject *const_tuple_9a3487888626d522538fc88cc7ee90ff_tuple;
PyObject *const_tuple_8f534391dd052d6bcc11a419c616e13c_tuple;
PyObject *const_tuple_a5459cc48d7881d51af21536ece25e34_tuple;
PyObject *const_tuple_38b6bc40b6852d5accce252ed8ef5c30_tuple;
PyObject *const_tuple_afaf64facdd1c35cfe7d696ff24df5d3_tuple;
PyObject *const_tuple_f5d23bd48f89ca0418dc9d6d9a460e4d_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[273];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.lib._nanfunctions_impl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_kind);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_fc);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_isnan);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_invert);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d18509a48f609fc250f6073ff1b4e79);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_asanyarray);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_object_);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_not_equal);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_inexact);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_dict_eeec7aac86b0de3c7b9e410669185928);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_copyto);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_where_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_a);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_c686b92aafd04507a8ef2eb24bbe9679);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_where_str_plain_casting_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_17ab71091dc46de8ad2e5fefa8cad1b5);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_nonzero);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_df9219e7323f1cc1c5ffd9b53703d856);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeWarning);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_f5069c97cdc54b2d109afca44cc81281);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_0_none);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_arr1d);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_951672492663cfd3069fdec43acfc89b);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_errstate);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ignore_str_plain_ignore_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_invalid_str_plain_divide_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_divide);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_casting_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ce5374db89e9524b7b736fd9aa38a30);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__NoValue);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_keepdims);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_initial);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_where);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_memmap);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_fmin);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_reduce);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_axis);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_out);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_any);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__replace_nan);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_inf);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_amin);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_all);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__copyto);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_nan);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5906d9b36689902967f4292e56d9fde);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_res);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_50ab944e47e880a87124da315be41f6f);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_fmax);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_amax);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d144bea8ea0a9975b433cd4714bd313);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_argmin);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_out_str_plain_keepdims_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_e032b81da4cacd8adefbe5f4800334d6);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_argmax);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b71b2220e6dbb4fbca5c75a982e3930);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_9ee81aa0a0314b5850c123bdc8a7af56_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2c6d230c597abbd62867925d55e943e);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_prod);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fe8757e223b7e8862c7cc37a766e75e);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_cumsum);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_dtype_str_plain_out_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_f194c0896325b6381e92e0eee0267205);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_cumprod);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4d6ea3acdfc3af57e0a77d337ec1c80);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_mean);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_d96307d9cab41acf0ccd5c1f96a95623_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_32383d08c19cf306ff97b1d17823d642);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_intp);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_c431dd99e8d24915e3eeec18855a81bc_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__divide_by_count);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_645db265f25d335dde17efaf363586c5);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__remove_nan_1d);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_overwrite_input_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_median);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_377e8a360d995cb2c24674201f2192b3);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_ravel);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanmedian1d);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_600);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanmedian_small);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_along_axis);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a316fc26d408b7e96a662315c3de4b4);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_ma);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_masked_array);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_overwrite_input_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_count_nonzero);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_mask);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_m);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta64);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NaT_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_filled);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a15098c0feabf71cb6733a75d7cd65e);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanmean);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_keepdims_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_fnb);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__ureduce);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanmedian);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_18c686e0bd0358e411a4b0da67e5f555_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_738859357359a4e81f079544058a2044);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_387948cdde59e718248e42c4a519f0df);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_true_divide);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_5c510a341eb8ce89f98f64af29a634ed);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain__quantile_is_valid);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ab373ae36e2bb6baafef27c86182e81);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_inverted_cdf);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_088e9f614b14d8815ab178502a92a8b5);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__nx);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_dict_b09b449426c4301706aa0d740b37c9fb);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__weights_are_valid);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_weights_str_plain_a_str_plain_axis_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_54f0fa2a70d6e0a34413a6cfadeca9d3);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanquantile_unchecked);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_b63492fee4b39d48a97a578c942d8a12);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_f47df35bbcf99e0a872c43dc6981620b);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2e376a4cbd2fd07b62b665adec3f238);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanquantile_ureduce_func);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_3c7fc306c33526e1639113b8f7908e11_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d3dde78ef0a5edc96e74007dfe8e642);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanquantile_1d);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_weights_str_plain_weak_q_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty_like);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shape_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndindex);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_q);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_overwrite_input);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_weak_q);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_b1467dc269a4f1f3b72fac89532d10b0_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_37878329c1abd065a32003dde103c8a0);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_second_arr1d_str_plain_overwrite_input_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_full);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain__quantile_unchecked);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_9c97561f86ec8e3fcd0cc0b6b32e30a0_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_015216c5b219450fb6d318ae3b644283);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_var);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_43312485dd84a9a9350f83af88a63f88_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a44b2d0cbcfdd60365e2c2ef1412d28);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_matrix);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_subtract);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_where_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_complexfloating);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiply);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_conj);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_where_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_real);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_squeeze);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_cnt);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbd396d9bb37b13c133fa37fab502bba);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f3135ec41c8e22e97e5f4f3b47b530a);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanvar);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e0db9f057cbf187aaa8480786d07980);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_1eff39d55cf507065c2737d687444033);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_numeric);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_overrides_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_overrides);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__function_base_impl_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain__function_base_impl);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7f534cd93611b81223c377d3a08aa34);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__weights_are_valid_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_list_e328792b501ba3bfe9ef50afeb6f0d39_list);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain__nan_mask);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanmin_dispatcher);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanmin);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanmax_dispatcher);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanmax);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_dict_63956881baf8acd3fe830e4cb2d32e40);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanargmin_dispatcher);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanargmin);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanargmax_dispatcher);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanargmax);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain__nansum_dispatcher);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_nansum);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanprod_dispatcher);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanprod);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain__nancumsum_dispatcher);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_nancumsum);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain__nancumprod_dispatcher);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain_nancumprod);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_dict_391cb2ca1b0c1b73affb5787863e84c6);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanmean_dispatcher);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanmedian_dispatcher);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanmedian);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_dict_ef43cd7b90cbd93aa9666d3f02bf52f0);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanpercentile_dispatcher);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain_linear);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanpercentile);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanquantile_dispatcher);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanquantile);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_str_plain_linear_false_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain_weights);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_uniontype_tuple_type_int_anon_NoneType_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_false_str_plain_linear_none_false_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_dict_6cc7fa10a321425870fa24d1626c45e7);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanvar_dispatcher);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_plain_correction);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_plain__nanstd_dispatcher);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_plain_nanstd);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_digest_03358de93f26ed9603866d67733899fd);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_digest_982bc1503f1911f0e8876d8cd4fc53a9);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_b_str_plain_out_tuple);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_tuple_8c0c0403c74f46da2dd69c3912d6eadb_tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_tuple_7c21073cfd531e35bd169034434d02b4_tuple);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_tuple_d107e3220808f0571ce5e4acef997b82_tuple);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_tuple_c644d711d8d944a04761d867ac35e5a5_tuple);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_tuple_4fdda21a497a36fc00f23b59d7449b6e_tuple);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_tuple_fdaebeb0c57ee5b7e979261b84e55e0e_tuple);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_tuple_aca1c2a8efe02bba0c8eb1b8ab3c2e10_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_tuple_50793be4a4d5b9b43b10b92e566e3198_tuple);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_tuple_7687e937d64b1ee7824fb1aa07597685_tuple);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_tuple_b9bb2e11b19302684d1feb06a4e21bc6_tuple);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_tuple_acfaad50c55d762c110253c18919c3d1_tuple);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_tuple_9a3487888626d522538fc88cc7ee90ff_tuple);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_tuple_8f534391dd052d6bcc11a419c616e13c_tuple);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_tuple_a5459cc48d7881d51af21536ece25e34_tuple);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_tuple_38b6bc40b6852d5accce252ed8ef5c30_tuple);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_tuple_afaf64facdd1c35cfe7d696ff24df5d3_tuple);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_tuple_f5d23bd48f89ca0418dc9d6d9a460e4d_tuple);
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
void checkModuleConstants_numpy$lib$_nanfunctions_impl(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_kind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kind);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fc);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_isnan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isnan);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_invert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invert);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d18509a48f609fc250f6073ff1b4e79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d18509a48f609fc250f6073ff1b4e79);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_asanyarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asanyarray);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_object_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object_);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_not_equal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_not_equal);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_inexact));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inexact);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_dict_eeec7aac86b0de3c7b9e410669185928));
CHECK_OBJECT_DEEP(mod_consts.const_dict_eeec7aac86b0de3c7b9e410669185928);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_copyto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copyto);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_where_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_where_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_a));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_a);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_c686b92aafd04507a8ef2eb24bbe9679));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c686b92aafd04507a8ef2eb24bbe9679);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsafe);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_where_str_plain_casting_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_where_str_plain_casting_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_17ab71091dc46de8ad2e5fefa8cad1b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17ab71091dc46de8ad2e5fefa8cad1b5);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_nonzero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nonzero);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_df9219e7323f1cc1c5ffd9b53703d856));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df9219e7323f1cc1c5ffd9b53703d856);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RuntimeWarning);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_f5069c97cdc54b2d109afca44cc81281));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5069c97cdc54b2d109afca44cc81281);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_0_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_0_none);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_arr1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arr1d);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_951672492663cfd3069fdec43acfc89b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_951672492663cfd3069fdec43acfc89b);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_errstate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errstate);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ignore_str_plain_ignore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ignore_str_plain_ignore_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_invalid_str_plain_divide_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_invalid_str_plain_divide_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_divide));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_divide);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_casting_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_str_plain_casting_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ce5374db89e9524b7b736fd9aa38a30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ce5374db89e9524b7b736fd9aa38a30);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__NoValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NoValue);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_keepdims));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keepdims);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_initial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_initial);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_where));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_where);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_memmap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memmap);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_fmin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fmin);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_reduce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reduce);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_axis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_axis);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_out));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_out);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_any);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__replace_nan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__replace_nan);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_inf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inf);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_amin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_amin);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_all);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__copyto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__copyto);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_nan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nan);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5906d9b36689902967f4292e56d9fde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5906d9b36689902967f4292e56d9fde);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_res));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_res);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_50ab944e47e880a87124da315be41f6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50ab944e47e880a87124da315be41f6f);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_fmax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fmax);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_amax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_amax);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d144bea8ea0a9975b433cd4714bd313));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d144bea8ea0a9975b433cd4714bd313);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axis_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_argmin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argmin);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_out_str_plain_keepdims_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axis_str_plain_out_str_plain_keepdims_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_e032b81da4cacd8adefbe5f4800334d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e032b81da4cacd8adefbe5f4800334d6);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_argmax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argmax);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b71b2220e6dbb4fbca5c75a982e3930));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b71b2220e6dbb4fbca5c75a982e3930);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_9ee81aa0a0314b5850c123bdc8a7af56_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9ee81aa0a0314b5850c123bdc8a7af56_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2c6d230c597abbd62867925d55e943e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2c6d230c597abbd62867925d55e943e);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_prod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prod);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fe8757e223b7e8862c7cc37a766e75e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1fe8757e223b7e8862c7cc37a766e75e);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_cumsum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cumsum);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_dtype_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axis_str_plain_dtype_str_plain_out_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_f194c0896325b6381e92e0eee0267205));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f194c0896325b6381e92e0eee0267205);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_cumprod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cumprod);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4d6ea3acdfc3af57e0a77d337ec1c80));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4d6ea3acdfc3af57e0a77d337ec1c80);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_mean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mean);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_d96307d9cab41acf0ccd5c1f96a95623_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d96307d9cab41acf0ccd5c1f96a95623_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_32383d08c19cf306ff97b1d17823d642));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_32383d08c19cf306ff97b1d17823d642);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_intp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intp);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_c431dd99e8d24915e3eeec18855a81bc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c431dd99e8d24915e3eeec18855a81bc_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__divide_by_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__divide_by_count);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_645db265f25d335dde17efaf363586c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_645db265f25d335dde17efaf363586c5);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__remove_nan_1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__remove_nan_1d);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_overwrite_input_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_overwrite_input_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_median));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_median);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_377e8a360d995cb2c24674201f2192b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_377e8a360d995cb2c24674201f2192b3);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_ravel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ravel);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanmedian1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanmedian1d);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_600));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_600);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanmedian_small));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanmedian_small);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_along_axis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply_along_axis);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a316fc26d408b7e96a662315c3de4b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a316fc26d408b7e96a662315c3de4b4);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_ma));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ma);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_masked_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_masked_array);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_str_plain_overwrite_input_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axis_str_plain_overwrite_input_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_count_nonzero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_count_nonzero);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mask);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_m));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_m);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timedelta64);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NaT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NaT_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_filled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filled);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a15098c0feabf71cb6733a75d7cd65e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a15098c0feabf71cb6733a75d7cd65e);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanmean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanmean);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_keepdims_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_str_plain_keepdims_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_fnb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fnb);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__ureduce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ureduce);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanmedian));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanmedian);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_18c686e0bd0358e411a4b0da67e5f555_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_18c686e0bd0358e411a4b0da67e5f555_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_738859357359a4e81f079544058a2044));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_738859357359a4e81f079544058a2044);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_387948cdde59e718248e42c4a519f0df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_387948cdde59e718248e42c4a519f0df);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_float_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_true_divide));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true_divide);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_5c510a341eb8ce89f98f64af29a634ed));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5c510a341eb8ce89f98f64af29a634ed);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain__quantile_is_valid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__quantile_is_valid);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ab373ae36e2bb6baafef27c86182e81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ab373ae36e2bb6baafef27c86182e81);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_inverted_cdf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inverted_cdf);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_088e9f614b14d8815ab178502a92a8b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_088e9f614b14d8815ab178502a92a8b5);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__nx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nx);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_axis_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_dict_b09b449426c4301706aa0d740b37c9fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b09b449426c4301706aa0d740b37c9fb);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__weights_are_valid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__weights_are_valid);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_weights_str_plain_a_str_plain_axis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_weights_str_plain_a_str_plain_axis_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_54f0fa2a70d6e0a34413a6cfadeca9d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54f0fa2a70d6e0a34413a6cfadeca9d3);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanquantile_unchecked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanquantile_unchecked);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_b63492fee4b39d48a97a578c942d8a12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b63492fee4b39d48a97a578c942d8a12);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_f47df35bbcf99e0a872c43dc6981620b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f47df35bbcf99e0a872c43dc6981620b);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2e376a4cbd2fd07b62b665adec3f238));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2e376a4cbd2fd07b62b665adec3f238);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanquantile_ureduce_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanquantile_ureduce_func);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_3c7fc306c33526e1639113b8f7908e11_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3c7fc306c33526e1639113b8f7908e11_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d3dde78ef0a5edc96e74007dfe8e642));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d3dde78ef0a5edc96e74007dfe8e642);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanquantile_1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanquantile_1d);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_weights_str_plain_weak_q_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_weights_str_plain_weak_q_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moveaxis);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty_like);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shape_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shape_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndindex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndindex);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_q));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_q);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_overwrite_input));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overwrite_input);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_weak_q));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_weak_q);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_b1467dc269a4f1f3b72fac89532d10b0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b1467dc269a4f1f3b72fac89532d10b0_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ellipsis_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_37878329c1abd065a32003dde103c8a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37878329c1abd065a32003dde103c8a0);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_second_arr1d_str_plain_overwrite_input_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_second_arr1d_str_plain_overwrite_input_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_full));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_full);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain__quantile_unchecked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__quantile_unchecked);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_9c97561f86ec8e3fcd0cc0b6b32e30a0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9c97561f86ec8e3fcd0cc0b6b32e30a0_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_015216c5b219450fb6d318ae3b644283));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_015216c5b219450fb6d318ae3b644283);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_var));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_var);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_43312485dd84a9a9350f83af88a63f88_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_43312485dd84a9a9350f83af88a63f88_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a44b2d0cbcfdd60365e2c2ef1412d28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a44b2d0cbcfdd60365e2c2ef1412d28);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_matrix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_matrix);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_subtract));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subtract);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_where_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_where_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_complexfloating));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_complexfloating);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiply);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_conj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conj);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_where_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_str_plain_where_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_real));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_real);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_squeeze));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_squeeze);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_cnt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cnt);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbd396d9bb37b13c133fa37fab502bba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bbd396d9bb37b13c133fa37fab502bba);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f3135ec41c8e22e97e5f4f3b47b530a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f3135ec41c8e22e97e5f4f3b47b530a);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanvar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanvar);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sqrt);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e0db9f057cbf187aaa8480786d07980));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e0db9f057cbf187aaa8480786d07980);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_1eff39d55cf507065c2737d687444033));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1eff39d55cf507065c2737d687444033);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_numeric));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numeric);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_overrides_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_overrides_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_overrides));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overrides);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__function_base_impl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__function_base_impl_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain__function_base_impl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__function_base_impl);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7f534cd93611b81223c377d3a08aa34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7f534cd93611b81223c377d3a08aa34);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__weights_are_valid_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__weights_are_valid_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_dispatch);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_list_e328792b501ba3bfe9ef50afeb6f0d39_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_e328792b501ba3bfe9ef50afeb6f0d39_list);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain__nan_mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nan_mask);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_false_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_none_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanmin_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanmin_dispatcher);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanmin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanmin);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanmax_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanmax_dispatcher);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanmax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanmax);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_dict_63956881baf8acd3fe830e4cb2d32e40));
CHECK_OBJECT_DEEP(mod_consts.const_dict_63956881baf8acd3fe830e4cb2d32e40);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanargmin_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanargmin_dispatcher);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanargmin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanargmin);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanargmax_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanargmax_dispatcher);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanargmax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanargmax);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_none_none_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain__nansum_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nansum_dispatcher);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_nansum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nansum);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanprod_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanprod_dispatcher);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanprod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanprod);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain__nancumsum_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nancumsum_dispatcher);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_nancumsum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nancumsum);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain__nancumprod_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nancumprod_dispatcher);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain_nancumprod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nancumprod);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_dict_391cb2ca1b0c1b73affb5787863e84c6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_391cb2ca1b0c1b73affb5787863e84c6);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanmean_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanmean_dispatcher);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_false_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanmedian_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanmedian_dispatcher);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanmedian));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanmedian);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_dict_ef43cd7b90cbd93aa9666d3f02bf52f0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ef43cd7b90cbd93aa9666d3f02bf52f0);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanpercentile_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanpercentile_dispatcher);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain_linear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linear);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanpercentile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanpercentile);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanquantile_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanquantile_dispatcher);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanquantile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanquantile);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_str_plain_linear_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_false_str_plain_linear_false_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain_weights));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_weights);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_uniontype_tuple_type_int_anon_NoneType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_uniontype_tuple_type_int_anon_NoneType_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_false_str_plain_linear_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_str_plain_linear_none_false_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_dict_6cc7fa10a321425870fa24d1626c45e7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6cc7fa10a321425870fa24d1626c45e7);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanvar_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanvar_dispatcher);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_plain_correction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_correction);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_plain__nanstd_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nanstd_dispatcher);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_plain_nanstd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nanstd);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_digest_03358de93f26ed9603866d67733899fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03358de93f26ed9603866d67733899fd);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_digest_982bc1503f1911f0e8876d8cd4fc53a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_982bc1503f1911f0e8876d8cd4fc53a9);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_b_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_b_str_plain_out_tuple);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_tuple_8c0c0403c74f46da2dd69c3912d6eadb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8c0c0403c74f46da2dd69c3912d6eadb_tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_tuple_7c21073cfd531e35bd169034434d02b4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7c21073cfd531e35bd169034434d02b4_tuple);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_tuple_d107e3220808f0571ce5e4acef997b82_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d107e3220808f0571ce5e4acef997b82_tuple);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_tuple_c644d711d8d944a04761d867ac35e5a5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c644d711d8d944a04761d867ac35e5a5_tuple);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_tuple_4fdda21a497a36fc00f23b59d7449b6e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4fdda21a497a36fc00f23b59d7449b6e_tuple);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_tuple_fdaebeb0c57ee5b7e979261b84e55e0e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fdaebeb0c57ee5b7e979261b84e55e0e_tuple);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_tuple_aca1c2a8efe02bba0c8eb1b8ab3c2e10_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aca1c2a8efe02bba0c8eb1b8ab3c2e10_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_tuple_50793be4a4d5b9b43b10b92e566e3198_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_50793be4a4d5b9b43b10b92e566e3198_tuple);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_tuple_7687e937d64b1ee7824fb1aa07597685_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7687e937d64b1ee7824fb1aa07597685_tuple);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_tuple_b9bb2e11b19302684d1feb06a4e21bc6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b9bb2e11b19302684d1feb06a4e21bc6_tuple);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_tuple_acfaad50c55d762c110253c18919c3d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_acfaad50c55d762c110253c18919c3d1_tuple);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_tuple_9a3487888626d522538fc88cc7ee90ff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9a3487888626d522538fc88cc7ee90ff_tuple);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_tuple_8f534391dd052d6bcc11a419c616e13c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f534391dd052d6bcc11a419c616e13c_tuple);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_tuple_a5459cc48d7881d51af21536ece25e34_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a5459cc48d7881d51af21536ece25e34_tuple);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_tuple_38b6bc40b6852d5accce252ed8ef5c30_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_38b6bc40b6852d5accce252ed8ef5c30_tuple);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_tuple_afaf64facdd1c35cfe7d696ff24df5d3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_afaf64facdd1c35cfe7d696ff24df5d3_tuple);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_tuple_f5d23bd48f89ca0418dc9d6d9a460e4d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f5d23bd48f89ca0418dc9d6d9a460e4d_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 34
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
static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$RuntimeWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_copyto(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__copyto);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__copyto);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__copyto, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__copyto);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__copyto, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__copyto);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__copyto);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__copyto);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_divide_by_count(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__divide_by_count);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__divide_by_count);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__divide_by_count, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__divide_by_count);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__divide_by_count, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__divide_by_count);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__divide_by_count);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__divide_by_count);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanargmax_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmax_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanargmax_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanargmax_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanargmax_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanargmax_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmax_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmax_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmax_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanargmin_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmin_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanargmin_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanargmin_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanargmin_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanargmin_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmin_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmin_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmin_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nancumprod_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumprod_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nancumprod_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nancumprod_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nancumprod_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nancumprod_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumprod_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumprod_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumprod_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nancumsum_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumsum_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nancumsum_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nancumsum_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nancumsum_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nancumsum_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumsum_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumsum_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumsum_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmax_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmax_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmax_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmax_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmax_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmax_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmax_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmax_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmax_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmean_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmean_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmean_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmean_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmean_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmean_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmean_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmean_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmean_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmedian);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmedian, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmedian);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmedian, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian1d(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian1d);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmedian1d);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmedian1d, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmedian1d);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmedian1d, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian1d);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian1d);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian1d);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmedian_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmedian_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmedian_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmedian_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian_small(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_small);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmedian_small);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmedian_small, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmedian_small);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmedian_small, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_small);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_small);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_small);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmin_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmin_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmin_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmin_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanmin_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanmin_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmin_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmin_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmin_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanpercentile_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanpercentile_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanpercentile_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanpercentile_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanpercentile_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanpercentile_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanpercentile_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanpercentile_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanpercentile_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanprod_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanprod_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanprod_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanprod_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanprod_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanprod_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanprod_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanprod_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanprod_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_1d(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_1d);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanquantile_1d);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanquantile_1d, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanquantile_1d);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanquantile_1d, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_1d);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_1d);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_1d);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanquantile_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanquantile_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanquantile_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanquantile_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_unchecked(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_unchecked);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanquantile_unchecked);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanquantile_unchecked, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanquantile_unchecked);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanquantile_unchecked, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_unchecked);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_unchecked);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_unchecked);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_ureduce_func(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_ureduce_func);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanquantile_ureduce_func);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanquantile_ureduce_func, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanquantile_ureduce_func);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanquantile_ureduce_func, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_ureduce_func);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_ureduce_func);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_ureduce_func);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanstd_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanstd_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanstd_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanstd_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanstd_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanstd_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanstd_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanstd_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanstd_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nansum_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nansum_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nansum_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nansum_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nansum_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nansum_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nansum_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nansum_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nansum_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nanvar_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanvar_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanvar_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanvar_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nanvar_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nanvar_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanvar_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanvar_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nanvar_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_nx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nx);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_remove_nan_1d(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_nan_1d);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__remove_nan_1d);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__remove_nan_1d, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__remove_nan_1d);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__remove_nan_1d, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_nan_1d);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_nan_1d);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_nan_1d);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__replace_nan);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__replace_nan);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__replace_nan, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__replace_nan);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__replace_nan, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__replace_nan);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__replace_nan);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__replace_nan);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$_weights_are_valid(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__weights_are_valid);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__weights_are_valid);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__weights_are_valid, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__weights_are_valid);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__weights_are_valid, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__weights_are_valid);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__weights_are_valid);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__weights_are_valid);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$fnb(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_fnb);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fnb);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fnb, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fnb);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fnb, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_fnb);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_fnb);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_fnb);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$nanvar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanvar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nanvar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nanvar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nanvar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nanvar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanvar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanvar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_nanvar);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$overrides(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_nanfunctions_impl$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_nanfunctions_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_nanfunctions_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d843c872ff42fba45cf2def51cf17bcf;
static PyCodeObject *code_objects_d5ddb32c88e2e9156b2760f5b7e60177;
static PyCodeObject *code_objects_6ae055362748aee3baf3a4e2d1536952;
static PyCodeObject *code_objects_f4011a4e5916fa754436bbcc2241ceaf;
static PyCodeObject *code_objects_f206ab3d25e30ae23794724d5f50d8d4;
static PyCodeObject *code_objects_d01146a2aec3c6a89f2f480975d0259b;
static PyCodeObject *code_objects_66ea992fbf93e45ab136f7358bf4af0a;
static PyCodeObject *code_objects_2a25dd31c37315a6aa5a87296981752c;
static PyCodeObject *code_objects_697a9c70b6071340ef0a6824ccf23607;
static PyCodeObject *code_objects_a913d6c4d50d3e23f99334099bbeb336;
static PyCodeObject *code_objects_03a56cfc294b96f3e24d552f980e3133;
static PyCodeObject *code_objects_27554cb9da87c5b8d9364eefcfacb5ad;
static PyCodeObject *code_objects_16fa51295c4bdb2b5b04ca16fd4b05e5;
static PyCodeObject *code_objects_5ec5b9da53a8989f26cbcf22d2df7c9c;
static PyCodeObject *code_objects_d972ae15cd488d92b2b979e98a1a7be8;
static PyCodeObject *code_objects_c48d08437cd871ad2135d5bf9e15aeb5;
static PyCodeObject *code_objects_0556bf782c0341c00f9d14246cbc1266;
static PyCodeObject *code_objects_7af8b46e48a1caedb4219838d0859b83;
static PyCodeObject *code_objects_4510b3cb5458795ba82c501eacb707f9;
static PyCodeObject *code_objects_5994a33e158f27b0e43ce0a6f6b7a990;
static PyCodeObject *code_objects_c5a3ae748d644e54378f3b8ceb67fd0f;
static PyCodeObject *code_objects_08c403549250675a18e3fb8f345eccd0;
static PyCodeObject *code_objects_21d2d29bf95fb81729ed7e8f3662550e;
static PyCodeObject *code_objects_508ada078749adebb58866f28a415537;
static PyCodeObject *code_objects_a75deb0086ac4eebe8e4ebf0a2bb8af2;
static PyCodeObject *code_objects_99ba072fd5d8ce5b8b561740df0ad1b9;
static PyCodeObject *code_objects_c1f35139845020a58fa940639bd9c6a1;
static PyCodeObject *code_objects_a6746492b721fc31e6da624240b34275;
static PyCodeObject *code_objects_96042b0c06762ccd1d860871717b7982;
static PyCodeObject *code_objects_1debfbf72859a06f57b43d855cffe571;
static PyCodeObject *code_objects_e7ff5085582a25445574b0635c0b3fb2;
static PyCodeObject *code_objects_3eb483a4ab43cc8da2566948d0ff1f54;
static PyCodeObject *code_objects_d86e3ab9319136bd74a47957424d40be;
static PyCodeObject *code_objects_4fef972010d96a43f70f30e029bfd6ff;
static PyCodeObject *code_objects_7b10a7b4ddd3b3c1a5ed9ff9bc575300;
static PyCodeObject *code_objects_8ea0e2981714723c68caee597ce60a9e;
static PyCodeObject *code_objects_441c19adcdc522cab478555c1fcc7304;
static PyCodeObject *code_objects_a21f08aae3d3aa49cbdbd9426cab892b;
static PyCodeObject *code_objects_6250deedef20a346abaa6d8a684155b2;
static PyCodeObject *code_objects_c249073fb118425f9420d1f7882c8b3d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_03358de93f26ed9603866d67733899fd); CHECK_OBJECT(module_filename_obj);
code_objects_d843c872ff42fba45cf2def51cf17bcf = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_982bc1503f1911f0e8876d8cd4fc53a9, mod_consts.const_str_digest_982bc1503f1911f0e8876d8cd4fc53a9, NULL, NULL, 0, 0, 0);
code_objects_d5ddb32c88e2e9156b2760f5b7e60177 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__copyto, mod_consts.const_str_plain__copyto, mod_consts.const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple, NULL, 3, 0, 0);
code_objects_6ae055362748aee3baf3a4e2d1536952 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__divide_by_count, mod_consts.const_str_plain__divide_by_count, mod_consts.const_tuple_str_plain_a_str_plain_b_str_plain_out_tuple, NULL, 3, 0, 0);
code_objects_f4011a4e5916fa754436bbcc2241ceaf = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nan_mask, mod_consts.const_str_plain__nan_mask, mod_consts.const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple, NULL, 2, 0, 0);
code_objects_f206ab3d25e30ae23794724d5f50d8d4 = MAKE_CODE_OBJECT(module_filename_obj, 567, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanargmax_dispatcher, mod_consts.const_str_plain__nanargmax_dispatcher, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, NULL, 3, 1, 0);
code_objects_d01146a2aec3c6a89f2f480975d0259b = MAKE_CODE_OBJECT(module_filename_obj, 506, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanargmin_dispatcher, mod_consts.const_str_plain__nanargmin_dispatcher, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, NULL, 3, 1, 0);
code_objects_66ea992fbf93e45ab136f7358bf4af0a = MAKE_CODE_OBJECT(module_filename_obj, 881, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nancumprod_dispatcher, mod_consts.const_str_plain__nancumprod_dispatcher, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, NULL, 4, 0, 0);
code_objects_2a25dd31c37315a6aa5a87296981752c = MAKE_CODE_OBJECT(module_filename_obj, 812, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nancumsum_dispatcher, mod_consts.const_str_plain__nancumsum_dispatcher, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, NULL, 4, 0, 0);
code_objects_697a9c70b6071340ef0a6824ccf23607 = MAKE_CODE_OBJECT(module_filename_obj, 377, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanmax_dispatcher, mod_consts.const_str_plain__nanmax_dispatcher, mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple, NULL, 6, 0, 0);
code_objects_a913d6c4d50d3e23f99334099bbeb336 = MAKE_CODE_OBJECT(module_filename_obj, 947, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanmean_dispatcher, mod_consts.const_str_plain__nanmean_dispatcher, mod_consts.const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple, NULL, 5, 1, 0);
code_objects_03a56cfc294b96f3e24d552f980e3133 = MAKE_CODE_OBJECT(module_filename_obj, 1074, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanmedian, mod_consts.const_str_plain__nanmedian, mod_consts.const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple, NULL, 4, 0, 0);
code_objects_27554cb9da87c5b8d9364eefcfacb5ad = MAKE_CODE_OBJECT(module_filename_obj, 1057, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanmedian1d, mod_consts.const_str_plain__nanmedian1d, mod_consts.const_tuple_8c0c0403c74f46da2dd69c3912d6eadb_tuple, NULL, 2, 0, 0);
code_objects_16fa51295c4bdb2b5b04ca16fd4b05e5 = MAKE_CODE_OBJECT(module_filename_obj, 1120, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanmedian_dispatcher, mod_consts.const_str_plain__nanmedian_dispatcher, mod_consts.const_tuple_7c21073cfd531e35bd169034434d02b4_tuple, NULL, 5, 0, 0);
code_objects_5ec5b9da53a8989f26cbcf22d2df7c9c = MAKE_CODE_OBJECT(module_filename_obj, 1100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanmedian_small, mod_consts.const_str_plain__nanmedian_small, mod_consts.const_tuple_d107e3220808f0571ce5e4acef997b82_tuple, NULL, 4, 0, 0);
code_objects_d972ae15cd488d92b2b979e98a1a7be8 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanmin_dispatcher, mod_consts.const_str_plain__nanmin_dispatcher, mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple, NULL, 6, 0, 0);
code_objects_c48d08437cd871ad2135d5bf9e15aeb5 = MAKE_CODE_OBJECT(module_filename_obj, 1220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanpercentile_dispatcher, mod_consts.const_str_plain__nanpercentile_dispatcher, mod_consts.const_tuple_c644d711d8d944a04761d867ac35e5a5_tuple, NULL, 7, 1, 0);
code_objects_0556bf782c0341c00f9d14246cbc1266 = MAKE_CODE_OBJECT(module_filename_obj, 730, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanprod_dispatcher, mod_consts.const_str_plain__nanprod_dispatcher, mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple, NULL, 7, 0, 0);
code_objects_7af8b46e48a1caedb4219838d0859b83 = MAKE_CODE_OBJECT(module_filename_obj, 1662, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanquantile_1d, mod_consts.const_str_plain__nanquantile_1d, mod_consts.const_tuple_4fdda21a497a36fc00f23b59d7449b6e_tuple, NULL, 6, 0, 0);
code_objects_4510b3cb5458795ba82c501eacb707f9 = MAKE_CODE_OBJECT(module_filename_obj, 1400, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanquantile_dispatcher, mod_consts.const_str_plain__nanquantile_dispatcher, mod_consts.const_tuple_c644d711d8d944a04761d867ac35e5a5_tuple, NULL, 7, 1, 0);
code_objects_5994a33e158f27b0e43ce0a6f6b7a990 = MAKE_CODE_OBJECT(module_filename_obj, 1577, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanquantile_unchecked, mod_consts.const_str_plain__nanquantile_unchecked, mod_consts.const_tuple_fdaebeb0c57ee5b7e979261b84e55e0e_tuple, NULL, 9, 0, 0);
code_objects_c5a3ae748d644e54378f3b8ceb67fd0f = MAKE_CODE_OBJECT(module_filename_obj, 1605, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanquantile_ureduce_func, mod_consts.const_str_plain__nanquantile_ureduce_func, mod_consts.const_tuple_aca1c2a8efe02bba0c8eb1b8ab3c2e10_tuple, NULL, 8, 0, 0);
code_objects_08c403549250675a18e3fb8f345eccd0 = MAKE_CODE_OBJECT(module_filename_obj, 1877, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanstd_dispatcher, mod_consts.const_str_plain__nanstd_dispatcher, mod_consts.const_tuple_50793be4a4d5b9b43b10b92e566e3198_tuple, NULL, 6, 3, 0);
code_objects_21d2d29bf95fb81729ed7e8f3662550e = MAKE_CODE_OBJECT(module_filename_obj, 629, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nansum_dispatcher, mod_consts.const_str_plain__nansum_dispatcher, mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple, NULL, 7, 0, 0);
code_objects_508ada078749adebb58866f28a415537 = MAKE_CODE_OBJECT(module_filename_obj, 1687, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__nanvar_dispatcher, mod_consts.const_str_plain__nanvar_dispatcher, mod_consts.const_tuple_50793be4a4d5b9b43b10b92e566e3198_tuple, NULL, 6, 3, 0);
code_objects_a75deb0086ac4eebe8e4ebf0a2bb8af2 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__remove_nan_1d, mod_consts.const_str_plain__remove_nan_1d, mod_consts.const_tuple_7687e937d64b1ee7824fb1aa07597685_tuple, NULL, 3, 0, 0);
code_objects_99ba072fd5d8ce5b8b561740df0ad1b9 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__replace_nan, mod_consts.const_str_plain__replace_nan, mod_consts.const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple, NULL, 2, 0, 0);
code_objects_c1f35139845020a58fa940639bd9c6a1 = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanargmax, mod_consts.const_str_plain_nanargmax, mod_consts.const_tuple_b9bb2e11b19302684d1feb06a4e21bc6_tuple, NULL, 3, 1, 0);
code_objects_a6746492b721fc31e6da624240b34275 = MAKE_CODE_OBJECT(module_filename_obj, 511, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanargmin, mod_consts.const_str_plain_nanargmin, mod_consts.const_tuple_b9bb2e11b19302684d1feb06a4e21bc6_tuple, NULL, 3, 1, 0);
code_objects_96042b0c06762ccd1d860871717b7982 = MAKE_CODE_OBJECT(module_filename_obj, 886, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nancumprod, mod_consts.const_str_plain_nancumprod, mod_consts.const_tuple_acfaad50c55d762c110253c18919c3d1_tuple, NULL, 4, 0, 0);
code_objects_1debfbf72859a06f57b43d855cffe571 = MAKE_CODE_OBJECT(module_filename_obj, 817, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nancumsum, mod_consts.const_str_plain_nancumsum, mod_consts.const_tuple_acfaad50c55d762c110253c18919c3d1_tuple, NULL, 4, 0, 0);
code_objects_e7ff5085582a25445574b0635c0b3fb2 = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanmax, mod_consts.const_str_plain_nanmax, mod_consts.const_tuple_9a3487888626d522538fc88cc7ee90ff_tuple, NULL, 6, 0, 0);
code_objects_3eb483a4ab43cc8da2566948d0ff1f54 = MAKE_CODE_OBJECT(module_filename_obj, 953, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanmean, mod_consts.const_str_plain_nanmean, mod_consts.const_tuple_8f534391dd052d6bcc11a419c616e13c_tuple, NULL, 5, 1, 0);
code_objects_d86e3ab9319136bd74a47957424d40be = MAKE_CODE_OBJECT(module_filename_obj, 1126, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanmedian, mod_consts.const_str_plain_nanmedian, mod_consts.const_tuple_7c21073cfd531e35bd169034434d02b4_tuple, NULL, 5, 0, 0);
code_objects_4fef972010d96a43f70f30e029bfd6ff = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanmin, mod_consts.const_str_plain_nanmin, mod_consts.const_tuple_9a3487888626d522538fc88cc7ee90ff_tuple, NULL, 6, 0, 0);
code_objects_7b10a7b4ddd3b3c1a5ed9ff9bc575300 = MAKE_CODE_OBJECT(module_filename_obj, 1227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanpercentile, mod_consts.const_str_plain_nanpercentile, mod_consts.const_tuple_a5459cc48d7881d51af21536ece25e34_tuple, NULL, 7, 1, 0);
code_objects_8ea0e2981714723c68caee597ce60a9e = MAKE_CODE_OBJECT(module_filename_obj, 736, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanprod, mod_consts.const_str_plain_nanprod, mod_consts.const_tuple_38b6bc40b6852d5accce252ed8ef5c30_tuple, NULL, 7, 0, 0);
code_objects_441c19adcdc522cab478555c1fcc7304 = MAKE_CODE_OBJECT(module_filename_obj, 1406, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanquantile, mod_consts.const_str_plain_nanquantile, mod_consts.const_tuple_a5459cc48d7881d51af21536ece25e34_tuple, NULL, 7, 1, 0);
code_objects_a21f08aae3d3aa49cbdbd9426cab892b = MAKE_CODE_OBJECT(module_filename_obj, 1884, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanstd, mod_consts.const_str_plain_nanstd, mod_consts.const_tuple_afaf64facdd1c35cfe7d696ff24df5d3_tuple, NULL, 6, 3, 0);
code_objects_6250deedef20a346abaa6d8a684155b2 = MAKE_CODE_OBJECT(module_filename_obj, 635, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nansum, mod_consts.const_str_plain_nansum, mod_consts.const_tuple_38b6bc40b6852d5accce252ed8ef5c30_tuple, NULL, 7, 0, 0);
code_objects_c249073fb118425f9420d1f7882c8b3d = MAKE_CODE_OBJECT(module_filename_obj, 1694, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nanvar, mod_consts.const_str_plain_nanvar, mod_consts.const_tuple_f5d23bd48f89ca0418dc9d6d9a460e4d_tuple, NULL, 6, 3, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__10__nanargmin_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__12__nanargmax_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__14__nansum_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__15_nansum(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__16__nanprod_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__17_nanprod(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__18__nancumsum_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__20__nancumprod_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__22__nanmean_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__23_nanmean(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__27__nanmedian_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__29__nanpercentile_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__31__nanquantile_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__36__nanvar_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__37_nanvar(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__38__nanstd_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__39_nanstd(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__3__copyto(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__6__nanmin_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__7_nanmin(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__8__nanmax_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__9_nanmax(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_out = python_pars[1];
PyObject *var_y = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask = MAKE_FUNCTION_FRAME(tstate, code_objects_f4011a4e5916fa754436bbcc2241ceaf, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_fc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_isnan);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask->m_frame.f_lineno = 66;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_y == NULL);
var_y = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_invert);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_y);
tmp_kw_call_arg_value_0_2 = var_y;
CHECK_OBJECT(var_y);
tmp_kw_call_dict_value_0_2 = var_y;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask->m_frame.f_lineno = 67;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_y;
    assert(old != NULL);
    var_y = tmp_assign_source_2;
    Py_DECREF(old);
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask,
    type_description_1,
    par_a,
    par_out,
    var_y
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_y);
tmp_return_value = var_y;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_y);
var_y = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_y);
var_y = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_val = python_pars[1];
PyObject *var_mask = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan = MAKE_FUNCTION_FRAME(tstate, code_objects_99ba072fd5d8ce5b8b561740df0ad1b9, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan->m_frame.f_lineno = 98;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
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


exception_lineno = 100;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 100;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_object_);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 100;
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


exception_lineno = 100;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_not_equal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan->m_frame.f_lineno = 102;
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


exception_lineno = 102;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_mask == NULL);
var_mask = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_a);
tmp_expression_value_5 = par_a;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_issubclass_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 103;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_inexact);
if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 103;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_cls_1);
Py_DECREF(tmp_issubclass_cls_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_2 = par_a;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan->m_frame.f_lineno = 104;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_isnan, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_mask == NULL);
var_mask = tmp_assign_source_3;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_4);
var_mask = tmp_assign_source_4;
}
branch_end_2:;
branch_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_mask);
tmp_cmp_expr_left_2 = var_mask;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_array);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_2 = par_a;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_eeec7aac86b0de3c7b9e410669185928);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan->m_frame.f_lineno = 109;
tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_8 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_copyto);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_val);
tmp_kw_call_arg_value_1_1 = par_val;
CHECK_OBJECT(var_mask);
tmp_kw_call_dict_value_0_1 = var_mask;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan->m_frame.f_lineno = 110;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_where_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
{
PyObject *tmp_tuple_element_3;
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_3 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_mask);
tmp_tuple_element_3 = var_mask;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan,
    type_description_1,
    par_a,
    par_val,
    var_mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan);

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
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_val);
Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__3__copyto(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_val = python_pars[1];
PyObject *par_mask = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto = MAKE_FUNCTION_FRAME(tstate, code_objects_d5ddb32c88e2e9156b2760f5b7e60177, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_a);
tmp_isinstance_inst_1 = par_a;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copyto);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_val);
tmp_kw_call_arg_value_1_1 = par_val;
CHECK_OBJECT(par_mask);
tmp_kw_call_dict_value_0_1 = par_mask;
tmp_kw_call_dict_value_1_1 = mod_consts.const_str_plain_unsafe;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto->m_frame.f_lineno = 138;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_where_str_plain_casting_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_3 = par_a;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_val);
tmp_args_element_value_1 = par_val;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto->m_frame.f_lineno = 140;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_type, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
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
branch_end_1:;
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 141;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_a;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto,
    type_description_1,
    par_a,
    par_val,
    par_mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__3__copyto);

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
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_arr1d = python_pars[0];
PyObject *par_second_arr1d = python_pars[1];
PyObject *par_overwrite_input = python_pars[2];
PyObject *var_c = NULL;
PyObject *var_s = NULL;
PyObject *var_enonan = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d = MAKE_FUNCTION_FRAME(tstate, code_objects_a75deb0086ac4eebe8e4ebf0a2bb8af2, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_arr1d);
tmp_expression_value_1 = par_arr1d;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dtype);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = (PyObject *)&PyBaseObject_Type;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
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
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_not_equal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr1d);
tmp_tuple_element_1 = par_arr1d;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_arr1d);
tmp_tuple_element_1 = par_arr1d;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_8a6ce79bb59f45c062c2a0027a3a0c33);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d->m_frame.f_lineno = 171;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_c == NULL);
var_c = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr1d);
tmp_args_element_value_1 = par_arr1d;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d->m_frame.f_lineno = 173;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isnan, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_c == NULL);
var_c = tmp_assign_source_2;
}
branch_end_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_subscript_value_1;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_c);
tmp_args_element_value_2 = var_c;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d->m_frame.f_lineno = 175;
tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_nonzero, tmp_args_element_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_s == NULL);
var_s = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_s);
tmp_expression_value_4 = var_s;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr1d);
tmp_expression_value_5 = par_arr1d;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 176;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_6 = module_var_accessor_numpy$lib$_nanfunctions_impl$warnings(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_warn);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_f5069c97cdc54b2d109afca44cc81281);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d->m_frame.f_lineno = 177;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_second_arr1d);
tmp_cmp_expr_left_3 = par_second_arr1d;
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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_arr1d);
tmp_expression_value_7 = par_arr1d;
tmp_subscript_value_2 = mod_consts.const_slice_none_int_0_none;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_None;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_arr1d);
tmp_expression_value_8 = par_arr1d;
tmp_subscript_value_3 = mod_consts.const_slice_none_int_0_none;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_second_arr1d);
tmp_expression_value_9 = par_second_arr1d;
tmp_subscript_value_4 = mod_consts.const_slice_none_int_0_none;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
goto frame_return_exit_1;
}
branch_end_3:;
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_s);
tmp_expression_value_10 = var_s;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_int_0;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooo";
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
PyObject *tmp_tuple_element_5;
CHECK_OBJECT(par_arr1d);
tmp_tuple_element_5 = par_arr1d;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_5);
CHECK_OBJECT(par_second_arr1d);
tmp_tuple_element_5 = par_second_arr1d;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_5);
CHECK_OBJECT(par_overwrite_input);
tmp_tuple_element_5 = par_overwrite_input;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_5);
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_overwrite_input);
tmp_operand_value_1 = par_overwrite_input;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_arr1d);
tmp_expression_value_11 = par_arr1d;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_copy);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d->m_frame.f_lineno = 187;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_arr1d;
    assert(old != NULL);
    par_arr1d = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_stop_value_1;
PyObject *tmp_subscript_value_6;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_7;
PyObject *tmp_start_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_stop_value_2;
if (par_arr1d == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr1d);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = par_arr1d;
CHECK_OBJECT(var_s);
tmp_expression_value_14 = var_s;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_size);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_start_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_1 = Py_None;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_5 == NULL));
tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_c);
tmp_expression_value_15 = var_c;
CHECK_OBJECT(var_s);
tmp_expression_value_16 = var_s;
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_size);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_12);

exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_start_value_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_12);

exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_7 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_subscript_value_7 == NULL));
tmp_operand_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_12);

exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_subscript_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_12);

exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_enonan == NULL);
var_enonan = tmp_assign_source_5;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_8;
PyObject *tmp_stop_value_3;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_enonan);
tmp_ass_subvalue_1 = var_enonan;
if (par_arr1d == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr1d);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_1 = par_arr1d;
CHECK_OBJECT(var_s);
tmp_expression_value_17 = var_s;
CHECK_OBJECT(var_enonan);
tmp_expression_value_18 = var_enonan;
tmp_stop_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_size);
if (tmp_stop_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_8 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_3);
CHECK_OBJECT(tmp_stop_value_3);
Py_DECREF(tmp_stop_value_3);
assert(!(tmp_subscript_value_8 == NULL));
tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_second_arr1d);
tmp_cmp_expr_left_5 = par_second_arr1d;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_9;
PyObject *tmp_stop_value_4;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_20;
if (par_arr1d == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr1d);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = par_arr1d;
CHECK_OBJECT(var_s);
tmp_expression_value_20 = var_s;
tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_size);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_stop_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_9 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_4);
CHECK_OBJECT(tmp_stop_value_4);
Py_DECREF(tmp_stop_value_4);
assert(!(tmp_subscript_value_9 == NULL));
tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_6);
goto frame_return_exit_1;
}
goto branch_end_6;
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(par_overwrite_input);
tmp_operand_value_6 = par_overwrite_input;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(par_second_arr1d);
tmp_expression_value_21 = par_second_arr1d;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_copy);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d->m_frame.f_lineno = 197;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_second_arr1d;
    assert(old != NULL);
    par_second_arr1d = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_10;
PyObject *tmp_start_value_3;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_24;
PyObject *tmp_stop_value_5;
PyObject *tmp_subscript_value_11;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_12;
PyObject *tmp_start_value_4;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_stop_value_6;
CHECK_OBJECT(par_second_arr1d);
tmp_expression_value_23 = par_second_arr1d;
CHECK_OBJECT(var_s);
tmp_expression_value_24 = var_s;
tmp_operand_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_size);
if (tmp_operand_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_start_value_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_7);
CHECK_OBJECT(tmp_operand_value_7);
Py_DECREF(tmp_operand_value_7);
if (tmp_start_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_5 = Py_None;
tmp_subscript_value_10 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_5);
CHECK_OBJECT(tmp_start_value_3);
Py_DECREF(tmp_start_value_3);
assert(!(tmp_subscript_value_10 == NULL));
tmp_expression_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_c);
tmp_expression_value_25 = var_c;
CHECK_OBJECT(var_s);
tmp_expression_value_26 = var_s;
tmp_operand_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_size);
if (tmp_operand_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_22);

exception_lineno = 198;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_start_value_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_9);
CHECK_OBJECT(tmp_operand_value_9);
Py_DECREF(tmp_operand_value_9);
if (tmp_start_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_22);

exception_lineno = 198;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_6 = Py_None;
tmp_subscript_value_12 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_6);
CHECK_OBJECT(tmp_start_value_4);
Py_DECREF(tmp_start_value_4);
assert(!(tmp_subscript_value_12 == NULL));
tmp_operand_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_12);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_operand_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_22);

exception_lineno = 198;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_11 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_8);
CHECK_OBJECT(tmp_operand_value_8);
Py_DECREF(tmp_operand_value_8);
if (tmp_subscript_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_22);

exception_lineno = 198;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_enonan;
    assert(old != NULL);
    var_enonan = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_13;
PyObject *tmp_stop_value_7;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(var_enonan);
tmp_ass_subvalue_2 = var_enonan;
CHECK_OBJECT(par_second_arr1d);
tmp_ass_subscribed_2 = par_second_arr1d;
CHECK_OBJECT(var_s);
tmp_expression_value_27 = var_s;
CHECK_OBJECT(var_enonan);
tmp_expression_value_28 = var_enonan;
tmp_stop_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_size);
if (tmp_stop_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_13 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_7);
CHECK_OBJECT(tmp_stop_value_7);
Py_DECREF(tmp_stop_value_7);
assert(!(tmp_subscript_value_13 == NULL));
tmp_ass_subscript_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_13);
CHECK_OBJECT(tmp_subscript_value_13);
Py_DECREF(tmp_subscript_value_13);
if (tmp_ass_subscript_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_14;
PyObject *tmp_stop_value_8;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_30;
if (par_arr1d == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr1d);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 201;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_29 = par_arr1d;
CHECK_OBJECT(var_s);
tmp_expression_value_30 = var_s;
tmp_operand_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_size);
if (tmp_operand_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_8 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_10);
CHECK_OBJECT(tmp_operand_value_10);
Py_DECREF(tmp_operand_value_10);
if (tmp_stop_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_14 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_8);
CHECK_OBJECT(tmp_stop_value_8);
Py_DECREF(tmp_stop_value_8);
assert(!(tmp_subscript_value_14 == NULL));
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_14);
CHECK_OBJECT(tmp_subscript_value_14);
Py_DECREF(tmp_subscript_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_15;
PyObject *tmp_stop_value_9;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_32;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_7);
CHECK_OBJECT(par_second_arr1d);
tmp_expression_value_31 = par_second_arr1d;
CHECK_OBJECT(var_s);
tmp_expression_value_32 = var_s;
tmp_operand_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_size);
if (tmp_operand_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
tmp_stop_value_9 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_11);
CHECK_OBJECT(tmp_operand_value_11);
Py_DECREF(tmp_operand_value_11);
if (tmp_stop_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
tmp_subscript_value_15 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_9);
CHECK_OBJECT(tmp_stop_value_9);
Py_DECREF(tmp_stop_value_9);
assert(!(tmp_subscript_value_15 == NULL));
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_15);
CHECK_OBJECT(tmp_subscript_value_15);
Py_DECREF(tmp_subscript_value_15);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
goto frame_return_exit_1;
}
branch_end_6:;
branch_end_4:;
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d,
    type_description_1,
    par_arr1d,
    par_second_arr1d,
    par_overwrite_input,
    var_c,
    var_s,
    var_enonan
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_arr1d);
par_arr1d = NULL;
Py_XDECREF(par_second_arr1d);
par_second_arr1d = NULL;
CHECK_OBJECT(var_c);
CHECK_OBJECT(var_c);
Py_DECREF(var_c);
var_c = NULL;
CHECK_OBJECT(var_s);
CHECK_OBJECT(var_s);
Py_DECREF(var_s);
var_s = NULL;
Py_XDECREF(var_enonan);
var_enonan = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_arr1d);
par_arr1d = NULL;
Py_XDECREF(par_second_arr1d);
par_second_arr1d = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_enonan);
var_enonan = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_b = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count = MAKE_FUNCTION_FRAME(tstate, code_objects_6ae055362748aee3baf3a4e2d1536952, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_errstate);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = 229;
tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ignore_str_plain_ignore_tuple, 0), mod_consts.const_tuple_str_plain_invalid_str_plain_divide_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = 229;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_a);
tmp_isinstance_inst_1 = par_a;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooo";
    goto try_except_handler_3;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_1 = par_out;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_divide);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_b);
tmp_kw_call_arg_value_1_1 = par_b;
CHECK_OBJECT(par_a);
tmp_kw_call_dict_value_0_1 = par_a;
tmp_kw_call_dict_value_1_1 = mod_consts.const_str_plain_unsafe;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = 232;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_casting_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
tmp_expression_value_6 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_divide);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_2 = par_a;
CHECK_OBJECT(par_b);
tmp_kw_call_arg_value_1_2 = par_b;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_2 = par_out;
tmp_kw_call_dict_value_1_2 = mod_consts.const_str_plain_unsafe;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = 234;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_casting_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_2 = par_out;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
CHECK_OBJECT(par_a);
tmp_expression_value_8 = par_a;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_a);
tmp_truediv_expr_left_1 = par_a;
CHECK_OBJECT(par_b);
tmp_truediv_expr_right_1 = par_b;
tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 238;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = 238;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
CHECK_OBJECT(par_a);
tmp_truediv_expr_left_2 = par_a;
CHECK_OBJECT(par_b);
tmp_truediv_expr_right_2 = par_b;
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
goto try_return_handler_5;
}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 237;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame)) {
        frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_5;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_return_handler_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
// End of try:
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
tmp_expression_value_9 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_divide);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_3 = par_a;
CHECK_OBJECT(par_b);
tmp_kw_call_arg_value_1_3 = par_b;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_3 = par_out;
tmp_kw_call_dict_value_1_3 = mod_consts.const_str_plain_unsafe;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = 244;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_casting_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
branch_end_3:;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = 229;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 229;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame)) {
        frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_6;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 229;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame)) {
        frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_6;
branch_end_5:;
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_1:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = 229;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame.f_lineno = 229;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_5);

exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_7:;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count,
    type_description_1,
    par_a,
    par_b,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__6__nanmin_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_keepdims = python_pars[3];
PyObject *par_initial = python_pars[4];
PyObject *par_where = python_pars[5];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__7_nanmin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_keepdims = python_pars[3];
PyObject *par_initial = python_pars[4];
PyObject *par_where = python_pars[5];
PyObject *var_kwargs = NULL;
PyObject *var_res = NULL;
PyObject *var_mask = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_kwargs == NULL);
var_kwargs = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin = MAKE_FUNCTION_FRAME(tstate, code_objects_4fef972010d96a43f70f30e029bfd6ff, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_keepdims);
tmp_cmp_expr_left_1 = par_keepdims;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__NoValue);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_keepdims);
tmp_dictset_value = par_keepdims;
CHECK_OBJECT(var_kwargs);
tmp_dictset_dict = var_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_keepdims;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_initial);
tmp_cmp_expr_left_2 = par_initial;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__NoValue);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(par_initial);
tmp_dictset_value = par_initial;
CHECK_OBJECT(var_kwargs);
tmp_dictset_dict = var_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_initial;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_where);
tmp_cmp_expr_left_3 = par_where;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__NoValue);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(par_where);
tmp_dictset_value = par_where;
CHECK_OBJECT(var_kwargs);
tmp_dictset_dict = var_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_where;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_type_arg_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_a);
tmp_type_arg_1 = par_a;
tmp_cmp_expr_left_4 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_4 == NULL));
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndarray);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_a);
tmp_type_arg_2 = par_a;
tmp_cmp_expr_left_5 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_cmp_expr_left_5 == NULL));
tmp_expression_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_memmap);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
tmp_and_left_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_left_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_a);
tmp_expression_value_6 = par_a;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dtype);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_object_);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_expression_value_9 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_fmin);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_reduce);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_axis;
CHECK_OBJECT(par_axis);
tmp_dict_value_1 = par_axis;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_out;
CHECK_OBJECT(par_out);
tmp_dict_value_1 = par_out;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_kwargs);
tmp_direct_call_arg4_1 = var_kwargs;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_res == NULL);
var_res = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 357;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_res);
tmp_args_element_value_1 = var_res;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin->m_frame.f_lineno = 357;
tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_isnan, tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin->m_frame.f_lineno = 357;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_any);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 357;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_10 = module_var_accessor_numpy$lib$_nanfunctions_impl$warnings(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin->m_frame.f_lineno = 358;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_11;
tmp_called_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_2 = par_a;
tmp_expression_value_11 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_inf);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin->m_frame.f_lineno = 362;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooooo";
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



exception_lineno = 362;
type_description_1 = "ooooooooo";
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



exception_lineno = 362;
type_description_1 = "ooooooooo";
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



exception_lineno = 362;
type_description_1 = "ooooooooo";
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
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_6;
    Py_INCREF(par_a);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_7);
var_mask = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_direct_call_arg4_2;
tmp_expression_value_12 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_amin);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_3 = par_a;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_3);
tmp_dict_key_2 = mod_consts.const_str_plain_axis;
CHECK_OBJECT(par_axis);
tmp_dict_value_2 = par_axis;
tmp_direct_call_arg3_2 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_out;
CHECK_OBJECT(par_out);
tmp_dict_value_2 = par_out;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_kwargs);
tmp_direct_call_arg4_2 = var_kwargs;
Py_INCREF(tmp_direct_call_arg4_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2, tmp_direct_call_arg4_2};
    tmp_assign_source_8 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_res == NULL);
var_res = tmp_assign_source_8;
}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_mask);
tmp_cmp_expr_left_7 = var_mask;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(var_res);
tmp_return_value = var_res;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(var_kwargs);
tmp_dict_arg_value_1 = var_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_initial;
tmp_default_value_1 = Py_None;
tmp_capi_result_1 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
assert(!(tmp_capi_result_1 == NULL));
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_direct_call_arg3_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_direct_call_arg4_3;
tmp_expression_value_13 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 369;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_all);
if (tmp_direct_call_arg1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_tuple_element_4 = var_mask;
tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 0, tmp_tuple_element_4);
tmp_dict_key_3 = mod_consts.const_str_plain_axis;
CHECK_OBJECT(par_axis);
tmp_dict_value_3 = par_axis;
tmp_direct_call_arg3_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_kwargs);
tmp_direct_call_arg4_3 = var_kwargs;
Py_INCREF(tmp_direct_call_arg4_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3, tmp_direct_call_arg3_3, tmp_direct_call_arg4_3};
    tmp_assign_source_9 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mask;
    assert(old != NULL);
    var_mask = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_2;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_args_element_value_4 = var_mask;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin->m_frame.f_lineno = 370;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_any, tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 370;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$_copyto(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__copyto);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_res);
tmp_args_element_value_5 = var_res;
tmp_expression_value_14 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_nan);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_args_element_value_7 = var_mask;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin->m_frame.f_lineno = 371;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    assert(old != NULL);
    var_res = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_15 = module_var_accessor_numpy$lib$_nanfunctions_impl$warnings(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 372;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_warn);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = mod_consts.const_str_digest_e5906d9b36689902967f4292e56d9fde;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 372;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin->m_frame.f_lineno = 372;
tmp_call_result_4 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_7:;
branch_end_4:;
if (var_res == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_res);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 374;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_res;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_keepdims,
    par_initial,
    par_where,
    var_kwargs,
    var_res,
    var_mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__7_nanmin);

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
CHECK_OBJECT(var_kwargs);
CHECK_OBJECT(var_kwargs);
Py_DECREF(var_kwargs);
var_kwargs = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
CHECK_OBJECT(var_kwargs);
CHECK_OBJECT(var_kwargs);
Py_DECREF(var_kwargs);
var_kwargs = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__8__nanmax_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_keepdims = python_pars[3];
PyObject *par_initial = python_pars[4];
PyObject *par_where = python_pars[5];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__9_nanmax(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_keepdims = python_pars[3];
PyObject *par_initial = python_pars[4];
PyObject *par_where = python_pars[5];
PyObject *var_kwargs = NULL;
PyObject *var_res = NULL;
PyObject *var_mask = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_kwargs == NULL);
var_kwargs = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax = MAKE_FUNCTION_FRAME(tstate, code_objects_e7ff5085582a25445574b0635c0b3fb2, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_keepdims);
tmp_cmp_expr_left_1 = par_keepdims;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__NoValue);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_keepdims);
tmp_dictset_value = par_keepdims;
CHECK_OBJECT(var_kwargs);
tmp_dictset_dict = var_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_keepdims;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_initial);
tmp_cmp_expr_left_2 = par_initial;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 477;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__NoValue);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(par_initial);
tmp_dictset_value = par_initial;
CHECK_OBJECT(var_kwargs);
tmp_dictset_dict = var_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_initial;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_where);
tmp_cmp_expr_left_3 = par_where;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 479;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__NoValue);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(par_where);
tmp_dictset_value = par_where;
CHECK_OBJECT(var_kwargs);
tmp_dictset_dict = var_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_where;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_type_arg_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_a);
tmp_type_arg_1 = par_a;
tmp_cmp_expr_left_4 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_4 == NULL));
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndarray);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_a);
tmp_type_arg_2 = par_a;
tmp_cmp_expr_left_5 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_cmp_expr_left_5 == NULL));
tmp_expression_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_memmap);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
tmp_and_left_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_left_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_a);
tmp_expression_value_6 = par_a;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dtype);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_object_);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_expression_value_9 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 485;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_fmax);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_reduce);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_axis;
CHECK_OBJECT(par_axis);
tmp_dict_value_1 = par_axis;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_out;
CHECK_OBJECT(par_out);
tmp_dict_value_1 = par_out;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_kwargs);
tmp_direct_call_arg4_1 = var_kwargs;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_res == NULL);
var_res = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 486;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_res);
tmp_args_element_value_1 = var_res;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax->m_frame.f_lineno = 486;
tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_isnan, tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax->m_frame.f_lineno = 486;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_any);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 486;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_10 = module_var_accessor_numpy$lib$_nanfunctions_impl$warnings(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 487;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 487;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax->m_frame.f_lineno = 487;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_11;
tmp_called_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 491;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_2 = par_a;
tmp_expression_value_11 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 491;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_inf);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax->m_frame.f_lineno = 491;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "ooooooooo";
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



exception_lineno = 491;
type_description_1 = "ooooooooo";
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



exception_lineno = 491;
type_description_1 = "ooooooooo";
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



exception_lineno = 491;
type_description_1 = "ooooooooo";
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
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_6;
    Py_INCREF(par_a);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_7);
var_mask = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_direct_call_arg4_2;
tmp_expression_value_12 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 492;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_amax);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_3 = par_a;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_3);
tmp_dict_key_2 = mod_consts.const_str_plain_axis;
CHECK_OBJECT(par_axis);
tmp_dict_value_2 = par_axis;
tmp_direct_call_arg3_2 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_out;
CHECK_OBJECT(par_out);
tmp_dict_value_2 = par_out;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_kwargs);
tmp_direct_call_arg4_2 = var_kwargs;
Py_INCREF(tmp_direct_call_arg4_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2, tmp_direct_call_arg4_2};
    tmp_assign_source_8 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_res == NULL);
var_res = tmp_assign_source_8;
}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_mask);
tmp_cmp_expr_left_7 = var_mask;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(var_res);
tmp_return_value = var_res;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(var_kwargs);
tmp_dict_arg_value_1 = var_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_initial;
tmp_default_value_1 = Py_None;
tmp_capi_result_1 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
assert(!(tmp_capi_result_1 == NULL));
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_direct_call_arg3_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_direct_call_arg4_3;
tmp_expression_value_13 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 498;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_all);
if (tmp_direct_call_arg1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_tuple_element_4 = var_mask;
tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 0, tmp_tuple_element_4);
tmp_dict_key_3 = mod_consts.const_str_plain_axis;
CHECK_OBJECT(par_axis);
tmp_dict_value_3 = par_axis;
tmp_direct_call_arg3_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_kwargs);
tmp_direct_call_arg4_3 = var_kwargs;
Py_INCREF(tmp_direct_call_arg4_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3, tmp_direct_call_arg3_3, tmp_direct_call_arg4_3};
    tmp_assign_source_9 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mask;
    assert(old != NULL);
    var_mask = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_2;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 499;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_args_element_value_4 = var_mask;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax->m_frame.f_lineno = 499;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_any, tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 499;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$_copyto(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__copyto);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_res);
tmp_args_element_value_5 = var_res;
tmp_expression_value_14 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_nan);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_args_element_value_7 = var_mask;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax->m_frame.f_lineno = 500;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    assert(old != NULL);
    var_res = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_15 = module_var_accessor_numpy$lib$_nanfunctions_impl$warnings(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 501;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_warn);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = mod_consts.const_str_digest_e5906d9b36689902967f4292e56d9fde;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 501;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax->m_frame.f_lineno = 501;
tmp_call_result_4 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_7:;
branch_end_4:;
if (var_res == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_res);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 503;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_res;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_keepdims,
    par_initial,
    par_where,
    var_kwargs,
    var_res,
    var_mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__9_nanmax);

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
CHECK_OBJECT(var_kwargs);
CHECK_OBJECT(var_kwargs);
Py_DECREF(var_kwargs);
var_kwargs = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
CHECK_OBJECT(var_kwargs);
CHECK_OBJECT(var_kwargs);
Py_DECREF(var_kwargs);
var_kwargs = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__10__nanargmin_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_keepdims = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_keepdims = python_pars[3];
PyObject *var_mask = NULL;
PyObject *var_res = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin = MAKE_FUNCTION_FRAME(tstate, code_objects_a6746492b721fc31e6da624240b34275, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 558;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 558;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_inf);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin->m_frame.f_lineno = 558;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
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



exception_lineno = 558;
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



exception_lineno = 558;
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



exception_lineno = 558;
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
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_5);
var_mask = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_mask);
tmp_cmp_expr_left_1 = var_mask;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_mask);
tmp_expression_value_2 = var_mask;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 559;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 560;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_all);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_kw_call_arg_value_0_1 = var_mask;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin->m_frame.f_lineno = 560;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_axis_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mask;
    assert(old != NULL);
    var_mask = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_2;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 561;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_args_element_value_3 = var_mask;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin->m_frame.f_lineno = 561;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_any, tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 561;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin->m_frame.f_lineno = 562;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 562;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 563;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_argmin);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_2 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_2 = par_axis;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_1_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_2_1 = par_keepdims;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin->m_frame.f_lineno = 563;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_axis_str_plain_out_str_plain_keepdims_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_res == NULL);
var_res = tmp_assign_source_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_keepdims,
    var_mask,
    var_res
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_res);
tmp_return_value = var_res;
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
Py_XDECREF(var_mask);
var_mask = NULL;
CHECK_OBJECT(var_res);
CHECK_OBJECT(var_res);
Py_DECREF(var_res);
var_res = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__12__nanargmax_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_keepdims = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_keepdims = python_pars[3];
PyObject *var_mask = NULL;
PyObject *var_res = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax = MAKE_FUNCTION_FRAME(tstate, code_objects_c1f35139845020a58fa940639bd9c6a1, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 620;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 620;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_inf);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax->m_frame.f_lineno = 620;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
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



exception_lineno = 620;
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



exception_lineno = 620;
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



exception_lineno = 620;
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
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_5);
var_mask = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_mask);
tmp_cmp_expr_left_1 = var_mask;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_mask);
tmp_expression_value_2 = var_mask;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 621;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 622;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_all);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_kw_call_arg_value_0_1 = var_mask;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax->m_frame.f_lineno = 622;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_axis_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mask;
    assert(old != NULL);
    var_mask = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_2;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 623;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_args_element_value_3 = var_mask;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax->m_frame.f_lineno = 623;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_any, tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 623;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 623;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax->m_frame.f_lineno = 624;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 624;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 625;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_argmax);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_2 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_2 = par_axis;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_1_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_2_1 = par_keepdims;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax->m_frame.f_lineno = 625;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_axis_str_plain_out_str_plain_keepdims_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_res == NULL);
var_res = tmp_assign_source_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_keepdims,
    var_mask,
    var_res
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_res);
tmp_return_value = var_res;
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
Py_XDECREF(var_mask);
var_mask = NULL;
CHECK_OBJECT(var_res);
CHECK_OBJECT(var_res);
Py_DECREF(var_res);
var_res = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__14__nansum_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_keepdims = python_pars[4];
PyObject *par_initial = python_pars[5];
PyObject *par_where = python_pars[6];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__15_nansum(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_keepdims = python_pars[4];
PyObject *par_initial = python_pars[5];
PyObject *par_where = python_pars[6];
PyObject *var_mask = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum = MAKE_FUNCTION_FRAME(tstate, code_objects_6250deedef20a346abaa6d8a684155b2, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 725;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
tmp_args_element_value_2 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum->m_frame.f_lineno = 725;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "oooooooo";
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



exception_lineno = 725;
type_description_1 = "oooooooo";
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



exception_lineno = 725;
type_description_1 = "oooooooo";
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



exception_lineno = 725;
type_description_1 = "oooooooo";
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
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_5);
var_mask = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 726;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_sum);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_2_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_3_1 = par_keepdims;
CHECK_OBJECT(par_initial);
tmp_kw_call_dict_value_4_1 = par_initial;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_5_1 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum->m_frame.f_lineno = 726;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_9ee81aa0a0314b5850c123bdc8a7af56_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_keepdims,
    par_initial,
    par_where,
    var_mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__15_nansum);

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
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__16__nanprod_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_keepdims = python_pars[4];
PyObject *par_initial = python_pars[5];
PyObject *par_where = python_pars[6];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__17_nanprod(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_keepdims = python_pars[4];
PyObject *par_initial = python_pars[5];
PyObject *par_where = python_pars[6];
PyObject *var_mask = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod = MAKE_FUNCTION_FRAME(tstate, code_objects_8ea0e2981714723c68caee597ce60a9e, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 807;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
tmp_args_element_value_2 = const_int_pos_1;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod->m_frame.f_lineno = 807;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 807;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 807;
type_description_1 = "oooooooo";
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



exception_lineno = 807;
type_description_1 = "oooooooo";
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



exception_lineno = 807;
type_description_1 = "oooooooo";
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



exception_lineno = 807;
type_description_1 = "oooooooo";
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
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_5);
var_mask = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 808;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_prod);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 808;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_2_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_3_1 = par_keepdims;
CHECK_OBJECT(par_initial);
tmp_kw_call_dict_value_4_1 = par_initial;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_5_1 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod->m_frame.f_lineno = 808;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_9ee81aa0a0314b5850c123bdc8a7af56_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 808;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_keepdims,
    par_initial,
    par_where,
    var_mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__17_nanprod);

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
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__18__nancumsum_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *var_mask = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum = MAKE_FUNCTION_FRAME(tstate, code_objects_1debfbf72859a06f57b43d855cffe571, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 877;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
tmp_args_element_value_2 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum->m_frame.f_lineno = 877;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 877;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 877;
type_description_1 = "ooooo";
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



exception_lineno = 877;
type_description_1 = "ooooo";
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



exception_lineno = 877;
type_description_1 = "ooooo";
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



exception_lineno = 877;
type_description_1 = "ooooo";
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
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_5);
var_mask = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 878;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cumsum);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_2_1 = par_out;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum->m_frame.f_lineno = 878;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_axis_str_plain_dtype_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    var_mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum);

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
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__20__nancumprod_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *var_mask = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod = MAKE_FUNCTION_FRAME(tstate, code_objects_96042b0c06762ccd1d860871717b7982, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 943;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
tmp_args_element_value_2 = const_int_pos_1;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod->m_frame.f_lineno = 943;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 943;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 943;
type_description_1 = "ooooo";
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



exception_lineno = 943;
type_description_1 = "ooooo";
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



exception_lineno = 943;
type_description_1 = "ooooo";
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



exception_lineno = 943;
type_description_1 = "ooooo";
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
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_5);
var_mask = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 944;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cumprod);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 944;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_2_1 = par_out;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod->m_frame.f_lineno = 944;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_axis_str_plain_dtype_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 944;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    var_mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod);

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
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__22__nanmean_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_keepdims = python_pars[4];
PyObject *par_where = python_pars[5];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__23_nanmean(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_keepdims = python_pars[4];
PyObject *par_where = python_pars[5];
PyObject *var_arr = NULL;
PyObject *var_mask = NULL;
PyObject *var_cnt = NULL;
PyObject *var_tot = NULL;
PyObject *var_avg = NULL;
PyObject *var_isbad = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean = MAKE_FUNCTION_FRAME(tstate, code_objects_3eb483a4ab43cc8da2566948d0ff1f54, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1031;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
tmp_args_element_value_2 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1031;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1031;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1031;
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



exception_lineno = 1031;
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



exception_lineno = 1031;
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



exception_lineno = 1031;
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
assert(var_arr == NULL);
Py_INCREF(tmp_assign_source_4);
var_arr = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_5);
var_mask = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_mask);
tmp_cmp_expr_left_1 = var_mask;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1033;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mean);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1033;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_1 = var_arr;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_2_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_3_1 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_4_1 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1033;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_d96307d9cab41acf0ccd5c1f96a95623_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1033;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_2 = par_dtype;
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
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1037;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_3 = par_dtype;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1037;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dtype, tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1037;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_3 = par_dtype;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_dtype);
tmp_expression_value_2 = par_dtype;
tmp_issubclass_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_type);
if (tmp_issubclass_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1038;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 1038;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_inexact);
if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 1038;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_cls_1);
Py_DECREF(tmp_issubclass_cls_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1038;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1038;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1039;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1039;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_4 = par_out;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_out);
tmp_expression_value_5 = par_out;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1040;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_issubclass_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1040;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_2);

exception_lineno = 1040;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_inexact);
if (tmp_issubclass_classes_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_2);

exception_lineno = 1040;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
CHECK_OBJECT(tmp_issubclass_cls_2);
Py_DECREF(tmp_issubclass_cls_2);
CHECK_OBJECT(tmp_issubclass_classes_2);
Py_DECREF(tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1040;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1040;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_4 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_4 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_32383d08c19cf306ff97b1d17823d642;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1041;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 1041;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_2;
tmp_expression_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1043;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_sum);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1043;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_operand_value_3 = var_mask;
tmp_kw_call_arg_value_0_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_3);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1043;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_2 = par_axis;
tmp_expression_value_8 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 1043;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_intp);
if (tmp_kw_call_dict_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 1043;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_2_2 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_3_2 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1043;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_c431dd99e8d24915e3eeec18855a81bc_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_1_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1043;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cnt == NULL);
var_cnt = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
PyObject *tmp_kw_call_dict_value_2_3;
PyObject *tmp_kw_call_dict_value_3_3;
PyObject *tmp_kw_call_dict_value_4_2;
tmp_expression_value_9 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1045;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_sum);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1045;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_3 = var_arr;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_3 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_3 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_2_3 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_3_3 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_4_2 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1045;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3, tmp_kw_call_dict_value_4_2};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_d96307d9cab41acf0ccd5c1f96a95623_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1045;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tot == NULL);
var_tot = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_4;
tmp_called_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$_divide_by_count(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__divide_by_count);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1047;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_tot);
tmp_kw_call_arg_value_0_4 = var_tot;
CHECK_OBJECT(var_cnt);
tmp_kw_call_arg_value_1_1 = var_cnt;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_4 = par_out;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1047;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1047;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_avg == NULL);
var_avg = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_cnt);
tmp_cmp_expr_left_5 = var_cnt;
tmp_cmp_expr_right_5 = const_int_0;
tmp_assign_source_10 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1049;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_isbad == NULL);
var_isbad = tmp_assign_source_10;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_isbad);
tmp_called_instance_2 = var_isbad;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1050;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_any);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1050;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 1050;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_10 = module_var_accessor_numpy$lib$_nanfunctions_impl$warnings(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1051;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_warn);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1051;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1051;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame.f_lineno = 1051;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1051;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_keepdims,
    par_where,
    var_arr,
    var_mask,
    var_cnt,
    var_tot,
    var_avg,
    var_isbad
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__23_nanmean);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_avg);
tmp_return_value = var_avg;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_dtype);
par_dtype = NULL;
CHECK_OBJECT(var_arr);
CHECK_OBJECT(var_arr);
Py_DECREF(var_arr);
var_arr = NULL;
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_cnt);
var_cnt = NULL;
Py_XDECREF(var_tot);
var_tot = NULL;
Py_XDECREF(var_avg);
var_avg = NULL;
Py_XDECREF(var_isbad);
var_isbad = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(var_arr);
var_arr = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_cnt);
var_cnt = NULL;
Py_XDECREF(var_tot);
var_tot = NULL;
Py_XDECREF(var_avg);
var_avg = NULL;
Py_XDECREF(var_isbad);
var_isbad = NULL;
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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_arr1d = python_pars[0];
PyObject *par_overwrite_input = python_pars[1];
PyObject *var_arr1d_parsed = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d = MAKE_FUNCTION_FRAME(tstate, code_objects_27554cb9da87c5b8d9364eefcfacb5ad, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_remove_nan_1d(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__remove_nan_1d);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1062;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_arr1d);
tmp_kw_call_arg_value_0_1 = par_arr1d;
CHECK_OBJECT(par_overwrite_input);
tmp_kw_call_dict_value_0_1 = par_overwrite_input;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d->m_frame.f_lineno = 1062;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_overwrite_input_tuple);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1062;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1062;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1062;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1062;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1062;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1062;
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
assert(var_arr1d_parsed == NULL);
Py_INCREF(tmp_assign_source_5);
var_arr1d_parsed = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_6);
var__ = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = par_overwrite_input;
    assert(old != NULL);
    par_overwrite_input = tmp_assign_source_7;
    Py_INCREF(par_overwrite_input);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_arr1d_parsed);
tmp_expression_value_1 = var_arr1d_parsed;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1066;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1066;
type_description_1 = "oooo";
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
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_arr1d);
tmp_expression_value_2 = par_arr1d;
tmp_subscript_value_1 = const_int_neg_1;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, -1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1069;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1071;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_median);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1071;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr1d_parsed);
tmp_kw_call_arg_value_0_2 = var_arr1d_parsed;
CHECK_OBJECT(par_overwrite_input);
tmp_kw_call_dict_value_0_2 = par_overwrite_input;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d->m_frame.f_lineno = 1071;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_overwrite_input_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1071;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d,
    type_description_1,
    par_arr1d,
    par_overwrite_input,
    var_arr1d_parsed,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_overwrite_input);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
par_overwrite_input = NULL;
CHECK_OBJECT(var_arr1d_parsed);
CHECK_OBJECT(var_arr1d_parsed);
Py_DECREF(var_arr1d_parsed);
var_arr1d_parsed = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_overwrite_input);
par_overwrite_input = NULL;
Py_XDECREF(var_arr1d_parsed);
var_arr1d_parsed = NULL;
Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_arr1d);
Py_DECREF(par_arr1d);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_arr1d);
Py_DECREF(par_arr1d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_overwrite_input = python_pars[3];
PyObject *var_part = NULL;
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian = MAKE_FUNCTION_FRAME(tstate, code_objects_03a56cfc294b96f3e24d552f980e3133, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian) == 2);

// Framed code:
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
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_1 = par_axis;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1081;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1081;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_a);
tmp_called_instance_1 = par_a;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian->m_frame.f_lineno = 1082;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1082;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_part == NULL);
var_part = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_3 = par_out;
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian1d(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanmedian1d);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1084;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_part);
tmp_args_element_value_1 = var_part;
CHECK_OBJECT(par_overwrite_input);
tmp_args_element_value_2 = par_overwrite_input;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian->m_frame.f_lineno = 1084;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1084;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_called_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian1d(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanmedian1d);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1086;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_part);
tmp_args_element_value_3 = var_part;
CHECK_OBJECT(par_overwrite_input);
tmp_args_element_value_4 = par_overwrite_input;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian->m_frame.f_lineno = 1086;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1086;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_out);
tmp_ass_subscribed_1 = par_out;
tmp_ass_subscript_1 = Py_Ellipsis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1086;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(par_out);
tmp_return_value = par_out;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_3 = par_a;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_shape);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1092;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_1 = par_axis;
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1092;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_600;
tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1092;
type_description_1 = "oooooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian_small(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanmedian_small);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1093;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_5 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_6 = par_axis;
CHECK_OBJECT(par_out);
tmp_args_element_value_7 = par_out;
CHECK_OBJECT(par_overwrite_input);
tmp_args_element_value_8 = par_overwrite_input;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian->m_frame.f_lineno = 1093;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1093;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1094;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_apply_along_axis);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1094;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian1d(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanmedian1d);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 1094;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_10 = par_axis;
CHECK_OBJECT(par_a);
tmp_args_element_value_11 = par_a;
CHECK_OBJECT(par_overwrite_input);
tmp_args_element_value_12 = par_overwrite_input;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian->m_frame.f_lineno = 1094;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1094;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_5 = par_out;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_result);
tmp_ass_subvalue_2 = var_result;
CHECK_OBJECT(par_out);
tmp_ass_subscribed_2 = par_out;
tmp_ass_subscript_2 = Py_Ellipsis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1096;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_overwrite_input,
    var_part,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_part);
var_part = NULL;
Py_XDECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_part);
var_part = NULL;
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
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_overwrite_input = python_pars[3];
PyObject *var_m = NULL;
PyObject *var_i = NULL;
PyObject *var_fill_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small = MAKE_FUNCTION_FRAME(tstate, code_objects_5ec5b9da53a8989f26cbcf22d2df7c9c, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ma);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_masked_array);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_3 = par_a;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame.f_lineno = 1107;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isnan, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame.f_lineno = 1107;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1107;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1108;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ma);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1108;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_median);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1108;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
CHECK_OBJECT(par_overwrite_input);
tmp_kw_call_dict_value_1_1 = par_overwrite_input;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame.f_lineno = 1108;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_axis_str_plain_overwrite_input_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1108;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_m == NULL);
var_m = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1109;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_count_nonzero);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1109;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_expression_value_6 = var_m;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_mask);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1109;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame.f_lineno = 1109;
tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_ravel);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1109;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame.f_lineno = 1109;
tmp_xrange_low_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1109;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1109;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1109;
type_description_1 = "ooooooo";
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
tmp_assign_source_4 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 1109;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_5 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_5;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$warnings(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1110;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_warn);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1110;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1110;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame.f_lineno = 1110;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1110;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1109;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_6;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_m);
tmp_expression_value_9 = var_m;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_m;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame.f_lineno = 1113;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_timedelta64,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_NaT_tuple, 0)
);

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_10 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_nan);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_fill_value == NULL);
var_fill_value = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_2 = par_out;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_m);
tmp_called_instance_4 = var_m;
CHECK_OBJECT(var_fill_value);
tmp_args_element_value_5 = var_fill_value;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame.f_lineno = 1115;
tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_filled, tmp_args_element_value_5);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1115;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_out);
tmp_ass_subscribed_1 = par_out;
tmp_ass_subscript_1 = Py_Ellipsis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1115;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(par_out);
tmp_return_value = par_out;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(var_m);
tmp_called_instance_5 = var_m;
CHECK_OBJECT(var_fill_value);
tmp_args_element_value_6 = var_fill_value;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame.f_lineno = 1117;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_filled, tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1117;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_overwrite_input,
    var_m,
    var_i,
    var_fill_value
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small);

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
CHECK_OBJECT(var_m);
CHECK_OBJECT(var_m);
Py_DECREF(var_m);
var_m = NULL;
Py_XDECREF(var_i);
var_i = NULL;
CHECK_OBJECT(var_fill_value);
CHECK_OBJECT(var_fill_value);
Py_DECREF(var_fill_value);
var_fill_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_fill_value);
var_fill_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__27__nanmedian_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_overwrite_input = python_pars[3];
PyObject *par_keepdims = python_pars[4];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_overwrite_input = python_pars[3];
PyObject *par_keepdims = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian = MAKE_FUNCTION_FRAME(tstate, code_objects_d86e3ab9319136bd74a47957424d40be, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1209;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian->m_frame.f_lineno = 1209;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1209;
type_description_1 = "ooooo";
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
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1212;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1212;
type_description_1 = "ooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_nanmean);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_1_1 = par_axis;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_1_1 = par_keepdims;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian->m_frame.f_lineno = 1213;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_keepdims_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$fnb(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fnb);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1215;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__ureduce);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1215;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_2 = par_a;
tmp_kw_call_dict_value_0_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian(tstate);
if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanmedian);
}

if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 1215;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_1_2 = par_keepdims;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_2_1 = par_axis;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_3_1 = par_out;
CHECK_OBJECT(par_overwrite_input);
tmp_kw_call_dict_value_4_1 = par_overwrite_input;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian->m_frame.f_lineno = 1215;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_18c686e0bd0358e411a4b0da67e5f555_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1215;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_overwrite_input,
    par_keepdims
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian);

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
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__29__nanpercentile_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_q = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_overwrite_input = python_pars[4];
PyObject *par_method = python_pars[5];
PyObject *par_keepdims = python_pars[6];
PyObject *par_weights = python_pars[7];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_q);
tmp_tuple_element_1 = par_q;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_weights);
tmp_tuple_element_1 = par_weights;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_q = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_overwrite_input = python_pars[4];
PyObject *par_method = python_pars[5];
PyObject *par_keepdims = python_pars[6];
PyObject *par_weights = python_pars[7];
PyObject *var_weak_q = NULL;
PyObject *var_msg = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile = MAKE_FUNCTION_FRAME(tstate, code_objects_7b10a7b4ddd3b3c1a5ed9ff9bc575300, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1376;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1376;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1376;
type_description_1 = "oooooooooo";
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
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1377;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1377;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_c;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1377;
type_description_1 = "oooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_387948cdde59e718248e42c4a519f0df;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1378;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1378;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_q);
tmp_type_arg_1 = par_q;
tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_int_type_float_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1380;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = (tmp_res == 1) ? Py_True : Py_False;
assert(var_weak_q == NULL);
Py_INCREF(tmp_assign_source_2);
var_weak_q = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1381;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_true_divide);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1381;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_tuple_element_1 = par_q;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_100;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_5c510a341eb8ce89f98f64af29a634ed);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1381;
tmp_assign_source_3 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1381;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_q;
    assert(old != NULL);
    par_q = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$fnb(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fnb);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1382;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_args_element_value_2 = par_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1382;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__quantile_is_valid, tmp_args_element_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1382;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1382;
type_description_1 = "oooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_5ab373ae36e2bb6baafef27c86182e81;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1383;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 1383;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_3 = par_weights;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
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
CHECK_OBJECT(par_method);
tmp_cmp_expr_left_4 = par_method;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_inverted_cdf;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1386;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_088e9f614b14d8815ab178502a92a8b5;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_method);
tmp_format_value_1 = par_method;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1388;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_4 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_4;
}
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_3 = var_msg;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1389;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 1389;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_5 = par_axis;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nx(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1391;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_normalize_axis_tuple);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1391;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_tuple_element_3 = par_axis;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_a);
tmp_expression_value_5 = par_a;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndim);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1391;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_b09b449426c4301706aa0d740b37c9fb);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1391;
tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1391;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_axis;
    assert(old != NULL);
    par_axis = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_called_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$_weights_are_valid(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__weights_are_valid);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1392;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_weights);
tmp_kw_call_value_0_1 = par_weights;
CHECK_OBJECT(par_a);
tmp_kw_call_value_1_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_value_2_1 = par_axis;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1392;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_weights_str_plain_a_str_plain_axis_tuple);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1392;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_weights;
    assert(old != NULL);
    par_weights = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
int tmp_truth_name_1;
tmp_expression_value_6 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1393;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_any);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1393;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_6 = par_weights;
tmp_cmp_expr_right_6 = const_int_0;
tmp_args_element_value_3 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1393;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1393;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1393;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 1393;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_54f0fa2a70d6e0a34413a6cfadeca9d3;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1394;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 1394;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
branch_no_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_unchecked(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanquantile_unchecked);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1396;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_4 = par_a;
CHECK_OBJECT(par_q);
tmp_args_element_value_5 = par_q;
if (par_axis == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1397;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = par_axis;
CHECK_OBJECT(par_out);
tmp_args_element_value_7 = par_out;
CHECK_OBJECT(par_overwrite_input);
tmp_args_element_value_8 = par_overwrite_input;
CHECK_OBJECT(par_method);
tmp_args_element_value_9 = par_method;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_10 = par_keepdims;
CHECK_OBJECT(par_weights);
tmp_args_element_value_11 = par_weights;
CHECK_OBJECT(var_weak_q);
tmp_args_element_value_12 = var_weak_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame.f_lineno = 1396;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS9(tstate, tmp_called_value_5, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1396;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile,
    type_description_1,
    par_a,
    par_q,
    par_axis,
    par_out,
    par_overwrite_input,
    par_method,
    par_keepdims,
    par_weights,
    var_weak_q,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile);

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
CHECK_OBJECT(par_q);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
par_q = NULL;
Py_XDECREF(par_axis);
par_axis = NULL;
CHECK_OBJECT(par_weights);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
par_weights = NULL;
CHECK_OBJECT(var_weak_q);
CHECK_OBJECT(var_weak_q);
Py_DECREF(var_weak_q);
var_weak_q = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_q);
par_q = NULL;
Py_XDECREF(par_axis);
par_axis = NULL;
Py_XDECREF(par_weights);
par_weights = NULL;
Py_XDECREF(var_weak_q);
var_weak_q = NULL;
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
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__31__nanquantile_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_q = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_overwrite_input = python_pars[4];
PyObject *par_method = python_pars[5];
PyObject *par_keepdims = python_pars[6];
PyObject *par_weights = python_pars[7];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_q);
tmp_tuple_element_1 = par_q;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_weights);
tmp_tuple_element_1 = par_weights;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_q = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_overwrite_input = python_pars[4];
PyObject *par_method = python_pars[5];
PyObject *par_keepdims = python_pars[6];
PyObject *par_weights = python_pars[7];
PyObject *var_weak_q = NULL;
PyObject *var_msg = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile = MAKE_FUNCTION_FRAME(tstate, code_objects_441c19adcdc522cab478555c1fcc7304, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1552;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1552;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1552;
type_description_1 = "oooooooooo";
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
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1553;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1553;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_c;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1553;
type_description_1 = "oooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_387948cdde59e718248e42c4a519f0df;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1554;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1554;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_q);
tmp_type_arg_1 = par_q;
tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_int_type_float_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1556;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = (tmp_res == 1) ? Py_True : Py_False;
assert(var_weak_q == NULL);
Py_INCREF(tmp_assign_source_2);
var_weak_q = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1557;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_args_element_value_2 = par_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1557;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_asanyarray, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_q;
    assert(old != NULL);
    par_q = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$fnb(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fnb);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1559;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_args_element_value_3 = par_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1559;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__quantile_is_valid, tmp_args_element_value_3);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1559;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1559;
type_description_1 = "oooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_f47df35bbcf99e0a872c43dc6981620b;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1560;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 1560;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_3 = par_weights;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
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
CHECK_OBJECT(par_method);
tmp_cmp_expr_left_4 = par_method;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_inverted_cdf;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1563;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_088e9f614b14d8815ab178502a92a8b5;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_method);
tmp_format_value_1 = par_method;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1565;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_4 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_4;
}
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_3 = var_msg;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1566;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 1566;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_5 = par_axis;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nx(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1568;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_normalize_axis_tuple);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1568;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_tuple_element_2 = par_axis;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_a);
tmp_expression_value_4 = par_a;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndim);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1568;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_b09b449426c4301706aa0d740b37c9fb);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1568;
tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1568;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_axis;
    assert(old != NULL);
    par_axis = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_called_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$_weights_are_valid(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__weights_are_valid);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1569;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_weights);
tmp_kw_call_value_0_1 = par_weights;
CHECK_OBJECT(par_a);
tmp_kw_call_value_1_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_value_2_1 = par_axis;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1569;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_weights_str_plain_a_str_plain_axis_tuple);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1569;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_weights;
    assert(old != NULL);
    par_weights = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
int tmp_truth_name_1;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1570;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_any);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1570;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_6 = par_weights;
tmp_cmp_expr_right_6 = const_int_0;
tmp_args_element_value_4 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1570;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1570;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1570;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 1570;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_54f0fa2a70d6e0a34413a6cfadeca9d3;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1571;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 1571;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
branch_no_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_unchecked(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanquantile_unchecked);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1573;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_5 = par_a;
CHECK_OBJECT(par_q);
tmp_args_element_value_6 = par_q;
if (par_axis == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1574;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = par_axis;
CHECK_OBJECT(par_out);
tmp_args_element_value_8 = par_out;
CHECK_OBJECT(par_overwrite_input);
tmp_args_element_value_9 = par_overwrite_input;
CHECK_OBJECT(par_method);
tmp_args_element_value_10 = par_method;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_11 = par_keepdims;
CHECK_OBJECT(par_weights);
tmp_args_element_value_12 = par_weights;
CHECK_OBJECT(var_weak_q);
tmp_args_element_value_13 = var_weak_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame.f_lineno = 1573;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS9(tstate, tmp_called_value_4, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1573;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile,
    type_description_1,
    par_a,
    par_q,
    par_axis,
    par_out,
    par_overwrite_input,
    par_method,
    par_keepdims,
    par_weights,
    var_weak_q,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile);

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
CHECK_OBJECT(par_q);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
par_q = NULL;
Py_XDECREF(par_axis);
par_axis = NULL;
CHECK_OBJECT(par_weights);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
par_weights = NULL;
CHECK_OBJECT(var_weak_q);
CHECK_OBJECT(var_weak_q);
Py_DECREF(var_weak_q);
var_weak_q = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_q);
par_q = NULL;
Py_XDECREF(par_axis);
par_axis = NULL;
Py_XDECREF(par_weights);
par_weights = NULL;
Py_XDECREF(var_weak_q);
var_weak_q = NULL;
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
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_q = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_overwrite_input = python_pars[4];
PyObject *par_method = python_pars[5];
PyObject *par_keepdims = python_pars[6];
PyObject *par_weights = python_pars[7];
PyObject *par_weak_q = python_pars[8];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked = MAKE_FUNCTION_FRAME(tstate, code_objects_5994a33e158f27b0e43ce0a6f6b7a990, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1591;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1591;
type_description_1 = "ooooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1592;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_nanmean);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1592;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_1_1 = par_axis;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_1_1 = par_keepdims;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked->m_frame.f_lineno = 1592;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_keepdims_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1592;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$fnb(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fnb);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1593;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__ureduce);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1593;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_2 = par_a;
tmp_kw_call_dict_value_0_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_ureduce_func(tstate);
if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanquantile_ureduce_func);
}

if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 1594;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_kw_call_dict_value_1_2 = par_q;
CHECK_OBJECT(par_weights);
tmp_kw_call_dict_value_2_1 = par_weights;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_3_1 = par_keepdims;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_4_1 = par_axis;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_5_1 = par_out;
CHECK_OBJECT(par_overwrite_input);
tmp_kw_call_dict_value_6_1 = par_overwrite_input;
CHECK_OBJECT(par_method);
tmp_kw_call_dict_value_7_1 = par_method;
CHECK_OBJECT(par_weak_q);
tmp_kw_call_dict_value_8_1 = par_weak_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked->m_frame.f_lineno = 1593;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_3c7fc306c33526e1639113b8f7908e11_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1593;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked,
    type_description_1,
    par_a,
    par_q,
    par_axis,
    par_out,
    par_overwrite_input,
    par_method,
    par_keepdims,
    par_weights,
    par_weak_q
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked);

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
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
CHECK_OBJECT(par_weak_q);
Py_DECREF(par_weak_q);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
CHECK_OBJECT(par_weak_q);
Py_DECREF(par_weak_q);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_q = python_pars[1];
PyObject *par_weights = python_pars[2];
PyObject *par_axis = python_pars[3];
PyObject *par_out = python_pars[4];
PyObject *par_overwrite_input = python_pars[5];
PyObject *par_method = python_pars[6];
PyObject *par_weak_q = python_pars[7];
PyObject *var_part = NULL;
PyObject *var_wgt = NULL;
PyObject *var_result = NULL;
PyObject *var_from_ax = NULL;
PyObject *var_ii = NULL;
PyObject *outline_0_var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func = MAKE_FUNCTION_FRAME(tstate, code_objects_c5a3ae748d644e54378f3b8ceb67fd0f, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func) == 2);

// Framed code:
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
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_1 = par_axis;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1620;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1620;
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_a);
tmp_called_instance_1 = par_a;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1621;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1621;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_part == NULL);
var_part = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_3 = par_weights;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_2 = Py_None;
Py_INCREF(tmp_assign_source_2);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_weights);
tmp_called_instance_2 = par_weights;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1622;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_ravel);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1622;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_wgt == NULL);
var_wgt = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_1d(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanquantile_1d);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1623;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_part);
tmp_kw_call_arg_value_0_1 = var_part;
CHECK_OBJECT(par_q);
tmp_kw_call_arg_value_1_1 = par_q;
CHECK_OBJECT(par_overwrite_input);
tmp_kw_call_arg_value_2_1 = par_overwrite_input;
CHECK_OBJECT(par_method);
tmp_kw_call_arg_value_3_1 = par_method;
CHECK_OBJECT(var_wgt);
tmp_kw_call_dict_value_0_1 = var_wgt;
CHECK_OBJECT(par_weak_q);
tmp_kw_call_dict_value_1_1 = par_weak_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1623;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_weights_str_plain_weak_q_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1623;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_3;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_4 = par_weights;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1627;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_apply_along_axis);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1627;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_1d(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanquantile_1d);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 1627;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
CHECK_OBJECT(par_a);
tmp_args_element_value_3 = par_a;
CHECK_OBJECT(par_q);
tmp_args_element_value_4 = par_q;
CHECK_OBJECT(par_overwrite_input);
tmp_args_element_value_5 = par_overwrite_input;
CHECK_OBJECT(par_method);
tmp_args_element_value_6 = par_method;
CHECK_OBJECT(par_weights);
tmp_args_element_value_7 = par_weights;
CHECK_OBJECT(par_weak_q);
tmp_args_element_value_8 = par_weak_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1627;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1627;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_q);
tmp_expression_value_3 = par_q;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1632;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1632;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_q);
tmp_expression_value_4 = par_q;
tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndim);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1633;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1633;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1633;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_8 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 1633;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_i;
    outline_0_var_i = tmp_assign_source_9;
    Py_INCREF(outline_0_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
if (par_axis == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1633;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_add_expr_left_1 = par_axis;
CHECK_OBJECT(outline_0_var_i);
tmp_add_expr_right_1 = outline_0_var_i;
tmp_append_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1633;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1633;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1633;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_5 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_5);
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
Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 1633;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_from_ax == NULL);
var_from_ax = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_list_arg_1;
PyObject *tmp_xrange_low_2;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1634;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1634;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_args_element_value_9 = var_result;
CHECK_OBJECT(var_from_ax);
tmp_args_element_value_10 = var_from_ax;
CHECK_OBJECT(par_q);
tmp_expression_value_6 = par_q;
tmp_xrange_low_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ndim);
if (tmp_xrange_low_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1634;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_list_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
CHECK_OBJECT(tmp_xrange_low_2);
Py_DECREF(tmp_xrange_low_2);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1634;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1634;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1634;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1634;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_result;
    assert(old != NULL);
    var_result = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1638;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_12 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_13 = par_axis;
tmp_args_element_value_14 = const_int_neg_1;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1638;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_11 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_moveaxis,
        call_args
    );
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1638;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_weights);
tmp_cmp_expr_left_6 = par_weights;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
tmp_called_instance_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1640;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_weights);
tmp_args_element_value_15 = par_weights;
CHECK_OBJECT(par_axis);
tmp_args_element_value_16 = par_axis;
tmp_args_element_value_17 = const_int_neg_1;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1640;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_moveaxis,
        call_args
    );
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1640;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_weights;
    assert(old != NULL);
    par_weights = tmp_assign_source_12;
    Py_DECREF(old);
}

}
branch_no_4:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_7 = par_out;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(par_out);
tmp_assign_source_13 = par_out;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_13);
var_result = tmp_assign_source_13;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
tmp_expression_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1646;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_empty_like);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1646;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_2 = par_a;
CHECK_OBJECT(par_q);
tmp_expression_value_8 = par_q;
tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1646;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_10 = par_a;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_shape);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 1646;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_neg_1_none;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 1646;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1646;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1646;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_shape_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1646;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_14;
}
branch_end_5:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_2;
tmp_expression_value_11 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1648;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ndindex);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1648;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_13 = par_a;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_shape);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 1648;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_slice_none_int_neg_1_none;
tmp_args_element_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 1648;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1648;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1648;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1648;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_15;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_2 = tmp_for_loop_1__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 1648;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_17 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_ii;
    var_ii = tmp_assign_source_17;
    Py_INCREF(var_ii);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_3;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_4;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
tmp_called_value_6 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_1d(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nanquantile_1d);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1649;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_a);
tmp_expression_value_14 = par_a;
CHECK_OBJECT(var_ii);
tmp_subscript_value_3 = var_ii;
tmp_kw_call_arg_value_0_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_3);
if (tmp_kw_call_arg_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1650;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
if (par_q == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_q);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1650;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_arg_value_1_2 = par_q;
CHECK_OBJECT(par_weights);
tmp_expression_value_15 = par_weights;
CHECK_OBJECT(var_ii);
tmp_subscript_value_4 = var_ii;
tmp_kw_call_dict_value_0_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_4);
if (tmp_kw_call_dict_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);

exception_lineno = 1650;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
if (par_overwrite_input == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overwrite_input);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1651;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_1_2 = par_overwrite_input;
if (par_method == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1651;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_2_1 = par_method;
if (par_weak_q == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_weak_q);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1652;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_3_1 = par_weak_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame.f_lineno = 1649;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_b1467dc269a4f1f3b72fac89532d10b0_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_0_3);
CHECK_OBJECT(tmp_kw_call_dict_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1649;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
if (var_result == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1649;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_1 = var_result;
tmp_add_expr_left_3 = mod_consts.const_tuple_ellipsis_tuple;
CHECK_OBJECT(var_ii);
tmp_add_expr_right_3 = var_ii;
tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 1649;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1649;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1648;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
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
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1655;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_2:;
branch_end_1:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_8 = par_out;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_result);
tmp_ass_subvalue_2 = var_result;
CHECK_OBJECT(par_out);
tmp_ass_subscribed_2 = par_out;
tmp_ass_subscript_2 = Py_Ellipsis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1658;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_6:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func,
    type_description_1,
    par_a,
    par_q,
    par_weights,
    par_axis,
    par_out,
    par_overwrite_input,
    par_method,
    par_weak_q,
    var_part,
    var_wgt,
    var_result,
    var_from_ax,
    var_ii
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_weights);
par_weights = NULL;
Py_XDECREF(var_part);
var_part = NULL;
Py_XDECREF(var_wgt);
var_wgt = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_from_ax);
var_from_ax = NULL;
Py_XDECREF(var_ii);
var_ii = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_weights);
par_weights = NULL;
Py_XDECREF(var_part);
var_part = NULL;
Py_XDECREF(var_wgt);
var_wgt = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_from_ax);
var_from_ax = NULL;
Py_XDECREF(var_ii);
var_ii = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_weak_q);
Py_DECREF(par_weak_q);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_weak_q);
Py_DECREF(par_weak_q);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_arr1d = python_pars[0];
PyObject *par_q = python_pars[1];
PyObject *par_overwrite_input = python_pars[2];
PyObject *par_method = python_pars[3];
PyObject *par_weights = python_pars[4];
PyObject *par_weak_q = python_pars[5];
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d = MAKE_FUNCTION_FRAME(tstate, code_objects_7af8b46e48a1caedb4219838d0859b83, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_remove_nan_1d(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__remove_nan_1d);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1671;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_arr1d);
tmp_kw_call_arg_value_0_1 = par_arr1d;
CHECK_OBJECT(par_weights);
tmp_kw_call_dict_value_0_1 = par_weights;
CHECK_OBJECT(par_overwrite_input);
tmp_kw_call_dict_value_1_1 = par_overwrite_input;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d->m_frame.f_lineno = 1671;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_second_arr1d_str_plain_overwrite_input_tuple);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1671;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1671;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1671;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1671;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1671;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1671;
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
{
    PyObject *old = par_arr1d;
    assert(old != NULL);
    par_arr1d = tmp_assign_source_5;
    Py_INCREF(par_arr1d);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = par_weights;
    assert(old != NULL);
    par_weights = tmp_assign_source_6;
    Py_INCREF(par_weights);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = par_overwrite_input;
    assert(old != NULL);
    par_overwrite_input = tmp_assign_source_7;
    Py_INCREF(par_overwrite_input);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_arr1d);
tmp_expression_value_1 = par_arr1d;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1673;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1673;
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
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1675;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_full);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1675;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_expression_value_4 = par_q;
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_shape);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1675;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 1675;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_nan);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 1675;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr1d);
tmp_expression_value_6 = par_arr1d;
tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 1675;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d->m_frame.f_lineno = 1675;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1675;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_tuple_empty;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1675;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
tmp_expression_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$fnb(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fnb);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1677;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__quantile_unchecked);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1677;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr1d);
tmp_kw_call_arg_value_0_3 = par_arr1d;
CHECK_OBJECT(par_q);
tmp_kw_call_arg_value_1_2 = par_q;
CHECK_OBJECT(par_overwrite_input);
tmp_kw_call_dict_value_0_3 = par_overwrite_input;
CHECK_OBJECT(par_method);
tmp_kw_call_dict_value_1_2 = par_method;
CHECK_OBJECT(par_weights);
tmp_kw_call_dict_value_2_1 = par_weights;
CHECK_OBJECT(par_weak_q);
tmp_kw_call_dict_value_3_1 = par_weak_q;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d->m_frame.f_lineno = 1677;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_9c97561f86ec8e3fcd0cc0b6b32e30a0_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1677;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d,
    type_description_1,
    par_arr1d,
    par_q,
    par_overwrite_input,
    par_method,
    par_weights,
    par_weak_q
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_arr1d);
CHECK_OBJECT(par_arr1d);
Py_DECREF(par_arr1d);
par_arr1d = NULL;
CHECK_OBJECT(par_overwrite_input);
CHECK_OBJECT(par_overwrite_input);
Py_DECREF(par_overwrite_input);
par_overwrite_input = NULL;
CHECK_OBJECT(par_weights);
CHECK_OBJECT(par_weights);
Py_DECREF(par_weights);
par_weights = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_arr1d);
par_arr1d = NULL;
Py_XDECREF(par_overwrite_input);
par_overwrite_input = NULL;
Py_XDECREF(par_weights);
par_weights = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_weak_q);
Py_DECREF(par_weak_q);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_weak_q);
Py_DECREF(par_weak_q);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__36__nanvar_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_ddof = python_pars[4];
PyObject *par_keepdims = python_pars[5];
PyObject *par_where = python_pars[6];
PyObject *par_mean = python_pars[7];
PyObject *par_correction = python_pars[8];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_mean);
Py_DECREF(par_mean);
CHECK_OBJECT(par_correction);
Py_DECREF(par_correction);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__37_nanvar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_ddof = python_pars[4];
PyObject *par_keepdims = python_pars[5];
PyObject *par_where = python_pars[6];
PyObject *par_mean = python_pars[7];
PyObject *par_correction = python_pars[8];
PyObject *var_arr = NULL;
PyObject *var_mask = NULL;
PyObject *var__keepdims = NULL;
PyObject *var_cnt = NULL;
PyObject *var_avg = NULL;
PyObject *var_sqr = NULL;
PyObject *var_var = NULL;
PyObject *var_var_ndim = NULL;
PyObject *var_dof = NULL;
PyObject *var_isbad = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar = MAKE_FUNCTION_FRAME(tstate, code_objects_c249073fb118425f9420d1f7882c8b3d, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_replace_nan(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__replace_nan);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1802;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
tmp_args_element_value_2 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1802;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1802;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1802;
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



exception_lineno = 1802;
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



exception_lineno = 1802;
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



exception_lineno = 1802;
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
assert(var_arr == NULL);
Py_INCREF(tmp_assign_source_4);
var_arr = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_mask == NULL);
Py_INCREF(tmp_assign_source_5);
var_mask = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_mask);
tmp_cmp_expr_left_1 = var_mask;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1804;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_var);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1804;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_1 = var_arr;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_2_1 = par_out;
CHECK_OBJECT(par_ddof);
tmp_kw_call_dict_value_3_1 = par_ddof;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_4_1 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_5_1 = par_where;
CHECK_OBJECT(par_mean);
tmp_kw_call_dict_value_6_1 = par_mean;
CHECK_OBJECT(par_correction);
tmp_kw_call_dict_value_7_1 = par_correction;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1804;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[8] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_43312485dd84a9a9350f83af88a63f88_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1804;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_2 = par_dtype;
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
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1809;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_3 = par_dtype;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1809;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dtype, tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1809;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_3 = par_dtype;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_dtype);
tmp_expression_value_2 = par_dtype;
tmp_issubclass_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_type);
if (tmp_issubclass_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1810;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 1810;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_inexact);
if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 1810;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_cls_1);
Py_DECREF(tmp_issubclass_cls_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1810;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1810;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1811;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1811;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_4 = par_out;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_out);
tmp_expression_value_5 = par_out;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1812;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_issubclass_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1812;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_2);

exception_lineno = 1812;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_inexact);
if (tmp_issubclass_classes_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_2);

exception_lineno = 1812;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
CHECK_OBJECT(tmp_issubclass_cls_2);
Py_DECREF(tmp_issubclass_cls_2);
CHECK_OBJECT(tmp_issubclass_classes_2);
Py_DECREF(tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1812;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1812;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_4 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_4 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_32383d08c19cf306ff97b1d17823d642;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1813;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 1813;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_correction);
tmp_cmp_expr_left_5 = par_correction;
tmp_expression_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1815;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__NoValue);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1815;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1815;
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
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_ddof);
tmp_cmp_expr_left_6 = par_ddof;
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1816;
type_description_1 = "ooooooooooooooooooo";
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
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_3a44b2d0cbcfdd60365e2c2ef1412d28;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1817;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 1817;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooo";
goto frame_exception_exit_1;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(par_correction);
tmp_assign_source_7 = par_correction;
{
    PyObject *old = par_ddof;
    assert(old != NULL);
    par_ddof = tmp_assign_source_7;
    Py_INCREF(par_ddof);
    Py_DECREF(old);
}

}
branch_end_6:;
branch_no_5:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_arr);
tmp_type_arg_1 = var_arr;
tmp_cmp_expr_left_7 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_7 == NULL));
tmp_expression_value_8 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 1824;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_matrix);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 1824;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1825;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__NoValue);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1825;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__keepdims == NULL);
var__keepdims = tmp_assign_source_8;
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_True;
assert(var__keepdims == NULL);
Py_INCREF(tmp_assign_source_9);
var__keepdims = tmp_assign_source_9;
}
branch_end_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_2;
tmp_expression_value_10 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1829;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_sum);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1829;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mask);
tmp_operand_value_3 = var_mask;
tmp_kw_call_arg_value_0_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_3);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1829;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_2 = par_axis;
tmp_expression_value_11 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 1829;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_intp);
if (tmp_kw_call_dict_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 1829;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__keepdims);
tmp_kw_call_dict_value_2_2 = var__keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_3_2 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1829;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_c431dd99e8d24915e3eeec18855a81bc_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_1_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1829;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cnt == NULL);
var_cnt = tmp_assign_source_10;
}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_mean);
tmp_cmp_expr_left_8 = par_mean;
tmp_expression_value_12 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1832;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__NoValue);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1832;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(par_mean);
tmp_assign_source_11 = par_mean;
assert(var_avg == NULL);
Py_INCREF(tmp_assign_source_11);
var_avg = tmp_assign_source_11;
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
PyObject *tmp_kw_call_dict_value_2_3;
PyObject *tmp_kw_call_dict_value_3_3;
tmp_expression_value_13 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1840;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_sum);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1840;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_3 = var_arr;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_3 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_3 = par_dtype;
CHECK_OBJECT(var__keepdims);
tmp_kw_call_dict_value_2_3 = var__keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_3_3 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1840;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_c431dd99e8d24915e3eeec18855a81bc_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1840;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_avg == NULL);
var_avg = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$_divide_by_count(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__divide_by_count);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1842;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_avg);
tmp_args_element_value_4 = var_avg;
CHECK_OBJECT(var_cnt);
tmp_args_element_value_5 = var_cnt;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1842;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1842;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_avg;
    assert(old != NULL);
    var_avg = tmp_assign_source_13;
    Py_DECREF(old);
}

}
branch_end_8:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_kw_call_dict_value_1_4;
PyObject *tmp_kw_call_dict_value_2_4;
tmp_expression_value_14 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1845;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_subtract);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1845;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_4 = var_arr;
CHECK_OBJECT(var_avg);
tmp_kw_call_arg_value_1_1 = var_avg;
CHECK_OBJECT(var_arr);
tmp_kw_call_dict_value_0_4 = var_arr;
tmp_kw_call_dict_value_1_4 = mod_consts.const_str_plain_unsafe;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_2_4 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1845;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4, tmp_kw_call_dict_value_2_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_where_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1845;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$_copyto(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__copyto);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1846;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_args_element_value_6 = var_arr;
tmp_args_element_value_7 = const_int_0;
CHECK_OBJECT(var_mask);
tmp_args_element_value_8 = var_mask;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1846;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1846;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_arr;
    assert(old != NULL);
    var_arr = tmp_assign_source_14;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_issubclass_cls_3;
PyObject *tmp_issubclass_classes_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(var_arr);
tmp_expression_value_16 = var_arr;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1847;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_issubclass_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1847;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_17 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_3);

exception_lineno = 1847;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_complexfloating);
if (tmp_issubclass_classes_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_3);

exception_lineno = 1847;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_3, tmp_issubclass_classes_3);
CHECK_OBJECT(tmp_issubclass_cls_3);
Py_DECREF(tmp_issubclass_cls_3);
CHECK_OBJECT(tmp_issubclass_classes_3);
Py_DECREF(tmp_issubclass_classes_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1847;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_18;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_kw_call_dict_value_0_5;
PyObject *tmp_kw_call_dict_value_1_5;
tmp_expression_value_19 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1848;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_multiply);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1848;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_5 = var_arr;
CHECK_OBJECT(var_arr);
tmp_called_instance_2 = var_arr;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1848;
tmp_kw_call_arg_value_1_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_conj);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 1848;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_dict_value_0_5 = var_arr;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_1_5 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1848;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
    tmp_expression_value_18 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_where_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1848;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_real);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1848;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_sqr == NULL);
var_sqr = tmp_assign_source_15;
}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_arg_value_0_6;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_dict_value_0_6;
PyObject *tmp_kw_call_dict_value_1_6;
tmp_expression_value_20 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1850;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_multiply);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1850;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_6 = var_arr;
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_1_3 = var_arr;
CHECK_OBJECT(var_arr);
tmp_kw_call_dict_value_0_6 = var_arr;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_1_6 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1850;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_3};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_6, tmp_kw_call_dict_value_1_6};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_where_tuple);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1850;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_sqr == NULL);
var_sqr = tmp_assign_source_16;
}
branch_end_9:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_21;
PyObject *tmp_kw_call_arg_value_0_7;
PyObject *tmp_kw_call_dict_value_0_7;
PyObject *tmp_kw_call_dict_value_1_7;
PyObject *tmp_kw_call_dict_value_2_5;
PyObject *tmp_kw_call_dict_value_3_4;
PyObject *tmp_kw_call_dict_value_4_2;
tmp_expression_value_21 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1853;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain_sum);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1853;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_sqr);
tmp_kw_call_arg_value_0_7 = var_sqr;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_7 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_7 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_2_5 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_3_4 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_4_2 = par_where;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1853;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_7};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_7, tmp_kw_call_dict_value_2_5, tmp_kw_call_dict_value_3_4, tmp_kw_call_dict_value_4_2};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts.const_tuple_d96307d9cab41acf0ccd5c1f96a95623_tuple);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1853;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_var == NULL);
var_var = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(var_var);
tmp_expression_value_22 = var_var;
tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_ndim);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1858;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(var_var_ndim == NULL);
var_var_ndim = tmp_assign_source_18;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar, exception_keeper_lineno_3);
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
tmp_cmp_expr_right_9 = PyExc_AttributeError;
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
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_9;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1860;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_var);
tmp_args_element_value_9 = var_var;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1860;
tmp_assign_source_19 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ndim, tmp_args_element_value_9);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1860;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(var_var_ndim == NULL);
var_var_ndim = tmp_assign_source_19;
}
goto branch_end_10;
branch_no_10:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 1857;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame)) {
        frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooooooo";
goto try_except_handler_5;
branch_end_10:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(var_var_ndim);
tmp_cmp_expr_left_10 = var_var_ndim;
CHECK_OBJECT(var_cnt);
tmp_expression_value_23 = var_cnt;
tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1861;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1861;
type_description_1 = "ooooooooooooooooooo";
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
PyObject *tmp_assign_source_20;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(var_cnt);
tmp_called_instance_4 = var_cnt;
CHECK_OBJECT(par_axis);
tmp_args_element_value_10 = par_axis;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1863;
tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_squeeze, tmp_args_element_value_10);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1863;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cnt;
    assert(old != NULL);
    var_cnt = tmp_assign_source_20;
    Py_DECREF(old);
}

}
branch_no_11:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
if (var_cnt == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cnt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1864;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_1 = var_cnt;
CHECK_OBJECT(par_ddof);
tmp_sub_expr_right_1 = par_ddof;
tmp_assign_source_21 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1864;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dof == NULL);
var_dof = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_11 = module_var_accessor_numpy$lib$_nanfunctions_impl$_divide_by_count(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__divide_by_count);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1865;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_var);
tmp_args_element_value_11 = var_var;
CHECK_OBJECT(var_dof);
tmp_args_element_value_12 = var_dof;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1865;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1865;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_var;
    assert(old != NULL);
    var_var = tmp_assign_source_22;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_dof);
tmp_cmp_expr_left_11 = var_dof;
tmp_cmp_expr_right_11 = const_int_0;
tmp_assign_source_23 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1867;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_isbad == NULL);
var_isbad = tmp_assign_source_23;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_13;
int tmp_truth_name_1;
tmp_called_instance_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1868;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_isbad);
tmp_args_element_value_13 = var_isbad;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1868;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_any, tmp_args_element_value_13);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1868;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 1868;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_24 = module_var_accessor_numpy$lib$_nanfunctions_impl$warnings(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1869;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_warn);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1869;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_bbd396d9bb37b13c133fa37fab502bba;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1869;
type_description_1 = "ooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1869;
tmp_call_result_3 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1869;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_16;
tmp_called_value_13 = module_var_accessor_numpy$lib$_nanfunctions_impl$_copyto(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__copyto);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1873;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_var);
tmp_args_element_value_14 = var_var;
tmp_expression_value_25 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1873;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_nan);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1873;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_isbad);
tmp_args_element_value_16 = var_isbad;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame.f_lineno = 1873;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1873;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_var;
    assert(old != NULL);
    var_var = tmp_assign_source_24;
    Py_DECREF(old);
}

}
branch_no_12:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_ddof,
    par_keepdims,
    par_where,
    par_mean,
    par_correction,
    var_arr,
    var_mask,
    var__keepdims,
    var_cnt,
    var_avg,
    var_sqr,
    var_var,
    var_var_ndim,
    var_dof,
    var_isbad
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__37_nanvar);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_var);
tmp_return_value = var_var;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(par_ddof);
par_ddof = NULL;
Py_XDECREF(var_arr);
var_arr = NULL;
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var__keepdims);
var__keepdims = NULL;
Py_XDECREF(var_cnt);
var_cnt = NULL;
Py_XDECREF(var_avg);
var_avg = NULL;
Py_XDECREF(var_sqr);
var_sqr = NULL;
Py_XDECREF(var_var);
var_var = NULL;
Py_XDECREF(var_var_ndim);
var_var_ndim = NULL;
Py_XDECREF(var_dof);
var_dof = NULL;
Py_XDECREF(var_isbad);
var_isbad = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(par_ddof);
par_ddof = NULL;
Py_XDECREF(var_arr);
var_arr = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var__keepdims);
var__keepdims = NULL;
Py_XDECREF(var_cnt);
var_cnt = NULL;
Py_XDECREF(var_avg);
var_avg = NULL;
Py_XDECREF(var_sqr);
var_sqr = NULL;
Py_XDECREF(var_var);
var_var = NULL;
Py_XDECREF(var_var_ndim);
var_var_ndim = NULL;
Py_XDECREF(var_dof);
var_dof = NULL;
Py_XDECREF(var_isbad);
var_isbad = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_mean);
Py_DECREF(par_mean);
CHECK_OBJECT(par_correction);
Py_DECREF(par_correction);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_mean);
Py_DECREF(par_mean);
CHECK_OBJECT(par_correction);
Py_DECREF(par_correction);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__38__nanstd_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_ddof = python_pars[4];
PyObject *par_keepdims = python_pars[5];
PyObject *par_where = python_pars[6];
PyObject *par_mean = python_pars[7];
PyObject *par_correction = python_pars[8];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_mean);
Py_DECREF(par_mean);
CHECK_OBJECT(par_correction);
Py_DECREF(par_correction);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_nanfunctions_impl$$$function__39_nanstd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_ddof = python_pars[4];
PyObject *par_keepdims = python_pars[5];
PyObject *par_where = python_pars[6];
PyObject *par_mean = python_pars[7];
PyObject *par_correction = python_pars[8];
PyObject *var_var = NULL;
PyObject *var_std = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd = MAKE_FUNCTION_FRAME(tstate, code_objects_a21f08aae3d3aa49cbdbd9426cab892b, module_numpy$lib$_nanfunctions_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd->m_type_description == NULL);
frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd = cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$nanvar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nanvar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1997;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_1_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_2_1 = par_out;
CHECK_OBJECT(par_ddof);
tmp_kw_call_dict_value_3_1 = par_ddof;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_4_1 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_5_1 = par_where;
CHECK_OBJECT(par_mean);
tmp_kw_call_dict_value_6_1 = par_mean;
CHECK_OBJECT(par_correction);
tmp_kw_call_dict_value_7_1 = par_correction;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd->m_frame.f_lineno = 1997;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[8] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_43312485dd84a9a9350f83af88a63f88_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1997;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_var == NULL);
var_var = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_var);
tmp_isinstance_inst_1 = var_var;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 2000;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2000;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2000;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 2001;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2001;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_var);
tmp_kw_call_arg_value_0_2 = var_var;
CHECK_OBJECT(var_var);
tmp_kw_call_dict_value_0_2 = var_var;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd->m_frame.f_lineno = 2001;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2001;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_std == NULL);
var_std = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_var);
tmp_expression_value_3 = var_var;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2002;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_var);
tmp_expression_value_5 = var_var;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2003;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2003;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 2003;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_var);
tmp_args_element_value_2 = var_var;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd->m_frame.f_lineno = 2003;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_sqrt, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 2003;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd->m_frame.f_lineno = 2003;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2003;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_std == NULL);
var_std = tmp_assign_source_3;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 2005;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_var);
tmp_args_element_value_3 = var_var;
frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd->m_frame.f_lineno = 2005;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sqrt, tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2005;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_std == NULL);
var_std = tmp_assign_source_4;
}
branch_end_2:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_ddof,
    par_keepdims,
    par_where,
    par_mean,
    par_correction,
    var_var,
    var_std
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd == cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd);
    cache_frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl$$$function__39_nanstd);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_std);
tmp_return_value = var_std;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_var);
CHECK_OBJECT(var_var);
Py_DECREF(var_var);
var_var = NULL;
CHECK_OBJECT(var_std);
CHECK_OBJECT(var_std);
Py_DECREF(var_std);
var_std = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_var);
var_var = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_mean);
Py_DECREF(par_mean);
CHECK_OBJECT(par_correction);
Py_DECREF(par_correction);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_mean);
Py_DECREF(par_mean);
CHECK_OBJECT(par_correction);
Py_DECREF(par_correction);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__10__nanargmin_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__10__nanargmin_dispatcher,
        mod_consts.const_str_plain__nanargmin_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d01146a2aec3c6a89f2f480975d0259b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin,
        mod_consts.const_str_plain_nanargmin,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a6746492b721fc31e6da624240b34275,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_e032b81da4cacd8adefbe5f4800334d6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__12__nanargmax_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__12__nanargmax_dispatcher,
        mod_consts.const_str_plain__nanargmax_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f206ab3d25e30ae23794724d5f50d8d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax,
        mod_consts.const_str_plain_nanargmax,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c1f35139845020a58fa940639bd9c6a1,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_4b71b2220e6dbb4fbca5c75a982e3930,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__14__nansum_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__14__nansum_dispatcher,
        mod_consts.const_str_plain__nansum_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_21d2d29bf95fb81729ed7e8f3662550e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__15_nansum(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__15_nansum,
        mod_consts.const_str_plain_nansum,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6250deedef20a346abaa6d8a684155b2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_c2c6d230c597abbd62867925d55e943e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__16__nanprod_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__16__nanprod_dispatcher,
        mod_consts.const_str_plain__nanprod_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0556bf782c0341c00f9d14246cbc1266,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__17_nanprod(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__17_nanprod,
        mod_consts.const_str_plain_nanprod,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8ea0e2981714723c68caee597ce60a9e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_1fe8757e223b7e8862c7cc37a766e75e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__18__nancumsum_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__18__nancumsum_dispatcher,
        mod_consts.const_str_plain__nancumsum_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2a25dd31c37315a6aa5a87296981752c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum,
        mod_consts.const_str_plain_nancumsum,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1debfbf72859a06f57b43d855cffe571,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_f194c0896325b6381e92e0eee0267205,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask,
        mod_consts.const_str_plain__nan_mask,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f4011a4e5916fa754436bbcc2241ceaf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_8d18509a48f609fc250f6073ff1b4e79,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__20__nancumprod_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__20__nancumprod_dispatcher,
        mod_consts.const_str_plain__nancumprod_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_66ea992fbf93e45ab136f7358bf4af0a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod,
        mod_consts.const_str_plain_nancumprod,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_96042b0c06762ccd1d860871717b7982,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_d4d6ea3acdfc3af57e0a77d337ec1c80,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__22__nanmean_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__22__nanmean_dispatcher,
        mod_consts.const_str_plain__nanmean_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a913d6c4d50d3e23f99334099bbeb336,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__23_nanmean(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__23_nanmean,
        mod_consts.const_str_plain_nanmean,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3eb483a4ab43cc8da2566948d0ff1f54,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_645db265f25d335dde17efaf363586c5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d,
        mod_consts.const_str_plain__nanmedian1d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_27554cb9da87c5b8d9364eefcfacb5ad,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_377e8a360d995cb2c24674201f2192b3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian,
        mod_consts.const_str_plain__nanmedian,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_03a56cfc294b96f3e24d552f980e3133,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_7a316fc26d408b7e96a662315c3de4b4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small,
        mod_consts.const_str_plain__nanmedian_small,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5ec5b9da53a8989f26cbcf22d2df7c9c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_0a15098c0feabf71cb6733a75d7cd65e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__27__nanmedian_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__27__nanmedian_dispatcher,
        mod_consts.const_str_plain__nanmedian_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_16fa51295c4bdb2b5b04ca16fd4b05e5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian,
        mod_consts.const_str_plain_nanmedian,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d86e3ab9319136bd74a47957424d40be,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_738859357359a4e81f079544058a2044,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__29__nanpercentile_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__29__nanpercentile_dispatcher,
        mod_consts.const_str_plain__nanpercentile_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c48d08437cd871ad2135d5bf9e15aeb5,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan,
        mod_consts.const_str_plain__replace_nan,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_99ba072fd5d8ce5b8b561740df0ad1b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_c686b92aafd04507a8ef2eb24bbe9679,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile,
        mod_consts.const_str_plain_nanpercentile,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7b10a7b4ddd3b3c1a5ed9ff9bc575300,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_b63492fee4b39d48a97a578c942d8a12,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__31__nanquantile_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__31__nanquantile_dispatcher,
        mod_consts.const_str_plain__nanquantile_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4510b3cb5458795ba82c501eacb707f9,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile,
        mod_consts.const_str_plain_nanquantile,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_441c19adcdc522cab478555c1fcc7304,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_e2e376a4cbd2fd07b62b665adec3f238,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked,
        mod_consts.const_str_plain__nanquantile_unchecked,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5994a33e158f27b0e43ce0a6f6b7a990,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_8d3dde78ef0a5edc96e74007dfe8e642,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func,
        mod_consts.const_str_plain__nanquantile_ureduce_func,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c5a3ae748d644e54378f3b8ceb67fd0f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_37878329c1abd065a32003dde103c8a0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d,
        mod_consts.const_str_plain__nanquantile_1d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7af8b46e48a1caedb4219838d0859b83,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_015216c5b219450fb6d318ae3b644283,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__36__nanvar_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__36__nanvar_dispatcher,
        mod_consts.const_str_plain__nanvar_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_508ada078749adebb58866f28a415537,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__37_nanvar(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__37_nanvar,
        mod_consts.const_str_plain_nanvar,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c249073fb118425f9420d1f7882c8b3d,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_6f3135ec41c8e22e97e5f4f3b47b530a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__38__nanstd_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__38__nanstd_dispatcher,
        mod_consts.const_str_plain__nanstd_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_08c403549250675a18e3fb8f345eccd0,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__39_nanstd(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__39_nanstd,
        mod_consts.const_str_plain_nanstd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a21f08aae3d3aa49cbdbd9426cab892b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_1e0db9f057cbf187aaa8480786d07980,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__3__copyto(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__3__copyto,
        mod_consts.const_str_plain__copyto,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d5ddb32c88e2e9156b2760f5b7e60177,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_17ab71091dc46de8ad2e5fefa8cad1b5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d,
        mod_consts.const_str_plain__remove_nan_1d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a75deb0086ac4eebe8e4ebf0a2bb8af2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_951672492663cfd3069fdec43acfc89b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count,
        mod_consts.const_str_plain__divide_by_count,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6ae055362748aee3baf3a4e2d1536952,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_8ce5374db89e9524b7b736fd9aa38a30,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__6__nanmin_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__6__nanmin_dispatcher,
        mod_consts.const_str_plain__nanmin_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d972ae15cd488d92b2b979e98a1a7be8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__7_nanmin(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__7_nanmin,
        mod_consts.const_str_plain_nanmin,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4fef972010d96a43f70f30e029bfd6ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_50ab944e47e880a87124da315be41f6f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__8__nanmax_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__8__nanmax_dispatcher,
        mod_consts.const_str_plain__nanmax_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_697a9c70b6071340ef0a6824ccf23607,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__9_nanmax(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_nanfunctions_impl$$$function__9_nanmax,
        mod_consts.const_str_plain_nanmax,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e7ff5085582a25445574b0635c0b3fb2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_digest_9d144bea8ea0a9975b433cd4714bd313,
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

static function_impl_code const function_table_numpy$lib$_nanfunctions_impl[] = {
impl_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask,
impl_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan,
impl_numpy$lib$_nanfunctions_impl$$$function__3__copyto,
impl_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d,
impl_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count,
impl_numpy$lib$_nanfunctions_impl$$$function__6__nanmin_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__7_nanmin,
impl_numpy$lib$_nanfunctions_impl$$$function__8__nanmax_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__9_nanmax,
impl_numpy$lib$_nanfunctions_impl$$$function__10__nanargmin_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin,
impl_numpy$lib$_nanfunctions_impl$$$function__12__nanargmax_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax,
impl_numpy$lib$_nanfunctions_impl$$$function__14__nansum_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__15_nansum,
impl_numpy$lib$_nanfunctions_impl$$$function__16__nanprod_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__17_nanprod,
impl_numpy$lib$_nanfunctions_impl$$$function__18__nancumsum_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum,
impl_numpy$lib$_nanfunctions_impl$$$function__20__nancumprod_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod,
impl_numpy$lib$_nanfunctions_impl$$$function__22__nanmean_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__23_nanmean,
impl_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d,
impl_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian,
impl_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small,
impl_numpy$lib$_nanfunctions_impl$$$function__27__nanmedian_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian,
impl_numpy$lib$_nanfunctions_impl$$$function__29__nanpercentile_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile,
impl_numpy$lib$_nanfunctions_impl$$$function__31__nanquantile_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile,
impl_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked,
impl_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func,
impl_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d,
impl_numpy$lib$_nanfunctions_impl$$$function__36__nanvar_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__37_nanvar,
impl_numpy$lib$_nanfunctions_impl$$$function__38__nanstd_dispatcher,
impl_numpy$lib$_nanfunctions_impl$$$function__39_nanstd,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$lib$_nanfunctions_impl);
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
        module_numpy$lib$_nanfunctions_impl,
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
        function_table_numpy$lib$_nanfunctions_impl,
        sizeof(function_table_numpy$lib$_nanfunctions_impl) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.lib._nanfunctions_impl";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$lib$_nanfunctions_impl(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$_nanfunctions_impl");

    // Store the module for future use.
    module_numpy$lib$_nanfunctions_impl = module;

    moduledict_numpy$lib$_nanfunctions_impl = MODULE_DICT(module_numpy$lib$_nanfunctions_impl);

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
        PRINT_STRING("numpy$lib$_nanfunctions_impl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$_nanfunctions_impl: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$_nanfunctions_impl: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._nanfunctions_impl" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$_nanfunctions_impl\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$_nanfunctions_impl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_nanfunctions_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_nanfunctions_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_nanfunctions_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_nanfunctions_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$_nanfunctions_impl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$_nanfunctions_impl);
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

        UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_numpy$lib$_nanfunctions_impl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_1eff39d55cf507065c2737d687444033;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$lib$_nanfunctions_impl = MAKE_MODULE_FRAME(code_objects_d843c872ff42fba45cf2def51cf17bcf, module_numpy$lib$_nanfunctions_impl);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_nanfunctions_impl);
assert(Py_REFCNT(frame_frame_numpy$lib$_nanfunctions_impl) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_nanfunctions_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 24;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_nanfunctions_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 26;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$_nanfunctions_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 27;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_plain__core,
        const_int_0
    );
} else {
    tmp_import_name_from_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__core);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_plain_numeric,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_numeric);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nx, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$lib$_nanfunctions_impl;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_overrides_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 28;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_plain_overrides,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_overrides);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$lib$_nanfunctions_impl;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__function_base_impl_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 29;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_plain__function_base_impl,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__function_base_impl);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_fnb, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_d7f534cd93611b81223c377d3a08aa34;
tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy$lib$_nanfunctions_impl;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__weights_are_valid_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 30;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_numpy$lib$_nanfunctions_impl,
        mod_consts.const_str_plain__weights_are_valid,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__weights_are_valid);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__weights_are_valid, tmp_assign_source_10);
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
tmp_expression_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$overrides(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overrides);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array_function_dispatch);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 32;
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


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = LIST_COPY(tstate, mod_consts.const_list_e328792b501ba3bfe9ef50afeb6f0d39_list);
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__1__nan_mask(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nan_mask, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__2__replace_nan(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__replace_nan, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__3__copyto(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__copyto, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_false_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__4__remove_nan_1d(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_nan_1d, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__5__divide_by_count(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__divide_by_count, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_none_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__6__nanmin_dispatcher(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmin_dispatcher, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_defaults_5;
PyObject *tmp_tuple_element_2;
tmp_called_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
assert(!(tmp_called_value_3 == NULL));
tmp_args_element_value_1 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmin_dispatcher(tstate);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 252;
tmp_called_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = Py_None;
tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_5, 1, tmp_tuple_element_2);
tmp_expression_value_2 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_defaults_5, 2, tmp_tuple_element_2);
tmp_expression_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_defaults_5, 3, tmp_tuple_element_2);
tmp_expression_value_4 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_defaults_5, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_defaults_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

tmp_args_element_value_2 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__7_nanmin(tstate, tmp_defaults_5);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 252;
tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanmin, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_none_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__8__nanmax_dispatcher(tstate, tmp_defaults_6);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmax_dispatcher, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_defaults_7;
PyObject *tmp_tuple_element_3;
tmp_called_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmax_dispatcher(tstate);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 382;
tmp_called_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = Py_None;
tmp_defaults_7 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 1, tmp_tuple_element_3);
tmp_expression_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;

    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_defaults_7, 2, tmp_tuple_element_3);
tmp_expression_value_6 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;

    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_defaults_7, 3, tmp_tuple_element_3);
tmp_expression_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 384;

    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_defaults_7, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_defaults_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

tmp_args_element_value_4 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__9_nanmax(tstate, tmp_defaults_7);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 382;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanmax, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_8;
PyObject *tmp_kw_defaults_1;
tmp_defaults_8 = mod_consts.const_tuple_none_none_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_63956881baf8acd3fe830e4cb2d32e40);
Py_INCREF(tmp_defaults_8);

tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__10__nanargmin_dispatcher(tstate, tmp_defaults_8, tmp_kw_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmin_dispatcher, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_defaults_9;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_8;
tmp_called_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 510;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanargmin_dispatcher(tstate);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 510;
tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;

    goto frame_exception_exit_1;
}
tmp_defaults_9 = mod_consts.const_tuple_none_none_tuple;
tmp_dict_key_1 = mod_consts.const_str_plain_keepdims;
tmp_expression_value_8 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 511;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__NoValue);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 511;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
Py_INCREF(tmp_defaults_9);

tmp_args_element_value_6 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__11_nanargmin(tstate, tmp_defaults_9, tmp_kw_defaults_2);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 510;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanargmin, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_10;
PyObject *tmp_kw_defaults_3;
tmp_defaults_10 = mod_consts.const_tuple_none_none_tuple;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_63956881baf8acd3fe830e4cb2d32e40);
Py_INCREF(tmp_defaults_10);

tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__12__nanargmax_dispatcher(tstate, tmp_defaults_10, tmp_kw_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanargmax_dispatcher, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_defaults_11;
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_9;
tmp_called_value_9 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 571;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanargmax_dispatcher(tstate);
assert(!(tmp_args_element_value_7 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 571;
tmp_called_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 571;

    goto frame_exception_exit_1;
}
tmp_defaults_11 = mod_consts.const_tuple_none_none_tuple;
tmp_dict_key_2 = mod_consts.const_str_plain_keepdims;
tmp_expression_value_9 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 572;

    goto frame_exception_exit_1;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__NoValue);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 572;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
Py_INCREF(tmp_defaults_11);

tmp_args_element_value_8 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__13_nanargmax(tstate, tmp_defaults_11, tmp_kw_defaults_4);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 571;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 571;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanargmax, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_defaults_12;
tmp_defaults_12 = mod_consts.const_tuple_none_none_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_12);

tmp_assign_source_26 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__14__nansum_dispatcher(tstate, tmp_defaults_12);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nansum_dispatcher, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_defaults_13;
PyObject *tmp_tuple_element_4;
tmp_called_value_11 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 634;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nansum_dispatcher(tstate);
assert(!(tmp_args_element_value_9 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 634;
tmp_called_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_9);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = Py_None;
tmp_defaults_13 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyTuple_SET_ITEM0(tmp_defaults_13, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_13, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_13, 2, tmp_tuple_element_4);
tmp_expression_value_10 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 635;

    goto tuple_build_exception_3;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_defaults_13, 3, tmp_tuple_element_4);
tmp_expression_value_11 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 636;

    goto tuple_build_exception_3;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_defaults_13, 4, tmp_tuple_element_4);
tmp_expression_value_12 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 636;

    goto tuple_build_exception_3;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_defaults_13, 5, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_defaults_13);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

tmp_args_element_value_10 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__15_nansum(tstate, tmp_defaults_13);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 634;
tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nansum, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_14;
tmp_defaults_14 = mod_consts.const_tuple_none_none_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_14);

tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__16__nanprod_dispatcher(tstate, tmp_defaults_14);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanprod_dispatcher, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_defaults_15;
PyObject *tmp_tuple_element_5;
tmp_called_value_13 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 735;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanprod_dispatcher(tstate);
assert(!(tmp_args_element_value_11 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 735;
tmp_called_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;

    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = Py_None;
tmp_defaults_15 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyTuple_SET_ITEM0(tmp_defaults_15, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_15, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_15, 2, tmp_tuple_element_5);
tmp_expression_value_13 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 736;

    goto tuple_build_exception_4;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 736;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_defaults_15, 3, tmp_tuple_element_5);
tmp_expression_value_14 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 737;

    goto tuple_build_exception_4;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_defaults_15, 4, tmp_tuple_element_5);
tmp_expression_value_15 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 737;

    goto tuple_build_exception_4;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_defaults_15, 5, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_defaults_15);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;

tmp_args_element_value_12 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__17_nanprod(tstate, tmp_defaults_15);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 735;
tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanprod, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_defaults_16;
tmp_defaults_16 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_16);

tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__18__nancumsum_dispatcher(tstate, tmp_defaults_16);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumsum_dispatcher, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_14;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_defaults_17;
tmp_called_value_15 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 816;

    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nancumsum_dispatcher(tstate);
assert(!(tmp_args_element_value_13 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 816;
tmp_called_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_13);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 816;

    goto frame_exception_exit_1;
}
tmp_defaults_17 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_17);

tmp_args_element_value_14 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__19_nancumsum(tstate, tmp_defaults_17);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 816;
tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 816;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nancumsum, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_defaults_18;
tmp_defaults_18 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_18);

tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__20__nancumprod_dispatcher(tstate, tmp_defaults_18);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nancumprod_dispatcher, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_16;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_defaults_19;
tmp_called_value_17 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 885;

    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nancumprod_dispatcher(tstate);
assert(!(tmp_args_element_value_15 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 885;
tmp_called_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_15);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;

    goto frame_exception_exit_1;
}
tmp_defaults_19 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_19);

tmp_args_element_value_16 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__21_nancumprod(tstate, tmp_defaults_19);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 885;
tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nancumprod, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_defaults_20;
PyObject *tmp_kw_defaults_5;
tmp_defaults_20 = mod_consts.const_tuple_none_none_none_none_tuple;
tmp_kw_defaults_5 = DICT_COPY(tstate, mod_consts.const_dict_391cb2ca1b0c1b73affb5787863e84c6);
Py_INCREF(tmp_defaults_20);

tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__22__nanmean_dispatcher(tstate, tmp_defaults_20, tmp_kw_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmean_dispatcher, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_18;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_defaults_21;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kw_defaults_6;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_17;
tmp_called_value_19 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 952;

    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmean_dispatcher(tstate);
assert(!(tmp_args_element_value_17 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 952;
tmp_called_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_17);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 952;

    goto frame_exception_exit_1;
}
tmp_tuple_element_6 = Py_None;
tmp_defaults_21 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_16;
PyTuple_SET_ITEM0(tmp_defaults_21, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_21, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_21, 2, tmp_tuple_element_6);
tmp_expression_value_16 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 953;

    goto tuple_build_exception_5;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 953;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_defaults_21, 3, tmp_tuple_element_6);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_defaults_21);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_dict_key_3 = mod_consts.const_str_plain_where;
tmp_expression_value_17 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_defaults_21);

exception_lineno = 954;

    goto frame_exception_exit_1;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__NoValue);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_defaults_21);

exception_lineno = 954;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_6 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_args_element_value_18 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__23_nanmean(tstate, tmp_defaults_21, tmp_kw_defaults_6);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 952;
tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 952;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanmean, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_defaults_22;
tmp_defaults_22 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_22);

tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__24__nanmedian1d(tstate, tmp_defaults_22);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian1d, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_defaults_23;
tmp_defaults_23 = mod_consts.const_tuple_none_none_false_tuple;
Py_INCREF(tmp_defaults_23);

tmp_assign_source_37 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__25__nanmedian(tstate, tmp_defaults_23);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_defaults_24;
tmp_defaults_24 = mod_consts.const_tuple_none_none_false_tuple;
Py_INCREF(tmp_defaults_24);

tmp_assign_source_38 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__26__nanmedian_small(tstate, tmp_defaults_24);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_small, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_defaults_25;
tmp_defaults_25 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_25);

tmp_assign_source_39 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__27__nanmedian_dispatcher(tstate, tmp_defaults_25);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanmedian_dispatcher, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_20;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_defaults_26;
PyObject *tmp_tuple_element_7;
tmp_called_value_21 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1125;

    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanmedian_dispatcher(tstate);
assert(!(tmp_args_element_value_19 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1125;
tmp_called_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_19);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1125;

    goto frame_exception_exit_1;
}
tmp_tuple_element_7 = Py_None;
tmp_defaults_26 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_18;
PyTuple_SET_ITEM0(tmp_defaults_26, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_26, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_26, 2, tmp_tuple_element_7);
tmp_expression_value_18 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1126;

    goto tuple_build_exception_6;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1126;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_defaults_26, 3, tmp_tuple_element_7);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_called_value_20);
Py_DECREF(tmp_defaults_26);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;

tmp_args_element_value_20 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__28_nanmedian(tstate, tmp_defaults_26);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1125;
tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1125;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanmedian, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_defaults_27;
PyObject *tmp_kw_defaults_7;
tmp_defaults_27 = mod_consts.const_tuple_none_none_none_none_none_tuple;
tmp_kw_defaults_7 = DICT_COPY(tstate, mod_consts.const_dict_ef43cd7b90cbd93aa9666d3f02bf52f0);
Py_INCREF(tmp_defaults_27);

tmp_assign_source_41 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__29__nanpercentile_dispatcher(tstate, tmp_defaults_27, tmp_kw_defaults_7);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanpercentile_dispatcher, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_22;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_defaults_28;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kw_defaults_8;
tmp_called_value_23 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1226;

    goto frame_exception_exit_1;
}
tmp_args_element_value_21 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanpercentile_dispatcher(tstate);
assert(!(tmp_args_element_value_21 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1226;
tmp_called_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_21);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1226;

    goto frame_exception_exit_1;
}
tmp_tuple_element_8 = Py_None;
tmp_defaults_28 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_19;
PyTuple_SET_ITEM0(tmp_defaults_28, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_28, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_28, 2, tmp_tuple_element_8);
tmp_tuple_element_8 = mod_consts.const_str_plain_linear;
PyTuple_SET_ITEM0(tmp_defaults_28, 3, tmp_tuple_element_8);
tmp_expression_value_19 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1234;

    goto tuple_build_exception_7;
}
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1234;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_defaults_28, 4, tmp_tuple_element_8);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_called_value_22);
Py_DECREF(tmp_defaults_28);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_kw_defaults_8 = DICT_COPY(tstate, mod_consts.const_dict_ef43cd7b90cbd93aa9666d3f02bf52f0);

tmp_args_element_value_22 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__30_nanpercentile(tstate, tmp_defaults_28, tmp_kw_defaults_8);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1226;
tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1226;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanpercentile, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_defaults_29;
PyObject *tmp_kw_defaults_9;
tmp_defaults_29 = mod_consts.const_tuple_none_none_none_none_none_tuple;
tmp_kw_defaults_9 = DICT_COPY(tstate, mod_consts.const_dict_ef43cd7b90cbd93aa9666d3f02bf52f0);
Py_INCREF(tmp_defaults_29);

tmp_assign_source_43 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__31__nanquantile_dispatcher(tstate, tmp_defaults_29, tmp_kw_defaults_9);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_dispatcher, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_24;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_defaults_30;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kw_defaults_10;
tmp_called_value_25 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1405;

    goto frame_exception_exit_1;
}
tmp_args_element_value_23 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanquantile_dispatcher(tstate);
assert(!(tmp_args_element_value_23 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1405;
tmp_called_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_23);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1405;

    goto frame_exception_exit_1;
}
tmp_tuple_element_9 = Py_None;
tmp_defaults_30 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_20;
PyTuple_SET_ITEM0(tmp_defaults_30, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_30, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_30, 2, tmp_tuple_element_9);
tmp_tuple_element_9 = mod_consts.const_str_plain_linear;
PyTuple_SET_ITEM0(tmp_defaults_30, 3, tmp_tuple_element_9);
tmp_expression_value_20 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1413;

    goto tuple_build_exception_8;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1413;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_defaults_30, 4, tmp_tuple_element_9);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_defaults_30);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_kw_defaults_10 = DICT_COPY(tstate, mod_consts.const_dict_ef43cd7b90cbd93aa9666d3f02bf52f0);

tmp_args_element_value_24 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__32_nanquantile(tstate, tmp_defaults_30, tmp_kw_defaults_10);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1405;
tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1405;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanquantile, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_defaults_31;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = Py_None;
tmp_defaults_31 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_expression_value_21;
PyTuple_SET_ITEM0(tmp_defaults_31, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_31, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_31, 2, tmp_tuple_element_10);
tmp_tuple_element_10 = mod_consts.const_str_plain_linear;
PyTuple_SET_ITEM0(tmp_defaults_31, 3, tmp_tuple_element_10);
tmp_expression_value_21 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1584;

    goto tuple_build_exception_9;
}
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1584;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_defaults_31, 4, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_31, 5, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_31, 6, tmp_tuple_element_10);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_defaults_31);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;

tmp_assign_source_45 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__33__nanquantile_unchecked(tstate, tmp_defaults_31);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_unchecked, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_defaults_32;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_22;
tmp_defaults_32 = mod_consts.const_tuple_none_none_false_str_plain_linear_false_tuple;
tmp_dict_key_4 = mod_consts.const_str_plain_a;
tmp_expression_value_22 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1606;

    goto frame_exception_exit_1;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_array);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1606;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_q;
tmp_expression_value_23 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1607;

    goto dict_build_exception_1;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_array);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1607;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_weights;
tmp_expression_value_24 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1608;

    goto dict_build_exception_1;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_array);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1608;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_axis;
tmp_dict_value_4 = mod_consts.const_uniontype_tuple_type_int_anon_NoneType_tuple;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_overwrite_input;
tmp_dict_value_4 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_32);

tmp_assign_source_46 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__34__nanquantile_ureduce_func(tstate, tmp_defaults_32, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_ureduce_func, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_defaults_33;
tmp_defaults_33 = mod_consts.const_tuple_false_str_plain_linear_none_false_tuple;
Py_INCREF(tmp_defaults_33);

tmp_assign_source_47 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__35__nanquantile_1d(tstate, tmp_defaults_33);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanquantile_1d, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_defaults_34;
PyObject *tmp_kw_defaults_11;
tmp_defaults_34 = mod_consts.const_tuple_none_none_none_none_none_tuple;
tmp_kw_defaults_11 = DICT_COPY(tstate, mod_consts.const_dict_6cc7fa10a321425870fa24d1626c45e7);
Py_INCREF(tmp_defaults_34);

tmp_assign_source_48 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__36__nanvar_dispatcher(tstate, tmp_defaults_34, tmp_kw_defaults_11);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanvar_dispatcher, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_26;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_defaults_35;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kw_defaults_12;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_26;
tmp_called_value_27 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1693;

    goto frame_exception_exit_1;
}
tmp_args_element_value_25 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanvar_dispatcher(tstate);
assert(!(tmp_args_element_value_25 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1693;
tmp_called_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_25);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1693;

    goto frame_exception_exit_1;
}
tmp_tuple_element_11 = Py_None;
tmp_defaults_35 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_25;
PyTuple_SET_ITEM0(tmp_defaults_35, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_35, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_35, 2, tmp_tuple_element_11);
tmp_tuple_element_11 = const_int_0;
PyTuple_SET_ITEM0(tmp_defaults_35, 3, tmp_tuple_element_11);
tmp_expression_value_25 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1694;

    goto tuple_build_exception_10;
}
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1694;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_defaults_35, 4, tmp_tuple_element_11);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_called_value_26);
Py_DECREF(tmp_defaults_35);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_dict_key_5 = mod_consts.const_str_plain_where;
tmp_expression_value_26 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_26);
Py_DECREF(tmp_defaults_35);

exception_lineno = 1695;

    goto frame_exception_exit_1;
}
tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain__NoValue);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_26);
Py_DECREF(tmp_defaults_35);

exception_lineno = 1695;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_12 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_mean;
tmp_expression_value_27 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1695;

    goto dict_build_exception_2;
}
tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain__NoValue);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_correction;
tmp_expression_value_28 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1695;

    goto dict_build_exception_2;
}
tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain__NoValue);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_26);
Py_DECREF(tmp_defaults_35);
Py_DECREF(tmp_kw_defaults_12);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_args_element_value_26 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__37_nanvar(tstate, tmp_defaults_35, tmp_kw_defaults_12);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1693;
tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1693;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanvar, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_defaults_36;
PyObject *tmp_kw_defaults_13;
tmp_defaults_36 = mod_consts.const_tuple_none_none_none_none_none_tuple;
tmp_kw_defaults_13 = DICT_COPY(tstate, mod_consts.const_dict_6cc7fa10a321425870fa24d1626c45e7);
Py_INCREF(tmp_defaults_36);

tmp_assign_source_50 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__38__nanstd_dispatcher(tstate, tmp_defaults_36, tmp_kw_defaults_13);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nanstd_dispatcher, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_28;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_defaults_37;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kw_defaults_14;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_30;
tmp_called_value_29 = module_var_accessor_numpy$lib$_nanfunctions_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1883;

    goto frame_exception_exit_1;
}
tmp_args_element_value_27 = module_var_accessor_numpy$lib$_nanfunctions_impl$_nanstd_dispatcher(tstate);
assert(!(tmp_args_element_value_27 == NULL));
frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1883;
tmp_called_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_27);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1883;

    goto frame_exception_exit_1;
}
tmp_tuple_element_12 = Py_None;
tmp_defaults_37 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_29;
PyTuple_SET_ITEM0(tmp_defaults_37, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_37, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_37, 2, tmp_tuple_element_12);
tmp_tuple_element_12 = const_int_0;
PyTuple_SET_ITEM0(tmp_defaults_37, 3, tmp_tuple_element_12);
tmp_expression_value_29 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1884;

    goto tuple_build_exception_11;
}
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain__NoValue);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1884;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_defaults_37, 4, tmp_tuple_element_12);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_called_value_28);
Py_DECREF(tmp_defaults_37);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_dict_key_6 = mod_consts.const_str_plain_where;
tmp_expression_value_30 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_28);
Py_DECREF(tmp_defaults_37);

exception_lineno = 1885;

    goto frame_exception_exit_1;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain__NoValue);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);
Py_DECREF(tmp_defaults_37);

exception_lineno = 1885;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_14 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_mean;
tmp_expression_value_31 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1885;

    goto dict_build_exception_3;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain__NoValue);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1885;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_correction;
tmp_expression_value_32 = module_var_accessor_numpy$lib$_nanfunctions_impl$np(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1885;

    goto dict_build_exception_3;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain__NoValue);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1885;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_14, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_called_value_28);
Py_DECREF(tmp_defaults_37);
Py_DECREF(tmp_kw_defaults_14);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_args_element_value_28 = MAKE_FUNCTION_numpy$lib$_nanfunctions_impl$$$function__39_nanstd(tstate, tmp_defaults_37, tmp_kw_defaults_14);

frame_frame_numpy$lib$_nanfunctions_impl->m_frame.f_lineno = 1883;
tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1883;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nanstd, tmp_assign_source_51);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_nanfunctions_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_nanfunctions_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_nanfunctions_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$lib$_nanfunctions_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$_nanfunctions_impl", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._nanfunctions_impl" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$_nanfunctions_impl);
    return module_numpy$lib$_nanfunctions_impl;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_nanfunctions_impl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$_nanfunctions_impl", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

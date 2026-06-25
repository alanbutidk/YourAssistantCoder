/* Generated code for Python module 'numpy$lib$_index_tricks_impl'
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



/* The "module_numpy$lib$_index_tricks_impl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$_index_tricks_impl;
PyDictObject *moduledict_numpy$lib$_index_tricks_impl;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__nx;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain_np;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain_size;
PyObject *const_str_plain_astype;
PyObject *const_str_plain_intp;
PyObject *const_str_plain_new;
PyObject *const_str_plain_ndim;
PyObject *const_str_digest_dc389157f25a06c45c9e142fdf180587;
PyObject *const_str_plain_issubdtype;
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_nonzero;
PyObject *const_str_plain_reshape;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_nd;
PyObject *const_str_plain_out;
PyObject *const_str_digest_5b025555514f46e5d18ef4e7a92c8c41;
PyObject *const_str_plain_sparse;
PyObject *const_str_plain_step;
PyObject *const_str_plain_start;
PyObject *const_str_plain_stop;
PyObject *const_str_plain_complexfloating;
PyObject *const_str_plain_math;
PyObject *const_str_plain_ceil;
PyObject *const_str_plain_num_list;
PyObject *const_str_plain_result_type;
PyObject *const_str_plain_arange;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain_indices;
PyObject *const_str_plain_nn;
PyObject *const_str_plain_newaxis;
PyObject *const_slice_none_none_none;
PyObject *const_str_plain_slobj;
PyObject *const_tuple_type_IndexError_type_TypeError_tuple;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_str_plain_sparse_tuple;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_axis;
PyObject *const_str_plain_matrix;
PyObject *const_str_plain_trans1d;
PyObject *const_str_plain_ndmin;
PyObject *const_str_plain__getframe;
PyObject *const_str_plain_f_back;
PyObject *const_str_plain_matrixlib;
PyObject *const_str_plain_bmat;
PyObject *const_str_plain_f_globals;
PyObject *const_str_plain_f_locals;
PyObject *const_str_plain_linspace;
PyObject *const_tuple_str_plain_num_tuple;
PyObject *const_str_plain_array;
PyObject *const_tuple_str_plain_copy_str_plain_ndmin_tuple;
PyObject *const_str_plain_swapaxes;
PyObject *const_str_digest_0e72a689a82b574ba7397ec1f496ec9d;
PyObject *const_tuple_str_plain_r_str_plain_c_tuple;
PyObject *const_str_plain_c;
PyObject *const_str_chr_44;
PyObject *const_tuple_str_chr_44_tuple;
PyObject *const_slice_none_int_pos_2_none;
PyObject *const_int_pos_2;
PyObject *const_str_digest_c5b4fc79c07e43a46324dbe6b4c44f6f;
PyObject *const_tuple_type_ValueError_type_TypeError_tuple;
PyObject *const_str_digest_768284c408c3a084dbbd31908c895311;
PyObject *const_str_plain_ScalarType;
PyObject *const_tuple_str_plain_copy_str_plain_subok_str_plain_ndmin_tuple;
PyObject *const_str_plain_transpose;
PyObject *const_str_plain_objs;
PyObject *const_str_plain_result_type_objs;
PyObject *const_str_plain_final_dtype;
PyObject *const_tuple_91e80a6017819312d7beeb331be85262_tuple;
PyObject *const_str_plain_concatenate;
PyObject *const_tuple_str_plain_axis_tuple;
PyObject *const_str_plain_makemat;
PyObject *const_str_plain_col;
PyObject *const_str_plain_T;
PyObject *const_str_plain_AxisConcatenator;
PyObject *const_dict_81b4235b86f1e457ad123f6637c07a25;
PyObject *const_str_plain_flat;
PyObject *const_str_plain_coords;
PyObject *const_str_digest_3ad4f3ca329b45931449104e9d325acf;
PyObject *const_str_plain_min;
PyObject *const_str_plain_shape;
PyObject *const_dict_6e6ad1f7f9ad133a37c803a2af55baf6;
PyObject *const_str_digest_b6df23ce293ccd6e643240b16419a03d;
PyObject *const_str_plain_product;
PyObject *const_str_plain__iter;
PyObject *const_str_digest_2fa21c313e6c641f3a91a0b4514f8649;
PyObject *const_str_plain_maketuple;
PyObject *const_str_digest_d685a6f7f529aa109e07a7b645a1f27e;
PyObject *const_str_plain_all;
PyObject *const_str_plain_diff;
PyObject *const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
PyObject *const_str_plain_cumprod;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_digest_491bbba05ae9c96cea6ddd7dd7dd1145;
PyObject *const_str_digest_126b3d2a26ebc3a276d650ca5f98797e;
PyObject *const_str_digest_9fce22252d81f16af5f47d8c67e196f5;
PyObject *const_str_plain_diag_indices;
PyObject *const_str_digest_b6605aae79923f11e0da0aa4b8c2dfd1;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_functools;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_itertools;
PyObject *const_tuple_str_plain_product_tuple;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_b7a345dfe4be14248864e7854d4e6836;
PyObject *const_str_plain__core;
PyObject *const_str_plain_numeric;
PyObject *const_str_digest_f462c9dbdab6a6e18585dee27e01f422;
PyObject *const_str_digest_218a55714e76c818c59b93d99676c0b2;
PyObject *const_tuple_str_plain_linspace_str_plain_overrides_tuple;
PyObject *const_str_plain_overrides;
PyObject *const_str_digest_0d07450478bddf097fde7f172c696a5c;
PyObject *const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple;
PyObject *const_str_plain_ravel_multi_index;
PyObject *const_str_plain_unravel_index;
PyObject *const_tuple_str_plain_ScalarType_str_plain_array_tuple;
PyObject *const_str_digest_5906891205c2cc5e01780a64b0735586;
PyObject *const_tuple_str_plain_issubdtype_tuple;
PyObject *const_str_digest_1cc096bfca6f12718d06670f9299228c;
PyObject *const_tuple_str_plain_set_module_tuple;
PyObject *const_str_plain_set_module;
PyObject *const_str_digest_d7f534cd93611b81223c377d3a08aa34;
PyObject *const_tuple_str_plain_diff_tuple;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_array_function_dispatch;
PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
PyObject *const_list_fa22549eaa1a878119e86a628980cdb1_list;
PyObject *const_str_plain__ix__dispatcher;
PyObject *const_str_plain_ix_;
PyObject *const_str_digest_404fc6f31392643c8aad2353fa336792;
PyObject *const_str_digest_aac8b0d5454b245461f067eecf78dfba;
PyObject *const_str_plain_nd_grid;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_107;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___slots__;
PyObject *const_str_digest_da6df6758ad479794ae49c932d506792;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_0a0305b94276cadebffc43457dd27f07;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_MGridClass;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_fb2f7672f5185b4d9b602d76cc85e15e;
PyObject *const_int_pos_211;
PyObject *const_str_digest_6a63ba6bd618ebdbf43ae38ee038c2ca;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_mgrid;
PyObject *const_str_plain_OGridClass;
PyObject *const_str_digest_75826e8d8503cdcdc480a350b320de15;
PyObject *const_int_pos_273;
PyObject *const_str_digest_b1f540ccf92c598e463e69dd614c7adf;
PyObject *const_str_plain_ogrid;
PyObject *const_str_digest_57028da1e1ba45202d56fc21d6ea0766;
PyObject *const_int_pos_325;
PyObject *const_tuple_dc0af268025f69148bee4c10096b08e4_tuple;
PyObject *const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
PyObject *const_str_digest_f54f2fe984a25d17197bbe7e6ba8fc99;
PyObject *const_str_digest_f756e93c724076c1292baf07c7f9a44f;
PyObject *const_str_plain___len__;
PyObject *const_str_digest_b87789d8b99605f48944066ec76ed78a;
PyObject *const_tuple_ada4c526b35eeeda736a7ec5dc48c2d1_tuple;
PyObject *const_str_plain_RClass;
PyObject *const_str_digest_cee33f55ed75a99fda796c6b6a312aa4;
PyObject *const_int_pos_452;
PyObject *const_str_digest_cd6a983de4e45de7ea45ad50c10a6625;
PyObject *const_str_plain_r_;
PyObject *const_str_plain_CClass;
PyObject *const_str_digest_246a64775690277c41bf46c4c9ba4bfe;
PyObject *const_int_pos_556;
PyObject *const_str_digest_3572bb3baed1a42156d8cfd28d2ece0d;
PyObject *const_str_plain_c_;
PyObject *const_tuple_str_plain_numpy_tuple;
PyObject *const_str_digest_c5d221b2e2f6af29c4c1eeb5531453e6;
PyObject *const_str_plain_ndenumerate;
PyObject *const_int_pos_591;
PyObject *const_str_digest_1e988d4c168f4fb3ac128b4d6246b6bc;
PyObject *const_str_plain___next__;
PyObject *const_str_digest_5ead3c6cba04556a9936be908e59bd17;
PyObject *const_str_digest_3745c56d9995e832af9f95f6c1da753d;
PyObject *const_tuple_str_plain_iter_tuple;
PyObject *const_str_digest_61cdbd045374d69ad00dcbd6573a2301;
PyObject *const_str_plain_ndindex;
PyObject *const_int_pos_641;
PyObject *const_str_digest_06610d63bf9e8bdc157cf6ad2baa3ac9;
PyObject *const_str_digest_327c29879ba6698190b30147e71aced3;
PyObject *const_str_digest_3919ca950c009fa0d60ed31cc16b66fb;
PyObject *const_tuple_str_plain__iter_tuple;
PyObject *const_str_digest_4f3fe7d01fca58714dab8b789e07bfe9;
PyObject *const_str_plain_IndexExpression;
PyObject *const_int_pos_723;
PyObject *const_tuple_str_plain_maketuple_tuple;
PyObject *const_str_digest_a1e802e64964f8979e2725072f854335;
PyObject *const_str_digest_20fb8a3a587ea75579e216f47cb1f4a8;
PyObject *const_str_plain_index_exp;
PyObject *const_str_plain_s_;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain__fill_diagonal_dispatcher;
PyObject *const_str_plain_fill_diagonal;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain__diag_indices_from;
PyObject *const_str_plain_diag_indices_from;
PyObject *const_str_digest_8cba975ef02ed5b86c708f902ea937c8;
PyObject *const_str_digest_6d832f348c08bb69f15fec08f362e86d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_51762364a63c56e20ec2ad55e19d444f_tuple;
PyObject *const_tuple_str_plain_self_str_plain_item_tuple;
PyObject *const_tuple_853631bf5a8b49f8b30f4d63011f9c3c_tuple;
PyObject *const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_maketuple_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_sparse_tuple;
PyObject *const_tuple_str_plain_self_str_plain_arr_tuple;
PyObject *const_tuple_str_plain_self_str_plain_shape_tuple;
PyObject *const_tuple_str_plain_arr_tuple;
PyObject *const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple;
PyObject *const_tuple_str_plain_args_tuple;
PyObject *const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple;
PyObject *const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple;
PyObject *const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[225];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.lib._index_tricks_impl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__nx);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_astype);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_intp);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc389157f25a06c45c9e142fdf180587);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_issubdtype);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_nonzero);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_nd);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_out);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b025555514f46e5d18ef4e7a92c8c41);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_sparse);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_step);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_complexfloating);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_ceil);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_list);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_result_type);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_arange);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_indices);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_nn);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_newaxis);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_none);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_slobj);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_type_IndexError_type_TypeError_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sparse_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_axis);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_matrix);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_trans1d);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndmin);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__getframe);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_back);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_matrixlib);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_bmat);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_globals);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_locals);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_linspace);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_num_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_copy_str_plain_ndmin_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_swapaxes);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e72a689a82b574ba7397ec1f496ec9d);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_str_plain_c_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5b4fc79c07e43a46324dbe6b4c44f6f);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_TypeError_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_768284c408c3a084dbbd31908c895311);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScalarType);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_copy_str_plain_subok_str_plain_ndmin_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_transpose);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_objs);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_result_type_objs);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_final_dtype);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_91e80a6017819312d7beeb331be85262_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_makemat);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_col);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_AxisConcatenator);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_dict_81b4235b86f1e457ad123f6637c07a25);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_flat);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_coords);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ad4f3ca329b45931449104e9d325acf);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_dict_6e6ad1f7f9ad133a37c803a2af55baf6);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6df23ce293ccd6e643240b16419a03d);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_product);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain__iter);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fa21c313e6c641f3a91a0b4514f8649);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_maketuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_d685a6f7f529aa109e07a7b645a1f27e);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_all);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_diff);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae18caca66ad511d55f1373e7c1a6603);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_cumprod);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_491bbba05ae9c96cea6ddd7dd7dd1145);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_126b3d2a26ebc3a276d650ca5f98797e);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fce22252d81f16af5f47d8c67e196f5);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_diag_indices);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6605aae79923f11e0da0aa4b8c2dfd1);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_itertools);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_product_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_numeric);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_f462c9dbdab6a6e18585dee27e01f422);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_linspace_str_plain_overrides_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_overrides);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_ravel_multi_index);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_unravel_index);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ScalarType_str_plain_array_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_5906891205c2cc5e01780a64b0735586);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_issubdtype_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_module);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7f534cd93611b81223c377d3a08aa34);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_diff_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_list_fa22549eaa1a878119e86a628980cdb1_list);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain__ix__dispatcher);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_ix_);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_aac8b0d5454b245461f067eecf78dfba);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_nd_grid);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_107);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_da6df6758ad479794ae49c932d506792);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a0305b94276cadebffc43457dd27f07);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_MGridClass);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb2f7672f5185b4d9b602d76cc85e15e);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_int_pos_211);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a63ba6bd618ebdbf43ae38ee038c2ca);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_mgrid);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_OGridClass);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_75826e8d8503cdcdc480a350b320de15);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_int_pos_273);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1f540ccf92c598e463e69dd614c7adf);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_ogrid);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_57028da1e1ba45202d56fc21d6ea0766);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_int_pos_325);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_dc0af268025f69148bee4c10096b08e4_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_false_int_pos_1_int_neg_1_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_f54f2fe984a25d17197bbe7e6ba8fc99);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_f756e93c724076c1292baf07c7f9a44f);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain___len__);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_b87789d8b99605f48944066ec76ed78a);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_ada4c526b35eeeda736a7ec5dc48c2d1_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_RClass);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_cee33f55ed75a99fda796c6b6a312aa4);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_452);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd6a983de4e45de7ea45ad50c10a6625);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_r_);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_CClass);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_246a64775690277c41bf46c4c9ba4bfe);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_int_pos_556);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_3572bb3baed1a42156d8cfd28d2ece0d);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5d221b2e2f6af29c4c1eeb5531453e6);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndenumerate);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_int_pos_591);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e988d4c168f4fb3ac128b4d6246b6bc);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain___next__);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ead3c6cba04556a9936be908e59bd17);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_3745c56d9995e832af9f95f6c1da753d);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iter_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_61cdbd045374d69ad00dcbd6573a2301);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndindex);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_int_pos_641);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_06610d63bf9e8bdc157cf6ad2baa3ac9);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_327c29879ba6698190b30147e71aced3);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_3919ca950c009fa0d60ed31cc16b66fb);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__iter_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f3fe7d01fca58714dab8b789e07bfe9);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_IndexExpression);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_int_pos_723);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maketuple_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1e802e64964f8979e2725072f854335);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_20fb8a3a587ea75579e216f47cb1f4a8);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_index_exp);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_s_);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain__fill_diagonal_dispatcher);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_fill_diagonal);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain__diag_indices_from);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_diag_indices_from);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_8cba975ef02ed5b86c708f902ea937c8);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d832f348c08bb69f15fec08f362e86d);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_51762364a63c56e20ec2ad55e19d444f_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_853631bf5a8b49f8b30f4d63011f9c3c_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_maketuple_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sparse_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_arr_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_shape_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_arr_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple);
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
void checkModuleConstants_numpy$lib$_index_tricks_impl(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__nx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nx);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_astype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astype);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_intp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intp);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_new));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc389157f25a06c45c9e142fdf180587));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc389157f25a06c45c9e142fdf180587);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_issubdtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issubdtype);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_nonzero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nonzero);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_reshape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reshape);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_nd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nd);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_out));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_out);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b025555514f46e5d18ef4e7a92c8c41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b025555514f46e5d18ef4e7a92c8c41);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_sparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sparse);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_step));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_step);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_complexfloating));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_complexfloating);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_math));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_math);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_ceil));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ceil);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_num_list);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_result_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result_type);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_arange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arange);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_indices));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_indices);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_nn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nn);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_newaxis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newaxis);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_none);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_slobj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_slobj);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_type_IndexError_type_TypeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_IndexError_type_TypeError_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sparse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_sparse_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_axis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_axis);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_matrix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_matrix);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_trans1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trans1d);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndmin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndmin);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__getframe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__getframe);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_back));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_back);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_matrixlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_matrixlib);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_bmat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bmat);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_globals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_globals);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_locals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_locals);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_linspace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linspace);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_num_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_num_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_copy_str_plain_ndmin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_copy_str_plain_ndmin_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_swapaxes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_swapaxes);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e72a689a82b574ba7397ec1f496ec9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e72a689a82b574ba7397ec1f496ec9d);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_r_str_plain_c_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_chr_44));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_44);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_44_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_2_none);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5b4fc79c07e43a46324dbe6b4c44f6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5b4fc79c07e43a46324dbe6b4c44f6f);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_TypeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_ValueError_type_TypeError_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_768284c408c3a084dbbd31908c895311));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_768284c408c3a084dbbd31908c895311);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScalarType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScalarType);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_copy_str_plain_subok_str_plain_ndmin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_copy_str_plain_subok_str_plain_ndmin_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_transpose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transpose);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_objs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_objs);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_result_type_objs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result_type_objs);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_final_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_final_dtype);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_91e80a6017819312d7beeb331be85262_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_91e80a6017819312d7beeb331be85262_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_concatenate);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axis_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_makemat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_makemat);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_col));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_col);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_AxisConcatenator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AxisConcatenator);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_dict_81b4235b86f1e457ad123f6637c07a25));
CHECK_OBJECT_DEEP(mod_consts.const_dict_81b4235b86f1e457ad123f6637c07a25);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_flat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flat);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_coords));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_coords);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ad4f3ca329b45931449104e9d325acf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ad4f3ca329b45931449104e9d325acf);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_dict_6e6ad1f7f9ad133a37c803a2af55baf6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e6ad1f7f9ad133a37c803a2af55baf6);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6df23ce293ccd6e643240b16419a03d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6df23ce293ccd6e643240b16419a03d);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_product));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_product);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain__iter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__iter);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fa21c313e6c641f3a91a0b4514f8649));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fa21c313e6c641f3a91a0b4514f8649);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_maketuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maketuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_d685a6f7f529aa109e07a7b645a1f27e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d685a6f7f529aa109e07a7b645a1f27e);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_all);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_diff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_diff);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae18caca66ad511d55f1373e7c1a6603));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae18caca66ad511d55f1373e7c1a6603);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_cumprod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cumprod);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_491bbba05ae9c96cea6ddd7dd7dd1145));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_491bbba05ae9c96cea6ddd7dd7dd1145);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_126b3d2a26ebc3a276d650ca5f98797e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_126b3d2a26ebc3a276d650ca5f98797e);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fce22252d81f16af5f47d8c67e196f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9fce22252d81f16af5f47d8c67e196f5);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_diag_indices));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_diag_indices);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6605aae79923f11e0da0aa4b8c2dfd1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6605aae79923f11e0da0aa4b8c2dfd1);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_itertools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itertools);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_product_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_product_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_numeric));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numeric);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_f462c9dbdab6a6e18585dee27e01f422));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f462c9dbdab6a6e18585dee27e01f422);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_linspace_str_plain_overrides_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_linspace_str_plain_overrides_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_overrides));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overrides);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_ravel_multi_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ravel_multi_index);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_unravel_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unravel_index);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ScalarType_str_plain_array_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ScalarType_str_plain_array_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_5906891205c2cc5e01780a64b0735586));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5906891205c2cc5e01780a64b0735586);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_issubdtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_issubdtype_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_module_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_module);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7f534cd93611b81223c377d3a08aa34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7f534cd93611b81223c377d3a08aa34);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_diff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_diff_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_dispatch);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_list_fa22549eaa1a878119e86a628980cdb1_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_fa22549eaa1a878119e86a628980cdb1_list);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain__ix__dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ix__dispatcher);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_ix_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ix_);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_aac8b0d5454b245461f067eecf78dfba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aac8b0d5454b245461f067eecf78dfba);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_nd_grid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nd_grid);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_107));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_107);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_da6df6758ad479794ae49c932d506792));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da6df6758ad479794ae49c932d506792);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a0305b94276cadebffc43457dd27f07));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a0305b94276cadebffc43457dd27f07);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_MGridClass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MGridClass);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb2f7672f5185b4d9b602d76cc85e15e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb2f7672f5185b4d9b602d76cc85e15e);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_int_pos_211));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_211);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a63ba6bd618ebdbf43ae38ee038c2ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a63ba6bd618ebdbf43ae38ee038c2ca);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_mgrid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mgrid);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_OGridClass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OGridClass);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_75826e8d8503cdcdc480a350b320de15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75826e8d8503cdcdc480a350b320de15);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_int_pos_273));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_273);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1f540ccf92c598e463e69dd614c7adf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1f540ccf92c598e463e69dd614c7adf);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_ogrid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ogrid);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_57028da1e1ba45202d56fc21d6ea0766));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57028da1e1ba45202d56fc21d6ea0766);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_int_pos_325));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_325);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_dc0af268025f69148bee4c10096b08e4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dc0af268025f69148bee4c10096b08e4_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_false_int_pos_1_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_false_int_pos_1_int_neg_1_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_f54f2fe984a25d17197bbe7e6ba8fc99));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f54f2fe984a25d17197bbe7e6ba8fc99);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_f756e93c724076c1292baf07c7f9a44f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f756e93c724076c1292baf07c7f9a44f);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain___len__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___len__);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_b87789d8b99605f48944066ec76ed78a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b87789d8b99605f48944066ec76ed78a);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_ada4c526b35eeeda736a7ec5dc48c2d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ada4c526b35eeeda736a7ec5dc48c2d1_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_RClass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RClass);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_cee33f55ed75a99fda796c6b6a312aa4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cee33f55ed75a99fda796c6b6a312aa4);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_452));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_452);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd6a983de4e45de7ea45ad50c10a6625));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cd6a983de4e45de7ea45ad50c10a6625);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_r_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_r_);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_CClass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CClass);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_246a64775690277c41bf46c4c9ba4bfe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_246a64775690277c41bf46c4c9ba4bfe);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_int_pos_556));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_556);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_3572bb3baed1a42156d8cfd28d2ece0d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3572bb3baed1a42156d8cfd28d2ece0d);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_numpy_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5d221b2e2f6af29c4c1eeb5531453e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5d221b2e2f6af29c4c1eeb5531453e6);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndenumerate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndenumerate);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_int_pos_591));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_591);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e988d4c168f4fb3ac128b4d6246b6bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e988d4c168f4fb3ac128b4d6246b6bc);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain___next__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___next__);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ead3c6cba04556a9936be908e59bd17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ead3c6cba04556a9936be908e59bd17);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_3745c56d9995e832af9f95f6c1da753d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3745c56d9995e832af9f95f6c1da753d);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_iter_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_61cdbd045374d69ad00dcbd6573a2301));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61cdbd045374d69ad00dcbd6573a2301);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndindex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndindex);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_int_pos_641));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_641);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_06610d63bf9e8bdc157cf6ad2baa3ac9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06610d63bf9e8bdc157cf6ad2baa3ac9);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_327c29879ba6698190b30147e71aced3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_327c29879ba6698190b30147e71aced3);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_3919ca950c009fa0d60ed31cc16b66fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3919ca950c009fa0d60ed31cc16b66fb);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__iter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__iter_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f3fe7d01fca58714dab8b789e07bfe9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f3fe7d01fca58714dab8b789e07bfe9);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_IndexExpression));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IndexExpression);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_int_pos_723));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_723);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maketuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maketuple_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1e802e64964f8979e2725072f854335));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1e802e64964f8979e2725072f854335);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_20fb8a3a587ea75579e216f47cb1f4a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20fb8a3a587ea75579e216f47cb1f4a8);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_index_exp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_index_exp);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_s_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_s_);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain__fill_diagonal_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fill_diagonal_dispatcher);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_fill_diagonal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fill_diagonal);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain__diag_indices_from));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__diag_indices_from);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_diag_indices_from));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_diag_indices_from);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_8cba975ef02ed5b86c708f902ea937c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8cba975ef02ed5b86c708f902ea937c8);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d832f348c08bb69f15fec08f362e86d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d832f348c08bb69f15fec08f362e86d);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_51762364a63c56e20ec2ad55e19d444f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_51762364a63c56e20ec2ad55e19d444f_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_item_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_853631bf5a8b49f8b30f4d63011f9c3c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_853631bf5a8b49f8b30f4d63011f9c3c_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_maketuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_maketuple_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sparse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_sparse_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_arr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_arr_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_shape_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_shape_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_arr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_arr_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_args_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 25
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
static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$AxisConcatenator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_AxisConcatenator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AxisConcatenator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AxisConcatenator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AxisConcatenator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AxisConcatenator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_AxisConcatenator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_AxisConcatenator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AxisConcatenator);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$CClass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_CClass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CClass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CClass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CClass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CClass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_CClass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_CClass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CClass);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$IndexExpression(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_IndexExpression);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IndexExpression);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IndexExpression, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IndexExpression);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IndexExpression, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_IndexExpression);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_IndexExpression);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IndexExpression);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$MGridClass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_MGridClass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MGridClass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MGridClass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MGridClass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MGridClass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_MGridClass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_MGridClass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MGridClass);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$OGridClass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_OGridClass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OGridClass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OGridClass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OGridClass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OGridClass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_OGridClass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_OGridClass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OGridClass);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$RClass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RClass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RClass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RClass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RClass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RClass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RClass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RClass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RClass);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$ScalarType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ScalarType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ScalarType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ScalarType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ScalarType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarType);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$_diag_indices_from(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__diag_indices_from);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__diag_indices_from);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__diag_indices_from, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__diag_indices_from);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__diag_indices_from, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__diag_indices_from);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__diag_indices_from);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__diag_indices_from);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$_fill_diagonal_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__fill_diagonal_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fill_diagonal_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fill_diagonal_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fill_diagonal_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fill_diagonal_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__fill_diagonal_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__fill_diagonal_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__fill_diagonal_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$_ix__dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ix__dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ix__dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ix__dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ix__dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ix__dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ix__dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ix__dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ix__dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$_nx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nx);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$array(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$array_function_dispatch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$diag_indices(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_diag_indices);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_diag_indices);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_diag_indices, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_diag_indices);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_diag_indices, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_diag_indices);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_diag_indices);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_diag_indices);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$diff(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_diff);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_diff);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_diff, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_diff);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_diff, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_diff);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_diff);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_diff);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$issubdtype(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_issubdtype);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_issubdtype);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_issubdtype, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_issubdtype);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_issubdtype, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_issubdtype);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_issubdtype);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_issubdtype);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$linspace(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_linspace);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_linspace);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_linspace, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_linspace);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_linspace, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_linspace);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_linspace);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_linspace);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$math(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$matrixlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_matrixlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_matrixlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_matrixlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_matrixlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_matrixlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_matrixlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_matrixlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_matrixlib);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$nd_grid(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nd_grid);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nd_grid);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nd_grid, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nd_grid);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nd_grid, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nd_grid);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nd_grid);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_nd_grid);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$overrides(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$product(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_product);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_product);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_product, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_product);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_product, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_product);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_product);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_product);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_index_tricks_impl$set_module(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_index_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_index_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_index_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_module);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_module, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_module);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_module, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_072d412bfd3acfd08eb3fe56a91e49f3;
static PyCodeObject *code_objects_0bfe97c1b6ed6ddb1c7e9834b053c876;
static PyCodeObject *code_objects_5d88a3c22598d647dd10b68339a81bc8;
static PyCodeObject *code_objects_fcc70a9da19b4797353bf54ef70bb9d3;
static PyCodeObject *code_objects_187020e831439b2b307c6bbc6e52af6b;
static PyCodeObject *code_objects_9d56f17c0815d2ddc23c3b4a4c26fca6;
static PyCodeObject *code_objects_23c9f05010bf26873abbeda6f4e56f8b;
static PyCodeObject *code_objects_2d40998cebac3527483c0666b65645ed;
static PyCodeObject *code_objects_5b8ef262c0ef53125125999fa4f4aafd;
static PyCodeObject *code_objects_9728fb760836a4c01d2a165c64e1e262;
static PyCodeObject *code_objects_f95d08874a093cd5ec286aa773e368c2;
static PyCodeObject *code_objects_e6717975d51d4d33338eb0bd5a767c1a;
static PyCodeObject *code_objects_9c5a5a7a23c807c623edb44748b9e80c;
static PyCodeObject *code_objects_2d67641b8c71dd918821abae6c0de012;
static PyCodeObject *code_objects_4f99beb492e8a5c5c4302ebb69597643;
static PyCodeObject *code_objects_509af47467046eae1dc15e7409ee3550;
static PyCodeObject *code_objects_377934b5ec4e71ee07e2a013cde5d320;
static PyCodeObject *code_objects_1ba8e7c0bc317242eb11de456e0076b4;
static PyCodeObject *code_objects_97007f715a9a56be712dd66132ade75e;
static PyCodeObject *code_objects_21a1c3220514aa2a995298970f5e70ee;
static PyCodeObject *code_objects_b894f7e0d8e303e153d4aeaa59f630b9;
static PyCodeObject *code_objects_f213e9f8114ba4bbd65a806c1dbb0cce;
static PyCodeObject *code_objects_aa644a81a0058d5d0f64e1203a160fe0;
static PyCodeObject *code_objects_036338686c6a9a81882920fada6a5501;
static PyCodeObject *code_objects_757e33d0e18458c522ae13f0b2354dfc;
static PyCodeObject *code_objects_8f38213bd3cc3a6258387463daf57bed;
static PyCodeObject *code_objects_aff7fe9dcda007c2a0210d65335ee145;
static PyCodeObject *code_objects_bf969c8cb9e5e023b79279ce5a7eb65a;
static PyCodeObject *code_objects_fa772c96c279e46eac2755a56533e8a5;
static PyCodeObject *code_objects_a0855ec9b5b6537ac5ffba28c811c54d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_8cba975ef02ed5b86c708f902ea937c8); CHECK_OBJECT(module_filename_obj);
code_objects_072d412bfd3acfd08eb3fe56a91e49f3 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_6d832f348c08bb69f15fec08f362e86d, mod_consts.const_str_digest_6d832f348c08bb69f15fec08f362e86d, NULL, NULL, 0, 0, 0);
code_objects_0bfe97c1b6ed6ddb1c7e9834b053c876 = MAKE_CODE_OBJECT(module_filename_obj, 325, 0, mod_consts.const_str_plain_AxisConcatenator, mod_consts.const_str_plain_AxisConcatenator, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5d88a3c22598d647dd10b68339a81bc8 = MAKE_CODE_OBJECT(module_filename_obj, 556, 0, mod_consts.const_str_plain_CClass, mod_consts.const_str_plain_CClass, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fcc70a9da19b4797353bf54ef70bb9d3 = MAKE_CODE_OBJECT(module_filename_obj, 211, 0, mod_consts.const_str_plain_MGridClass, mod_consts.const_str_plain_MGridClass, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_187020e831439b2b307c6bbc6e52af6b = MAKE_CODE_OBJECT(module_filename_obj, 273, 0, mod_consts.const_str_plain_OGridClass, mod_consts.const_str_plain_OGridClass, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9d56f17c0815d2ddc23c3b4a4c26fca6 = MAKE_CODE_OBJECT(module_filename_obj, 452, 0, mod_consts.const_str_plain_RClass, mod_consts.const_str_plain_RClass, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_23c9f05010bf26873abbeda6f4e56f8b = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_f756e93c724076c1292baf07c7f9a44f, mod_consts.const_tuple_51762364a63c56e20ec2ad55e19d444f_tuple, NULL, 2, 0, 0);
code_objects_2d40998cebac3527483c0666b65645ed = MAKE_CODE_OBJECT(module_filename_obj, 773, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_20fb8a3a587ea75579e216f47cb1f4a8, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple, NULL, 2, 0, 0);
code_objects_5b8ef262c0ef53125125999fa4f4aafd = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_0a0305b94276cadebffc43457dd27f07, mod_consts.const_tuple_853631bf5a8b49f8b30f4d63011f9c3c_tuple, NULL, 2, 0, 0);
code_objects_9728fb760836a4c01d2a165c64e1e262 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_f54f2fe984a25d17197bbe7e6ba8fc99, mod_consts.const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, NULL, 5, 0, 0);
code_objects_f95d08874a093cd5ec286aa773e368c2 = MAKE_CODE_OBJECT(module_filename_obj, 583, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_3572bb3baed1a42156d8cfd28d2ece0d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e6717975d51d4d33338eb0bd5a767c1a = MAKE_CODE_OBJECT(module_filename_obj, 770, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_a1e802e64964f8979e2725072f854335, mod_consts.const_tuple_str_plain_self_str_plain_maketuple_tuple, NULL, 2, 0, 0);
code_objects_9c5a5a7a23c807c623edb44748b9e80c = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_6a63ba6bd618ebdbf43ae38ee038c2ca, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_2d67641b8c71dd918821abae6c0de012 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_b1f540ccf92c598e463e69dd614c7adf, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_4f99beb492e8a5c5c4302ebb69597643 = MAKE_CODE_OBJECT(module_filename_obj, 549, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_cd6a983de4e45de7ea45ad50c10a6625, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_509af47467046eae1dc15e7409ee3550 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_da6df6758ad479794ae49c932d506792, mod_consts.const_tuple_str_plain_self_str_plain_sparse_tuple, NULL, 2, 0, 0);
code_objects_377934b5ec4e71ee07e2a013cde5d320 = MAKE_CODE_OBJECT(module_filename_obj, 619, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_1e988d4c168f4fb3ac128b4d6246b6bc, mod_consts.const_tuple_str_plain_self_str_plain_arr_tuple, NULL, 2, 0, 0);
code_objects_1ba8e7c0bc317242eb11de456e0076b4 = MAKE_CODE_OBJECT(module_filename_obj, 687, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, const_str_plain___init__, mod_consts.const_str_digest_06610d63bf9e8bdc157cf6ad2baa3ac9, mod_consts.const_tuple_str_plain_self_str_plain_shape_tuple, NULL, 1, 0, 0);
code_objects_97007f715a9a56be712dd66132ade75e = MAKE_CODE_OBJECT(module_filename_obj, 636, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_3745c56d9995e832af9f95f6c1da753d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_21a1c3220514aa2a995298970f5e70ee = MAKE_CODE_OBJECT(module_filename_obj, 694, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_327c29879ba6698190b30147e71aced3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b894f7e0d8e303e153d4aeaa59f630b9 = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___len__, mod_consts.const_str_digest_b87789d8b99605f48944066ec76ed78a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f213e9f8114ba4bbd65a806c1dbb0cce = MAKE_CODE_OBJECT(module_filename_obj, 622, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___next__, mod_consts.const_str_digest_5ead3c6cba04556a9936be908e59bd17, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_aa644a81a0058d5d0f64e1203a160fe0 = MAKE_CODE_OBJECT(module_filename_obj, 697, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___next__, mod_consts.const_str_digest_3919ca950c009fa0d60ed31cc16b66fb, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_036338686c6a9a81882920fada6a5501 = MAKE_CODE_OBJECT(module_filename_obj, 993, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__diag_indices_from, mod_consts.const_str_plain__diag_indices_from, mod_consts.const_tuple_str_plain_arr_tuple, NULL, 1, 0, 0);
code_objects_757e33d0e18458c522ae13f0b2354dfc = MAKE_CODE_OBJECT(module_filename_obj, 790, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fill_diagonal_dispatcher, mod_consts.const_str_plain__fill_diagonal_dispatcher, mod_consts.const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple, NULL, 3, 0, 0);
code_objects_8f38213bd3cc3a6258387463daf57bed = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain__ix__dispatcher, mod_consts.const_str_plain__ix__dispatcher, mod_consts.const_tuple_str_plain_args_tuple, NULL, 0, 0, 0);
code_objects_aff7fe9dcda007c2a0210d65335ee145 = MAKE_CODE_OBJECT(module_filename_obj, 927, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_diag_indices, mod_consts.const_str_plain_diag_indices, mod_consts.const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, NULL, 2, 0, 0);
code_objects_bf969c8cb9e5e023b79279ce5a7eb65a = MAKE_CODE_OBJECT(module_filename_obj, 998, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_diag_indices_from, mod_consts.const_str_plain_diag_indices_from, mod_consts.const_tuple_str_plain_arr_tuple, NULL, 1, 0, 0);
code_objects_fa772c96c279e46eac2755a56533e8a5 = MAKE_CODE_OBJECT(module_filename_obj, 795, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_fill_diagonal, mod_consts.const_str_plain_fill_diagonal, mod_consts.const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, NULL, 3, 0, 0);
code_objects_a0855ec9b5b6537ac5ffba28c811c54d = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_ix_, mod_consts.const_str_plain_ix_, mod_consts.const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__10___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__11___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__12___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__13___next__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__14___iter__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__15___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__16___iter__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__17___next__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__18___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__19___getitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__1__ix__dispatcher(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__20__fill_diagonal_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__22_diag_indices(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__23__diag_indices_from(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__2_ix_(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__3___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__4___getitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__5___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__6___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__7___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__8___getitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__9___len__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__1__ix__dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_args);
tmp_return_value = par_args;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__2_ix_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_out = NULL;
PyObject *var_nd = NULL;
PyObject *var_k = NULL;
PyObject *var_new = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_out == NULL);
var_out = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_args);
tmp_len_arg_1 = par_args;
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_nd == NULL);
var_nd = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_ = MAKE_FUNCTION_FRAME(tstate, code_objects_a0855ec9b5b6537ac5ffba28c811c54d, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_args);
tmp_args_element_value_1 = par_args;
frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_->m_frame.f_lineno = 92;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooo";
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
type_description_1 = "ooooo";
exception_lineno = 92;
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


exception_lineno = 92;
type_description_1 = "ooooo";
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



exception_lineno = 92;
type_description_1 = "ooooo";
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



exception_lineno = 92;
type_description_1 = "ooooo";
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



exception_lineno = 92;
type_description_1 = "ooooo";
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
    PyObject *old = var_k;
    var_k = tmp_assign_source_8;
    Py_INCREF(var_k);
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
    PyObject *old = var_new;
    var_new = tmp_assign_source_9;
    Py_INCREF(var_new);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_new);
tmp_isinstance_inst_1 = var_new;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_index_tricks_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_new);
tmp_args_element_value_2 = var_new;
frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_->m_frame.f_lineno = 94;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_new;
    assert(old != NULL);
    var_new = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_new);
tmp_expression_value_2 = var_new;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_new);
tmp_expression_value_3 = var_new;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_astype);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_expression_value_4 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 97;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_intp);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 97;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_->m_frame.f_lineno = 97;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_new;
    assert(old != NULL);
    var_new = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_2:;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
if (var_new == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_new;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_dc389157f25a06c45c9e142fdf180587;
frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_->m_frame.f_lineno = 99;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 99;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_2;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_7;
int tmp_truth_name_1;
tmp_called_value_3 = module_var_accessor_numpy$lib$_index_tricks_impl$issubdtype(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_issubdtype);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (var_new == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = var_new;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_expression_value_7 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 100;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_bool);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 100;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_->m_frame.f_lineno = 100;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 100;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_instance_2;
if (var_new == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}

tmp_called_instance_2 = var_new;
frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_->m_frame.f_lineno = 101;
tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_nonzero);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 1);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooo";
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
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_new;
    var_new = tmp_assign_source_14;
    Py_INCREF(var_new);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

branch_no_4:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_6;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
if (var_new == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = var_new;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_reshape);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_1 = mod_consts.const_tuple_int_pos_1_tuple;
CHECK_OBJECT(var_k);
tmp_mult_expr_right_1 = var_k;
tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (var_new == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_9 = var_new;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_size);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_add_expr_right_2, 0, tmp_tuple_element_1);
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_2 = mod_consts.const_tuple_int_pos_1_tuple;
if (var_nd == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_2 = var_nd;
CHECK_OBJECT(var_k);
tmp_sub_expr_right_2 = var_k;
tmp_sub_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_->m_frame.f_lineno = 102;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_new;
    var_new = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_out == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_out;
CHECK_OBJECT(var_new);
tmp_item_value_1 = var_new;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_tuple_arg_1;
if (var_out == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_arg_1 = var_out;
tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_,
    type_description_1,
    par_args,
    var_out,
    var_nd,
    var_k,
    var_new
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__2_ix_);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_new);
var_new = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_new);
var_new = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_sparse = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_509af47467046eae1dc15e7409ee3550, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_sparse);
tmp_assattr_value_1 = par_sparse;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_sparse, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__,
    type_description_1,
    par_self,
    par_sparse
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__3___init__);

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
CHECK_OBJECT(par_sparse);
Py_DECREF(par_sparse);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_sparse);
Py_DECREF(par_sparse);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__4___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *var_size = NULL;
PyObject *var_num_list = NULL;
PyObject *var_k = NULL;
PyObject *var_step = NULL;
PyObject *var_start = NULL;
PyObject *var_stop = NULL;
PyObject *var_typ = NULL;
PyObject *var_nn = NULL;
PyObject *var_kk = NULL;
PyObject *var_slobj = NULL;
PyObject *var_step_float = NULL;
PyObject *var_length = NULL;
PyObject *outline_0_var__x = NULL;
PyObject *outline_0_var__t = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_size == NULL);
var_size = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST1(tstate, const_int_0);
assert(var_num_list == NULL);
var_num_list = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5b8ef262c0ef53125125999fa4f4aafd, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_key);
tmp_len_arg_1 = par_key;
tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
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
type_description_1 = "oooooooooooooo";
exception_lineno = 152;
        goto try_except_handler_3;
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
    PyObject *old = var_k;
    var_k = tmp_assign_source_5;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_key);
tmp_expression_value_2 = par_key;
CHECK_OBJECT(var_k);
tmp_subscript_value_1 = var_k;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_step);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_step;
    var_step = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_key);
tmp_expression_value_4 = par_key;
CHECK_OBJECT(var_k);
tmp_subscript_value_2 = var_k;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_start);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_start;
    var_start = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_key);
tmp_expression_value_6 = par_key;
CHECK_OBJECT(var_k);
tmp_subscript_value_3 = var_k;
tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_stop);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_stop;
    var_stop = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_start);
tmp_cmp_expr_left_1 = var_start;
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
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = const_int_0;
{
    PyObject *old = var_start;
    assert(old != NULL);
    var_start = tmp_assign_source_9;
    Py_INCREF(var_start);
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_step);
tmp_cmp_expr_left_2 = var_step;
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
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = const_int_pos_1;
{
    PyObject *old = var_step;
    assert(old != NULL);
    var_step = tmp_assign_source_10;
    Py_INCREF(var_step);
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_step);
tmp_isinstance_inst_1 = var_step;
tmp_expression_value_7 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_complexfloating);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = (PyObject *)&PyComplex_Type;
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_abs_arg_1;
CHECK_OBJECT(var_step);
tmp_abs_arg_1 = var_step;
tmp_assign_source_11 = BUILTIN_ABS(tmp_abs_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_step;
    assert(old != NULL);
    var_step = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_int_arg_1;
if (var_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 162;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}

tmp_list_arg_value_1 = var_size;
CHECK_OBJECT(var_step);
tmp_int_arg_1 = var_step;
tmp_item_value_1 = PyNumber_Int(tmp_int_arg_1);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
if (var_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}

tmp_list_arg_value_2 = var_size;
tmp_expression_value_8 = module_var_accessor_numpy$lib$_index_tricks_impl$math(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ceil);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_stop);
tmp_sub_expr_left_1 = var_stop;
CHECK_OBJECT(var_start);
tmp_sub_expr_right_1 = var_start;
tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 165;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_step);
tmp_truediv_expr_right_1 = var_step;
tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 165;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame.f_lineno = 165;
tmp_item_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_end_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_list_element_1;
if (var_num_list == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}

tmp_iadd_expr_left_1 = var_num_list;
CHECK_OBJECT(var_start);
tmp_list_element_1 = var_start;
tmp_iadd_expr_right_1 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM0(tmp_iadd_expr_right_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_stop);
tmp_list_element_1 = var_stop;
PyList_SET_ITEM0(tmp_iadd_expr_right_1, 1, tmp_list_element_1);
if (var_step == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_step);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "oooooooooooooo";
    goto list_build_exception_1;
}

tmp_list_element_1 = var_step;
PyList_SET_ITEM0(tmp_iadd_expr_right_1, 2, tmp_list_element_1);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iadd_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_result = INPLACE_OPERATION_ADD_LIST_LIST(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_12 = tmp_iadd_expr_left_1;
var_num_list = tmp_assign_source_12;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
tmp_expression_value_9 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_result_type);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
if (var_num_list == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_list);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}

tmp_direct_call_arg2_1 = var_num_list;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_13 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
assert(var_typ == NULL);
var_typ = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_sparse);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 168;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_14;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_len_arg_2;
tmp_called_value_2 = (PyObject *)&PyZip_Type;
if (var_size == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_2 = var_size;
CHECK_OBJECT(var_typ);
tmp_tuple_element_2 = var_typ;
tmp_mult_expr_left_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_mult_expr_left_1, 0, tmp_tuple_element_2);
if (var_size == NULL) {
Py_DECREF(tmp_mult_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}

tmp_len_arg_2 = var_size;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_TUPLE_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame.f_lineno = 170;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_16;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
exception_lineno = 169;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_20;
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



exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_6;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_21 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var__x;
    outline_0_var__x = tmp_assign_source_21;
    Py_INCREF(outline_0_var__x);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_22 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var__t;
    outline_0_var__t = tmp_assign_source_22;
    Py_INCREF(outline_0_var__t);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_expression_value_11 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_arange);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(outline_0_var__x);
tmp_kw_call_arg_value_0_1 = outline_0_var__x;
CHECK_OBJECT(outline_0_var__t);
tmp_kw_call_dict_value_0_1 = outline_0_var__t;
frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame.f_lineno = 169;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_14 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_14);
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

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_0_var__x);
outline_0_var__x = NULL;
Py_XDECREF(outline_0_var__t);
outline_0_var__t = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var__x);
outline_0_var__x = NULL;
Py_XDECREF(outline_0_var__t);
outline_0_var__t = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 169;
goto try_except_handler_2;
outline_result_1:;
assert(var_nn == NULL);
var_nn = tmp_assign_source_14;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_12 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_indices);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
if (var_size == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 172;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_4 = var_size;
CHECK_OBJECT(var_typ);
tmp_args_element_value_5 = var_typ;
frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame.f_lineno = 172;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
assert(var_nn == NULL);
var_nn = tmp_assign_source_23;
}
branch_end_4:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_5 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_key);
tmp_args_element_value_6 = par_key;
frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame.f_lineno = 173;
tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_24;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_3 = tmp_for_loop_2__for_iterator;
tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_25 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
exception_lineno = 173;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_9;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_29 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_29;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_30 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_kk;
    var_kk = tmp_assign_source_30;
    Py_INCREF(var_kk);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_31;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_kk);
tmp_expression_value_13 = var_kk;
tmp_assign_source_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_step);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_step;
    var_step = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_kk);
tmp_expression_value_14 = var_kk;
tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_start);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_start;
    var_start = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_start);
tmp_cmp_expr_left_3 = var_start;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = const_int_0;
{
    PyObject *old = var_start;
    assert(old != NULL);
    var_start = tmp_assign_source_33;
    Py_INCREF(var_start);
    Py_DECREF(old);
}

}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_step);
tmp_cmp_expr_left_4 = var_step;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = const_int_pos_1;
{
    PyObject *old = var_step;
    assert(old != NULL);
    var_step = tmp_assign_source_34;
    Py_INCREF(var_step);
    Py_DECREF(old);
}

}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(var_step);
tmp_isinstance_inst_2 = var_step;
tmp_expression_value_15 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_complexfloating);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
tmp_isinstance_cls_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = (PyObject *)&PyComplex_Type;
PyTuple_SET_ITEM0(tmp_isinstance_cls_2, 1, tmp_tuple_element_3);
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_int_arg_2;
PyObject *tmp_abs_arg_2;
CHECK_OBJECT(var_step);
tmp_abs_arg_2 = var_step;
tmp_int_arg_2 = BUILTIN_ABS(tmp_abs_arg_2);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_35 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_step;
    assert(old != NULL);
    var_step = tmp_assign_source_35;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_step);
tmp_cmp_expr_left_5 = var_step;
tmp_cmp_expr_right_5 = const_int_pos_1;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_float_arg_1;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
CHECK_OBJECT(var_kk);
tmp_expression_value_16 = var_kk;
tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_stop);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_start);
tmp_sub_expr_right_2 = var_start;
tmp_truediv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_step);
tmp_sub_expr_left_3 = var_step;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_float_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_float_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 183;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
tmp_truediv_expr_right_2 = TO_FLOAT(tmp_float_arg_1);
CHECK_OBJECT(tmp_float_arg_1);
Py_DECREF(tmp_float_arg_1);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 183;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_36 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_step;
    assert(old != NULL);
    var_step = tmp_assign_source_36;
    Py_DECREF(old);
}

}
branch_no_8:;
branch_no_7:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
if (var_nn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 184;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_17 = var_nn;
CHECK_OBJECT(var_k);
tmp_subscript_value_4 = var_k;
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_4);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_step);
tmp_mult_expr_right_2 = var_step;
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_start);
tmp_add_expr_right_1 = var_start;
tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
if (var_nn == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 184;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}

tmp_ass_subscribed_1 = var_nn;
CHECK_OBJECT(var_k);
tmp_ass_subscript_1 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_2;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_sparse);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 185;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_list_element_2;
PyObject *tmp_expression_value_19;
PyObject *tmp_len_arg_3;
tmp_expression_value_19 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_newaxis);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_mult_expr_left_3, 0, tmp_list_element_2);
if (var_size == NULL) {
Py_DECREF(tmp_mult_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_3 = var_size;
tmp_mult_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_3);

exception_lineno = 186;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_37 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
assert(!(tmp_assign_source_37 == NULL));
assert(var_slobj == NULL);
var_slobj = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iter_arg_6;
PyObject *tmp_xrange_low_2;
PyObject *tmp_len_arg_4;
if (var_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 187;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_4 = var_size;
tmp_xrange_low_2 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_xrange_low_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_6 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
CHECK_OBJECT(tmp_xrange_low_2);
Py_DECREF(tmp_xrange_low_2);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_38 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_38;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_4 = tmp_for_loop_3__for_iterator;
tmp_assign_source_39 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_39 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
exception_lineno = 187;
        goto try_except_handler_11;
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
    PyObject *old = var_k;
    var_k = tmp_assign_source_40;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_slice_none_none_none;
if (var_slobj == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_slobj);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 188;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}

tmp_ass_subscribed_2 = var_slobj;
CHECK_OBJECT(var_k);
tmp_ass_subscript_2 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_5;
PyObject *tmp_subscript_value_6;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (var_nn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_21 = var_nn;
CHECK_OBJECT(var_k);
tmp_subscript_value_5 = var_k;
tmp_expression_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_5);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
if (var_slobj == NULL) {
Py_DECREF(tmp_expression_value_20);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_slobj);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}

tmp_tuple_arg_1 = var_slobj;
tmp_subscript_value_6 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_subscript_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_20);

exception_lineno = 189;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
if (var_nn == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}

tmp_ass_subscribed_3 = var_nn;
CHECK_OBJECT(var_k);
tmp_ass_subscript_3 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_expression_value_22 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_newaxis);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
if (var_slobj == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_slobj);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}

tmp_ass_subscribed_4 = var_slobj;
CHECK_OBJECT(var_k);
tmp_ass_subscript_4 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
goto loop_start_4;
loop_end_4:;
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_2;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_tuple_arg_2;
if (var_nn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}

tmp_tuple_arg_2 = var_nn;
tmp_return_value = PySequence_Tuple(tmp_tuple_arg_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
branch_no_9:;
if (var_nn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}

tmp_return_value = var_nn;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_10);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = mod_consts.const_tuple_type_IndexError_type_TypeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(par_key);
tmp_expression_value_23 = par_key;
tmp_assign_source_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_step);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = var_step;
    var_step = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(par_key);
tmp_expression_value_24 = par_key;
tmp_assign_source_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_stop);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = var_stop;
    var_stop = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(par_key);
tmp_expression_value_25 = par_key;
tmp_assign_source_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_start);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = var_start;
    var_start = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_start);
tmp_cmp_expr_left_7 = var_start;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = const_int_0;
{
    PyObject *old = var_start;
    assert(old != NULL);
    var_start = tmp_assign_source_44;
    Py_INCREF(var_start);
    Py_DECREF(old);
}

}
branch_no_11:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(var_step);
tmp_isinstance_inst_3 = var_step;
tmp_expression_value_26 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_complexfloating);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
tmp_isinstance_cls_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_isinstance_cls_3, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = (PyObject *)&PyComplex_Type;
PyTuple_SET_ITEM0(tmp_isinstance_cls_3, 1, tmp_tuple_element_4);
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_abs_arg_3;
CHECK_OBJECT(var_step);
tmp_abs_arg_3 = var_step;
tmp_assign_source_45 = BUILTIN_ABS(tmp_abs_arg_3);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
assert(var_step_float == NULL);
var_step_float = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_int_arg_3;
CHECK_OBJECT(var_step_float);
tmp_int_arg_3 = var_step_float;
tmp_assign_source_46 = PyNumber_Int(tmp_int_arg_3);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
assert(tmp_assign_unpack_1__assign_source == NULL);
tmp_assign_unpack_1__assign_source = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_47 = tmp_assign_unpack_1__assign_source;
{
    PyObject *old = var_step;
    assert(old != NULL);
    var_step = tmp_assign_source_47;
    Py_INCREF(var_step);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_48 = tmp_assign_unpack_1__assign_source;
assert(var_length == NULL);
Py_INCREF(tmp_assign_source_48);
var_length = tmp_assign_source_48;
}
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_step);
tmp_cmp_expr_left_8 = var_step;
tmp_cmp_expr_right_8 = const_int_pos_1;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_expression_value_27;
PyObject *tmp_float_arg_2;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
CHECK_OBJECT(par_key);
tmp_expression_value_27 = par_key;
tmp_sub_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_stop);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_start);
tmp_sub_expr_right_4 = var_start;
tmp_truediv_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_step);
tmp_sub_expr_left_5 = var_step;
tmp_sub_expr_right_5 = const_int_pos_1;
tmp_float_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
if (tmp_float_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_3);

exception_lineno = 204;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
tmp_truediv_expr_right_3 = TO_FLOAT(tmp_float_arg_2);
CHECK_OBJECT(tmp_float_arg_2);
Py_DECREF(tmp_float_arg_2);
if (tmp_truediv_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_3);

exception_lineno = 204;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
tmp_assign_source_49 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
CHECK_OBJECT(tmp_truediv_expr_right_3);
Py_DECREF(tmp_truediv_expr_right_3);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = var_step;
    assert(old != NULL);
    var_step = tmp_assign_source_49;
    Py_DECREF(old);
}

}
branch_no_13:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_start);
tmp_args_element_value_7 = var_start;
CHECK_OBJECT(var_stop);
tmp_args_element_value_8 = var_stop;
CHECK_OBJECT(var_step_float);
tmp_args_element_value_9 = var_step_float;
frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame.f_lineno = 205;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_50 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_result_type,
        call_args
    );
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = var_typ;
    var_typ = tmp_assign_source_50;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_28;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_28 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_arange);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
tmp_kw_call_arg_value_0_2 = const_int_0;
CHECK_OBJECT(var_length);
tmp_kw_call_arg_value_1_1 = var_length;
tmp_kw_call_arg_value_2_1 = const_int_pos_1;
CHECK_OBJECT(var_typ);
tmp_kw_call_dict_value_0_2 = var_typ;
frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame.f_lineno = 206;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_mult_expr_left_4 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_step);
tmp_mult_expr_right_4 = var_step;
tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_start);
tmp_add_expr_right_2 = var_start;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
goto try_return_handler_12;
}
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_start);
tmp_args_element_value_10 = var_start;
CHECK_OBJECT(var_stop);
tmp_args_element_value_11 = var_stop;
CHECK_OBJECT(var_step);
tmp_args_element_value_12 = var_step;
frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame.f_lineno = 208;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_arange,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_12;
}
goto try_return_handler_12;
}
branch_end_12:;
goto branch_end_10;
branch_no_10:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 147;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame)) {
        frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooo";
goto try_except_handler_12;
branch_end_10:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__,
    type_description_1,
    par_self,
    par_key,
    var_size,
    var_num_list,
    var_k,
    var_step,
    var_start,
    var_stop,
    var_typ,
    var_nn,
    var_kk,
    var_slobj,
    var_step_float,
    var_length
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__4___getitem__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_num_list);
var_num_list = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_step);
var_step = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_stop);
var_stop = NULL;
Py_XDECREF(var_typ);
var_typ = NULL;
Py_XDECREF(var_nn);
var_nn = NULL;
Py_XDECREF(var_kk);
var_kk = NULL;
Py_XDECREF(var_slobj);
var_slobj = NULL;
Py_XDECREF(var_step_float);
var_step_float = NULL;
Py_XDECREF(var_length);
var_length = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_num_list);
var_num_list = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_step);
var_step = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_stop);
var_stop = NULL;
Py_XDECREF(var_typ);
var_typ = NULL;
Py_XDECREF(var_nn);
var_nn = NULL;
Py_XDECREF(var_kk);
var_kk = NULL;
Py_XDECREF(var_slobj);
var_slobj = NULL;
Py_XDECREF(var_step_float);
var_step_float = NULL;
Py_XDECREF(var_length);
var_length = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9c5a5a7a23c807c623edb44748b9e80c, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 267;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_numpy$lib$_index_tricks_impl, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__->m_frame.f_lineno = 267;
tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_sparse_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__5___init__);

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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2d67641b8c71dd918821abae6c0de012, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 319;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_numpy$lib$_index_tricks_impl, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__->m_frame.f_lineno = 319;
tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_sparse_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__6___init__);

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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_matrix = python_pars[2];
PyObject *par_ndmin = python_pars[3];
PyObject *par_trans1d = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9728fb760836a4c01d2a165c64e1e262, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_axis);
tmp_assattr_value_1 = par_axis;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_axis, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_matrix);
tmp_assattr_value_2 = par_matrix;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_matrix, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_trans1d);
tmp_assattr_value_3 = par_trans1d;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_trans1d, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_ndmin);
tmp_assattr_value_4 = par_ndmin;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_ndmin, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__,
    type_description_1,
    par_self,
    par_axis,
    par_matrix,
    par_ndmin,
    par_trans1d
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__7___init__);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_matrix);
Py_DECREF(par_matrix);
CHECK_OBJECT(par_ndmin);
Py_DECREF(par_ndmin);
CHECK_OBJECT(par_trans1d);
Py_DECREF(par_trans1d);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_matrix);
Py_DECREF(par_matrix);
CHECK_OBJECT(par_ndmin);
Py_DECREF(par_ndmin);
CHECK_OBJECT(par_trans1d);
Py_DECREF(par_trans1d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__8___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *var_frame = NULL;
PyObject *var_mymat = NULL;
PyObject *var_trans1d = NULL;
PyObject *var_ndmin = NULL;
PyObject *var_matrix = NULL;
PyObject *var_axis = NULL;
PyObject *var_objs = NULL;
PyObject *var_result_type_objs = NULL;
PyObject *var_k = NULL;
PyObject *var_item = NULL;
PyObject *var_scalar = NULL;
PyObject *var_step = NULL;
PyObject *var_start = NULL;
PyObject *var_stop = NULL;
PyObject *var_size = NULL;
PyObject *var_newobj = NULL;
PyObject *var_col = NULL;
PyObject *var_vec = NULL;
PyObject *var_e = NULL;
PyObject *var_item_ndim = NULL;
PyObject *var_k2 = NULL;
PyObject *var_k1 = NULL;
PyObject *var_defaxes = NULL;
PyObject *var_axes = NULL;
PyObject *var_final_dtype = NULL;
PyObject *var_res = NULL;
PyObject *var_oldndim = NULL;
PyObject *outline_0_var_x = NULL;
PyObject *outline_1_var_obj = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
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
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_23c9f05010bf26873abbeda6f4e56f8b, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_key);
tmp_isinstance_inst_1 = par_key;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_SYS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 346;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__getframe);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_f_back);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_frame == NULL);
var_frame = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_index_tricks_impl$matrixlib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrixlib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_bmat);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
CHECK_OBJECT(var_frame);
tmp_expression_value_3 = var_frame;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_f_globals);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 347;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_frame);
tmp_expression_value_4 = var_frame;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_f_locals);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 347;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 347;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mymat == NULL);
var_mymat = tmp_assign_source_2;
}
CHECK_OBJECT(var_mymat);
tmp_return_value = var_mymat;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_key);
tmp_isinstance_inst_2 = par_key;
tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_key);
tmp_tuple_element_1 = par_key;
tmp_assign_source_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_3, 0, tmp_tuple_element_1);
{
    PyObject *old = par_key;
    assert(old != NULL);
    par_key = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_trans1d);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_trans1d == NULL);
var_trans1d = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ndmin);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ndmin == NULL);
var_ndmin = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_matrix);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_matrix == NULL);
var_matrix = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_axis);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_axis == NULL);
var_axis = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_objs == NULL);
var_objs = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_result_type_objs == NULL);
var_result_type_objs = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_key);
tmp_args_element_value_4 = par_key;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 363;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_10;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
exception_lineno = 363;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_14;
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



exception_lineno = 363;
type_description_1 = "ooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_15;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_item;
    var_item = tmp_assign_source_16;
    Py_INCREF(var_item);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = Py_False;
{
    PyObject *old = var_scalar;
    var_scalar = tmp_assign_source_17;
    Py_INCREF(var_scalar);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(var_item);
tmp_isinstance_inst_3 = var_item;
tmp_isinstance_cls_3 = (PyObject *)&PySlice_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_item);
tmp_expression_value_9 = var_item;
tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_step);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_step;
    var_step = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_item);
tmp_expression_value_10 = var_item;
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_start);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_start;
    var_start = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_item);
tmp_expression_value_11 = var_item;
tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_stop);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_stop;
    var_stop = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_start);
tmp_cmp_expr_left_1 = var_start;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = const_int_0;
{
    PyObject *old = var_start;
    assert(old != NULL);
    var_start = tmp_assign_source_21;
    Py_INCREF(var_start);
    Py_DECREF(old);
}

}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_step);
tmp_cmp_expr_left_2 = var_step;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = const_int_pos_1;
{
    PyObject *old = var_step;
    assert(old != NULL);
    var_step = tmp_assign_source_22;
    Py_INCREF(var_step);
    Py_DECREF(old);
}

}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_step);
tmp_isinstance_inst_4 = var_step;
tmp_expression_value_12 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_complexfloating);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_isinstance_cls_4, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = (PyObject *)&PyComplex_Type;
PyTuple_SET_ITEM0(tmp_isinstance_cls_4, 1, tmp_tuple_element_2);
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
CHECK_OBJECT(tmp_isinstance_cls_4);
Py_DECREF(tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_int_arg_1;
PyObject *tmp_abs_arg_1;
CHECK_OBJECT(var_step);
tmp_abs_arg_1 = var_step;
tmp_int_arg_1 = BUILTIN_ABS(tmp_abs_arg_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_23 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_size;
    var_size = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_3 = module_var_accessor_numpy$lib$_index_tricks_impl$linspace(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_linspace);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_start);
tmp_kw_call_arg_value_0_1 = var_start;
CHECK_OBJECT(var_stop);
tmp_kw_call_arg_value_1_1 = var_stop;
CHECK_OBJECT(var_size);
tmp_kw_call_dict_value_0_1 = var_size;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 375;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_num_tuple);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_newobj;
    var_newobj = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 377;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_start);
tmp_args_element_value_5 = var_start;
CHECK_OBJECT(var_stop);
tmp_args_element_value_6 = var_stop;
CHECK_OBJECT(var_step);
tmp_args_element_value_7 = var_step;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 377;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_25 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_arange,
        call_args
    );
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_newobj;
    var_newobj = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
branch_end_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (var_ndmin == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndmin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 378;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_3 = var_ndmin;
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_condition_result_7 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_4 = module_var_accessor_numpy$lib$_index_tricks_impl$array(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_newobj);
tmp_kw_call_arg_value_0_2 = var_newobj;
tmp_kw_call_dict_value_0_2 = Py_None;
if (var_ndmin == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndmin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 379;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = var_ndmin;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 379;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_copy_str_plain_ndmin_tuple);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_newobj;
    assert(old != NULL);
    var_newobj = tmp_assign_source_26;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (var_trans1d == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trans1d);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 380;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_4 = var_trans1d;
tmp_cmp_expr_right_4 = const_int_neg_1;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(var_newobj);
tmp_expression_value_13 = var_newobj;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_swapaxes);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_8 = const_int_neg_1;
if (var_trans1d == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trans1d);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 381;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_9 = var_trans1d;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 381;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_newobj;
    assert(old != NULL);
    var_newobj = tmp_assign_source_27;
    Py_DECREF(old);
}

}
branch_no_8:;
branch_no_7:;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
CHECK_OBJECT(var_item);
tmp_isinstance_inst_5 = var_item;
tmp_isinstance_cls_5 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
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
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_k);
tmp_cmp_expr_left_5 = var_k;
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_0e72a689a82b574ba7397ec1f496ec9d;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 384;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 384;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
goto try_except_handler_2;
}
branch_no_10:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_item);
tmp_cmp_expr_left_6 = var_item;
tmp_cmp_expr_right_6 = mod_consts.const_tuple_str_plain_r_str_plain_c_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_11 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = Py_True;
{
    PyObject *old = var_matrix;
    var_matrix = tmp_assign_source_28;
    Py_INCREF(var_matrix);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_item);
tmp_cmp_expr_left_7 = var_item;
tmp_cmp_expr_right_7 = mod_consts.const_str_plain_c;
tmp_assign_source_29 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_col;
    var_col = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
goto loop_start_1;
branch_no_11:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = mod_consts.const_str_chr_44;
CHECK_OBJECT(var_item);
tmp_cmp_expr_right_8 = var_item;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_12 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_item);
tmp_expression_value_14 = var_item;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_split);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 391;
tmp_assign_source_30 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_chr_44_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_vec;
    var_vec = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_3;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_iter_arg_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_vec);
tmp_expression_value_15 = var_vec;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_2_none;
tmp_iter_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_1);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_33;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_34;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_34 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
exception_lineno = 393;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_35 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_x;
    outline_0_var_x = tmp_assign_source_35;
    Py_INCREF(outline_0_var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_int_arg_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_x);
tmp_int_arg_2 = outline_0_var_x;
tmp_append_value_1 = PyNumber_Int(tmp_int_arg_2);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iter_arg_3 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iter_arg_3);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
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
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
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

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 393;
goto try_except_handler_6;
outline_result_1:;
tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_36 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_37;
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



exception_lineno = 393;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_5;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_38 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_38;
    Py_INCREF(var_axis);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_39 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_ndmin;
    var_ndmin = tmp_assign_source_39;
    Py_INCREF(var_ndmin);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_9;
nuitka_digit tmp_cmp_expr_right_9;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_vec);
tmp_len_arg_1 = var_vec;
tmp_cmp_expr_left_9 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_9 = 3;
tmp_condition_result_13 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_int_arg_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_vec);
tmp_expression_value_16 = var_vec;
tmp_subscript_value_2 = mod_consts.const_int_pos_2;
tmp_int_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_2, 2);
if (tmp_int_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_40 = PyNumber_Int(tmp_int_arg_3);
CHECK_OBJECT(tmp_int_arg_3);
Py_DECREF(tmp_int_arg_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_trans1d;
    var_trans1d = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
branch_no_13:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
tmp_cmp_expr_left_10 = EXC_TYPE(tstate);
tmp_cmp_expr_right_10 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
assert(!(tmp_res == -1));
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_41); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_41);
var_e = tmp_assign_source_41;
}
// Tried code:
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_3 = mod_consts.const_str_digest_c5b4fc79c07e43a46324dbe6b4c44f6f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_item);
tmp_operand_value_2 = var_item;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 398;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 400;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooooooooooooooooooooo";
goto try_except_handler_11;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_10;
// End of try:
goto branch_end_14;
branch_no_14:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 392;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame)) {
        frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooooooooooooooooo";
goto try_except_handler_10;
branch_end_14:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_2;
// End of try:
// End of try:
try_end_5:;
goto loop_start_1;
branch_no_12:;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_int_arg_4;
CHECK_OBJECT(var_item);
tmp_int_arg_4 = var_item;
tmp_assign_source_42 = PyNumber_Int(tmp_int_arg_4);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = var_axis;
    var_axis = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_10);
// Tried code:
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = EXC_TYPE(tstate);
tmp_cmp_expr_right_11 = mod_consts.const_tuple_type_ValueError_type_TypeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_15 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_43); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_43);
var_e = tmp_assign_source_43;
}
// Tried code:
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_raise_cause_2;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_768284c408c3a084dbbd31908c895311;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 405;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_2 = var_e;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 405;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "ooooooooooooooooooooooooooooo";
goto try_except_handler_14;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_13;
// End of try:
goto branch_end_15;
branch_no_15:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 401;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame)) {
        frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooooooooooooooooo";
goto try_except_handler_13;
branch_end_15:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_2;
// End of try:
// End of try:
try_end_6:;
goto loop_start_1;
goto branch_end_9;
branch_no_9:;
{
bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(var_item);
tmp_type_arg_1 = var_item;
tmp_cmp_expr_left_12 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_12 == NULL));
tmp_cmp_expr_right_12 = module_var_accessor_numpy$lib$_index_tricks_impl$ScalarType(tstate);
if (unlikely(tmp_cmp_expr_right_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ScalarType);
}

if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 406;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_16 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = Py_True;
{
    PyObject *old = var_scalar;
    assert(old != NULL);
    var_scalar = tmp_assign_source_44;
    Py_INCREF(var_scalar);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(var_item);
tmp_assign_source_45 = var_item;
{
    PyObject *old = var_newobj;
    var_newobj = tmp_assign_source_45;
    Py_INCREF(var_newobj);
    Py_XDECREF(old);
}

}
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_10;
tmp_called_instance_3 = module_var_accessor_numpy$lib$_index_tricks_impl$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 410;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_item);
tmp_args_element_value_10 = var_item;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 410;
tmp_assign_source_46 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ndim, tmp_args_element_value_10);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_item_ndim;
    var_item_ndim = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_called_value_7 = module_var_accessor_numpy$lib$_index_tricks_impl$array(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 411;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_item);
tmp_kw_call_arg_value_0_3 = var_item;
tmp_kw_call_dict_value_0_3 = Py_None;
tmp_kw_call_dict_value_1_2 = Py_True;
if (var_ndmin == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndmin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 411;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_2_1 = var_ndmin;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 411;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1};
    tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_copy_str_plain_subok_str_plain_ndmin_tuple);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_newobj;
    var_newobj = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_17;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
if (var_trans1d == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trans1d);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 412;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_13 = var_trans1d;
tmp_cmp_expr_right_13 = const_int_neg_1;
tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_item_ndim);
tmp_cmp_expr_left_14 = var_item_ndim;
if (var_ndmin == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndmin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 412;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_14 = var_ndmin;
tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_17 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_17 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
if (var_ndmin == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndmin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 413;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_1 = var_ndmin;
CHECK_OBJECT(var_item_ndim);
tmp_sub_expr_right_1 = var_item_ndim;
tmp_assign_source_48 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_k2;
    var_k2 = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_49;
if (var_trans1d == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trans1d);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 414;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_49 = var_trans1d;
{
    PyObject *old = var_k1;
    var_k1 = tmp_assign_source_49;
    Py_INCREF(var_k1);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(var_k1);
tmp_cmp_expr_left_15 = var_k1;
tmp_cmp_expr_right_15 = const_int_0;
tmp_condition_result_18 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_k1);
tmp_iadd_expr_left_1 = var_k1;
CHECK_OBJECT(var_k2);
tmp_add_expr_left_1 = var_k2;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_50 = tmp_iadd_expr_left_1;
var_k1 = tmp_assign_source_50;

}
branch_no_18:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_list_arg_1;
PyObject *tmp_xrange_low_1;
if (var_ndmin == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndmin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 417;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_xrange_low_1 = var_ndmin;
tmp_list_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_51 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_defaxes;
    var_defaxes = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
PyObject *tmp_stop_value_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_4;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_2;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_3;
CHECK_OBJECT(var_defaxes);
tmp_expression_value_17 = var_defaxes;
CHECK_OBJECT(var_k1);
tmp_stop_value_1 = var_k1;
tmp_subscript_value_3 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_subscript_value_3 == NULL));
tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_defaxes);
tmp_expression_value_18 = var_defaxes;
CHECK_OBJECT(var_k2);
tmp_start_value_1 = var_k2;
tmp_stop_value_2 = Py_None;
tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
assert(!(tmp_subscript_value_4 == NULL));
tmp_add_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 418;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_defaxes);
tmp_expression_value_19 = var_defaxes;
CHECK_OBJECT(var_k1);
tmp_start_value_2 = var_k1;
CHECK_OBJECT(var_k2);
tmp_stop_value_3 = var_k2;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_3);
assert(!(tmp_subscript_value_5 == NULL));
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 418;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_axes;
    var_axes = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(var_newobj);
tmp_called_instance_4 = var_newobj;
CHECK_OBJECT(var_axes);
tmp_args_element_value_11 = var_axes;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 419;
tmp_assign_source_53 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_transpose, tmp_args_element_value_11);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_newobj;
    assert(old != NULL);
    var_newobj = tmp_assign_source_53;
    Py_DECREF(old);
}

}
branch_no_17:;
branch_end_16:;
branch_end_9:;
branch_end_3:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_objs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_objs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 421;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_objs;
CHECK_OBJECT(var_newobj);
tmp_item_value_1 = var_newobj;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
bool tmp_condition_result_19;
CHECK_OBJECT(var_scalar);
tmp_condition_result_19 = CHECK_IF_TRUE(var_scalar) == 1;
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_result_type_objs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result_type_objs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 423;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_result_type_objs;
CHECK_OBJECT(var_item);
tmp_item_value_2 = var_item;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_expression_value_20;
if (var_result_type_objs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result_type_objs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 425;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_3 = var_result_type_objs;
CHECK_OBJECT(var_newobj);
tmp_expression_value_20 = var_newobj;
tmp_item_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_dtype);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_end_19:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_7;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_16;
nuitka_digit tmp_cmp_expr_right_16;
PyObject *tmp_len_arg_2;
if (var_result_type_objs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result_type_objs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 429;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = var_result_type_objs;
tmp_cmp_expr_left_16 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_16 = 0;
tmp_condition_result_20 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
if (tmp_condition_result_20 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_direct_call_arg2_1;
tmp_expression_value_21 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_result_type);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_result_type_objs == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result_type_objs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 430;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg2_1 = var_result_type_objs;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_54 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_final_dtype == NULL);
var_final_dtype = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
// Tried code:
{
PyObject *tmp_assign_source_56;
PyObject *tmp_iter_arg_5;
if (var_objs == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_objs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 433;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_iter_arg_5 = var_objs;
tmp_assign_source_56 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_57;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_58;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_3 = tmp_listcomp_2__$0;
tmp_assign_source_58 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_58 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooo";
exception_lineno = 432;
        goto try_except_handler_16;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_58;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_59;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_59 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_obj;
    outline_1_var_obj = tmp_assign_source_59;
    Py_INCREF(outline_1_var_obj);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_kw_call_dict_value_1_3;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_1;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
tmp_called_value_8 = module_var_accessor_numpy$lib$_index_tricks_impl$array(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 432;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
CHECK_OBJECT(outline_1_var_obj);
tmp_kw_call_arg_value_0_4 = outline_1_var_obj;
tmp_kw_call_dict_value_0_4 = Py_None;
tmp_kw_call_dict_value_1_3 = Py_True;
if (var_ndmin == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndmin);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 433;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}

tmp_kw_call_dict_value_2_2 = var_ndmin;
if (var_final_dtype == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_final_dtype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 433;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}

tmp_kw_call_dict_value_3_1 = var_final_dtype;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 432;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_1};
    tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_91e80a6017819312d7beeb331be85262_tuple);
}

if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_55 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
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
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_XDECREF(outline_1_var_obj);
outline_1_var_obj = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_obj);
outline_1_var_obj = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 432;
goto frame_exception_exit_1;
outline_result_2:;
{
    PyObject *old = var_objs;
    var_objs = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
branch_no_20:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_22;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_kw_call_dict_value_0_5;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_concatenate);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_objs == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_objs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 435;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_arg_1 = var_objs;
tmp_kw_call_arg_value_0_5 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_kw_call_arg_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 435;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_axis == NULL) {
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_kw_call_arg_value_0_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 435;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_5 = var_axis;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 435;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
    tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_axis_tuple);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_kw_call_arg_value_0_5);
Py_DECREF(tmp_kw_call_arg_value_0_5);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_res == NULL);
var_res = tmp_assign_source_60;
}
{
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_1;
if (var_matrix == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrix);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 437;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_matrix);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(var_res);
tmp_expression_value_23 = var_res;
tmp_assign_source_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_ndim);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_oldndim == NULL);
var_oldndim = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(par_self);
tmp_called_instance_5 = par_self;
CHECK_OBJECT(var_res);
tmp_args_element_value_12 = var_res;
frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame.f_lineno = 439;
tmp_assign_source_62 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_makemat, tmp_args_element_value_12);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    assert(old != NULL);
    var_res = tmp_assign_source_62;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_22;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
int tmp_truth_name_2;
CHECK_OBJECT(var_oldndim);
tmp_cmp_expr_left_17 = var_oldndim;
tmp_cmp_expr_right_17 = const_int_pos_1;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (var_col == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_col);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(var_col);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_22 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_22 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(var_res);
tmp_expression_value_24 = var_res;
tmp_assign_source_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_T);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    assert(old != NULL);
    var_res = tmp_assign_source_63;
    Py_DECREF(old);
}

}
branch_no_22:;
branch_no_21:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__,
    type_description_1,
    par_self,
    par_key,
    var_frame,
    var_mymat,
    var_trans1d,
    var_ndmin,
    var_matrix,
    var_axis,
    var_objs,
    var_result_type_objs,
    var_k,
    var_item,
    var_scalar,
    var_step,
    var_start,
    var_stop,
    var_size,
    var_newobj,
    var_col,
    var_vec,
    var_e,
    var_item_ndim,
    var_k2,
    var_k1,
    var_defaxes,
    var_axes,
    var_final_dtype,
    var_res,
    var_oldndim
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__8___getitem__);

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
Py_XDECREF(par_key);
par_key = NULL;
Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_mymat);
var_mymat = NULL;
Py_XDECREF(var_trans1d);
var_trans1d = NULL;
Py_XDECREF(var_ndmin);
var_ndmin = NULL;
Py_XDECREF(var_matrix);
var_matrix = NULL;
Py_XDECREF(var_axis);
var_axis = NULL;
Py_XDECREF(var_objs);
var_objs = NULL;
Py_XDECREF(var_result_type_objs);
var_result_type_objs = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_item);
var_item = NULL;
Py_XDECREF(var_scalar);
var_scalar = NULL;
Py_XDECREF(var_step);
var_step = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_stop);
var_stop = NULL;
Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_newobj);
var_newobj = NULL;
Py_XDECREF(var_col);
var_col = NULL;
Py_XDECREF(var_vec);
var_vec = NULL;
Py_XDECREF(var_item_ndim);
var_item_ndim = NULL;
Py_XDECREF(var_k2);
var_k2 = NULL;
Py_XDECREF(var_k1);
var_k1 = NULL;
Py_XDECREF(var_defaxes);
var_defaxes = NULL;
Py_XDECREF(var_axes);
var_axes = NULL;
Py_XDECREF(var_final_dtype);
var_final_dtype = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_oldndim);
var_oldndim = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_key);
par_key = NULL;
Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_trans1d);
var_trans1d = NULL;
Py_XDECREF(var_ndmin);
var_ndmin = NULL;
Py_XDECREF(var_matrix);
var_matrix = NULL;
Py_XDECREF(var_axis);
var_axis = NULL;
Py_XDECREF(var_objs);
var_objs = NULL;
Py_XDECREF(var_result_type_objs);
var_result_type_objs = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_item);
var_item = NULL;
Py_XDECREF(var_scalar);
var_scalar = NULL;
Py_XDECREF(var_step);
var_step = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_stop);
var_stop = NULL;
Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_newobj);
var_newobj = NULL;
Py_XDECREF(var_col);
var_col = NULL;
Py_XDECREF(var_vec);
var_vec = NULL;
Py_XDECREF(var_item_ndim);
var_item_ndim = NULL;
Py_XDECREF(var_k2);
var_k2 = NULL;
Py_XDECREF(var_k1);
var_k1 = NULL;
Py_XDECREF(var_defaxes);
var_defaxes = NULL;
Py_XDECREF(var_axes);
var_axes = NULL;
Py_XDECREF(var_final_dtype);
var_final_dtype = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_oldndim);
var_oldndim = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4f99beb492e8a5c5c4302ebb69597643, module_numpy$lib$_index_tricks_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_index_tricks_impl$AxisConcatenator(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AxisConcatenator);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_args_element_value_2 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__->m_frame.f_lineno = 550;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        const_str_plain___init__,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__10___init__);

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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f95d08874a093cd5ec286aa773e368c2, module_numpy$lib$_index_tricks_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_index_tricks_impl$AxisConcatenator(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AxisConcatenator);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 584;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_neg_1;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_81b4235b86f1e457ad123f6637c07a25);
frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__->m_frame.f_lineno = 584;
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


exception_lineno = 584;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__11___init__);

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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_arr = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_377934b5ec4e71ee07e2a013cde5d320, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_index_tricks_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 620;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr);
tmp_args_element_value_1 = par_arr;
frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__->m_frame.f_lineno = 620;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_flat);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_iter, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__,
    type_description_1,
    par_self,
    par_arr
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__12___init__);

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
CHECK_OBJECT(par_arr);
Py_DECREF(par_arr);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_arr);
Py_DECREF(par_arr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__13___next__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f213e9f8114ba4bbd65a806c1dbb0cce, module_numpy$lib$_index_tricks_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_iter);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_coords);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_iter);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_tuple_element_1 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 634;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__13___next__);

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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__14___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_shape = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1ba8e7c0bc317242eb11de456e0076b4, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
bool tmp_tmp_and_left_value_1_cbool_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_shape);
tmp_len_arg_1 = par_shape;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = 1;
tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_value_1 = tmp_tmp_and_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_shape);
tmp_expression_value_1 = par_shape;
tmp_subscript_value_1 = const_int_0;
tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_shape);
tmp_expression_value_2 = par_shape;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_shape;
    assert(old != NULL);
    par_shape = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
if (par_shape == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shape);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 690;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = par_shape;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_6e6ad1f7f9ad133a37c803a2af55baf6);
frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__->m_frame.f_lineno = 690;
tmp_cmp_expr_left_2 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "oo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b6df23ce293ccd6e643240b16419a03d;
frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__->m_frame.f_lineno = 691;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 691;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_1;
tmp_direct_call_arg1_1 = module_var_accessor_numpy$lib$_index_tricks_impl$product(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_product);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 692;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = (PyObject *)&PyMap_Type;
tmp_args_element_value_1 = (PyObject *)&PyRange_Type;
if (par_shape == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shape);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 692;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = par_shape;
frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__->m_frame.f_lineno = 692;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_direct_call_arg2_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assattr_value_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__iter, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__,
    type_description_1,
    par_self,
    par_shape
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__15___init__);

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
Py_XDECREF(par_shape);
par_shape = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_shape);
par_shape = NULL;
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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__16___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__17___next__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__ = MAKE_FUNCTION_FRAME(tstate, code_objects_aa644a81a0058d5d0f64e1203a160fe0, module_numpy$lib$_index_tricks_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__iter);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_return_value == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 709;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__17___next__);

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


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__18___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_maketuple = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e6717975d51d4d33338eb0bd5a767c1a, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_maketuple);
tmp_assattr_value_1 = par_maketuple;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_maketuple, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__,
    type_description_1,
    par_self,
    par_maketuple
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__18___init__);

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
CHECK_OBJECT(par_maketuple);
Py_DECREF(par_maketuple);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_maketuple);
Py_DECREF(par_maketuple);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__19___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_item = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2d40998cebac3527483c0666b65645ed, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__ = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_maketuple);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 774;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 774;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 774;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_item);
tmp_isinstance_inst_1 = par_item;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 774;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 774;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_item);
tmp_tuple_element_1 = par_item;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
CHECK_OBJECT(par_item);
tmp_return_value = par_item;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__,
    type_description_1,
    par_self,
    par_item
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__ == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__19___getitem__);

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
CHECK_OBJECT(par_item);
Py_DECREF(par_item);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_item);
Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__20__fill_diagonal_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_val = python_pars[1];
PyObject *par_wrap = python_pars[2];
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
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
CHECK_OBJECT(par_wrap);
Py_DECREF(par_wrap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_val = python_pars[1];
PyObject *par_wrap = python_pars[2];
PyObject *var_end = NULL;
PyObject *var_step = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal = MAKE_FUNCTION_FRAME(tstate, code_objects_fa772c96c279e46eac2755a56533e8a5, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 905;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_2;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 905;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d685a6f7f529aa109e07a7b645a1f27e;
frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal->m_frame.f_lineno = 906;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 906;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_end == NULL);
Py_INCREF(tmp_assign_source_1);
var_end = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 908;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_2;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 908;
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
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_4 = par_a;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_shape);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = const_int_pos_1;
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_step == NULL);
var_step = tmp_assign_source_2;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_wrap);
tmp_operand_value_1 = par_wrap;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 913;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_a);
tmp_expression_value_6 = par_a;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_shape);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 914;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 914;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_8 = par_a;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 914;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_pos_1;
tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 1);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 914;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 914;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_end;
    assert(old != NULL);
    var_end = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_10;
tmp_expression_value_9 = module_var_accessor_numpy$lib$_index_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 918;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_all);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 918;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_numpy$lib$_index_tricks_impl$diff(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_diff);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 918;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_10 = par_a;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 918;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal->m_frame.f_lineno = 918;
tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 918;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_args_element_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 918;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal->m_frame.f_lineno = 918;
tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 918;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 918;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal->m_frame.f_lineno = 919;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 919;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
tmp_add_expr_left_2 = const_int_pos_1;
tmp_expression_value_11 = module_var_accessor_numpy$lib$_index_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 920;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_cumprod);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 920;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_13 = par_a;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_shape);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 920;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_slice_none_int_neg_1_none;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 920;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal->m_frame.f_lineno = 920;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 920;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal->m_frame.f_lineno = 920;
tmp_add_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_sum);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 920;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 920;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_step == NULL);
var_step = tmp_assign_source_4;
}
branch_end_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_step_value_1;
CHECK_OBJECT(par_val);
tmp_ass_subvalue_1 = par_val;
CHECK_OBJECT(par_a);
tmp_expression_value_14 = par_a;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_flat);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 923;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_start_value_1 = Py_None;
CHECK_OBJECT(var_end);
tmp_stop_value_1 = var_end;
CHECK_OBJECT(var_step);
tmp_step_value_1 = var_step;
tmp_ass_subscript_1 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
assert(!(tmp_ass_subscript_1 == NULL));
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 923;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal,
    type_description_1,
    par_a,
    par_val,
    par_wrap,
    var_end,
    var_step
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal);

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
CHECK_OBJECT(var_end);
CHECK_OBJECT(var_end);
Py_DECREF(var_end);
var_end = NULL;
CHECK_OBJECT(var_step);
CHECK_OBJECT(var_step);
Py_DECREF(var_step);
var_step = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_end);
var_end = NULL;
Py_XDECREF(var_step);
var_step = NULL;
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
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
CHECK_OBJECT(par_wrap);
Py_DECREF(par_wrap);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
CHECK_OBJECT(par_wrap);
Py_DECREF(par_wrap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__22_diag_indices(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_n = python_pars[0];
PyObject *par_ndim = python_pars[1];
PyObject *var_idx = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices = MAKE_FUNCTION_FRAME(tstate, code_objects_aff7fe9dcda007c2a0210d65335ee145, module_numpy$lib$_index_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_index_tricks_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 989;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_args_element_value_1 = par_n;
frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices->m_frame.f_lineno = 989;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_arange, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 989;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_idx == NULL);
var_idx = tmp_assign_source_1;
}
{
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_idx);
tmp_tuple_element_1 = var_idx;
tmp_mult_expr_left_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_mult_expr_left_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_ndim);
tmp_mult_expr_right_1 = par_ndim;
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 990;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices,
    type_description_1,
    par_n,
    par_ndim,
    var_idx
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__22_diag_indices);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_idx);
CHECK_OBJECT(var_idx);
Py_DECREF(var_idx);
var_idx = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_idx);
var_idx = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_ndim);
Py_DECREF(par_ndim);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_ndim);
Py_DECREF(par_ndim);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__23__diag_indices_from(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_arr = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_arr);
tmp_tuple_element_1 = par_arr;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_arr);
Py_DECREF(par_arr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_arr = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from = MAKE_FUNCTION_FRAME(tstate, code_objects_bf969c8cb9e5e023b79279ce5a7eb65a, module_numpy$lib$_index_tricks_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from->m_type_description == NULL);
frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from = cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_arr);
tmp_expression_value_1 = par_arr;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1041;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_2;
tmp_operand_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1041;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1041;
type_description_1 = "o";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_9fce22252d81f16af5f47d8c67e196f5;
frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from->m_frame.f_lineno = 1042;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1042;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_index_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1045;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_all);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1045;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_numpy$lib$_index_tricks_impl$diff(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_diff);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1045;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr);
tmp_expression_value_3 = par_arr;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1045;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from->m_frame.f_lineno = 1045;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1045;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_args_element_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1045;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from->m_frame.f_lineno = 1045;
tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1045;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1045;
type_description_1 = "o";
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
tmp_make_exception_arg_2 = mod_consts.const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from->m_frame.f_lineno = 1046;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 1046;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_6;
tmp_called_value_3 = module_var_accessor_numpy$lib$_index_tricks_impl$diag_indices(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_diag_indices);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1048;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr);
tmp_expression_value_5 = par_arr;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_shape);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1048;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1048;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr);
tmp_expression_value_6 = par_arr;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 1048;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from->m_frame.f_lineno = 1048;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1048;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from,
    type_description_1,
    par_arr
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from == cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from);
    cache_frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_arr);
Py_DECREF(par_arr);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_arr);
Py_DECREF(par_arr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__10___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cd6a983de4e45de7ea45ad50c10a6625,
#endif
        code_objects_4f99beb492e8a5c5c4302ebb69597643,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__11___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3572bb3baed1a42156d8cfd28d2ece0d,
#endif
        code_objects_f95d08874a093cd5ec286aa773e368c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__12___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1e988d4c168f4fb3ac128b4d6246b6bc,
#endif
        code_objects_377934b5ec4e71ee07e2a013cde5d320,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__13___next__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__13___next__,
        mod_consts.const_str_plain___next__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5ead3c6cba04556a9936be908e59bd17,
#endif
        code_objects_f213e9f8114ba4bbd65a806c1dbb0cce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_digest_3ad4f3ca329b45931449104e9d325acf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__14___iter__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__14___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3745c56d9995e832af9f95f6c1da753d,
#endif
        code_objects_97007f715a9a56be712dd66132ade75e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__15___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_06610d63bf9e8bdc157cf6ad2baa3ac9,
#endif
        code_objects_1ba8e7c0bc317242eb11de456e0076b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__16___iter__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__16___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_327c29879ba6698190b30147e71aced3,
#endif
        code_objects_21a1c3220514aa2a995298970f5e70ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__17___next__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__17___next__,
        mod_consts.const_str_plain___next__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3919ca950c009fa0d60ed31cc16b66fb,
#endif
        code_objects_aa644a81a0058d5d0f64e1203a160fe0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_digest_2fa21c313e6c641f3a91a0b4514f8649,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__18___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__18___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a1e802e64964f8979e2725072f854335,
#endif
        code_objects_e6717975d51d4d33338eb0bd5a767c1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__19___getitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__19___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_20fb8a3a587ea75579e216f47cb1f4a8,
#endif
        code_objects_2d40998cebac3527483c0666b65645ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__1__ix__dispatcher(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__1__ix__dispatcher,
        mod_consts.const_str_plain__ix__dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8f38213bd3cc3a6258387463daf57bed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__20__fill_diagonal_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__20__fill_diagonal_dispatcher,
        mod_consts.const_str_plain__fill_diagonal_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_757e33d0e18458c522ae13f0b2354dfc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal,
        mod_consts.const_str_plain_fill_diagonal,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fa772c96c279e46eac2755a56533e8a5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_digest_491bbba05ae9c96cea6ddd7dd7dd1145,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__22_diag_indices(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__22_diag_indices,
        mod_consts.const_str_plain_diag_indices,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aff7fe9dcda007c2a0210d65335ee145,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_digest_126b3d2a26ebc3a276d650ca5f98797e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__23__diag_indices_from(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__23__diag_indices_from,
        mod_consts.const_str_plain__diag_indices_from,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_036338686c6a9a81882920fada6a5501,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from,
        mod_consts.const_str_plain_diag_indices_from,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bf969c8cb9e5e023b79279ce5a7eb65a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_digest_b6605aae79923f11e0da0aa4b8c2dfd1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__2_ix_(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__2_ix_,
        mod_consts.const_str_plain_ix_,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a0855ec9b5b6537ac5ffba28c811c54d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_digest_5b025555514f46e5d18ef4e7a92c8c41,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__3___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_da6df6758ad479794ae49c932d506792,
#endif
        code_objects_509af47467046eae1dc15e7409ee3550,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__4___getitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__4___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0a0305b94276cadebffc43457dd27f07,
#endif
        code_objects_5b8ef262c0ef53125125999fa4f4aafd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__5___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6a63ba6bd618ebdbf43ae38ee038c2ca,
#endif
        code_objects_9c5a5a7a23c807c623edb44748b9e80c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__6___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b1f540ccf92c598e463e69dd614c7adf,
#endif
        code_objects_2d67641b8c71dd918821abae6c0de012,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__7___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f54f2fe984a25d17197bbe7e6ba8fc99,
#endif
        code_objects_9728fb760836a4c01d2a165c64e1e262,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__8___getitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_index_tricks_impl$$$function__8___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f756e93c724076c1292baf07c7f9a44f,
#endif
        code_objects_23c9f05010bf26873abbeda6f4e56f8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__9___len__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___len__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b87789d8b99605f48944066ec76ed78a,
#endif
        code_objects_b894f7e0d8e303e153d4aeaa59f630b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_index_tricks_impl,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, const_int_0);

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

static function_impl_code const function_table_numpy$lib$_index_tricks_impl[] = {
impl_numpy$lib$_index_tricks_impl$$$function__1__ix__dispatcher,
impl_numpy$lib$_index_tricks_impl$$$function__2_ix_,
impl_numpy$lib$_index_tricks_impl$$$function__3___init__,
impl_numpy$lib$_index_tricks_impl$$$function__4___getitem__,
impl_numpy$lib$_index_tricks_impl$$$function__5___init__,
impl_numpy$lib$_index_tricks_impl$$$function__6___init__,
impl_numpy$lib$_index_tricks_impl$$$function__7___init__,
impl_numpy$lib$_index_tricks_impl$$$function__8___getitem__,
impl_numpy$lib$_index_tricks_impl$$$function__10___init__,
impl_numpy$lib$_index_tricks_impl$$$function__11___init__,
impl_numpy$lib$_index_tricks_impl$$$function__12___init__,
impl_numpy$lib$_index_tricks_impl$$$function__13___next__,
impl_numpy$lib$_index_tricks_impl$$$function__14___iter__,
impl_numpy$lib$_index_tricks_impl$$$function__15___init__,
impl_numpy$lib$_index_tricks_impl$$$function__16___iter__,
impl_numpy$lib$_index_tricks_impl$$$function__17___next__,
impl_numpy$lib$_index_tricks_impl$$$function__18___init__,
impl_numpy$lib$_index_tricks_impl$$$function__19___getitem__,
impl_numpy$lib$_index_tricks_impl$$$function__20__fill_diagonal_dispatcher,
impl_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal,
impl_numpy$lib$_index_tricks_impl$$$function__22_diag_indices,
impl_numpy$lib$_index_tricks_impl$$$function__23__diag_indices_from,
impl_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$lib$_index_tricks_impl);
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
        module_numpy$lib$_index_tricks_impl,
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
        function_table_numpy$lib$_index_tricks_impl,
        sizeof(function_table_numpy$lib$_index_tricks_impl) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.lib._index_tricks_impl";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$lib$_index_tricks_impl(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$_index_tricks_impl");

    // Store the module for future use.
    module_numpy$lib$_index_tricks_impl = module;

    moduledict_numpy$lib$_index_tricks_impl = MODULE_DICT(module_numpy$lib$_index_tricks_impl);

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
        PRINT_STRING("numpy$lib$_index_tricks_impl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$_index_tricks_impl: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$_index_tricks_impl: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._index_tricks_impl" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$_index_tricks_impl\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$_index_tricks_impl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_index_tricks_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_index_tricks_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_index_tricks_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_index_tricks_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$_index_tricks_impl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$_index_tricks_impl);
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

        UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl;
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
PyObject *locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
int tmp_res;
PyObject *locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$class__5_RClass_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_index_tricks_impl$$$class__6_CClass_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
PyObject *locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$lib$_index_tricks_impl = MAKE_MODULE_FRAME(code_objects_072d412bfd3acfd08eb3fe56a91e49f3, module_numpy$lib$_index_tricks_impl);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$lib$_index_tricks_impl$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$lib$_index_tricks_impl$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 2;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_itertools;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_product_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_product,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_product);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_product, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 6;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_import_name_from_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain__core,
        const_int_0
    );
} else {
    tmp_import_name_from_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__core);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_numeric,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_numeric);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nx, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_f462c9dbdab6a6e18585dee27e01f422;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 8;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_matrixlib,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_matrixlib);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_matrixlib, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2;
tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_linspace_str_plain_overrides_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 9;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_linspace,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_linspace);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_linspace, tmp_assign_source_12);
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
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_overrides,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_overrides);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides, tmp_assign_source_13);
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
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c;
tmp_globals_arg_value_7 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 10;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

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
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_ravel_multi_index,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ravel_multi_index);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ravel_multi_index, tmp_assign_source_15);
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
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_unravel_index,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_unravel_index);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_unravel_index, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836;
tmp_globals_arg_value_8 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_ScalarType_str_plain_array_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 11;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_ScalarType,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ScalarType);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarType, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_array,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_array);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array, tmp_assign_source_19);
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
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_5906891205c2cc5e01780a64b0735586;
tmp_globals_arg_value_9 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_issubdtype_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 12;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_issubdtype,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_issubdtype);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_issubdtype, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c;
tmp_globals_arg_value_10 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_set_module_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 13;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_set_module,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_set_module);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_d7f534cd93611b81223c377d3a08aa34;
tmp_globals_arg_value_11 = (PyObject *)moduledict_numpy$lib$_index_tricks_impl;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_diff_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 14;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
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
        (PyObject *)moduledict_numpy$lib$_index_tricks_impl,
        mod_consts.const_str_plain_diff,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_diff);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_diff, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
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
tmp_expression_value_1 = module_var_accessor_numpy$lib$_index_tricks_impl$overrides(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overrides);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array_function_dispatch);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 16;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = LIST_COPY(tstate, mod_consts.const_list_fa22549eaa1a878119e86a628980cdb1_list);
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__1__ix__dispatcher(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__ix__dispatcher, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_numpy$lib$_index_tricks_impl$array_function_dispatch(tstate);
assert(!(tmp_called_value_3 == NULL));
tmp_args_element_value_1 = module_var_accessor_numpy$lib$_index_tricks_impl$_ix__dispatcher(tstate);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 31;
tmp_called_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__2_ix_(tstate);

frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 31;
tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ix_, tmp_assign_source_26);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_aac8b0d5454b245461f067eecf78dfba;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_nd_grid;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_107;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_sparse_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107, mod_consts.const_str_plain___slots__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__3___init__(tstate, tmp_defaults_1);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__4___getitem__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_sparse_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_nd_grid;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 107;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_30;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_29 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_29);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107);
locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107);
locals_numpy$lib$_index_tricks_impl$$$class__1_nd_grid_107 = NULL;
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
exception_lineno = 107;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_nd_grid, tmp_assign_source_29);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_numpy$lib$_index_tricks_impl$nd_grid(tstate);
assert(!(tmp_tuple_element_3 == NULL));
tmp_assign_source_31 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_34;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_MGridClass;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 211;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_35;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_7;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 211;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 211;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_36;
}
branch_end_1:;
{
PyObject *tmp_assign_source_37;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_fb2f7672f5185b4d9b602d76cc85e15e;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_MGridClass;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_211;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_9;
}
frame_frame_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_2 = MAKE_CLASS_FRAME(tstate, code_objects_fcc70a9da19b4797353bf54ef70bb9d3, module_numpy$lib$_index_tricks_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_2);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_2) == 2);

// Framed code:
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__5___init__(tstate, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_9;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_9;
}
branch_no_3:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_MGridClass;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 211;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_9;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_38);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_37 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_37);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211);
locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211);
locals_numpy$lib$_index_tricks_impl$$$class__2_MGridClass_211 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 211;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_MGridClass, tmp_assign_source_37);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_numpy$lib$_index_tricks_impl$MGridClass(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MGridClass);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 270;
tmp_assign_source_39 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_mgrid, tmp_assign_source_39);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_numpy$lib$_index_tricks_impl$nd_grid(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd_grid);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;

    goto try_except_handler_10;
}
tmp_assign_source_40 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_41 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_10;
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
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_10;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_10;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_43 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_43;
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


exception_lineno = 273;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_10;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_OGridClass;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 273;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_44;
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


exception_lineno = 273;

    goto try_except_handler_10;
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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_13, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_10;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_10;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 273;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 273;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_45;
}
branch_end_4:;
{
PyObject *tmp_assign_source_46;
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_75826e8d8503cdcdc480a350b320de15;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_OGridClass;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_273;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_12;
}
frame_frame_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_3 = MAKE_CLASS_FRAME(tstate, code_objects_187020e831439b2b307c6bbc6e52af6b, module_numpy$lib$_index_tricks_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_3);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_3) == 2);

// Framed code:
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__6___init__(tstate, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_12;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_12;
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


exception_lineno = 273;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_12;
}
branch_no_6:;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_OGridClass;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 273;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_12;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_47);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_assign_source_46 = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_assign_source_46);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273);
locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273);
locals_numpy$lib$_index_tricks_impl$$$class__3_OGridClass_273 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 273;
goto try_except_handler_10;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_OGridClass, tmp_assign_source_46);
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_10;
tmp_called_value_10 = module_var_accessor_numpy$lib$_index_tricks_impl$OGridClass(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OGridClass);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 322;
tmp_assign_source_48 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ogrid, tmp_assign_source_48);
}
{
PyObject *tmp_outline_return_value_4;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_50;
}
// Tried code:
{
PyObject *tmp_assign_source_51;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_57028da1e1ba45202d56fc21d6ea0766;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AxisConcatenator;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_325;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_dc0af268025f69148bee4c10096b08e4_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, mod_consts.const_str_plain___slots__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_4 = MAKE_CLASS_FRAME(tstate, code_objects_0bfe97c1b6ed6ddb1c7e9834b053c876, module_numpy$lib$_index_tricks_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_4);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_4) == 2);

// Framed code:
{
PyObject *tmp_staticmethod_arg_1;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = module_var_accessor_numpy$lib$_index_tricks_impl$_nx(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nx);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 334;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_staticmethod_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_concatenate);
if (tmp_staticmethod_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
CHECK_OBJECT(tmp_staticmethod_arg_1);
Py_DECREF(tmp_staticmethod_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, mod_consts.const_str_plain_concatenate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_staticmethod_arg_2;
PyObject *tmp_expression_value_15;
tmp_expression_value_15 = module_var_accessor_numpy$lib$_index_tricks_impl$matrixlib(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrixlib);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 335;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_staticmethod_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_matrix);
if (tmp_staticmethod_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_2);
CHECK_OBJECT(tmp_staticmethod_arg_2);
Py_DECREF(tmp_staticmethod_arg_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, mod_consts.const_str_plain_makemat, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_4,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_15;
skip_nested_handling_3:;
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__7___init__(tstate, tmp_defaults_2);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__8___getitem__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__9___len__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, mod_consts.const_str_plain___len__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_ada4c526b35eeeda736a7ec5dc48c2d1_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_7;
tmp_called_value_11 = (PyObject *)&PyType_Type;
tmp_tuple_element_11 = mod_consts.const_str_plain_AxisConcatenator;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 325;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;

    goto try_except_handler_15;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_52;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_51 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_51);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325);
locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325);
locals_numpy$lib$_index_tricks_impl$$$class__4_AxisConcatenator_325 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 325;
goto try_except_handler_13;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_AxisConcatenator, tmp_assign_source_51);
}
goto try_end_7;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_53;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = module_var_accessor_numpy$lib$_index_tricks_impl$AxisConcatenator(tstate);
assert(!(tmp_tuple_element_12 == NULL));
tmp_assign_source_53 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_12);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_53;
}
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_54 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_56;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
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
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
}
tmp_tuple_element_13 = mod_consts.const_str_plain_RClass;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 452;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_57;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
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
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_14, tmp_default_value_3);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_16;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 452;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 452;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_58;
}
branch_end_7:;
{
PyObject *tmp_assign_source_59;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_cee33f55ed75a99fda796c6b6a312aa4;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_RClass;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_452;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_18;
}
frame_frame_numpy$lib$_index_tricks_impl$$$class__5_RClass_5 = MAKE_CLASS_FRAME(tstate, code_objects_9d56f17c0815d2ddc23c3b4a4c26fca6, module_numpy$lib$_index_tricks_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$class__5_RClass_5);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$class__5_RClass_5) == 2);

// Framed code:
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__10___init__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_2 = "o";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$class__5_RClass_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$class__5_RClass_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$class__5_RClass_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$class__5_RClass_5,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$class__5_RClass_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_18;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_18;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_18;
}
branch_no_9:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_15 = mod_consts.const_str_plain_RClass;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_15);
tmp_tuple_element_15 = locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452;
PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 452;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;

    goto try_except_handler_18;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_60;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_59 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_59);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452);
locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452);
locals_numpy$lib$_index_tricks_impl$$$class__5_RClass_452 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 452;
goto try_except_handler_16;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_RClass, tmp_assign_source_59);
}
goto try_end_8;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
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
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_14;
tmp_called_value_14 = module_var_accessor_numpy$lib$_index_tricks_impl$RClass(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RClass);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 553;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 553;
tmp_assign_source_61 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_r_, tmp_assign_source_61);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_62;
PyObject *tmp_tuple_element_16;
tmp_tuple_element_16 = module_var_accessor_numpy$lib$_index_tricks_impl$AxisConcatenator(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AxisConcatenator);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 556;

    goto try_except_handler_19;
}
tmp_assign_source_62 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_62, 0, tmp_tuple_element_16);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_63 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_22 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_65 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_65;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
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
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
}
tmp_tuple_element_17 = mod_consts.const_str_plain_CClass;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 556;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_66;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_25 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
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
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_15, tmp_default_value_4);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_19;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 556;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 556;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_67;
}
branch_end_10:;
{
PyObject *tmp_assign_source_68;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_246a64775690277c41bf46c4c9ba4bfe;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_CClass;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_556;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_21;
}
frame_frame_numpy$lib$_index_tricks_impl$$$class__6_CClass_6 = MAKE_CLASS_FRAME(tstate, code_objects_5d88a3c22598d647dd10b68339a81bc8, module_numpy$lib$_index_tricks_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_index_tricks_impl$$$class__6_CClass_6);
assert(Py_REFCNT(frame_frame_numpy$lib$_index_tricks_impl$$$class__6_CClass_6) == 2);

// Framed code:
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__11___init__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 583;
type_description_2 = "o";
    goto frame_exception_exit_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl$$$class__6_CClass_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl$$$class__6_CClass_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl$$$class__6_CClass_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_index_tricks_impl$$$class__6_CClass_6,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl$$$class__6_CClass_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_21;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_21;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_21;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_21;
}
branch_no_12:;
{
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_19 = mod_consts.const_str_plain_CClass;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556;
PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 556;
tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;

    goto try_except_handler_21;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_69;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_68 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_68);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556);
locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556);
locals_numpy$lib$_index_tricks_impl$$$class__6_CClass_556 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 556;
goto try_except_handler_19;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_CClass, tmp_assign_source_68);
}
goto try_end_9;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
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
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_17;
tmp_called_value_17 = module_var_accessor_numpy$lib$_index_tricks_impl$CClass(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CClass);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 587;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 587;
tmp_assign_source_70 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_17);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_c_, tmp_assign_source_70);
}
{
PyObject *tmp_outline_return_value_7;
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_72;
}
// Tried code:
{
PyObject *tmp_assign_source_73;
PyObject *tmp_called_value_18;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_3;
tmp_called_value_19 = module_var_accessor_numpy$lib$_index_tricks_impl$set_module(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 590;

    goto try_except_handler_22;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 590;
tmp_called_value_18 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_19, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;

    goto try_except_handler_22;
}
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
tmp_dictset_value = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_c5d221b2e2f6af29c4c1eeb5531453e6;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ndenumerate;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_591;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__12___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__13___next__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591, mod_consts.const_str_plain___next__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__14___iter__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_iter_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_12;
tmp_called_value_20 = (PyObject *)&PyType_Type;
tmp_tuple_element_20 = mod_consts.const_str_plain_ndenumerate;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 591;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;

    goto try_except_handler_24;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_74;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_args_element_value_3 = outline_6_var___class__;
Py_INCREF(tmp_args_element_value_3);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591);
locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591);
locals_numpy$lib$_index_tricks_impl$$$class__7_ndenumerate_591 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 591;
goto try_except_handler_22;
outline_result_14:;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 590;
tmp_assign_source_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;

    goto try_except_handler_22;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ndenumerate, tmp_assign_source_73);
}
goto try_end_10;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_8;
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_76;
}
// Tried code:
{
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_21;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_4;
tmp_called_value_22 = module_var_accessor_numpy$lib$_index_tricks_impl$set_module(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 640;

    goto try_except_handler_25;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 640;
tmp_called_value_21 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_22, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 640;

    goto try_except_handler_25;
}
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
tmp_dictset_value = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_61cdbd045374d69ad00dcbd6573a2301;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ndindex;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_641;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__15___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__16___iter__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__17___next__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641, mod_consts.const_str_plain___next__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain__iter_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_13;
tmp_called_value_23 = (PyObject *)&PyType_Type;
tmp_tuple_element_21 = mod_consts.const_str_plain_ndindex;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641;
PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 641;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 641;

    goto try_except_handler_27;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_78;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_args_element_value_4 = outline_7_var___class__;
Py_INCREF(tmp_args_element_value_4);
goto try_return_handler_27;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641);
locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641);
locals_numpy$lib$_index_tricks_impl$$$class__8_ndindex_641 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_26;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 641;
goto try_except_handler_25;
outline_result_16:;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 640;
tmp_assign_source_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 640;

    goto try_except_handler_25;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ndindex, tmp_assign_source_77);
}
goto try_end_11;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}
{
PyObject *tmp_outline_return_value_9;
{
PyObject *tmp_assign_source_79;
tmp_assign_source_79 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_79;
}
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_80;
}
// Tried code:
{
PyObject *tmp_assign_source_81;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
tmp_dictset_value = mod_consts.const_str_digest_404fc6f31392643c8aad2353fa336792;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_4f3fe7d01fca58714dab8b789e07bfe9;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_IndexExpression;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_723;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_maketuple_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723, mod_consts.const_str_plain___slots__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__18___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__19___getitem__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_maketuple_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_24;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_14;
tmp_called_value_24 = (PyObject *)&PyType_Type;
tmp_tuple_element_22 = mod_consts.const_str_plain_IndexExpression;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 723;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;

    goto try_except_handler_30;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_82;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_81 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_81);
goto try_return_handler_30;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723);
locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723 = NULL;
goto try_return_handler_29;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723);
locals_numpy$lib$_index_tricks_impl$$$class__9_IndexExpression_723 = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto try_except_handler_29;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 723;
goto try_except_handler_28;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_IndexExpression, tmp_assign_source_81);
}
goto try_end_12;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_called_value_25;
tmp_called_value_25 = module_var_accessor_numpy$lib$_index_tricks_impl$IndexExpression(tstate);
assert(!(tmp_called_value_25 == NULL));
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 780;
tmp_assign_source_83 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_maketuple_tuple);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 780;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_index_exp, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_called_value_26;
tmp_called_value_26 = module_var_accessor_numpy$lib$_index_tricks_impl$IndexExpression(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IndexExpression);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 781;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 781;
tmp_assign_source_84 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_maketuple_tuple);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_s_, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_85 = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__20__fill_diagonal_dispatcher(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__fill_diagonal_dispatcher, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_27;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_defaults_4;
tmp_called_value_28 = module_var_accessor_numpy$lib$_index_tricks_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 794;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_numpy$lib$_index_tricks_impl$_fill_diagonal_dispatcher(tstate);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 794;
tmp_called_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_5);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 794;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_4);

tmp_args_element_value_6 = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__21_fill_diagonal(tstate, tmp_defaults_4);

frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 794;
tmp_assign_source_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 794;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_fill_diagonal, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_called_value_29;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_7;
PyObject *tmp_defaults_5;
tmp_called_value_30 = module_var_accessor_numpy$lib$_index_tricks_impl$set_module(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 926;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 926;
tmp_called_value_29 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_30, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 926;

    goto frame_exception_exit_1;
}
tmp_defaults_5 = mod_consts.const_tuple_int_pos_2_tuple;
Py_INCREF(tmp_defaults_5);

tmp_args_element_value_7 = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__22_diag_indices(tstate, tmp_defaults_5);

frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 926;
tmp_assign_source_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 926;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_diag_indices, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;

tmp_assign_source_88 = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__23__diag_indices_from(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__diag_indices_from, tmp_assign_source_88);
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_called_value_31;
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_32 = module_var_accessor_numpy$lib$_index_tricks_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 997;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = module_var_accessor_numpy$lib$_index_tricks_impl$_diag_indices_from(tstate);
assert(!(tmp_args_element_value_8 == NULL));
frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 997;
tmp_called_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_8);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 997;

    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = MAKE_FUNCTION_numpy$lib$_index_tricks_impl$$$function__24_diag_indices_from(tstate);

frame_frame_numpy$lib$_index_tricks_impl->m_frame.f_lineno = 997;
tmp_assign_source_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 997;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_diag_indices_from, tmp_assign_source_89);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_index_tricks_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_index_tricks_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_index_tricks_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$lib$_index_tricks_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$_index_tricks_impl", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._index_tricks_impl" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$_index_tricks_impl);
    return module_numpy$lib$_index_tricks_impl;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_index_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$_index_tricks_impl", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

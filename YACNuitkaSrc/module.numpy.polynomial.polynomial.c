/* Generated code for Python module 'numpy$polynomial$polynomial'
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



/* The "module_numpy$polynomial$polynomial" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$polynomial;
PyDictObject *moduledict_numpy$polynomial$polynomial;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_np;
PyObject *const_str_plain_array;
PyObject *const_str_digest_1d827da031c3ac75750dfa45bc76a8c3;
PyObject *const_str_plain_pu;
PyObject *const_str_plain__fromroots;
PyObject *const_str_plain_polyline;
PyObject *const_str_plain_polymul;
PyObject *const_str_digest_2aca2cc2b92cb532a8a5c025efc2bb9d;
PyObject *const_str_plain__add;
PyObject *const_str_digest_160cc0ecb7c1d1f39598cf18eaac3393;
PyObject *const_str_plain__sub;
PyObject *const_str_digest_7cba8fa26f5a2e8e1253bf5b1c89878f;
PyObject *const_str_plain_as_series;
PyObject *const_str_plain_empty;
PyObject *const_str_plain_dtype;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_digest_6db3669585dc429d2dc573fb5df7a1fb;
PyObject *const_str_plain_convolve;
PyObject *const_str_plain_trimseq;
PyObject *const_str_digest_2393bf92f2e223609a66f0a134217d1d;
PyObject *const_slice_none_int_pos_1_none;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_plain_i;
PyObject *const_str_plain_c1;
PyObject *const_str_plain_j;
PyObject *const_str_plain_c2;
PyObject *const_str_digest_aed500425309aefad88bacc143be85fc;
PyObject *const_str_plain__pow;
PyObject *const_str_digest_4584c0bae99ff5ce070c66c338c418c2;
PyObject *const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee;
PyObject *const_str_plain_char;
PyObject *const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
PyObject *const_str_plain_c;
PyObject *const_str_plain__as_int;
PyObject *const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
PyObject *const_str_digest_70e3e648da9207a55990fb352e033d01;
PyObject *const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b;
PyObject *const_str_plain_lib;
PyObject *const_str_plain_array_utils;
PyObject *const_str_plain_normalize_axis_index;
PyObject *const_str_plain_ndim;
PyObject *const_str_plain_moveaxis;
PyObject *const_str_plain_n;
PyObject *const_str_plain_scl;
PyObject *const_str_plain_shape;
PyObject *const_str_plain_cdt;
PyObject *const_str_plain_der;
PyObject *const_str_digest_3d5cab4a91e27c8c382498a573184354;
PyObject *const_str_plain_iterable;
PyObject *const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
PyObject *const_str_digest_b303cff154cb34d4708df3886d4b732e;
PyObject *const_str_plain_k;
PyObject *const_str_digest_616f6ee3ef74479987454a15fb3cc986;
PyObject *const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92;
PyObject *const_str_digest_a9be14195673dac9b8db86f91b86f4b8;
PyObject *const_str_plain_all;
PyObject *const_str_plain_tmp;
PyObject *const_str_plain_polyval;
PyObject *const_str_plain_lbnd;
PyObject *const_str_digest_120434d6142a6e961c615143caa3b228;
PyObject *const_dict_f5bbbab934471495306a2b1e3746ed7e;
PyObject *const_tuple_type_tuple_type_list_tuple;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain_reshape;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_c0;
PyObject *const_str_plain_x;
PyObject *const_str_digest_fb47e3c9aa01e79335e1f60985354c54;
PyObject *const_str_plain_astype;
PyObject *const_str_plain_double;
PyObject *const_str_digest_a2c1116176c190c863c862ab04be4c9e;
PyObject *const_str_plain_prod;
PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
PyObject *const_str_digest_0a4fc8754b966a58e79ce1f1e1ae6100;
PyObject *const_str_plain__valnd;
PyObject *const_str_digest_786cc035dc46c25e9475e8942e2929ea;
PyObject *const_str_plain__gridnd;
PyObject *const_str_digest_4bb61ad626b9758cc365dc3c0b8914f6;
PyObject *const_str_digest_3d7a4772c104a1a92e2bb3fd3cd2a6ca;
PyObject *const_str_digest_73d2aca856a6a85f97989e3cc0680e5e;
PyObject *const_str_plain_deg;
PyObject *const_str_digest_ea8c65b23281db7ee7660696e61ab360;
PyObject *const_dict_bc4fceb686e8db4e197f4130513f6fe7;
PyObject *const_str_plain_v;
PyObject *const_str_digest_063324d7d577a69880224d9e800c25bf;
PyObject *const_str_plain__vander_nd_flat;
PyObject *const_str_plain_polyvander;
PyObject *const_str_digest_faa617c30feb64eaab471349ca36cc2b;
PyObject *const_str_digest_e9885eebe107625c06c0759bf81a660f;
PyObject *const_str_plain__fit;
PyObject *const_str_digest_551ffc54e203247f89c123dfa258586d;
PyObject *const_str_digest_af327786ef70d70118fb639ec7c50f4e;
PyObject *const_str_plain_zeros;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_tuple_slice_none_none_none_int_neg_1_tuple;
PyObject *const_str_digest_13b67cf526dee52ddfbe6084715a16cd;
PyObject *const_tuple_list_empty_tuple;
PyObject *const_str_plain_polycompanion;
PyObject *const_str_plain_linalg;
PyObject *const_str_plain_eigvals;
PyObject *const_str_plain_sort;
PyObject *const_str_digest_117cae7f33371a925efa6a76bafc7262;
PyObject *const_str_plain_1;
PyObject *const_str_chr_183;
PyObject *const_str_plain_translate;
PyObject *const_str_plain__superscript_mapping;
PyObject *const_str_space;
PyObject *const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e;
PyObject *const_str_digest_f34b61c8fd1790c3ac1cbcbcbd008a11;
PyObject *const_str_digest_1dba1fa7a83ccbd05f0e0710375ac195;
PyObject *const_str_digest_d48e54b9e965e6c8112d348da82e7c34;
PyObject *const_str_chr_125;
PyObject *const_str_digest_aba70bad1270bf508b616542062e2ab6;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_list_75a5d2f1c221fb6ba8d443d6a126da9b_list;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d;
PyObject *const_tuple_str_plain_array_function_dispatch_tuple;
PyObject *const_str_plain_array_function_dispatch;
PyObject *const_str_plain__array_function_dispatch;
PyObject *const_tuple_str_plain_polyutils_tuple;
PyObject *const_str_plain_polyutils;
PyObject *const_str_plain__polybase;
PyObject *const_tuple_str_plain_ABCPolyBase_tuple;
PyObject *const_str_plain_ABCPolyBase;
PyObject *const_str_plain_trimcoef;
PyObject *const_str_plain_polytrim;
PyObject *const_str_plain_polydomain;
PyObject *const_str_plain_polyzero;
PyObject *const_str_plain_polyone;
PyObject *const_str_plain_polyx;
PyObject *const_str_plain_polyfromroots;
PyObject *const_str_plain_polyadd;
PyObject *const_str_plain_polysub;
PyObject *const_str_plain_polymulx;
PyObject *const_str_plain_polydiv;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_polypow;
PyObject *const_tuple_int_pos_1_int_pos_1_int_0_tuple;
PyObject *const_str_plain_polyder;
PyObject *const_str_plain_polyint;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_polyvalfromroots;
PyObject *const_str_plain__polyval2d_dispatcher;
PyObject *const_str_plain__polygrid2d_dispatcher;
PyObject *const_str_plain_polyval2d;
PyObject *const_str_plain_polygrid2d;
PyObject *const_str_plain_polyval3d;
PyObject *const_str_plain_polygrid3d;
PyObject *const_str_plain_polyvander2d;
PyObject *const_str_plain_polyvander3d;
PyObject *const_tuple_none_false_none_tuple;
PyObject *const_str_plain_polyfit;
PyObject *const_str_plain_polyroots;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Polynomial;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_04b3eb4a69367931852490c2b7667d29;
PyObject *const_str_digest_c4bcf78ca32eb767b1c378e4eff22982;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_1557;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain__mul;
PyObject *const_str_plain__div;
PyObject *const_str_plain__val;
PyObject *const_str_plain__int;
PyObject *const_str_plain__der;
PyObject *const_str_plain__line;
PyObject *const_str_plain__roots;
PyObject *const_str_plain_domain;
PyObject *const_str_plain_window;
PyObject *const_str_plain_basis_name;
PyObject *const_str_plain__str_term_unicode;
PyObject *const_str_digest_b4d2df1776341c750768683d6dc43faf;
PyObject *const_str_plain__str_term_ascii;
PyObject *const_str_digest_ceca1710e52d383e0200a521454f5748;
PyObject *const_str_plain__repr_latex_term;
PyObject *const_str_digest_1ad93f77468975784d039201a266c815;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_98b6028a1a7abc0a9331b99f7d88dfc4;
PyObject *const_str_digest_173d71112f25e174de5f8bc6e719e8f9;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple;
PyObject *const_tuple_str_plain_i_str_plain_arg_str_str_plain_needs_parens_tuple;
PyObject *const_tuple_str_plain_i_str_plain_arg_str_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_i_str_plain_arg_str_tuple;
PyObject *const_tuple_str_plain_c1_str_plain_c2_tuple;
PyObject *const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple;
PyObject *const_tuple_375d2bf0b94751c5105811e7a6d70f10_tuple;
PyObject *const_tuple_3af5dd531019756667b81af6fc623617_tuple;
PyObject *const_tuple_b87a3e87a6253db629058266b0859839_tuple;
PyObject *const_tuple_str_plain_roots_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple;
PyObject *const_tuple_85bdc75a612d191cbbaa1805b7b27ccb_tuple;
PyObject *const_tuple_str_plain_off_str_plain_scl_tuple;
PyObject *const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple;
PyObject *const_tuple_str_plain_c_str_plain_prd_tuple;
PyObject *const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple;
PyObject *const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple;
PyObject *const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple;
PyObject *const_tuple_str_plain_x_str_plain_r_str_plain_tensor_tuple;
PyObject *const_tuple_5ac5563309656f6342973420ec643c7c_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[211];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.polynomial.polynomial"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d827da031c3ac75750dfa45bc76a8c3);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_pu);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__fromroots);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyline);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_polymul);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_2aca2cc2b92cb532a8a5c025efc2bb9d);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__add);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_160cc0ecb7c1d1f39598cf18eaac3393);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__sub);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cba8fa26f5a2e8e1253bf5b1c89878f);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_as_series);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_6db3669585dc429d2dc573fb5df7a1fb);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_convolve);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_trimseq);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_2393bf92f2e223609a66f0a134217d1d);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_c1);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_j);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_c2);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_aed500425309aefad88bacc143be85fc);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__pow);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_4584c0bae99ff5ce070c66c338c418c2);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_char);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__as_int);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_lib);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_utils);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_scl);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_cdt);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_der);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d5cab4a91e27c8c382498a573184354);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterable);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_k);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_all);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_tmp);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyval);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_lbnd);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_120434d6142a6e961c615143caa3b228);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_c0);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb47e3c9aa01e79335e1f60985354c54);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_astype);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_double);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2c1116176c190c863c862ab04be4c9e);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_prod);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_54f4aa72cf3f950a22814f798a2888e8);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a4fc8754b966a58e79ce1f1e1ae6100);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__valnd);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_786cc035dc46c25e9475e8942e2929ea);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__gridnd);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_4bb61ad626b9758cc365dc3c0b8914f6);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d7a4772c104a1a92e2bb3fd3cd2a6ca);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_73d2aca856a6a85f97989e3cc0680e5e);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_deg);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_v);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_063324d7d577a69880224d9e800c25bf);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__vander_nd_flat);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyvander);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_faa617c30feb64eaab471349ca36cc2b);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9885eebe107625c06c0759bf81a660f);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain__fit);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_551ffc54e203247f89c123dfa258586d);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_zeros);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_13b67cf526dee52ddfbe6084715a16cd);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_polycompanion);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_linalg);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_eigvals);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_117cae7f33371a925efa6a76bafc7262);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_1);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_chr_183);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_translate);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain__superscript_mapping);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_f34b61c8fd1790c3ac1cbcbcbd008a11);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_1dba1fa7a83ccbd05f0e0710375ac195);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_d48e54b9e965e6c8112d348da82e7c34);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_chr_125);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_aba70bad1270bf508b616542062e2ab6);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_list_75a5d2f1c221fb6ba8d443d6a126da9b_list);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_function_dispatch_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__array_function_dispatch);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyutils_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyutils);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain__polybase);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCPolyBase_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCPolyBase);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_trimcoef);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_polytrim);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_polydomain);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyzero);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyone);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyx);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyfromroots);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyadd);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_polysub);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_polymulx);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_polydiv);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_polypow);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyder);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyint);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyvalfromroots);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain__polyval2d_dispatcher);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain__polygrid2d_dispatcher);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyval2d);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_polygrid2d);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyval3d);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_polygrid3d);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyvander2d);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyvander3d);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyfit);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyroots);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_Polynomial);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_04b3eb4a69367931852490c2b7667d29);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4bcf78ca32eb767b1c378e4eff22982);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_1557);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain__mul);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain__div);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain__val);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain__int);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain__der);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain__line);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain__roots);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_window);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_basis_name);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain__str_term_unicode);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4d2df1776341c750768683d6dc43faf);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain__str_term_ascii);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_ceca1710e52d383e0200a521454f5748);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain__repr_latex_term);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ad93f77468975784d039201a266c815);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_98b6028a1a7abc0a9331b99f7d88dfc4);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_173d71112f25e174de5f8bc6e719e8f9);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i_str_plain_arg_str_str_plain_needs_parens_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i_str_plain_arg_str_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_i_str_plain_arg_str_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_375d2bf0b94751c5105811e7a6d70f10_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_3af5dd531019756667b81af6fc623617_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_roots_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_85bdc75a612d191cbbaa1805b7b27ccb_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_prd_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_r_str_plain_tensor_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple);
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
void checkModuleConstants_numpy$polynomial$polynomial(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d827da031c3ac75750dfa45bc76a8c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d827da031c3ac75750dfa45bc76a8c3);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_pu));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pu);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__fromroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fromroots);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyline);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_polymul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polymul);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_2aca2cc2b92cb532a8a5c025efc2bb9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2aca2cc2b92cb532a8a5c025efc2bb9d);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_160cc0ecb7c1d1f39598cf18eaac3393));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_160cc0ecb7c1d1f39598cf18eaac3393);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sub);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cba8fa26f5a2e8e1253bf5b1c89878f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cba8fa26f5a2e8e1253bf5b1c89878f);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_as_series));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_as_series);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_6db3669585dc429d2dc573fb5df7a1fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6db3669585dc429d2dc573fb5df7a1fb);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_convolve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_convolve);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_trimseq));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trimseq);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_2393bf92f2e223609a66f0a134217d1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2393bf92f2e223609a66f0a134217d1d);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_1_none);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_i));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_i);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c1);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_j));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_j);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c2);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_aed500425309aefad88bacc143be85fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aed500425309aefad88bacc143be85fc);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__pow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pow);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_4584c0bae99ff5ce070c66c338c418c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4584c0bae99ff5ce070c66c338c418c2);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_char));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_char);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__as_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__as_int);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lib);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_utils);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_axis_index);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moveaxis);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_scl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scl);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_cdt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cdt);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_der);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d5cab4a91e27c8c382498a573184354));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d5cab4a91e27c8c382498a573184354);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iterable);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_k));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_k);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_all);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_tmp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tmp);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyval);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_lbnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lbnd);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_120434d6142a6e961c615143caa3b228));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_120434d6142a6e961c615143caa3b228);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_tuple_type_list_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_reshape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reshape);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c0);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb47e3c9aa01e79335e1f60985354c54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb47e3c9aa01e79335e1f60985354c54);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_astype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astype);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_double));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_double);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2c1116176c190c863c862ab04be4c9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2c1116176c190c863c862ab04be4c9e);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_prod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prod);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_54f4aa72cf3f950a22814f798a2888e8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_54f4aa72cf3f950a22814f798a2888e8);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a4fc8754b966a58e79ce1f1e1ae6100));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a4fc8754b966a58e79ce1f1e1ae6100);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__valnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__valnd);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_786cc035dc46c25e9475e8942e2929ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_786cc035dc46c25e9475e8942e2929ea);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__gridnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__gridnd);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_4bb61ad626b9758cc365dc3c0b8914f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4bb61ad626b9758cc365dc3c0b8914f6);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d7a4772c104a1a92e2bb3fd3cd2a6ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d7a4772c104a1a92e2bb3fd3cd2a6ca);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_73d2aca856a6a85f97989e3cc0680e5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73d2aca856a6a85f97989e3cc0680e5e);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_deg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deg);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_v));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_v);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_063324d7d577a69880224d9e800c25bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_063324d7d577a69880224d9e800c25bf);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__vander_nd_flat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__vander_nd_flat);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyvander));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyvander);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_faa617c30feb64eaab471349ca36cc2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_faa617c30feb64eaab471349ca36cc2b);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9885eebe107625c06c0759bf81a660f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9885eebe107625c06c0759bf81a660f);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain__fit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fit);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_551ffc54e203247f89c123dfa258586d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_551ffc54e203247f89c123dfa258586d);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_zeros));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zeros);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_13b67cf526dee52ddfbe6084715a16cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13b67cf526dee52ddfbe6084715a16cd);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_empty_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_polycompanion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polycompanion);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_linalg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linalg);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_eigvals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eigvals);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_117cae7f33371a925efa6a76bafc7262));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_117cae7f33371a925efa6a76bafc7262);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_1);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_chr_183));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_183);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_translate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_translate);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain__superscript_mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__superscript_mapping);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_f34b61c8fd1790c3ac1cbcbcbd008a11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f34b61c8fd1790c3ac1cbcbcbd008a11);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_1dba1fa7a83ccbd05f0e0710375ac195));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1dba1fa7a83ccbd05f0e0710375ac195);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_d48e54b9e965e6c8112d348da82e7c34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d48e54b9e965e6c8112d348da82e7c34);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_chr_125));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_125);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_aba70bad1270bf508b616542062e2ab6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aba70bad1270bf508b616542062e2ab6);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_list_75a5d2f1c221fb6ba8d443d6a126da9b_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_75a5d2f1c221fb6ba8d443d6a126da9b_list);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_function_dispatch_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_array_function_dispatch_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_dispatch);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__array_function_dispatch);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyutils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_polyutils_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyutils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyutils);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain__polybase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__polybase);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCPolyBase_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABCPolyBase_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCPolyBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCPolyBase);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_trimcoef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trimcoef);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_polytrim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polytrim);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_polydomain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polydomain);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyzero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyzero);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyone);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyx);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyfromroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyfromroots);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyadd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyadd);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_polysub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polysub);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_polymulx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polymulx);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_polydiv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polydiv);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_polypow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polypow);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyder);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyint);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyvalfromroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyvalfromroots);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain__polyval2d_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__polyval2d_dispatcher);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain__polygrid2d_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__polygrid2d_dispatcher);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyval2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyval2d);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_polygrid2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polygrid2d);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyval3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyval3d);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_polygrid3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polygrid3d);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyvander2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyvander2d);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyvander3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyvander3d);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_false_none_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyfit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyfit);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyroots);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_Polynomial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Polynomial);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_04b3eb4a69367931852490c2b7667d29));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04b3eb4a69367931852490c2b7667d29);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4bcf78ca32eb767b1c378e4eff22982));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4bcf78ca32eb767b1c378e4eff22982);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_1557));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1557);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain__mul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mul);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain__div));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__div);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain__val));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__val);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain__int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__int);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain__der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__der);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain__line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__line);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain__roots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__roots);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_domain);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_window));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_window);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_basis_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_basis_name);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain__str_term_unicode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__str_term_unicode);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4d2df1776341c750768683d6dc43faf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4d2df1776341c750768683d6dc43faf);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain__str_term_ascii));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__str_term_ascii);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_ceca1710e52d383e0200a521454f5748));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ceca1710e52d383e0200a521454f5748);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain__repr_latex_term));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__repr_latex_term);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ad93f77468975784d039201a266c815));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ad93f77468975784d039201a266c815);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_98b6028a1a7abc0a9331b99f7d88dfc4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98b6028a1a7abc0a9331b99f7d88dfc4);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_173d71112f25e174de5f8bc6e719e8f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_173d71112f25e174de5f8bc6e719e8f9);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i_str_plain_arg_str_str_plain_needs_parens_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_i_str_plain_arg_str_str_plain_needs_parens_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i_str_plain_arg_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_i_str_plain_arg_str_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_i_str_plain_arg_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_i_str_plain_arg_str_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_375d2bf0b94751c5105811e7a6d70f10_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_375d2bf0b94751c5105811e7a6d70f10_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_3af5dd531019756667b81af6fc623617_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3af5dd531019756667b81af6fc623617_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_roots_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_roots_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_85bdc75a612d191cbbaa1805b7b27ccb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_85bdc75a612d191cbbaa1805b7b27ccb_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_prd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_prd_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_r_str_plain_tensor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_r_str_plain_tensor_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 22
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
static PyObject *module_var_accessor_numpy$polynomial$polynomial$ABCPolyBase(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABCPolyBase);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABCPolyBase, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABCPolyBase);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABCPolyBase, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$_array_function_dispatch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__array_function_dispatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__array_function_dispatch);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__array_function_dispatch, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__array_function_dispatch);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__array_function_dispatch, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__array_function_dispatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__array_function_dispatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__array_function_dispatch);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$_polygrid2d_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__polygrid2d_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__polygrid2d_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__polygrid2d_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__polygrid2d_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__polygrid2d_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__polygrid2d_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__polygrid2d_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__polygrid2d_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$_polyval2d_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__polyval2d_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__polyval2d_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__polyval2d_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__polyval2d_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__polyval2d_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__polyval2d_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__polyval2d_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__polyval2d_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polyadd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyadd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyadd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyadd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyadd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyadd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyadd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyadd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polyadd);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polycompanion(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polycompanion);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polycompanion);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polycompanion, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polycompanion);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polycompanion, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polycompanion);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polycompanion);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polycompanion);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polyder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polyder);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polydiv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polydiv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polydiv);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polydiv, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polydiv);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polydiv, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polydiv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polydiv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polydiv);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polydomain(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polydomain);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polydomain);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polydomain, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polydomain);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polydomain, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polydomain);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polydomain);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polydomain);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polyfit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyfit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyfit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyfit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyfit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfit);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polyfromroots(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfromroots);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyfromroots);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyfromroots, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyfromroots);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyfromroots, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfromroots);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfromroots);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfromroots);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polyint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polyint);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polyline(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyline);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyline);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyline, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyline);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyline, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyline);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyline);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polyline);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polymul(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polymul);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polymul);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polymul, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polymul);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polymul, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polymul);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polymul);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polymul);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polypow(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polypow);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polypow);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polypow, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polypow);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polypow, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polypow);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polypow);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polypow);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polyroots(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyroots);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyroots);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyroots, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyroots);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyroots, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyroots);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyroots);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polyroots);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polysub(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polysub);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polysub);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polysub, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polysub);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polysub, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polysub);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polysub);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polysub);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polyval(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyval);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyval);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyval, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyval);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyval, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyval);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyval);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polyval);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$polyvander(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyvander);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyvander);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyvander, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_polyvander);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_polyvander, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyvander);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyvander);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_polyvander);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$polynomial$pu(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$polynomial->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$polynomial->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$polynomial->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pu);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pu, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pu);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pu, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_755ba7ab1d114849f1092608904d026b;
static PyCodeObject *code_objects_4af8eac7e4e3d38f53f9b75416ee338a;
static PyCodeObject *code_objects_ef9f7695f2bc7549b6ef2305df3625ce;
static PyCodeObject *code_objects_de26560c64118c3944033c38d002668a;
static PyCodeObject *code_objects_91879f64d59d13c8b9df2a39a845fcf2;
static PyCodeObject *code_objects_fa691385d65d6a30a523b8f1c7d683db;
static PyCodeObject *code_objects_e79c768f2f8248050aa5838ca201a3dc;
static PyCodeObject *code_objects_a699710e327708dd2874c371e91781e4;
static PyCodeObject *code_objects_4f13c0396c504f6bf696e8578de5b2ee;
static PyCodeObject *code_objects_b3a934f8c571997303b1416d19e3b660;
static PyCodeObject *code_objects_8cd52ad0a1fa3608433273edd2f0d759;
static PyCodeObject *code_objects_82e2e2adbd279c8b0ed6308001d594f3;
static PyCodeObject *code_objects_c5ba8c8110fd98117d6621411692e622;
static PyCodeObject *code_objects_83fd92575b010a128f82fbe725a58e07;
static PyCodeObject *code_objects_1ecebb4b1e9d56b914f437e6070d74a7;
static PyCodeObject *code_objects_3b5ee796a9ddb058d7fd83cbe681715c;
static PyCodeObject *code_objects_42c3bfe9ea7c76ad90d92617db53260b;
static PyCodeObject *code_objects_d57a4b856d675a2c317d6a9fb388ddf6;
static PyCodeObject *code_objects_5236f2f6d8c8cde98133d19b7efcdbc3;
static PyCodeObject *code_objects_df742c5b9177098a9a8a8e28bdd31655;
static PyCodeObject *code_objects_17c8d2ebd5b4206bb9c8db5fe68cbfe9;
static PyCodeObject *code_objects_3058a9c0dac60f132c447cab4f780b0f;
static PyCodeObject *code_objects_c4dcdbb673e6ffcb130d5c8097c6b319;
static PyCodeObject *code_objects_7fa9c1e23013b44d80a51f3804a963cd;
static PyCodeObject *code_objects_57cbff5d95183a994c194968ecd5bfc8;
static PyCodeObject *code_objects_367e8363a11cf9317c2f60bca0a4fd5a;
static PyCodeObject *code_objects_99498cce0d82044d8ba72e67baf54013;
static PyCodeObject *code_objects_dc689f33dd09d8d696cccd0c4f2e8bd0;
static PyCodeObject *code_objects_031f99a27d66d49b835f9f40b97f2ac4;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_98b6028a1a7abc0a9331b99f7d88dfc4); CHECK_OBJECT(module_filename_obj);
code_objects_755ba7ab1d114849f1092608904d026b = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_173d71112f25e174de5f8bc6e719e8f9, mod_consts.const_str_digest_173d71112f25e174de5f8bc6e719e8f9, NULL, NULL, 0, 0, 0);
code_objects_4af8eac7e4e3d38f53f9b75416ee338a = MAKE_CODE_OBJECT(module_filename_obj, 1557, 0, mod_consts.const_str_plain_Polynomial, mod_consts.const_str_plain_Polynomial, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ef9f7695f2bc7549b6ef2305df3625ce = MAKE_CODE_OBJECT(module_filename_obj, 850, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__polygrid2d_dispatcher, mod_consts.const_str_plain__polygrid2d_dispatcher, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_de26560c64118c3944033c38d002668a = MAKE_CODE_OBJECT(module_filename_obj, 847, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__polyval2d_dispatcher, mod_consts.const_str_plain__polyval2d_dispatcher, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_91879f64d59d13c8b9df2a39a845fcf2 = MAKE_CODE_OBJECT(module_filename_obj, 1617, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__repr_latex_term, mod_consts.const_str_digest_1ad93f77468975784d039201a266c815, mod_consts.const_tuple_str_plain_i_str_plain_arg_str_str_plain_needs_parens_tuple, NULL, 3, 0, 0);
code_objects_fa691385d65d6a30a523b8f1c7d683db = MAKE_CODE_OBJECT(module_filename_obj, 1610, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__str_term_ascii, mod_consts.const_str_digest_ceca1710e52d383e0200a521454f5748, mod_consts.const_tuple_str_plain_i_str_plain_arg_str_tuple, NULL, 2, 0, 0);
code_objects_e79c768f2f8248050aa5838ca201a3dc = MAKE_CODE_OBJECT(module_filename_obj, 1603, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__str_term_unicode, mod_consts.const_str_digest_b4d2df1776341c750768683d6dc43faf, mod_consts.const_tuple_str_plain_cls_str_plain_i_str_plain_arg_str_tuple, NULL, 3, 0, 0);
code_objects_a699710e327708dd2874c371e91781e4 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyadd, mod_consts.const_str_plain_polyadd, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_4f13c0396c504f6bf696e8578de5b2ee = MAKE_CODE_OBJECT(module_filename_obj, 1448, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polycompanion, mod_consts.const_str_plain_polycompanion, mod_consts.const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple, NULL, 1, 0, 0);
code_objects_b3a934f8c571997303b1416d19e3b660 = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyder, mod_consts.const_str_plain_polyder, mod_consts.const_tuple_375d2bf0b94751c5105811e7a6d70f10_tuple, NULL, 4, 0, 0);
code_objects_8cd52ad0a1fa3608433273edd2f0d759 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polydiv, mod_consts.const_str_plain_polydiv, mod_consts.const_tuple_3af5dd531019756667b81af6fc623617_tuple, NULL, 2, 0, 0);
code_objects_82e2e2adbd279c8b0ed6308001d594f3 = MAKE_CODE_OBJECT(module_filename_obj, 1294, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyfit, mod_consts.const_str_plain_polyfit, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple, NULL, 6, 0, 0);
code_objects_c5ba8c8110fd98117d6621411692e622 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyfromroots, mod_consts.const_str_plain_polyfromroots, mod_consts.const_tuple_str_plain_roots_tuple, NULL, 1, 0, 0);
code_objects_83fd92575b010a128f82fbe725a58e07 = MAKE_CODE_OBJECT(module_filename_obj, 906, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polygrid2d, mod_consts.const_str_plain_polygrid2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_1ecebb4b1e9d56b914f437e6070d74a7 = MAKE_CODE_OBJECT(module_filename_obj, 1015, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polygrid3d, mod_consts.const_str_plain_polygrid3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, NULL, 4, 0, 0);
code_objects_3b5ee796a9ddb058d7fd83cbe681715c = MAKE_CODE_OBJECT(module_filename_obj, 545, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyint, mod_consts.const_str_plain_polyint, mod_consts.const_tuple_85bdc75a612d191cbbaa1805b7b27ccb_tuple, NULL, 6, 0, 0);
code_objects_42c3bfe9ea7c76ad90d92617db53260b = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyline, mod_consts.const_str_plain_polyline, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple, NULL, 2, 0, 0);
code_objects_d57a4b856d675a2c317d6a9fb388ddf6 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polymul, mod_consts.const_str_plain_polymul, mod_consts.const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple, NULL, 2, 0, 0);
code_objects_5236f2f6d8c8cde98133d19b7efcdbc3 = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polymulx, mod_consts.const_str_plain_polymulx, mod_consts.const_tuple_str_plain_c_str_plain_prd_tuple, NULL, 1, 0, 0);
code_objects_df742c5b9177098a9a8a8e28bdd31655 = MAKE_CODE_OBJECT(module_filename_obj, 426, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polypow, mod_consts.const_str_plain_polypow, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple, NULL, 3, 0, 0);
code_objects_17c8d2ebd5b4206bb9c8db5fe68cbfe9 = MAKE_CODE_OBJECT(module_filename_obj, 1491, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyroots, mod_consts.const_str_plain_polyroots, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple, NULL, 1, 0, 0);
code_objects_3058a9c0dac60f132c447cab4f780b0f = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polysub, mod_consts.const_str_plain_polysub, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_c4dcdbb673e6ffcb130d5c8097c6b319 = MAKE_CODE_OBJECT(module_filename_obj, 662, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyval, mod_consts.const_str_plain_polyval, mod_consts.const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple, NULL, 3, 0, 0);
code_objects_7fa9c1e23013b44d80a51f3804a963cd = MAKE_CODE_OBJECT(module_filename_obj, 854, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyval2d, mod_consts.const_str_plain_polyval2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_57cbff5d95183a994c194968ecd5bfc8 = MAKE_CODE_OBJECT(module_filename_obj, 962, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyval3d, mod_consts.const_str_plain_polyval3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, NULL, 4, 0, 0);
code_objects_367e8363a11cf9317c2f60bca0a4fd5a = MAKE_CODE_OBJECT(module_filename_obj, 761, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyvalfromroots, mod_consts.const_str_plain_polyvalfromroots, mod_consts.const_tuple_str_plain_x_str_plain_r_str_plain_tensor_tuple, NULL, 3, 0, 0);
code_objects_99498cce0d82044d8ba72e67baf54013 = MAKE_CODE_OBJECT(module_filename_obj, 1074, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyvander, mod_consts.const_str_plain_polyvander, mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple, NULL, 2, 0, 0);
code_objects_dc689f33dd09d8d696cccd0c4f2e8bd0 = MAKE_CODE_OBJECT(module_filename_obj, 1141, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyvander2d, mod_consts.const_str_plain_polyvander2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple, NULL, 3, 0, 0);
code_objects_031f99a27d66d49b835f9f40b97f2ac4 = MAKE_CODE_OBJECT(module_filename_obj, 1220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_polyvander3d, mod_consts.const_str_plain_polyvander3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__10_polyint(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__11_polyval(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__12_polyvalfromroots(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__13__polyval2d_dispatcher(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__14__polygrid2d_dispatcher(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__15_polyval2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__16_polygrid2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__17_polyval3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__18_polygrid3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__19_polyvander(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__1_polyline(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__20_polyvander2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__21_polyvander3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__22_polyfit(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__23_polycompanion(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__24_polyroots(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__25__str_term_unicode(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__26__str_term_ascii(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__27__repr_latex_term(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__2_polyfromroots(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__3_polyadd(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__4_polysub(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__5_polymulx(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__6_polymul(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__7_polydiv(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__8_polypow(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__9_polyder(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$polynomial$polynomial$$$function__1_polyline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_off = python_pars[0];
PyObject *par_scl = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__1_polyline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline = MAKE_FUNCTION_FRAME(tstate, code_objects_42c3bfe9ea7c76ad90d92617db53260b, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__1_polyline = cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__1_polyline);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__1_polyline) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_scl);
tmp_cmp_expr_left_1 = par_scl;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_off);
tmp_list_element_1 = par_off;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_scl);
tmp_list_element_1 = par_scl;
PyList_SET_ITEM0(tmp_args_element_value_1, 1, tmp_list_element_1);
frame_frame_numpy$polynomial$polynomial$$$function__1_polyline->m_frame.f_lineno = 146;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_2;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_off);
tmp_list_element_2 = par_off;
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$polynomial$$$function__1_polyline->m_frame.f_lineno = 148;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_array, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__1_polyline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__1_polyline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__1_polyline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__1_polyline,
    type_description_1,
    par_off,
    par_scl
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__1_polyline == cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__1_polyline = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__1_polyline);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_off);
Py_DECREF(par_off);
CHECK_OBJECT(par_scl);
Py_DECREF(par_scl);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_off);
Py_DECREF(par_off);
CHECK_OBJECT(par_scl);
Py_DECREF(par_scl);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__2_polyfromroots(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_roots = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots = MAKE_FUNCTION_FRAME(tstate, code_objects_c5ba8c8110fd98117d6621411692e622, module_numpy$polynomial$polynomial, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots = cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fromroots);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$polynomial$polyline(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyline);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_numpy$polynomial$polynomial$polymul(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polymul);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_roots);
tmp_args_element_value_3 = par_roots;
frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots->m_frame.f_lineno = 212;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots,
    type_description_1,
    par_roots
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots == cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__2_polyfromroots);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_roots);
Py_DECREF(par_roots);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_roots);
Py_DECREF(par_roots);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__3_polyadd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd = MAKE_FUNCTION_FRAME(tstate, code_objects_a699710e327708dd2874c371e91781e4, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd = cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_1 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_2 = par_c2;
frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd->m_frame.f_lineno = 248;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__add,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd == cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__3_polyadd);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c1);
Py_DECREF(par_c1);
CHECK_OBJECT(par_c2);
Py_DECREF(par_c2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c1);
Py_DECREF(par_c1);
CHECK_OBJECT(par_c2);
Py_DECREF(par_c2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__4_polysub(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__4_polysub;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub = MAKE_FUNCTION_FRAME(tstate, code_objects_3058a9c0dac60f132c447cab4f780b0f, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__4_polysub = cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__4_polysub);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__4_polysub) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_1 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_2 = par_c2;
frame_frame_numpy$polynomial$polynomial$$$function__4_polysub->m_frame.f_lineno = 285;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__sub,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__4_polysub, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__4_polysub->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__4_polysub, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__4_polysub,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__4_polysub == cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__4_polysub = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__4_polysub);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c1);
Py_DECREF(par_c1);
CHECK_OBJECT(par_c2);
Py_DECREF(par_c2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c1);
Py_DECREF(par_c1);
CHECK_OBJECT(par_c2);
Py_DECREF(par_c2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__5_polymulx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *var_prd = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx = MAKE_FUNCTION_FRAME(tstate, code_objects_5236f2f6d8c8cde98133d19b7efcdbc3, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx = cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx->m_frame.f_lineno = 319;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 1);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "oo";
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
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_3;
    Py_INCREF(par_c);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
bool tmp_tmp_and_left_value_1_cbool_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_c);
tmp_len_arg_1 = par_c;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
CHECK_OBJECT(par_c);
tmp_expression_value_1 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oo";
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
CHECK_OBJECT(par_c);
tmp_return_value = par_c;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_add_expr_left_1;
nuitka_digit tmp_add_expr_right_1;
PyObject *tmp_len_arg_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_empty);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_len_arg_2 = par_c;
tmp_add_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 324;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = 1;
tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
CHECK_OBJECT(par_c);
tmp_expression_value_3 = par_c;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 324;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx->m_frame.f_lineno = 324;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_prd == NULL);
var_prd = tmp_assign_source_4;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(par_c);
tmp_expression_value_4 = par_c;
tmp_subscript_value_2 = const_int_0;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = const_int_0;
tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_prd);
tmp_ass_subscribed_1 = var_prd;
tmp_ass_subscript_1 = const_int_0;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_c);
tmp_ass_subvalue_2 = par_c;
CHECK_OBJECT(var_prd);
tmp_ass_subscribed_2 = var_prd;
tmp_ass_subscript_2 = mod_consts.const_slice_int_pos_1_none_none;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oo";
    goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx,
    type_description_1,
    par_c,
    var_prd
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx == cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__5_polymulx);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_prd);
tmp_return_value = var_prd;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_c);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
par_c = NULL;
Py_XDECREF(var_prd);
var_prd = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_prd);
var_prd = NULL;
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


static PyObject *impl_numpy$polynomial$polynomial$$$function__6_polymul(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
PyObject *var_ret = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__6_polymul;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul = MAKE_FUNCTION_FRAME(tstate, code_objects_d57a4b856d675a2c317d6a9fb388ddf6, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__6_polymul = cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__6_polymul);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__6_polymul) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c1);
tmp_list_element_1 = par_c1;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_c2);
tmp_list_element_1 = par_c2;
PyList_SET_ITEM0(tmp_args_element_value_1, 1, tmp_list_element_1);
frame_frame_numpy$polynomial$polynomial$$$function__6_polymul->m_frame.f_lineno = 363;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooo";
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



exception_lineno = 363;
type_description_1 = "ooo";
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



exception_lineno = 363;
type_description_1 = "ooo";
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



exception_lineno = 363;
type_description_1 = "ooo";
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
    PyObject *old = par_c1;
    assert(old != NULL);
    par_c1 = tmp_assign_source_4;
    Py_INCREF(par_c1);
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
    PyObject *old = par_c2;
    assert(old != NULL);
    par_c2 = tmp_assign_source_5;
    Py_INCREF(par_c2);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_2 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_3 = par_c2;
frame_frame_numpy$polynomial$polynomial$$$function__6_polymul->m_frame.f_lineno = 364;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_convolve,
        call_args
    );
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_6;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_args_element_value_4 = var_ret;
frame_frame_numpy$polynomial$polynomial$$$function__6_polymul->m_frame.f_lineno = 365;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_trimseq, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__6_polymul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__6_polymul->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__6_polymul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__6_polymul,
    type_description_1,
    par_c1,
    par_c2,
    var_ret
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__6_polymul == cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__6_polymul = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__6_polymul);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_c1);
CHECK_OBJECT(par_c1);
Py_DECREF(par_c1);
par_c1 = NULL;
CHECK_OBJECT(par_c2);
CHECK_OBJECT(par_c2);
Py_DECREF(par_c2);
par_c2 = NULL;
CHECK_OBJECT(var_ret);
CHECK_OBJECT(var_ret);
Py_DECREF(var_ret);
var_ret = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c1);
par_c1 = NULL;
Py_XDECREF(par_c2);
par_c2 = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
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


static PyObject *impl_numpy$polynomial$polynomial$$$function__7_polydiv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
PyObject *var_lc1 = NULL;
PyObject *var_lc2 = NULL;
PyObject *var_dlen = NULL;
PyObject *var_scl = NULL;
PyObject *var_i = NULL;
PyObject *var_j = NULL;
PyObject *tmp_inplace_assign_slice_1__lower = NULL;
PyObject *tmp_inplace_assign_slice_1__target = NULL;
PyObject *tmp_inplace_assign_slice_1__upper = NULL;
PyObject *tmp_inplace_assign_slice_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv = MAKE_FUNCTION_FRAME(tstate, code_objects_8cd52ad0a1fa3608433273edd2f0d759, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv = cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c1);
tmp_list_element_1 = par_c1;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_c2);
tmp_list_element_1 = par_c2;
PyList_SET_ITEM0(tmp_args_element_value_1, 1, tmp_list_element_1);
frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv->m_frame.f_lineno = 402;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
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



exception_lineno = 402;
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



exception_lineno = 402;
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



exception_lineno = 402;
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
    PyObject *old = par_c1;
    assert(old != NULL);
    par_c1 = tmp_assign_source_4;
    Py_INCREF(par_c1);
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
    PyObject *old = par_c2;
    assert(old != NULL);
    par_c2 = tmp_assign_source_5;
    Py_INCREF(par_c2);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_c2);
tmp_expression_value_1 = par_c2;
tmp_subscript_value_1 = const_int_neg_1;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, -1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "oooooooo";
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
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_ZeroDivisionError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 404;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_c1);
tmp_len_arg_1 = par_c1;
tmp_assign_source_6 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_lc1 == NULL);
var_lc1 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_c2);
tmp_len_arg_2 = par_c2;
tmp_assign_source_7 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_lc2 == NULL);
var_lc2 = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_lc1);
tmp_cmp_expr_left_2 = var_lc1;
CHECK_OBJECT(var_lc2);
tmp_cmp_expr_right_2 = var_lc2;
tmp_condition_result_2 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_c1);
tmp_expression_value_2 = par_c1;
tmp_subscript_value_2 = mod_consts.const_slice_none_int_pos_1_none;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = const_int_0;
tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_c1);
tmp_tuple_element_1 = par_c1;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
CHECK_OBJECT(var_lc2);
tmp_cmp_expr_left_3 = var_lc2;
tmp_cmp_expr_right_3 = 1;
tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_c1);
tmp_truediv_expr_left_1 = par_c1;
CHECK_OBJECT(par_c2);
tmp_expression_value_3 = par_c2;
tmp_subscript_value_3 = const_int_neg_1;
tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, -1);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_c1);
tmp_expression_value_4 = par_c1;
tmp_subscript_value_4 = mod_consts.const_slice_none_int_pos_1_none;
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_mult_expr_right_2 = const_int_0;
tmp_tuple_element_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
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
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_lc1);
tmp_sub_expr_left_1 = var_lc1;
CHECK_OBJECT(var_lc2);
tmp_sub_expr_right_1 = var_lc2;
tmp_assign_source_8 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
assert(!(tmp_assign_source_8 == NULL));
assert(var_dlen == NULL);
var_dlen = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_c2);
tmp_expression_value_5 = par_c2;
tmp_subscript_value_5 = const_int_neg_1;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_5, -1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_scl == NULL);
var_scl = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(par_c2);
tmp_expression_value_6 = par_c2;
tmp_subscript_value_6 = mod_consts.const_slice_none_int_neg_1_none;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_scl);
tmp_truediv_expr_right_2 = var_scl;
tmp_assign_source_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c2;
    assert(old != NULL);
    par_c2 = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(var_dlen);
tmp_assign_source_11 = var_dlen;
assert(var_i == NULL);
Py_INCREF(tmp_assign_source_11);
var_i = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_sub_expr_left_2;
nuitka_digit tmp_sub_expr_right_2;
CHECK_OBJECT(var_lc1);
tmp_sub_expr_left_2 = var_lc1;
tmp_sub_expr_right_2 = 1;
tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
assert(!(tmp_assign_source_12 == NULL));
assert(var_j == NULL);
var_j = tmp_assign_source_12;
}
loop_start_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 419;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = var_i;
tmp_cmp_expr_right_4 = 0;
tmp_condition_result_4 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_end_1;
branch_no_4:;
{
PyObject *tmp_assign_source_13;
if (par_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 420;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_13 = par_c1;
{
    PyObject *old = tmp_inplace_assign_slice_1__target;
    tmp_inplace_assign_slice_1__target = tmp_assign_source_13;
    Py_INCREF(tmp_inplace_assign_slice_1__target);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_assign_source_14 = var_i;
{
    PyObject *old = tmp_inplace_assign_slice_1__lower;
    tmp_inplace_assign_slice_1__lower = tmp_assign_source_14;
    Py_INCREF(tmp_inplace_assign_slice_1__lower);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_assign_source_15 = var_j;
{
    PyObject *old = tmp_inplace_assign_slice_1__upper;
    tmp_inplace_assign_slice_1__upper = tmp_assign_source_15;
    Py_INCREF(tmp_inplace_assign_slice_1__upper);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_7;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(tmp_inplace_assign_slice_1__target);
tmp_expression_value_7 = tmp_inplace_assign_slice_1__target;
CHECK_OBJECT(tmp_inplace_assign_slice_1__lower);
tmp_start_value_1 = tmp_inplace_assign_slice_1__lower;
CHECK_OBJECT(tmp_inplace_assign_slice_1__upper);
tmp_stop_value_1 = tmp_inplace_assign_slice_1__upper;
tmp_subscript_value_7 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_7 == NULL));
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_inplace_assign_slice_1__value;
    tmp_inplace_assign_slice_1__value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(tmp_inplace_assign_slice_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_slice_1__value;
if (par_c2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_mult_expr_left_3 = par_c2;
if (par_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_8 = par_c1;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_subscript_value_8 = var_j;
tmp_mult_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_isub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_17 = tmp_isub_expr_left_1;
tmp_inplace_assign_slice_1__value = tmp_assign_source_17;

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
CHECK_OBJECT(tmp_inplace_assign_slice_1__value);
tmp_ass_subvalue_1 = tmp_inplace_assign_slice_1__value;
CHECK_OBJECT(tmp_inplace_assign_slice_1__target);
tmp_ass_subscribed_1 = tmp_inplace_assign_slice_1__target;
CHECK_OBJECT(tmp_inplace_assign_slice_1__lower);
tmp_start_value_2 = tmp_inplace_assign_slice_1__lower;
CHECK_OBJECT(tmp_inplace_assign_slice_1__upper);
tmp_stop_value_2 = tmp_inplace_assign_slice_1__upper;
tmp_ass_subscript_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
assert(!(tmp_ass_subscript_1 == NULL));
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_slice_1__target);
CHECK_OBJECT(tmp_inplace_assign_slice_1__target);
Py_DECREF(tmp_inplace_assign_slice_1__target);
tmp_inplace_assign_slice_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_slice_1__lower);
tmp_inplace_assign_slice_1__lower = NULL;
Py_XDECREF(tmp_inplace_assign_slice_1__upper);
tmp_inplace_assign_slice_1__upper = NULL;
Py_XDECREF(tmp_inplace_assign_slice_1__value);
tmp_inplace_assign_slice_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_inplace_assign_slice_1__target);
CHECK_OBJECT(tmp_inplace_assign_slice_1__target);
Py_DECREF(tmp_inplace_assign_slice_1__target);
tmp_inplace_assign_slice_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_slice_1__lower);
CHECK_OBJECT(tmp_inplace_assign_slice_1__lower);
Py_DECREF(tmp_inplace_assign_slice_1__lower);
tmp_inplace_assign_slice_1__lower = NULL;
CHECK_OBJECT(tmp_inplace_assign_slice_1__upper);
CHECK_OBJECT(tmp_inplace_assign_slice_1__upper);
Py_DECREF(tmp_inplace_assign_slice_1__upper);
tmp_inplace_assign_slice_1__upper = NULL;
CHECK_OBJECT(tmp_inplace_assign_slice_1__value);
CHECK_OBJECT(tmp_inplace_assign_slice_1__value);
Py_DECREF(tmp_inplace_assign_slice_1__value);
tmp_inplace_assign_slice_1__value = NULL;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_isub_expr_left_2;
nuitka_digit tmp_isub_expr_right_2;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 421;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_2 = var_i;
tmp_isub_expr_right_2 = 1;
tmp_result = INPLACE_OPERATION_SUB_LONG_DIGIT(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
assert(!(tmp_result == false));
tmp_assign_source_18 = tmp_isub_expr_left_2;
var_i = tmp_assign_source_18;

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_isub_expr_left_3;
PyObject *tmp_isub_expr_right_3;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 422;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_3 = var_j;
tmp_isub_expr_right_3 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_3, tmp_isub_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = tmp_isub_expr_left_3;
var_j = tmp_assign_source_19;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_9;
PyObject *tmp_start_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_stop_value_3;
if (par_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 423;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_c1;
if (var_j == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 423;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = var_j;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_start_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_start_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_3 = Py_None;
tmp_subscript_value_9 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
CHECK_OBJECT(tmp_start_value_3);
Py_DECREF(tmp_start_value_3);
assert(!(tmp_subscript_value_9 == NULL));
tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_scl);
tmp_truediv_expr_right_3 = var_scl;
tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_10;
PyObject *tmp_stop_value_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_trimseq);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
if (par_c1 == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 423;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}

tmp_expression_value_11 = par_c1;
if (var_j == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_j);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 423;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}

tmp_add_expr_left_2 = var_j;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_stop_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 423;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_subscript_value_10 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_4);
CHECK_OBJECT(tmp_stop_value_4);
Py_DECREF(tmp_stop_value_4);
assert(!(tmp_subscript_value_10 == NULL));
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 423;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv->m_frame.f_lineno = 423;
tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv,
    type_description_1,
    par_c1,
    par_c2,
    var_lc1,
    var_lc2,
    var_dlen,
    var_scl,
    var_i,
    var_j
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv == cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__7_polydiv);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_c1);
par_c1 = NULL;
Py_XDECREF(par_c2);
par_c2 = NULL;
CHECK_OBJECT(var_lc1);
CHECK_OBJECT(var_lc1);
Py_DECREF(var_lc1);
var_lc1 = NULL;
CHECK_OBJECT(var_lc2);
CHECK_OBJECT(var_lc2);
Py_DECREF(var_lc2);
var_lc2 = NULL;
Py_XDECREF(var_dlen);
var_dlen = NULL;
Py_XDECREF(var_scl);
var_scl = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_j);
var_j = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c1);
par_c1 = NULL;
Py_XDECREF(par_c2);
par_c2 = NULL;
Py_XDECREF(var_lc1);
var_lc1 = NULL;
Py_XDECREF(var_lc2);
var_lc2 = NULL;
Py_XDECREF(var_dlen);
var_dlen = NULL;
Py_XDECREF(var_scl);
var_scl = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_j);
var_j = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_numpy$polynomial$polynomial$$$function__8_polypow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_pow = python_pars[1];
PyObject *par_maxpower = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__8_polypow;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow = MAKE_FUNCTION_FRAME(tstate, code_objects_df742c5b9177098a9a8a8e28bdd31655, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__8_polypow = cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__8_polypow);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__8_polypow) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 462;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__pow);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 462;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_convolve);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 462;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_pow);
tmp_args_element_value_3 = par_pow;
CHECK_OBJECT(par_maxpower);
tmp_args_element_value_4 = par_maxpower;
frame_frame_numpy$polynomial$polynomial$$$function__8_polypow->m_frame.f_lineno = 462;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__8_polypow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__8_polypow->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__8_polypow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__8_polypow,
    type_description_1,
    par_c,
    par_pow,
    par_maxpower
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__8_polypow == cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__8_polypow = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__8_polypow);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_pow);
Py_DECREF(par_pow);
CHECK_OBJECT(par_maxpower);
Py_DECREF(par_maxpower);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_pow);
Py_DECREF(par_pow);
CHECK_OBJECT(par_maxpower);
Py_DECREF(par_maxpower);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__9_polyder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_m = python_pars[1];
PyObject *par_scl = python_pars[2];
PyObject *par_axis = python_pars[3];
PyObject *var_cdt = NULL;
PyObject *var_cnt = NULL;
PyObject *var_iaxis = NULL;
PyObject *var_n = NULL;
PyObject *var_i = NULL;
PyObject *var_der = NULL;
PyObject *var_j = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__9_polyder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder = MAKE_FUNCTION_FRAME(tstate, code_objects_b3a934f8c571997303b1416d19e3b660, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__9_polyder = cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__9_polyder);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__9_polyder) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 515;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_frame.f_lineno = 515;
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


exception_lineno = 515;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_c);
tmp_expression_value_3 = par_c;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_c);
tmp_add_expr_left_1 = par_c;
tmp_add_expr_right_1 = const_float_0_0;
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 519;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = par_c;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cdt == NULL);
var_cdt = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 520;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_m);
tmp_args_element_value_1 = par_m;
tmp_args_element_value_2 = mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_frame.f_lineno = 520;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__as_int,
        call_args
    );
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cnt == NULL);
var_cnt = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_3 = par_axis;
tmp_args_element_value_4 = mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01;
frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_frame.f_lineno = 521;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__as_int,
        call_args
    );
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_iaxis == NULL);
var_iaxis = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_cnt);
tmp_cmp_expr_left_2 = var_cnt;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "ooooooooooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b;
frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_frame.f_lineno = 523;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 523;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_8;
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 524;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_lib);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_array_utils);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_normalize_axis_index);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_5 = var_iaxis;
if (par_c == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 524;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_c;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 524;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_frame.f_lineno = 524;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_iaxis;
    assert(old != NULL);
    var_iaxis = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_cnt);
tmp_cmp_expr_left_3 = var_cnt;
tmp_cmp_expr_right_3 = const_int_0;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 527;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_c;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_9 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 529;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 529;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = par_c;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_8 = var_iaxis;
tmp_args_element_value_9 = const_int_0;
frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_frame.f_lineno = 529;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_c);
tmp_len_arg_1 = par_c;
tmp_assign_source_8 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_n == NULL);
var_n = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_cnt);
tmp_cmp_expr_left_4 = var_cnt;
CHECK_OBJECT(var_n);
tmp_cmp_expr_right_4 = var_n;
tmp_condition_result_4 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_9;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_c);
tmp_expression_value_10 = par_c;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_1_none;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = const_int_0;
tmp_assign_source_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_9;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_cnt);
tmp_xrange_low_1 = var_cnt;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "ooooooooooo";
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
tmp_assign_source_11 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 534;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_12 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_12;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 535;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_1 = var_n;
tmp_sub_expr_right_1 = 1;
tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
assert(!(tmp_assign_source_13 == NULL));
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 536;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_left_1 = par_c;
if (par_scl == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scl);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 536;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_right_1 = par_scl;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_14 = tmp_imult_expr_left_1;
par_c = tmp_assign_source_14;

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_11 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 537;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_empty);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_n);
tmp_tuple_element_2 = var_n;
tmp_add_expr_left_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_add_expr_left_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_c);
tmp_expression_value_13 = par_c;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_shape);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 537;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_none_none;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 537;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 537;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
if (var_cdt == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cdt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 537;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = var_cdt;
frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_frame.f_lineno = 537;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_der;
    var_der = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_2;
PyObject *tmp_xrange_high_1;
PyObject *tmp_xrange_step_1;
CHECK_OBJECT(var_n);
tmp_xrange_low_2 = var_n;
tmp_xrange_high_1 = const_int_0;
tmp_xrange_step_1 = const_int_neg_1;
tmp_iter_arg_2 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_2, tmp_xrange_high_1, tmp_xrange_step_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 538;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_18 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_18;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(var_j);
tmp_mult_expr_left_2 = var_j;
CHECK_OBJECT(par_c);
tmp_expression_value_14 = par_c;
CHECK_OBJECT(var_j);
tmp_subscript_value_3 = var_j;
tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_3);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
if (var_der == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_der);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 539;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_ass_subscribed_1 = var_der;
CHECK_OBJECT(var_j);
tmp_sub_expr_left_2 = var_j;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_ass_subscript_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 539;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_19;
if (var_der == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_der);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 540;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_19 = var_der;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_19;
    Py_INCREF(par_c);
    Py_DECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_end_4:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_expression_value_15 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 541;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 541;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = par_c;
tmp_args_element_value_11 = const_int_0;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_12 = var_iaxis;
frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_frame.f_lineno = 541;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_20;
    Py_XDECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__9_polyder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__9_polyder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__9_polyder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__9_polyder,
    type_description_1,
    par_c,
    par_m,
    par_scl,
    par_axis,
    var_cdt,
    var_cnt,
    var_iaxis,
    var_n,
    var_i,
    var_der,
    var_j
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__9_polyder == cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__9_polyder = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__9_polyder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_c);
tmp_return_value = par_c;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_cdt);
var_cdt = NULL;
CHECK_OBJECT(var_cnt);
CHECK_OBJECT(var_cnt);
Py_DECREF(var_cnt);
var_cnt = NULL;
CHECK_OBJECT(var_iaxis);
CHECK_OBJECT(var_iaxis);
Py_DECREF(var_iaxis);
var_iaxis = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_der);
var_der = NULL;
Py_XDECREF(var_j);
var_j = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_cdt);
var_cdt = NULL;
Py_XDECREF(var_cnt);
var_cnt = NULL;
Py_XDECREF(var_iaxis);
var_iaxis = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_der);
var_der = NULL;
Py_XDECREF(var_j);
var_j = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_m);
Py_DECREF(par_m);
CHECK_OBJECT(par_scl);
Py_DECREF(par_scl);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_m);
Py_DECREF(par_m);
CHECK_OBJECT(par_scl);
Py_DECREF(par_scl);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__10_polyint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_m = python_pars[1];
PyObject *par_k = python_pars[2];
PyObject *par_lbnd = python_pars[3];
PyObject *par_scl = python_pars[4];
PyObject *par_axis = python_pars[5];
PyObject *var_cdt = NULL;
PyObject *var_cnt = NULL;
PyObject *var_iaxis = NULL;
PyObject *var_i = NULL;
PyObject *var_n = NULL;
PyObject *var_tmp = NULL;
PyObject *var_j = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_inplace_assign_subscript_2__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_2__target = NULL;
PyObject *tmp_inplace_assign_subscript_2__value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__10_polyint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint = MAKE_FUNCTION_FRAME(tstate, code_objects_3b5ee796a9ddb058d7fd83cbe681715c, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint = cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__10_polyint);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__10_polyint) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 621;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 621;
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


exception_lineno = 621;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_c);
tmp_expression_value_3 = par_c;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_c);
tmp_add_expr_left_1 = par_c;
tmp_add_expr_right_1 = const_float_0_0;
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 625;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = par_c;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cdt == NULL);
var_cdt = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 626;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_k);
tmp_args_element_value_1 = par_k;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 626;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iterable, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_k);
tmp_list_element_1 = par_k;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_4, 0, tmp_list_element_1);
{
    PyObject *old = par_k;
    assert(old != NULL);
    par_k = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 628;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_m);
tmp_args_element_value_2 = par_m;
tmp_args_element_value_3 = mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 628;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__as_int,
        call_args
    );
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cnt == NULL);
var_cnt = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 629;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
tmp_args_element_value_5 = mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 629;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__as_int,
        call_args
    );
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_iaxis == NULL);
var_iaxis = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_cnt);
tmp_cmp_expr_left_2 = var_cnt;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;
type_description_1 = "ooooooooooooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 631;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 631;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
if (par_k == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 632;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = par_k;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cnt);
tmp_cmp_expr_right_3 = var_cnt;
tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 633;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 633;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_6;
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 634;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lbnd);
tmp_args_element_value_6 = par_lbnd;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 634;
tmp_cmp_expr_left_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_ndim, tmp_args_element_value_6);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_int_0;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 635;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 635;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_7;
tmp_called_instance_5 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 636;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scl);
tmp_args_element_value_7 = par_scl;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 636;
tmp_cmp_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_ndim, tmp_args_element_value_7);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 637;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 637;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_8;
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 638;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_lib);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_array_utils);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_normalize_axis_index);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_8 = var_iaxis;
if (par_c == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 638;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_c;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 638;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 638;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_iaxis;
    assert(old != NULL);
    var_iaxis = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_cnt);
tmp_cmp_expr_left_6 = var_cnt;
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 640;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 641;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_c;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_7:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_list_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_len_arg_2;
if (par_k == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 643;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_1 = par_k;
tmp_add_expr_left_2 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = MAKE_LIST1(tstate, const_int_0);
CHECK_OBJECT(var_cnt);
tmp_sub_expr_left_1 = var_cnt;
if (par_k == NULL) {
Py_DECREF(tmp_add_expr_left_2);
Py_DECREF(tmp_mult_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 643;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = par_k;
tmp_sub_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 643;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 643;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 643;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_k;
    par_k = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_expression_value_9 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 644;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 644;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = par_c;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_11 = var_iaxis;
tmp_args_element_value_12 = const_int_0;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 644;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_cnt);
tmp_xrange_low_1 = var_cnt;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "ooooooooooooo";
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
tmp_assign_source_11 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 645;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_12 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_12;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_len_arg_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 646;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_3 = par_c;
tmp_assign_source_13 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 647;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_left_1 = par_c;
if (par_scl == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scl);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 647;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_right_1 = par_scl;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_14 = tmp_imult_expr_left_1;
par_c = tmp_assign_source_14;

}
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_7;
nuitka_digit tmp_cmp_expr_right_7;
bool tmp_tmp_and_left_value_1_cbool_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_13;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_n);
tmp_cmp_expr_left_7 = var_n;
tmp_cmp_expr_right_7 = 1;
tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
tmp_and_left_value_1 = tmp_tmp_and_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 648;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_all);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_expression_value_11 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 648;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_8 = const_int_0;
tmp_args_element_value_13 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 648;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 648;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 648;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
PyObject *tmp_assign_source_15;
CHECK_OBJECT(par_c);
tmp_assign_source_15 = par_c;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_15;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = const_int_0;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_16;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_12 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_2 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(par_k);
tmp_expression_value_13 = par_k;
CHECK_OBJECT(var_i);
tmp_subscript_value_3 = var_i;
tmp_iadd_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_18 = tmp_iadd_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_18;

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


exception_lineno = 649;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
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
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_tuple_element_2;
PyObject *tmp_add_expr_left_4;
nuitka_digit tmp_add_expr_right_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_4;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_14 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 651;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_empty);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_n);
tmp_add_expr_left_4 = var_n;
tmp_add_expr_right_4 = 1;
tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_4, tmp_add_expr_right_4);
assert(!(tmp_tuple_element_2 == NULL));
tmp_add_expr_left_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_add_expr_left_3, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_c);
tmp_expression_value_16 = par_c;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_shape);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 651;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_add_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 651;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 651;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
if (var_cdt == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cdt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 651;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = var_cdt;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 651;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_tmp;
    var_tmp = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_5;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(par_c);
tmp_expression_value_17 = par_c;
tmp_subscript_value_5 = const_int_0;
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_5, 0);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_right_2 = const_int_0;
tmp_ass_subvalue_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_tmp);
tmp_ass_subscribed_2 = var_tmp;
tmp_ass_subscript_2 = const_int_0;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_6;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(par_c);
tmp_expression_value_18 = par_c;
tmp_subscript_value_6 = const_int_0;
tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_6, 0);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_tmp);
tmp_ass_subscribed_3 = var_tmp;
tmp_ass_subscript_3 = const_int_pos_1;
tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, 1, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_ass_subscript_res_2 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_2;
PyObject *tmp_xrange_high_1;
tmp_xrange_low_2 = const_int_pos_1;
CHECK_OBJECT(var_n);
tmp_xrange_high_1 = var_n;
tmp_iter_arg_2 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_2, tmp_xrange_high_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_20 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_21 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_21 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 654;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_22 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_22;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_7;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
CHECK_OBJECT(par_c);
tmp_expression_value_19 = par_c;
CHECK_OBJECT(var_j);
tmp_subscript_value_7 = var_j;
tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_7);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 655;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_j);
tmp_add_expr_left_5 = var_j;
tmp_add_expr_right_5 = const_int_pos_1;
tmp_truediv_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 655;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_ass_subvalue_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 655;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
if (var_tmp == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 655;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_4 = var_tmp;
CHECK_OBJECT(var_j);
tmp_add_expr_left_6 = var_j;
tmp_add_expr_right_6 = const_int_pos_1;
tmp_ass_subscript_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
if (tmp_ass_subscript_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 655;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscript_4);
Py_DECREF(tmp_ass_subscript_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 655;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_23;
if (var_tmp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 656;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_23 = var_tmp;
{
    PyObject *old = tmp_inplace_assign_subscript_2__target;
    tmp_inplace_assign_subscript_2__target = tmp_assign_source_23;
    Py_INCREF(tmp_inplace_assign_subscript_2__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = const_int_0;
{
    PyObject *old = tmp_inplace_assign_subscript_2__subscript;
    tmp_inplace_assign_subscript_2__subscript = tmp_assign_source_24;
    Py_INCREF(tmp_inplace_assign_subscript_2__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_expression_value_20 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_subscript_value_8 = tmp_inplace_assign_subscript_2__subscript;
tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_8);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_inplace_assign_subscript_2__value;
    tmp_inplace_assign_subscript_2__value = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_9;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_iadd_expr_left_2 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(par_k);
tmp_expression_value_21 = par_k;
CHECK_OBJECT(var_i);
tmp_subscript_value_9 = var_i;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_9);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_6 = module_var_accessor_numpy$polynomial$polynomial$polyval(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyval);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 656;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (par_lbnd == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lbnd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 656;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_14 = par_lbnd;
if (var_tmp == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 656;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_15 = var_tmp;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 656;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_sub_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 656;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_iadd_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_26 = tmp_iadd_expr_left_2;
tmp_inplace_assign_subscript_2__value = tmp_assign_source_26;

}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_ass_subvalue_5 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_ass_subscribed_5 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_ass_subscript_5 = tmp_inplace_assign_subscript_2__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "ooooooooooooo";
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_27;
if (var_tmp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 657;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_27 = var_tmp;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_27;
    Py_INCREF(par_c);
    Py_DECREF(old);
}

}
branch_end_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
tmp_expression_value_22 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 658;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 658;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_16 = par_c;
tmp_args_element_value_17 = const_int_0;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_18 = var_iaxis;
frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame.f_lineno = 658;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_28;
    Py_XDECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__10_polyint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__10_polyint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__10_polyint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__10_polyint,
    type_description_1,
    par_c,
    par_m,
    par_k,
    par_lbnd,
    par_scl,
    par_axis,
    var_cdt,
    var_cnt,
    var_iaxis,
    var_i,
    var_n,
    var_tmp,
    var_j
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__10_polyint == cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__10_polyint = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__10_polyint);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_c);
tmp_return_value = par_c;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(par_k);
par_k = NULL;
Py_XDECREF(var_cdt);
var_cdt = NULL;
CHECK_OBJECT(var_cnt);
CHECK_OBJECT(var_cnt);
Py_DECREF(var_cnt);
var_cnt = NULL;
CHECK_OBJECT(var_iaxis);
CHECK_OBJECT(var_iaxis);
Py_DECREF(var_iaxis);
var_iaxis = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
Py_XDECREF(var_j);
var_j = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(par_k);
par_k = NULL;
Py_XDECREF(var_cdt);
var_cdt = NULL;
Py_XDECREF(var_cnt);
var_cnt = NULL;
Py_XDECREF(var_iaxis);
var_iaxis = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
Py_XDECREF(var_j);
var_j = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_m);
Py_DECREF(par_m);
CHECK_OBJECT(par_lbnd);
Py_DECREF(par_lbnd);
CHECK_OBJECT(par_scl);
Py_DECREF(par_scl);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_m);
Py_DECREF(par_m);
CHECK_OBJECT(par_lbnd);
Py_DECREF(par_lbnd);
CHECK_OBJECT(par_scl);
Py_DECREF(par_scl);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__11_polyval(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_c = python_pars[1];
PyObject *par_tensor = python_pars[2];
PyObject *var_c0 = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__11_polyval;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval = MAKE_FUNCTION_FRAME(tstate, code_objects_c4dcdbb673e6ffcb130d5c8097c6b319, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__11_polyval = cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__11_polyval);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__11_polyval) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 746;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
frame_frame_numpy$polynomial$polynomial$$$function__11_polyval->m_frame.f_lineno = 746;
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


exception_lineno = 746;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_c);
tmp_expression_value_3 = par_c;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_c);
tmp_add_expr_left_1 = par_c;
tmp_add_expr_right_1 = const_float_0_0;
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_1 = par_x;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_tuple_type_list_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 750;
type_description_1 = "ooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 751;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_numpy$polynomial$polynomial$$$function__11_polyval->m_frame.f_lineno = 751;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 751;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_2 = par_x;
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 752;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_tensor);
tmp_truth_name_1 = CHECK_IF_TRUE(par_tensor);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 752;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_7;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 753;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = par_c;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_reshape);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 753;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_c;
tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_shape);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 753;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_tuple_int_pos_1_tuple;
CHECK_OBJECT(par_x);
tmp_expression_value_7 = par_x;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ndim);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 753;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 753;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 753;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$polynomial$$$function__11_polyval->m_frame.f_lineno = 753;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 755;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_c;
tmp_subscript_value_1 = const_int_neg_1;
tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_1, -1);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_mult_expr_left_2 = par_x;
tmp_mult_expr_right_2 = const_int_0;
tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 755;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_add_expr_left_4;
nuitka_digit tmp_add_expr_right_4;
PyObject *tmp_len_arg_1;
tmp_xrange_low_1 = mod_consts.const_int_pos_2;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 756;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = par_c;
tmp_add_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = 1;
tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
assert(!(tmp_xrange_high_1 == NULL));
tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 756;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_8;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 757;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_9 = par_c;
CHECK_OBJECT(var_i);
tmp_operand_value_1 = var_i;
tmp_subscript_value_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 757;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 757;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (var_c0 == NULL) {
Py_DECREF(tmp_add_expr_left_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 757;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_3 = var_c0;
if (par_x == NULL) {
Py_DECREF(tmp_add_expr_left_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 757;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_right_3 = par_x;
tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 757;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 757;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_c0;
    var_c0 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooo";
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
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 758;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_c0;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__11_polyval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__11_polyval->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__11_polyval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__11_polyval,
    type_description_1,
    par_x,
    par_c,
    par_tensor,
    var_c0,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__11_polyval == cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__11_polyval = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__11_polyval);

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
Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_i);
var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_tensor);
Py_DECREF(par_tensor);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tensor);
Py_DECREF(par_tensor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__12_polyvalfromroots(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_r = python_pars[1];
PyObject *par_tensor = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots = MAKE_FUNCTION_FRAME(tstate, code_objects_367e8363a11cf9317c2f60bca0a4fd5a, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots = cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 835;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 835;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_r);
tmp_tuple_element_1 = par_r;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots->m_frame.f_lineno = 835;
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


exception_lineno = 835;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_r;
    assert(old != NULL);
    par_r = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_r);
tmp_expression_value_3 = par_r;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 836;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 836;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 836;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_r);
tmp_expression_value_4 = par_r;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_astype);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 837;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_double);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 837;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots->m_frame.f_lineno = 837;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 837;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_r;
    assert(old != NULL);
    par_r = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_1 = par_x;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_tuple_type_list_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 838;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 839;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots->m_frame.f_lineno = 839;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
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
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_2 = par_x;
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 840;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 840;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 840;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
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
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_tensor);
tmp_truth_name_1 = CHECK_IF_TRUE(par_tensor);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 841;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_9;
if (par_r == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_r);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 842;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_r;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_reshape);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 842;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (par_r == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_r);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 842;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_r;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 842;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_tuple_int_pos_1_tuple;
CHECK_OBJECT(par_x);
tmp_expression_value_9 = par_x;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndim);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 842;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 842;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 842;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots->m_frame.f_lineno = 842;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 842;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_r;
    par_r = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_x);
tmp_expression_value_10 = par_x;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 843;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (par_r == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_r);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 843;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_r;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 843;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 843;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a2c1116176c190c863c862ab04be4c9e;
frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots->m_frame.f_lineno = 844;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 844;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_5:;
branch_end_4:;
branch_no_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_12 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 845;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_prod);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 845;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_sub_expr_left_1 = par_x;
if (par_r == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_r);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 845;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_right_1 = par_r;
tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 845;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_54f4aa72cf3f950a22814f798a2888e8);
frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots->m_frame.f_lineno = 845;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 845;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots,
    type_description_1,
    par_x,
    par_r,
    par_tensor
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots == cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__12_polyvalfromroots);

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
Py_XDECREF(par_r);
par_r = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
Py_XDECREF(par_r);
par_r = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_tensor);
Py_DECREF(par_tensor);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tensor);
Py_DECREF(par_tensor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__13__polyval2d_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_y);
tmp_tuple_element_1 = par_y;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__14__polygrid2d_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_y);
tmp_tuple_element_1 = par_y;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__15_polyval2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d = MAKE_FUNCTION_FRAME(tstate, code_objects_7fa9c1e23013b44d80a51f3804a963cd, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d = cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 903;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__valnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 903;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$polynomial$polyval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 903;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d->m_frame.f_lineno = 903;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 903;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d,
    type_description_1,
    par_x,
    par_y,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d == cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__15_polyval2d);

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
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__16_polygrid2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d = MAKE_FUNCTION_FRAME(tstate, code_objects_83fd92575b010a128f82fbe725a58e07, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d = cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 959;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__gridnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 959;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$polynomial$polyval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 959;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d->m_frame.f_lineno = 959;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 959;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d,
    type_description_1,
    par_x,
    par_y,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d == cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__16_polygrid2d);

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
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__17_polyval3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_c = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d = MAKE_FUNCTION_FRAME(tstate, code_objects_57cbff5d95183a994c194968ecd5bfc8, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d = cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1012;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__valnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1012;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$polynomial$polyval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1012;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
CHECK_OBJECT(par_z);
tmp_args_element_value_5 = par_z;
frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d->m_frame.f_lineno = 1012;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1012;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d == cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__17_polyval3d);

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
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_z);
Py_DECREF(par_z);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_z);
Py_DECREF(par_z);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__18_polygrid3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_c = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d = MAKE_FUNCTION_FRAME(tstate, code_objects_1ecebb4b1e9d56b914f437e6070d74a7, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d = cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1071;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__gridnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1071;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$polynomial$polyval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1071;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
CHECK_OBJECT(par_z);
tmp_args_element_value_5 = par_z;
frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d->m_frame.f_lineno = 1071;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d == cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__18_polygrid3d);

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
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_z);
Py_DECREF(par_z);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_z);
Py_DECREF(par_z);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__19_polyvander(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_deg = python_pars[1];
PyObject *var_ideg = NULL;
PyObject *var_dims = NULL;
PyObject *var_dtyp = NULL;
PyObject *var_v = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander = MAKE_FUNCTION_FRAME(tstate, code_objects_99498cce0d82044d8ba72e67baf54013, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander = cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1125;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deg);
tmp_args_element_value_1 = par_deg;
tmp_args_element_value_2 = mod_consts.const_str_plain_deg;
frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander->m_frame.f_lineno = 1125;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__as_int,
        call_args
    );
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1125;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_ideg == NULL);
var_ideg = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_ideg);
tmp_cmp_expr_left_1 = var_ideg;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1126;
type_description_1 = "ooooooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360;
frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander->m_frame.f_lineno = 1127;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1127;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander->m_frame.f_lineno = 1129;
tmp_add_expr_left_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = const_float_0_0;
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_ideg);
tmp_add_expr_left_3 = var_ideg;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_add_expr_left_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_x);
tmp_expression_value_2 = par_x;
tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_dims == NULL);
var_dims = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_x);
tmp_expression_value_3 = par_x;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_dtyp == NULL);
var_dtyp = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1132;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_empty);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1132;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dims);
tmp_kw_call_arg_value_0_1 = var_dims;
CHECK_OBJECT(var_dtyp);
tmp_kw_call_dict_value_0_1 = var_dtyp;
frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander->m_frame.f_lineno = 1132;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1132;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_v == NULL);
var_v = tmp_assign_source_5;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(par_x);
tmp_mult_expr_left_1 = par_x;
tmp_mult_expr_right_1 = const_int_0;
tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1133;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = const_int_pos_1;
tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1133;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_v);
tmp_ass_subscribed_1 = var_v;
tmp_ass_subscript_1 = const_int_0;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1133;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_ideg);
tmp_cmp_expr_left_2 = var_ideg;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1134;
type_description_1 = "ooooooo";
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
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(par_x);
tmp_ass_subvalue_2 = par_x;
CHECK_OBJECT(var_v);
tmp_ass_subscribed_2 = var_v;
tmp_ass_subscript_2 = const_int_pos_1;
tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
if (tmp_ass_subscript_res_2 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1135;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
tmp_xrange_low_1 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_ideg);
tmp_add_expr_left_5 = var_ideg;
tmp_add_expr_right_5 = const_int_pos_1;
tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1136;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1136;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1136;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 1136;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_8;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1137;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_v;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_1 = var_i;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_subscript_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1137;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1137;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_x == NULL) {
Py_DECREF(tmp_mult_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1137;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_right_2 = par_x;
tmp_ass_subvalue_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1137;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_v == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1137;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_3 = var_v;
CHECK_OBJECT(var_i);
tmp_ass_subscript_3 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1137;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1136;
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
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1138;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1138;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_v == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1138;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_v;
tmp_args_element_value_4 = const_int_0;
tmp_args_element_value_5 = const_int_neg_1;
frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander->m_frame.f_lineno = 1138;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1138;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander,
    type_description_1,
    par_x,
    par_deg,
    var_ideg,
    var_dims,
    var_dtyp,
    var_v,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander == cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__19_polyvander);

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
CHECK_OBJECT(var_ideg);
CHECK_OBJECT(var_ideg);
Py_DECREF(var_ideg);
var_ideg = NULL;
CHECK_OBJECT(var_dims);
CHECK_OBJECT(var_dims);
Py_DECREF(var_dims);
var_dims = NULL;
CHECK_OBJECT(var_dtyp);
CHECK_OBJECT(var_dtyp);
Py_DECREF(var_dtyp);
var_dtyp = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
Py_XDECREF(var_ideg);
var_ideg = NULL;
Py_XDECREF(var_dims);
var_dims = NULL;
Py_XDECREF(var_dtyp);
var_dtyp = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_i);
var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_deg);
Py_DECREF(par_deg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_deg);
Py_DECREF(par_deg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__20_polyvander2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_deg = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d = MAKE_FUNCTION_FRAME(tstate, code_objects_dc689f33dd09d8d696cccd0c4f2e8bd0, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d = cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1217;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__vander_nd_flat);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1217;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$polynomial$polyvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1217;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$polynomial$polyvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1217;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_tuple_element_2 = par_x;
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_y);
tmp_tuple_element_2 = par_y;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_deg);
tmp_args_element_value_3 = par_deg;
frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d->m_frame.f_lineno = 1217;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1217;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d,
    type_description_1,
    par_x,
    par_y,
    par_deg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d == cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__20_polyvander2d);

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
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_deg);
Py_DECREF(par_deg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_deg);
Py_DECREF(par_deg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__21_polyvander3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_deg = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d = MAKE_FUNCTION_FRAME(tstate, code_objects_031f99a27d66d49b835f9f40b97f2ac4, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d = cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1291;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__vander_nd_flat);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1291;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$polynomial$polyvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1291;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$polynomial$polyvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1291;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$polynomial$polyvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1291;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_element_value_1, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(par_x);
tmp_tuple_element_2 = par_x;
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_y);
tmp_tuple_element_2 = par_y;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_z);
tmp_tuple_element_2 = par_z;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_deg);
tmp_args_element_value_3 = par_deg;
frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d->m_frame.f_lineno = 1291;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1291;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_deg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d == cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__21_polyvander3d);

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
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_z);
Py_DECREF(par_z);
CHECK_OBJECT(par_deg);
Py_DECREF(par_deg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_z);
Py_DECREF(par_z);
CHECK_OBJECT(par_deg);
Py_DECREF(par_deg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__22_polyfit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_deg = python_pars[2];
PyObject *par_rcond = python_pars[3];
PyObject *par_full = python_pars[4];
PyObject *par_w = python_pars[5];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit = MAKE_FUNCTION_FRAME(tstate, code_objects_82e2e2adbd279c8b0ed6308001d594f3, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit = cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1445;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fit);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1445;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$polynomial$polyvander(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyvander);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1445;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_3 = par_y;
CHECK_OBJECT(par_deg);
tmp_args_element_value_4 = par_deg;
CHECK_OBJECT(par_rcond);
tmp_args_element_value_5 = par_rcond;
CHECK_OBJECT(par_full);
tmp_args_element_value_6 = par_full;
CHECK_OBJECT(par_w);
tmp_args_element_value_7 = par_w;
frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit->m_frame.f_lineno = 1445;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1445;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit,
    type_description_1,
    par_x,
    par_y,
    par_deg,
    par_rcond,
    par_full,
    par_w
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit == cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__22_polyfit);

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
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_deg);
Py_DECREF(par_deg);
CHECK_OBJECT(par_rcond);
Py_DECREF(par_rcond);
CHECK_OBJECT(par_full);
Py_DECREF(par_full);
CHECK_OBJECT(par_w);
Py_DECREF(par_w);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_deg);
Py_DECREF(par_deg);
CHECK_OBJECT(par_rcond);
Py_DECREF(par_rcond);
CHECK_OBJECT(par_full);
Py_DECREF(par_full);
CHECK_OBJECT(par_w);
Py_DECREF(par_w);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__23_polycompanion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *var_n = NULL;
PyObject *var_mat = NULL;
PyObject *var_bot = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion = MAKE_FUNCTION_FRAME(tstate, code_objects_4f13c0396c504f6bf696e8578de5b2ee, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion = cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1477;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion->m_frame.f_lineno = 1477;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1477;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1477;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1477;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 1);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1477;
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
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_3;
    Py_INCREF(par_c);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_c);
tmp_len_arg_1 = par_c;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1478;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 2;
tmp_condition_result_1 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e;
frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion->m_frame.f_lineno = 1479;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1479;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_c);
tmp_len_arg_2 = par_c;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1480;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 2;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_2;
PyObject *tmp_list_element_3;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1481;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1481;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_expression_value_2 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_operand_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1481;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1481;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_expression_value_3 = par_c;
tmp_subscript_value_2 = const_int_pos_1;
tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 1);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 1481;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_list_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1481;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_list_element_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_list_element_2, 0, tmp_list_element_3);
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion->m_frame.f_lineno = 1481;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1481;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_3;
CHECK_OBJECT(par_c);
tmp_len_arg_3 = par_c;
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1483;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = 1;
tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_assign_source_4 == NULL));
assert(var_n == NULL);
var_n = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_5;
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1484;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_zeros);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1484;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n);
tmp_tuple_element_1 = var_n;
tmp_kw_call_arg_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_n);
tmp_tuple_element_1 = var_n;
PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_c);
tmp_expression_value_5 = par_c;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 1484;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion->m_frame.f_lineno = 1484;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1484;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_mat == NULL);
var_mat = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_subscript_value_3;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_step_value_1;
PyObject *tmp_add_expr_left_1;
nuitka_digit tmp_add_expr_right_1;
CHECK_OBJECT(var_mat);
tmp_called_instance_2 = var_mat;
frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion->m_frame.f_lineno = 1485;
tmp_expression_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_reshape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_tuple, 0)
);

if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1485;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n);
tmp_start_value_1 = var_n;
tmp_stop_value_1 = Py_None;
CHECK_OBJECT(var_n);
tmp_add_expr_left_1 = var_n;
tmp_add_expr_right_1 = 1;
tmp_step_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
assert(!(tmp_step_value_1 == NULL));
tmp_subscript_value_3 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
CHECK_OBJECT(tmp_step_value_1);
Py_DECREF(tmp_step_value_1);
assert(!(tmp_subscript_value_3 == NULL));
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1485;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_bot == NULL);
var_bot = tmp_assign_source_6;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = const_int_pos_1;
CHECK_OBJECT(var_bot);
tmp_ass_subscribed_1 = var_bot;
tmp_ass_subscript_1 = Py_Ellipsis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1486;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(var_mat);
tmp_assign_source_7 = var_mat;
assert(tmp_inplace_assign_subscript_1__target == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_inplace_assign_subscript_1__target = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_7 = tmp_inplace_assign_subscript_1__target;
tmp_subscript_value_4 = mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1487;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_inplace_assign_subscript_1__value == NULL);
tmp_inplace_assign_subscript_1__value = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(par_c);
tmp_expression_value_8 = par_c;
tmp_subscript_value_5 = mod_consts.const_slice_none_int_neg_1_none;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1487;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_c);
tmp_expression_value_9 = par_c;
tmp_subscript_value_6 = const_int_neg_1;
tmp_truediv_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_6, -1);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 1487;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_isub_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1487;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1487;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_9 = tmp_isub_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_9;

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_2 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_2 = tmp_inplace_assign_subscript_1__target;
tmp_ass_subscript_2 = mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1487;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion,
    type_description_1,
    par_c,
    var_n,
    var_mat,
    var_bot
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion == cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__23_polycompanion);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
CHECK_OBJECT(var_mat);
tmp_return_value = var_mat;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_c);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
par_c = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_mat);
var_mat = NULL;
Py_XDECREF(var_bot);
var_bot = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_mat);
var_mat = NULL;
Py_XDECREF(var_bot);
var_bot = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_numpy$polynomial$polynomial$$$function__24_polyroots(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *var_m = NULL;
PyObject *var_r = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots = MAKE_FUNCTION_FRAME(tstate, code_objects_17c8d2ebd5b4206bb9c8db5fe68cbfe9, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots = cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1541;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots->m_frame.f_lineno = 1541;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1541;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1541;
type_description_1 = "ooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1541;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 1);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1541;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_3;
    Py_INCREF(par_c);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_c);
tmp_len_arg_1 = par_c;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1542;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 2;
tmp_condition_result_1 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_pos_args_values_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_expression_value_2 = par_c;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_call_pos_args_values_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_empty_tuple, "l");
frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots->m_frame.f_lineno = 1543;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, tmp_call_pos_args_values_1, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_call_pos_args_values_1);
Py_DECREF(tmp_call_pos_args_values_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_c);
tmp_len_arg_2 = par_c;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1544;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 2;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
tmp_expression_value_3 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1545;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_array);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1545;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_expression_value_4 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_operand_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1545;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1545;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_expression_value_5 = par_c;
tmp_subscript_value_2 = const_int_pos_1;
tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 1);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 1545;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_list_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1545;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots->m_frame.f_lineno = 1545;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1545;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_numpy$polynomial$polynomial$polycompanion(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polycompanion);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_3 = par_c;
frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots->m_frame.f_lineno = 1547;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_m == NULL);
var_m = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_4;
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1548;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_linalg);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1548;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_4 = var_m;
frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots->m_frame.f_lineno = 1548;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_eigvals, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1548;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_r == NULL);
var_r = tmp_assign_source_5;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_r);
tmp_expression_value_7 = var_r;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sort);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1549;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots->m_frame.f_lineno = 1549;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1549;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots,
    type_description_1,
    par_c,
    var_m,
    var_r
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots == cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__24_polyroots);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_r);
tmp_return_value = var_r;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_c);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
par_c = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_r);
var_r = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_r);
var_r = NULL;
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


static PyObject *impl_numpy$polynomial$polynomial$$$function__25__str_term_unicode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_i = python_pars[1];
PyObject *par_arg_str = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode = MAKE_FUNCTION_FRAME(tstate, code_objects_e79c768f2f8248050aa5838ca201a3dc, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode = cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_i);
tmp_cmp_expr_left_1 = par_i;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_1;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1604;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_183;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_arg_str);
tmp_format_value_1 = par_arg_str;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1605;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_chr_183;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_arg_str);
tmp_format_value_2 = par_arg_str;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1607;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_i);
tmp_expression_value_1 = par_i;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_translate);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1607;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__superscript_mapping);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1607;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode->m_frame.f_lineno = 1607;
tmp_format_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1607;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1607;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode,
    type_description_1,
    par_cls,
    par_i,
    par_arg_str
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode == cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__25__str_term_unicode);

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
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
CHECK_OBJECT(par_arg_str);
Py_DECREF(par_arg_str);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
CHECK_OBJECT(par_arg_str);
Py_DECREF(par_arg_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__26__str_term_ascii(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_i = python_pars[0];
PyObject *par_arg_str = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii = MAKE_FUNCTION_FRAME(tstate, code_objects_fa691385d65d6a30a523b8f1c7d683db, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii = cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_i);
tmp_cmp_expr_left_1 = par_i;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_1;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1611;
type_description_1 = "oo";
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_space;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_arg_str);
tmp_format_value_1 = par_arg_str;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1612;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_space;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_arg_str);
tmp_format_value_2 = par_arg_str;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1614;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_i);
tmp_format_value_3 = par_i;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1614;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii,
    type_description_1,
    par_i,
    par_arg_str
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii == cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__26__str_term_ascii);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
CHECK_OBJECT(par_arg_str);
Py_DECREF(par_arg_str);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
CHECK_OBJECT(par_arg_str);
Py_DECREF(par_arg_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$polynomial$$$function__27__repr_latex_term(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_i = python_pars[0];
PyObject *par_arg_str = python_pars[1];
PyObject *par_needs_parens = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term = MAKE_FUNCTION_FRAME(tstate, code_objects_91879f64d59d13c8b9df2a39a845fcf2, module_numpy$polynomial$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term->m_type_description == NULL);
frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term = cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_needs_parens);
tmp_truth_name_1 = CHECK_IF_TRUE(par_needs_parens);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1618;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_f34b61c8fd1790c3ac1cbcbcbd008a11;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_arg_str);
tmp_format_value_1 = par_arg_str;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1619;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_1dba1fa7a83ccbd05f0e0710375ac195;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
{
    PyObject *old = par_arg_str;
    assert(old != NULL);
    par_arg_str = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_i);
tmp_cmp_expr_left_1 = par_i;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1620;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = mod_consts.const_str_plain_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_i);
tmp_cmp_expr_left_2 = par_i;
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1622;
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
CHECK_OBJECT(par_arg_str);
tmp_return_value = par_arg_str;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
CHECK_OBJECT(par_arg_str);
tmp_format_value_2 = par_arg_str;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1625;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_d48e54b9e965e6c8112d348da82e7c34;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_i);
tmp_format_value_3 = par_i;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1625;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_125;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term,
    type_description_1,
    par_i,
    par_arg_str,
    par_needs_parens
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term == cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term);
    cache_frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$function__27__repr_latex_term);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_arg_str);
CHECK_OBJECT(par_arg_str);
Py_DECREF(par_arg_str);
par_arg_str = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_arg_str);
CHECK_OBJECT(par_arg_str);
Py_DECREF(par_arg_str);
par_arg_str = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
CHECK_OBJECT(par_needs_parens);
Py_DECREF(par_needs_parens);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
CHECK_OBJECT(par_needs_parens);
Py_DECREF(par_needs_parens);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__10_polyint(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__10_polyint,
        mod_consts.const_str_plain_polyint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3b5ee796a9ddb058d7fd83cbe681715c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_120434d6142a6e961c615143caa3b228,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__11_polyval(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__11_polyval,
        mod_consts.const_str_plain_polyval,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c4dcdbb673e6ffcb130d5c8097c6b319,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_fb47e3c9aa01e79335e1f60985354c54,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__12_polyvalfromroots(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__12_polyvalfromroots,
        mod_consts.const_str_plain_polyvalfromroots,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_367e8363a11cf9317c2f60bca0a4fd5a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_0a4fc8754b966a58e79ce1f1e1ae6100,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__13__polyval2d_dispatcher(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__13__polyval2d_dispatcher,
        mod_consts.const_str_plain__polyval2d_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_de26560c64118c3944033c38d002668a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__14__polygrid2d_dispatcher(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__14__polygrid2d_dispatcher,
        mod_consts.const_str_plain__polygrid2d_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ef9f7695f2bc7549b6ef2305df3625ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__15_polyval2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__15_polyval2d,
        mod_consts.const_str_plain_polyval2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7fa9c1e23013b44d80a51f3804a963cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_786cc035dc46c25e9475e8942e2929ea,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__16_polygrid2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__16_polygrid2d,
        mod_consts.const_str_plain_polygrid2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_83fd92575b010a128f82fbe725a58e07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_4bb61ad626b9758cc365dc3c0b8914f6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__17_polyval3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__17_polyval3d,
        mod_consts.const_str_plain_polyval3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_57cbff5d95183a994c194968ecd5bfc8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_3d7a4772c104a1a92e2bb3fd3cd2a6ca,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__18_polygrid3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__18_polygrid3d,
        mod_consts.const_str_plain_polygrid3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1ecebb4b1e9d56b914f437e6070d74a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_73d2aca856a6a85f97989e3cc0680e5e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__19_polyvander(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__19_polyvander,
        mod_consts.const_str_plain_polyvander,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_99498cce0d82044d8ba72e67baf54013,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_063324d7d577a69880224d9e800c25bf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__1_polyline(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__1_polyline,
        mod_consts.const_str_plain_polyline,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_42c3bfe9ea7c76ad90d92617db53260b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_1d827da031c3ac75750dfa45bc76a8c3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__20_polyvander2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__20_polyvander2d,
        mod_consts.const_str_plain_polyvander2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dc689f33dd09d8d696cccd0c4f2e8bd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_faa617c30feb64eaab471349ca36cc2b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__21_polyvander3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__21_polyvander3d,
        mod_consts.const_str_plain_polyvander3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_031f99a27d66d49b835f9f40b97f2ac4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_e9885eebe107625c06c0759bf81a660f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__22_polyfit(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__22_polyfit,
        mod_consts.const_str_plain_polyfit,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_82e2e2adbd279c8b0ed6308001d594f3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_551ffc54e203247f89c123dfa258586d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__23_polycompanion(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__23_polycompanion,
        mod_consts.const_str_plain_polycompanion,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4f13c0396c504f6bf696e8578de5b2ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_13b67cf526dee52ddfbe6084715a16cd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__24_polyroots(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__24_polyroots,
        mod_consts.const_str_plain_polyroots,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_17c8d2ebd5b4206bb9c8db5fe68cbfe9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_117cae7f33371a925efa6a76bafc7262,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__25__str_term_unicode(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__25__str_term_unicode,
        mod_consts.const_str_plain__str_term_unicode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b4d2df1776341c750768683d6dc43faf,
#endif
        code_objects_e79c768f2f8248050aa5838ca201a3dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__26__str_term_ascii(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__26__str_term_ascii,
        mod_consts.const_str_plain__str_term_ascii,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ceca1710e52d383e0200a521454f5748,
#endif
        code_objects_fa691385d65d6a30a523b8f1c7d683db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__27__repr_latex_term(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__27__repr_latex_term,
        mod_consts.const_str_plain__repr_latex_term,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ad93f77468975784d039201a266c815,
#endif
        code_objects_91879f64d59d13c8b9df2a39a845fcf2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__2_polyfromroots(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__2_polyfromroots,
        mod_consts.const_str_plain_polyfromroots,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c5ba8c8110fd98117d6621411692e622,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_2aca2cc2b92cb532a8a5c025efc2bb9d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__3_polyadd(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__3_polyadd,
        mod_consts.const_str_plain_polyadd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a699710e327708dd2874c371e91781e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_160cc0ecb7c1d1f39598cf18eaac3393,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__4_polysub(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__4_polysub,
        mod_consts.const_str_plain_polysub,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3058a9c0dac60f132c447cab4f780b0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_7cba8fa26f5a2e8e1253bf5b1c89878f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__5_polymulx(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__5_polymulx,
        mod_consts.const_str_plain_polymulx,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5236f2f6d8c8cde98133d19b7efcdbc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_6db3669585dc429d2dc573fb5df7a1fb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__6_polymul(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__6_polymul,
        mod_consts.const_str_plain_polymul,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d57a4b856d675a2c317d6a9fb388ddf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_2393bf92f2e223609a66f0a134217d1d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__7_polydiv(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__7_polydiv,
        mod_consts.const_str_plain_polydiv,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8cd52ad0a1fa3608433273edd2f0d759,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_aed500425309aefad88bacc143be85fc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__8_polypow(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__8_polypow,
        mod_consts.const_str_plain_polypow,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_df742c5b9177098a9a8a8e28bdd31655,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_4584c0bae99ff5ce070c66c338c418c2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__9_polyder(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function__9_polyder,
        mod_consts.const_str_plain_polyder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b3a934f8c571997303b1416d19e3b660,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polynomial,
        mod_consts.const_str_digest_3d5cab4a91e27c8c382498a573184354,
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

static function_impl_code const function_table_numpy$polynomial$polynomial[] = {
impl_numpy$polynomial$polynomial$$$function__1_polyline,
impl_numpy$polynomial$polynomial$$$function__2_polyfromroots,
impl_numpy$polynomial$polynomial$$$function__3_polyadd,
impl_numpy$polynomial$polynomial$$$function__4_polysub,
impl_numpy$polynomial$polynomial$$$function__5_polymulx,
impl_numpy$polynomial$polynomial$$$function__6_polymul,
impl_numpy$polynomial$polynomial$$$function__7_polydiv,
impl_numpy$polynomial$polynomial$$$function__8_polypow,
impl_numpy$polynomial$polynomial$$$function__9_polyder,
impl_numpy$polynomial$polynomial$$$function__10_polyint,
impl_numpy$polynomial$polynomial$$$function__11_polyval,
impl_numpy$polynomial$polynomial$$$function__12_polyvalfromroots,
impl_numpy$polynomial$polynomial$$$function__13__polyval2d_dispatcher,
impl_numpy$polynomial$polynomial$$$function__14__polygrid2d_dispatcher,
impl_numpy$polynomial$polynomial$$$function__15_polyval2d,
impl_numpy$polynomial$polynomial$$$function__16_polygrid2d,
impl_numpy$polynomial$polynomial$$$function__17_polyval3d,
impl_numpy$polynomial$polynomial$$$function__18_polygrid3d,
impl_numpy$polynomial$polynomial$$$function__19_polyvander,
impl_numpy$polynomial$polynomial$$$function__20_polyvander2d,
impl_numpy$polynomial$polynomial$$$function__21_polyvander3d,
impl_numpy$polynomial$polynomial$$$function__22_polyfit,
impl_numpy$polynomial$polynomial$$$function__23_polycompanion,
impl_numpy$polynomial$polynomial$$$function__24_polyroots,
impl_numpy$polynomial$polynomial$$$function__25__str_term_unicode,
impl_numpy$polynomial$polynomial$$$function__26__str_term_ascii,
impl_numpy$polynomial$polynomial$$$function__27__repr_latex_term,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$polynomial$polynomial);
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
        module_numpy$polynomial$polynomial,
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
        function_table_numpy$polynomial$polynomial,
        sizeof(function_table_numpy$polynomial$polynomial) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.polynomial.polynomial";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$polynomial$polynomial(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$polynomial$polynomial");

    // Store the module for future use.
    module_numpy$polynomial$polynomial = module;

    moduledict_numpy$polynomial$polynomial = MODULE_DICT(module_numpy$polynomial$polynomial);

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
        PRINT_STRING("numpy$polynomial$polynomial: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$polynomial$polynomial: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$polynomial$polynomial: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.polynomial.polynomial" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$polynomial$polynomial\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$polynomial$polynomial,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$polynomial$polynomial,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$polynomial$polynomial,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$polynomial,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$polynomial,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$polynomial$polynomial);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$polynomial$polynomial);
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

        UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_aba70bad1270bf508b616542062e2ab6;
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$polynomial$polynomial = MAKE_MODULE_FRAME(code_objects_755ba7ab1d114849f1092608904d026b, module_numpy$polynomial$polynomial);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$polynomial$polynomial$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$polynomial$polynomial$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = LIST_COPY(tstate, mod_consts.const_list_75a5d2f1c221fb6ba8d443d6a126da9b_list);
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$polynomial$polynomial;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 83;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_5);
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
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$polynomial$polynomial;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_array_function_dispatch_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 84;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$polynomial$polynomial,
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


exception_lineno = 84;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__array_function_dispatch, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$polynomial$polynomial;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_polyutils_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 86;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$polynomial$polynomial,
        mod_consts.const_str_plain_polyutils,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_polyutils);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_pu, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__polybase;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$polynomial$polynomial;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ABCPolyBase_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 87;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$polynomial$polynomial,
        mod_consts.const_str_plain_ABCPolyBase,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ABCPolyBase);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$polynomial$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto frame_exception_exit_1;
}
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_trimcoef);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polytrim, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_arg_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = MAKE_LIST2(tstate, const_float_minus_1_0,const_float_1_0);
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 97;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_call_arg_element_1);
CHECK_OBJECT(tmp_call_arg_element_1);
Py_DECREF(tmp_call_arg_element_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polydomain, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_arg_element_2;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_2 = MAKE_LIST1(tstate, const_int_0);
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 100;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_array, tmp_call_arg_element_2);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyzero, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_arg_element_3;
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_3 = MAKE_LIST1(tstate, const_int_pos_1);
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 103;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_array, tmp_call_arg_element_3);
CHECK_OBJECT(tmp_call_arg_element_3);
Py_DECREF(tmp_call_arg_element_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyone, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_arg_element_4;
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_4 = MAKE_LIST2(tstate, const_int_0,const_int_pos_1);
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 106;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_array, tmp_call_arg_element_4);
CHECK_OBJECT(tmp_call_arg_element_4);
Py_DECREF(tmp_call_arg_element_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyx, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__1_polyline(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyline, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__2_polyfromroots(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfromroots, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__3_polyadd(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyadd, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__4_polysub(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polysub, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__5_polymulx(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polymulx, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__6_polymul(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polymul, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__7_polydiv(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polydiv, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_21 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__8_polypow(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polypow, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_22 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__9_polyder(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyder, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = const_int_pos_1;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 0);
PyTuple_SET_ITEM(tmp_defaults_3, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_0;
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_0;
PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_1);

tmp_assign_source_23 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__10_polyint(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyint, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_true_tuple;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_24 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__11_polyval(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyval, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_true_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_25 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__12_polyvalfromroots(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyvalfromroots, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__13__polyval2d_dispatcher(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__polyval2d_dispatcher, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;

tmp_assign_source_27 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__14__polygrid2d_dispatcher(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain__polygrid2d_dispatcher, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_numpy$polynomial$polynomial$_array_function_dispatch(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__array_function_dispatch);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 853;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$polynomial$_polyval2d_dispatcher(tstate);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 853;
tmp_called_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 853;

    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__15_polyval2d(tstate);

frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 853;
tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 853;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyval2d, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_numpy$polynomial$polynomial$_array_function_dispatch(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__array_function_dispatch);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 905;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_numpy$polynomial$polynomial$_polygrid2d_dispatcher(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__polygrid2d_dispatcher);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 905;

    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 905;
tmp_called_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 905;

    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__16_polygrid2d(tstate);

frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 905;
tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 905;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polygrid2d, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;

tmp_assign_source_30 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__17_polyval3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyval3d, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;

tmp_assign_source_31 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__18_polygrid3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polygrid3d, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;

tmp_assign_source_32 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__19_polyvander(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyvander, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;

tmp_assign_source_33 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__20_polyvander2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyvander2d, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;

tmp_assign_source_34 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__21_polyvander3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyvander3d, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_none_false_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_assign_source_35 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__22_polyfit(tstate, tmp_defaults_6);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyfit, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;

tmp_assign_source_36 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__23_polycompanion(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polycompanion, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;

tmp_assign_source_37 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__24_polyroots(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_polyroots, tmp_assign_source_37);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_numpy$polynomial$polynomial$ABCPolyBase(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABCPolyBase);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1557;

    goto try_except_handler_1;
}
tmp_assign_source_38 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_39 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
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


exception_lineno = 1557;

    goto try_except_handler_1;
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


exception_lineno = 1557;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_41;
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


exception_lineno = 1557;

    goto try_except_handler_1;
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
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_1;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_Polynomial;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 1557;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_42;
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


exception_lineno = 1557;

    goto try_except_handler_1;
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


exception_lineno = 1557;

    goto try_except_handler_1;
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


exception_lineno = 1557;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_1;
}
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 1557;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1557;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_43;
}
branch_end_1:;
{
PyObject *tmp_assign_source_44;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_04b3eb4a69367931852490c2b7667d29;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_c4bcf78ca32eb767b1c378e4eff22982;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Polynomial;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1557;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_3;
}
frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2 = MAKE_CLASS_FRAME(tstate, code_objects_4af8eac7e4e3d38f53f9b75416ee338a, module_numpy$polynomial$polynomial, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2);
assert(Py_REFCNT(frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_5 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polyadd);

if (tmp_args_element_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_5 = module_var_accessor_numpy$polynomial$polynomial$polyadd(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyadd);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 1584;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1584;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1584;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__add, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1584;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_6 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polysub);

if (tmp_args_element_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_6 = module_var_accessor_numpy$polynomial$polynomial$polysub(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polysub);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 1585;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1585;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1585;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__sub, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1585;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_7 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polymul);

if (tmp_args_element_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_7 = module_var_accessor_numpy$polynomial$polynomial$polymul(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polymul);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 1586;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1586;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1586;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__mul, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1586;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
tmp_called_value_9 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_8 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polydiv);

if (tmp_args_element_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_8 = module_var_accessor_numpy$polynomial$polynomial$polydiv(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polydiv);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 1587;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1587;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1587;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__div, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1587;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
tmp_called_value_10 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_9 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polypow);

if (tmp_args_element_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_9 = module_var_accessor_numpy$polynomial$polynomial$polypow(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polypow);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 1588;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1588;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1588;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__pow, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1588;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
tmp_called_value_11 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_10 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polyval);

if (tmp_args_element_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_10 = module_var_accessor_numpy$polynomial$polynomial$polyval(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyval);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 1589;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1589;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1589;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__val, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1589;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_11;
tmp_called_value_12 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_11 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polyint);

if (tmp_args_element_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_11 = module_var_accessor_numpy$polynomial$polynomial$polyint(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyint);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 1590;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1590;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1590;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__int, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1590;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
tmp_called_value_13 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_12 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polyder);

if (tmp_args_element_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_12 = module_var_accessor_numpy$polynomial$polynomial$polyder(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyder);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 1591;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1591;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1591;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1591;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_13;
tmp_called_value_14 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_13 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polyfit);

if (tmp_args_element_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_13 = module_var_accessor_numpy$polynomial$polynomial$polyfit(tstate);
if (unlikely(tmp_args_element_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyfit);
}

if (tmp_args_element_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 1592;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1592;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1592;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__fit, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1592;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_14;
tmp_called_value_15 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_14 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polyline);

if (tmp_args_element_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_14 = module_var_accessor_numpy$polynomial$polynomial$polyline(tstate);
if (unlikely(tmp_args_element_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyline);
}

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 1593;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1593;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1593;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__line, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1593;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_15;
tmp_called_value_16 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_15 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polyroots);

if (tmp_args_element_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_15 = module_var_accessor_numpy$polynomial$polynomial$polyroots(tstate);
if (unlikely(tmp_args_element_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyroots);
}

if (tmp_args_element_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_16);

exception_lineno = 1594;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1594;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1594;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__roots, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1594;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_16;
tmp_called_value_17 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_16 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polyfromroots);

if (tmp_args_element_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_16 = module_var_accessor_numpy$polynomial$polynomial$polyfromroots(tstate);
if (unlikely(tmp_args_element_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyfromroots);
}

if (tmp_args_element_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_17);

exception_lineno = 1595;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1595;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1595;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__fromroots, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1595;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_17;
tmp_expression_value_8 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_np);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1598;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_array);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1598;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_17 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polydomain);

if (tmp_args_element_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_17 = module_var_accessor_numpy$polynomial$polynomial$polydomain(tstate);
if (unlikely(tmp_args_element_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polydomain);
}

if (tmp_args_element_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 1598;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1598;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1598;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_domain, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1598;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_18;
tmp_expression_value_9 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_np);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_numpy$polynomial$polynomial$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1599;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_array);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1599;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_18 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_polydomain);

if (tmp_args_element_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_18 = module_var_accessor_numpy$polynomial$polynomial$polydomain(tstate);
if (unlikely(tmp_args_element_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polydomain);
}

if (tmp_args_element_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_19);

exception_lineno = 1599;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1599;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1599;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_window, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1599;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain_basis_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1600;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_19;
tmp_called_value_20 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_classmethod);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_19 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__25__str_term_unicode(tstate);

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1602;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1602;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__str_term_unicode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1603;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_20;
tmp_called_value_21 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_20 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__26__str_term_ascii(tstate);

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1609;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1609;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__str_term_ascii, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1610;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_21;
tmp_called_value_22 = PyObject_GetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, const_str_plain_staticmethod);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_21 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function__27__repr_latex_term(tstate);

frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame.f_lineno = 1616;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1616;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain__repr_latex_term, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1617;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$polynomial$polynomial$$$class__1_Polynomial_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_3;
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


exception_lineno = 1557;

    goto try_except_handler_3;
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
tmp_res = PyObject_SetItem(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_23 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_Polynomial;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$polynomial$polynomial->m_frame.f_lineno = 1557;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1557;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_45;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_44 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_44);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557);
locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557);
locals_numpy$polynomial$polynomial$$$class__1_Polynomial_1557 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 1557;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)mod_consts.const_str_plain_Polynomial, tmp_assign_source_44);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$polynomial, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$polynomial->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$polynomial, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$polynomial$polynomial);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$polynomial$polynomial", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.polynomial.polynomial" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$polynomial$polynomial);
    return module_numpy$polynomial$polynomial;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$polynomial$polynomial", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

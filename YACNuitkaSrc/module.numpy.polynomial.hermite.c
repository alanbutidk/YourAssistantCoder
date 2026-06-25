/* Generated code for Python module 'numpy$polynomial$hermite'
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



/* The "module_numpy$polynomial$hermite" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$hermite;
PyDictObject *moduledict_numpy$polynomial$hermite;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_pu;
PyObject *const_str_plain_as_series;
PyObject *const_str_plain_hermadd;
PyObject *const_str_plain_hermmulx;
PyObject *const_str_plain_res;
PyObject *const_str_digest_dca50c2f45151910969bc4c2c7f42025;
PyObject *const_str_plain_polynomial;
PyObject *const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple;
PyObject *const_str_plain_polyadd;
PyObject *const_str_plain_polymulx;
PyObject *const_str_plain_polysub;
PyObject *const_int_pos_2;
PyObject *const_int_neg_2;
PyObject *const_str_plain_c0;
PyObject *const_str_plain_c1;
PyObject *const_str_digest_cf91d0c7be82bf1c1fa737a953fc430b;
PyObject *const_str_plain_np;
PyObject *const_str_plain_array;
PyObject *const_str_digest_b8ec4a2f839b5005ccf74b1593eace53;
PyObject *const_str_plain__fromroots;
PyObject *const_str_plain_hermline;
PyObject *const_str_plain_hermmul;
PyObject *const_str_digest_eba9c31e514ddfabce13e8a1c2be27a0;
PyObject *const_str_plain__add;
PyObject *const_str_digest_84ee526875e599fd2a4aa6671f82c19e;
PyObject *const_str_plain__sub;
PyObject *const_str_digest_9117810b11c8ffbead3727851998325b;
PyObject *const_str_plain_empty;
PyObject *const_str_plain_dtype;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain_prd;
PyObject *const_str_digest_f965706a8635b10dcdbf626a12317304;
PyObject *const_int_pos_3;
PyObject *const_str_plain_nd;
PyObject *const_str_plain_hermsub;
PyObject *const_str_plain_xs;
PyObject *const_str_digest_f8210db0ad594b46808a390fd31e2cfc;
PyObject *const_str_plain__div;
PyObject *const_str_digest_7d7430d1e5ad80ffec15021b5baa0969;
PyObject *const_str_plain__pow;
PyObject *const_str_digest_da5501e8e216a8a52345697e4ca88221;
PyObject *const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee;
PyObject *const_str_plain_char;
PyObject *const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
PyObject *const_str_plain_astype;
PyObject *const_str_plain_double;
PyObject *const_str_plain__as_int;
PyObject *const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
PyObject *const_str_digest_70e3e648da9207a55990fb352e033d01;
PyObject *const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b;
PyObject *const_str_plain_lib;
PyObject *const_str_plain_array_utils;
PyObject *const_str_plain_normalize_axis_index;
PyObject *const_str_plain_c;
PyObject *const_str_plain_ndim;
PyObject *const_str_plain_moveaxis;
PyObject *const_slice_none_int_pos_1_none;
PyObject *const_str_plain_n;
PyObject *const_str_plain_scl;
PyObject *const_str_plain_shape;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_der;
PyObject *const_str_digest_d2d570c406269203ea5411658e8087de;
PyObject *const_str_plain_iterable;
PyObject *const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
PyObject *const_str_digest_b303cff154cb34d4708df3886d4b732e;
PyObject *const_str_plain_k;
PyObject *const_str_digest_616f6ee3ef74479987454a15fb3cc986;
PyObject *const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92;
PyObject *const_str_digest_a9be14195673dac9b8db86f91b86f4b8;
PyObject *const_str_plain_all;
PyObject *const_str_plain_tmp;
PyObject *const_str_plain_hermval;
PyObject *const_str_plain_lbnd;
PyObject *const_str_digest_c0e159cdb288f04a6dfa123c65618923;
PyObject *const_dict_f5bbbab934471495306a2b1e3746ed7e;
PyObject *const_tuple_type_tuple_type_list_tuple;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain_reshape;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_x2;
PyObject *const_str_digest_896f19472d3d516ca02cc9d39d17705e;
PyObject *const_str_plain__valnd;
PyObject *const_str_digest_0a31ed0baf73e514405d32ea1357592d;
PyObject *const_str_plain__gridnd;
PyObject *const_str_digest_4a7aa0cda761a731f76bbb05687efc31;
PyObject *const_str_digest_df0f483edc103f0ef4cb14a992951c35;
PyObject *const_str_digest_f299f52498edf6ee1fbed2510d69ddbb;
PyObject *const_str_plain_deg;
PyObject *const_str_digest_ea8c65b23281db7ee7660696e61ab360;
PyObject *const_dict_bc4fceb686e8db4e197f4130513f6fe7;
PyObject *const_str_plain_v;
PyObject *const_str_digest_e02ffedd5ca6528910764139e15597d5;
PyObject *const_str_plain__vander_nd_flat;
PyObject *const_str_plain_hermvander;
PyObject *const_str_digest_0e377c215e6a17cbf728ab38183ae099;
PyObject *const_str_digest_c81add4b188f44121267bfd376f8cc0b;
PyObject *const_str_plain__fit;
PyObject *const_str_digest_7c7ea02e28ff2715ef1612787768a623;
PyObject *const_str_digest_af327786ef70d70118fb639ec7c50f4e;
PyObject *const_float_minus_0_5;
PyObject *const_str_plain_zeros;
PyObject *const_str_plain_hstack;
PyObject *const_str_plain_sqrt;
PyObject *const_float_2_0;
PyObject *const_str_plain_arange;
PyObject *const_str_plain_multiply;
PyObject *const_str_plain_accumulate;
PyObject *const_slice_none_none_int_neg_1;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_float_0_5;
PyObject *const_tuple_slice_none_none_none_int_neg_1_tuple;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_digest_f290f4df20fc9aff23dd7c57b3fb0e38;
PyObject *const_tuple_list_empty_tuple;
PyObject *const_str_plain_hermcompanion;
PyObject *const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple;
PyObject *const_str_plain_linalg;
PyObject *const_str_plain_eigvals;
PyObject *const_str_plain_sort;
PyObject *const_str_digest_a300c5020899e97b22f7f8b736479133;
PyObject *const_str_plain_full;
PyObject *const_str_plain_pi;
PyObject *const_str_plain_x;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_digest_d4d59c89b3138b5d99a366e07cccecc8;
PyObject *const_str_digest_da2105778c631b698de188a0e1c61710;
PyObject *const_str_plain_float64;
PyObject *const_str_plain_eigvalsh;
PyObject *const_str_plain__normed_hermite_n;
PyObject *const_str_plain_abs;
PyObject *const_str_plain_max;
PyObject *const_str_digest_f16c7d02c7418542dc205538ce8d23b8;
PyObject *const_str_plain_exp;
PyObject *const_str_digest_8ca98f18a8ea51894e0c207b2e4d6adf;
PyObject *const_str_digest_5d3841f08976202c1f93db74798df12c;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_numpy;
PyObject *const_tuple_str_plain_polyutils_tuple;
PyObject *const_str_plain_polyutils;
PyObject *const_str_plain__polybase;
PyObject *const_tuple_str_plain_ABCPolyBase_tuple;
PyObject *const_str_plain_ABCPolyBase;
PyObject *const_list_906a319729d646dc106ab9203973edb1_list;
PyObject *const_str_plain_trimcoef;
PyObject *const_str_plain_hermtrim;
PyObject *const_str_plain_poly2herm;
PyObject *const_str_plain_herm2poly;
PyObject *const_str_plain_hermdomain;
PyObject *const_str_plain_hermzero;
PyObject *const_str_plain_hermone;
PyObject *const_str_plain_hermx;
PyObject *const_str_plain_hermfromroots;
PyObject *const_str_plain_hermdiv;
PyObject *const_tuple_int_pos_16_tuple;
PyObject *const_str_plain_hermpow;
PyObject *const_tuple_int_pos_1_int_pos_1_int_0_tuple;
PyObject *const_str_plain_hermder;
PyObject *const_str_plain_hermint;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_hermval2d;
PyObject *const_str_plain_hermgrid2d;
PyObject *const_str_plain_hermval3d;
PyObject *const_str_plain_hermgrid3d;
PyObject *const_str_plain_hermvander2d;
PyObject *const_str_plain_hermvander3d;
PyObject *const_tuple_none_false_none_tuple;
PyObject *const_str_plain_hermfit;
PyObject *const_str_plain_hermroots;
PyObject *const_str_plain_hermgauss;
PyObject *const_str_plain_hermweight;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Hermite;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_556654d8c41102e6b648eeebe440c961;
PyObject *const_str_digest_fe87fdaa671af3bd04008936e994ee16;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_1695;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain__mul;
PyObject *const_str_plain__val;
PyObject *const_str_plain__int;
PyObject *const_str_plain__der;
PyObject *const_str_plain__line;
PyObject *const_str_plain__roots;
PyObject *const_str_plain_domain;
PyObject *const_str_plain_window;
PyObject *const_str_plain_H;
PyObject *const_str_plain_basis_name;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_c90c4e5ec480e60cb4b64fb9be84b93f;
PyObject *const_str_digest_d8cab349acba3a44ae3672edb38ee496;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple;
PyObject *const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple;
PyObject *const_tuple_str_plain_c1_str_plain_c2_tuple;
PyObject *const_tuple_03b7673e655b056e4f0304ce1db40177_tuple;
PyObject *const_tuple_9155005e41c3737e8ba43420c4730900_tuple;
PyObject *const_tuple_b87a3e87a6253db629058266b0859839_tuple;
PyObject *const_tuple_str_plain_roots_tuple;
PyObject *const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple;
PyObject *const_tuple_dfde0fffe950637125c97009296b6a79_tuple;
PyObject *const_tuple_str_plain_off_str_plain_scl_tuple;
PyObject *const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple;
PyObject *const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple;
PyObject *const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple;
PyObject *const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple;
PyObject *const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple;
PyObject *const_tuple_12007d4ec7f577025a49b2ac80678cc6_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple;
PyObject *const_tuple_str_plain_x_str_plain_w_tuple;
PyObject *const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.polynomial.hermite"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_pu);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_as_series);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermadd);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermmulx);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_res);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_dca50c2f45151910969bc4c2c7f42025);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_polynomial);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyadd);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_polymulx);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_polysub);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_neg_2);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_c0);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_c1);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf91d0c7be82bf1c1fa737a953fc430b);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8ec4a2f839b5005ccf74b1593eace53);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__fromroots);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermline);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermmul);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_eba9c31e514ddfabce13e8a1c2be27a0);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__add);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_84ee526875e599fd2a4aa6671f82c19e);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__sub);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_9117810b11c8ffbead3727851998325b);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_prd);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_f965706a8635b10dcdbf626a12317304);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_nd);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermsub);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_xs);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_f8210db0ad594b46808a390fd31e2cfc);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__div);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d7430d1e5ad80ffec15021b5baa0969);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__pow);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_da5501e8e216a8a52345697e4ca88221);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_char);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_astype);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_double);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__as_int);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_lib);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_utils);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_scl);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_der);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2d570c406269203ea5411658e8087de);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterable);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_k);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_all);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_tmp);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermval);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_lbnd);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0e159cdb288f04a6dfa123c65618923);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_x2);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_896f19472d3d516ca02cc9d39d17705e);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__valnd);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a31ed0baf73e514405d32ea1357592d);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__gridnd);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a7aa0cda761a731f76bbb05687efc31);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_df0f483edc103f0ef4cb14a992951c35);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_f299f52498edf6ee1fbed2510d69ddbb);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_deg);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_v);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_e02ffedd5ca6528910764139e15597d5);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__vander_nd_flat);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermvander);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e377c215e6a17cbf728ab38183ae099);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_c81add4b188f44121267bfd376f8cc0b);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__fit);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c7ea02e28ff2715ef1612787768a623);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_float_minus_0_5);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_zeros);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_hstack);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_float_2_0);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_arange);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiply);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_accumulate);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_f290f4df20fc9aff23dd7c57b3fb0e38);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermcompanion);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_linalg);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_eigvals);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_a300c5020899e97b22f7f8b736479133);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_full);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_pi);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4d59c89b3138b5d99a366e07cccecc8);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_float64);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_eigvalsh);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain__normed_hermite_n);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_abs);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_f16c7d02c7418542dc205538ce8d23b8);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_exp);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ca98f18a8ea51894e0c207b2e4d6adf);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d3841f08976202c1f93db74798df12c);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyutils_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyutils);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain__polybase);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCPolyBase_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCPolyBase);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_list_906a319729d646dc106ab9203973edb1_list);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_trimcoef);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermtrim);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_poly2herm);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_herm2poly);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermdomain);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermzero);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermone);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermx);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermfromroots);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermdiv);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermpow);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermder);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermint);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermval2d);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermgrid2d);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermval3d);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermgrid3d);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermvander2d);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermvander3d);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermfit);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermroots);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermgauss);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermweight);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_Hermite);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_556654d8c41102e6b648eeebe440c961);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe87fdaa671af3bd04008936e994ee16);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_int_pos_1695);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain__mul);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain__val);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain__int);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain__der);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain__line);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain__roots);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_window);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_H);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_basis_name);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_c90c4e5ec480e60cb4b64fb9be84b93f);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8cab349acba3a44ae3672edb38ee496);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_03b7673e655b056e4f0304ce1db40177_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_roots_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_12007d4ec7f577025a49b2ac80678cc6_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_w_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple);
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
void checkModuleConstants_numpy$polynomial$hermite(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_pu));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pu);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_as_series));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_as_series);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermadd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermadd);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermmulx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermmulx);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_res));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_res);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_dca50c2f45151910969bc4c2c7f42025));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dca50c2f45151910969bc4c2c7f42025);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_polynomial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polynomial);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyadd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyadd);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_polymulx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polymulx);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_polysub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polysub);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_neg_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_2);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c0);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c1);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf91d0c7be82bf1c1fa737a953fc430b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf91d0c7be82bf1c1fa737a953fc430b);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8ec4a2f839b5005ccf74b1593eace53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8ec4a2f839b5005ccf74b1593eace53);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__fromroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fromroots);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermline);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermmul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermmul);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_eba9c31e514ddfabce13e8a1c2be27a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eba9c31e514ddfabce13e8a1c2be27a0);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_84ee526875e599fd2a4aa6671f82c19e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84ee526875e599fd2a4aa6671f82c19e);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sub);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_9117810b11c8ffbead3727851998325b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9117810b11c8ffbead3727851998325b);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_prd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prd);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_f965706a8635b10dcdbf626a12317304));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f965706a8635b10dcdbf626a12317304);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_nd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nd);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermsub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermsub);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_xs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_xs);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_f8210db0ad594b46808a390fd31e2cfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f8210db0ad594b46808a390fd31e2cfc);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__div));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__div);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d7430d1e5ad80ffec15021b5baa0969));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d7430d1e5ad80ffec15021b5baa0969);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__pow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pow);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_da5501e8e216a8a52345697e4ca88221));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da5501e8e216a8a52345697e4ca88221);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_char));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_char);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_astype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astype);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_double));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_double);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__as_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__as_int);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lib);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_utils);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_axis_index);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moveaxis);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_1_none);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_scl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scl);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_der);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2d570c406269203ea5411658e8087de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2d570c406269203ea5411658e8087de);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iterable);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_k));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_k);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_all);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_tmp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tmp);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermval);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_lbnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lbnd);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0e159cdb288f04a6dfa123c65618923));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0e159cdb288f04a6dfa123c65618923);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_tuple_type_list_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_reshape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reshape);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_x2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x2);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_896f19472d3d516ca02cc9d39d17705e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_896f19472d3d516ca02cc9d39d17705e);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__valnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__valnd);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a31ed0baf73e514405d32ea1357592d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a31ed0baf73e514405d32ea1357592d);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__gridnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__gridnd);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a7aa0cda761a731f76bbb05687efc31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a7aa0cda761a731f76bbb05687efc31);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_df0f483edc103f0ef4cb14a992951c35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df0f483edc103f0ef4cb14a992951c35);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_f299f52498edf6ee1fbed2510d69ddbb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f299f52498edf6ee1fbed2510d69ddbb);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_deg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deg);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_v));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_v);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_e02ffedd5ca6528910764139e15597d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e02ffedd5ca6528910764139e15597d5);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__vander_nd_flat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__vander_nd_flat);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermvander));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermvander);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e377c215e6a17cbf728ab38183ae099));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e377c215e6a17cbf728ab38183ae099);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_c81add4b188f44121267bfd376f8cc0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c81add4b188f44121267bfd376f8cc0b);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__fit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fit);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c7ea02e28ff2715ef1612787768a623));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c7ea02e28ff2715ef1612787768a623);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_float_minus_0_5));
CHECK_OBJECT_DEEP(mod_consts.const_float_minus_0_5);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_zeros));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zeros);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_hstack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hstack);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sqrt);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_float_2_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_2_0);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_arange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arange);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiply);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_accumulate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_accumulate);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_int_neg_1);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_float_0_5));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_5);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_f290f4df20fc9aff23dd7c57b3fb0e38));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f290f4df20fc9aff23dd7c57b3fb0e38);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_empty_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermcompanion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermcompanion);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_linalg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linalg);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_eigvals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eigvals);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_a300c5020899e97b22f7f8b736479133));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a300c5020899e97b22f7f8b736479133);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_full));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_full);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_pi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pi);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4d59c89b3138b5d99a366e07cccecc8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4d59c89b3138b5d99a366e07cccecc8);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_float64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_float64);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_eigvalsh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eigvalsh);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain__normed_hermite_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__normed_hermite_n);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_abs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abs);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_f16c7d02c7418542dc205538ce8d23b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f16c7d02c7418542dc205538ce8d23b8);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_exp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exp);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ca98f18a8ea51894e0c207b2e4d6adf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ca98f18a8ea51894e0c207b2e4d6adf);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d3841f08976202c1f93db74798df12c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d3841f08976202c1f93db74798df12c);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyutils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_polyutils_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyutils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyutils);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain__polybase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__polybase);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCPolyBase_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABCPolyBase_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCPolyBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCPolyBase);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_list_906a319729d646dc106ab9203973edb1_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_906a319729d646dc106ab9203973edb1_list);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_trimcoef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trimcoef);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermtrim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermtrim);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_poly2herm));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_poly2herm);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_herm2poly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_herm2poly);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermdomain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermdomain);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermzero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermzero);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermone);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermx);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermfromroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermfromroots);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermdiv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermdiv);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_16_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermpow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermpow);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermder);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermint);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermval2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermval2d);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermgrid2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermgrid2d);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermval3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermval3d);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermgrid3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermgrid3d);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermvander2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermvander2d);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermvander3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermvander3d);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_false_none_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermfit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermfit);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermroots);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermgauss));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermgauss);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermweight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermweight);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_Hermite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Hermite);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_556654d8c41102e6b648eeebe440c961));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_556654d8c41102e6b648eeebe440c961);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe87fdaa671af3bd04008936e994ee16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe87fdaa671af3bd04008936e994ee16);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_int_pos_1695));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1695);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain__mul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mul);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain__val));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__val);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain__int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__int);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain__der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__der);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain__line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__line);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain__roots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__roots);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_domain);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_window));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_window);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_H));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_H);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_basis_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_basis_name);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_c90c4e5ec480e60cb4b64fb9be84b93f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c90c4e5ec480e60cb4b64fb9be84b93f);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8cab349acba3a44ae3672edb38ee496));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8cab349acba3a44ae3672edb38ee496);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_03b7673e655b056e4f0304ce1db40177_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_03b7673e655b056e4f0304ce1db40177_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_roots_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_roots_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_12007d4ec7f577025a49b2ac80678cc6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_12007d4ec7f577025a49b2ac80678cc6_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_w_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_w_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple);
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
static PyObject *module_var_accessor_numpy$polynomial$hermite$ABCPolyBase(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$_normed_hermite_n(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_n);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__normed_hermite_n);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__normed_hermite_n, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__normed_hermite_n);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__normed_hermite_n, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_n);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_n);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_n);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermadd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermadd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermadd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermadd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermadd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermadd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermadd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermadd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermadd);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermcompanion(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermcompanion);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermcompanion);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermcompanion, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermcompanion);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermcompanion, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermcompanion);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermcompanion);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermcompanion);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermder);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermdiv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdiv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermdiv);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermdiv, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermdiv);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermdiv, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdiv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdiv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdiv);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermdomain(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdomain);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermdomain);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermdomain, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermdomain);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermdomain, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdomain);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdomain);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdomain);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermfit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermfit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermfit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermfit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermfit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfit);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermfromroots(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfromroots);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermfromroots);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermfromroots, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermfromroots);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermfromroots, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfromroots);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfromroots);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfromroots);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermint);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermline(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermline);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermline);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermline, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermline);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermline, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermline);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermline);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermline);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermmul(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmul);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermmul);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermmul, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermmul);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermmul, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmul);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmul);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmul);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermmulx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmulx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermmulx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermmulx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermmulx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermmulx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmulx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmulx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmulx);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermpow(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermpow);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermpow);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermpow, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermpow);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermpow, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermpow);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermpow);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermpow);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermroots(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermroots);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermroots);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermroots, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermroots);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermroots, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermroots);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermroots);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermroots);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermsub(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermsub);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermsub);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermsub, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermsub);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermsub, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermsub);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermsub);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermsub);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermval(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermval);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermval);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermval, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermval);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermval, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermval);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermval);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermval);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$hermvander(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermvander);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermvander);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermvander, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermvander);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermvander, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermvander);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermvander);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermvander);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite$pu(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_9dbd8530353cd29ff4c4544dbdc21f9b;
static PyCodeObject *code_objects_246276de280c53f62e738fdc2f37f9c0;
static PyCodeObject *code_objects_3b85cada2d5edb151f9678f3c5492ac3;
static PyCodeObject *code_objects_60a00c4b71c60116644458e3a1a1a9f0;
static PyCodeObject *code_objects_9062f07815284490d9288b3c47ff9da8;
static PyCodeObject *code_objects_edce7aae1b2debbf3443841f37bf4269;
static PyCodeObject *code_objects_18aa0b57ffda43e5db3dd4aead8e0b2c;
static PyCodeObject *code_objects_ea0dc796fccb9ce227673d929072264e;
static PyCodeObject *code_objects_0b8afc4b5b5df8090b14cbc9a76ce7f6;
static PyCodeObject *code_objects_ec785eb994c43183b8980649cd69ab73;
static PyCodeObject *code_objects_5e76c7df62726874d034de8f698df03f;
static PyCodeObject *code_objects_1c3c9681356165a33ff68d30fc0946f0;
static PyCodeObject *code_objects_8499f24b1cd581e3371eee01cb535d79;
static PyCodeObject *code_objects_017f435b902ce26d19a6e746992f8eb6;
static PyCodeObject *code_objects_2e531f87b1289d492c9888ee5e51bf56;
static PyCodeObject *code_objects_7d461048716e7e3b40dc4231455f7b75;
static PyCodeObject *code_objects_e38392e0c4402e235f48c4e209756d0b;
static PyCodeObject *code_objects_d1e76959b75cba4036610da854f1d351;
static PyCodeObject *code_objects_3728af51cfced223d63b4c6c8bdeb6b8;
static PyCodeObject *code_objects_60e42b17b8e5fd3bc261920836ca6865;
static PyCodeObject *code_objects_25fadc46b1741be57ed40902b39db9de;
static PyCodeObject *code_objects_b153044997c6a252a0dcea06b538daeb;
static PyCodeObject *code_objects_b507f2bbc2bbedc03c902486d82637db;
static PyCodeObject *code_objects_3405d587ec82725072400c6e7e57308b;
static PyCodeObject *code_objects_dea06d490e88e77dfdd0ff0c8db8f278;
static PyCodeObject *code_objects_965f7407e8505e3e6f892e4b56b2dffc;
static PyCodeObject *code_objects_56d6766736c9f5a5129564aaf68bae58;
static PyCodeObject *code_objects_c42fea411e5dce9fd37fa4f96f8ec8e1;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c90c4e5ec480e60cb4b64fb9be84b93f); CHECK_OBJECT(module_filename_obj);
code_objects_9dbd8530353cd29ff4c4544dbdc21f9b = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_d8cab349acba3a44ae3672edb38ee496, mod_consts.const_str_digest_d8cab349acba3a44ae3672edb38ee496, NULL, NULL, 0, 0, 0);
code_objects_246276de280c53f62e738fdc2f37f9c0 = MAKE_CODE_OBJECT(module_filename_obj, 1695, 0, mod_consts.const_str_plain_Hermite, mod_consts.const_str_plain_Hermite, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3b85cada2d5edb151f9678f3c5492ac3 = MAKE_CODE_OBJECT(module_filename_obj, 1549, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__normed_hermite_n, mod_consts.const_str_plain__normed_hermite_n, mod_consts.const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple, NULL, 2, 0, 0);
code_objects_60a00c4b71c60116644458e3a1a1a9f0 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_herm2poly, mod_consts.const_str_plain_herm2poly, mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple, NULL, 1, 0, 0);
code_objects_9062f07815284490d9288b3c47ff9da8 = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermadd, mod_consts.const_str_plain_hermadd, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_edce7aae1b2debbf3443841f37bf4269 = MAKE_CODE_OBJECT(module_filename_obj, 1438, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermcompanion, mod_consts.const_str_plain_hermcompanion, mod_consts.const_tuple_03b7673e655b056e4f0304ce1db40177_tuple, NULL, 1, 0, 0);
code_objects_18aa0b57ffda43e5db3dd4aead8e0b2c = MAKE_CODE_OBJECT(module_filename_obj, 596, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermder, mod_consts.const_str_plain_hermder, mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple, NULL, 4, 0, 0);
code_objects_ea0dc796fccb9ce227673d929072264e = MAKE_CODE_OBJECT(module_filename_obj, 511, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermdiv, mod_consts.const_str_plain_hermdiv, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_0b8afc4b5b5df8090b14cbc9a76ce7f6 = MAKE_CODE_OBJECT(module_filename_obj, 1304, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermfit, mod_consts.const_str_plain_hermfit, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple, NULL, 6, 0, 0);
code_objects_ec785eb994c43183b8980649cd69ab73 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermfromroots, mod_consts.const_str_plain_hermfromroots, mod_consts.const_tuple_str_plain_roots_tuple, NULL, 1, 0, 0);
code_objects_5e76c7df62726874d034de8f698df03f = MAKE_CODE_OBJECT(module_filename_obj, 1590, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermgauss, mod_consts.const_str_plain_hermgauss, mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple, NULL, 1, 0, 0);
code_objects_1c3c9681356165a33ff68d30fc0946f0 = MAKE_CODE_OBJECT(module_filename_obj, 944, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermgrid2d, mod_consts.const_str_plain_hermgrid2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_8499f24b1cd581e3371eee01cb535d79 = MAKE_CODE_OBJECT(module_filename_obj, 1059, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermgrid3d, mod_consts.const_str_plain_hermgrid3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, NULL, 4, 0, 0);
code_objects_017f435b902ce26d19a6e746992f8eb6 = MAKE_CODE_OBJECT(module_filename_obj, 677, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermint, mod_consts.const_str_plain_hermint, mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple, NULL, 6, 0, 0);
code_objects_2e531f87b1289d492c9888ee5e51bf56 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermline, mod_consts.const_str_plain_hermline, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple, NULL, 2, 0, 0);
code_objects_7d461048716e7e3b40dc4231455f7b75 = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermmul, mod_consts.const_str_plain_hermmul, mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple, NULL, 2, 0, 0);
code_objects_e38392e0c4402e235f48c4e209756d0b = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermmulx, mod_consts.const_str_plain_hermmulx, mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_d1e76959b75cba4036610da854f1d351 = MAKE_CODE_OBJECT(module_filename_obj, 559, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermpow, mod_consts.const_str_plain_hermpow, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple, NULL, 3, 0, 0);
code_objects_3728af51cfced223d63b4c6c8bdeb6b8 = MAKE_CODE_OBJECT(module_filename_obj, 1485, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermroots, mod_consts.const_str_plain_hermroots, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple, NULL, 1, 0, 0);
code_objects_60e42b17b8e5fd3bc261920836ca6865 = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermsub, mod_consts.const_str_plain_hermsub, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_25fadc46b1741be57ed40902b39db9de = MAKE_CODE_OBJECT(module_filename_obj, 797, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermval, mod_consts.const_str_plain_hermval, mod_consts.const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, NULL, 3, 0, 0);
code_objects_b153044997c6a252a0dcea06b538daeb = MAKE_CODE_OBJECT(module_filename_obj, 891, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermval2d, mod_consts.const_str_plain_hermval2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_b507f2bbc2bbedc03c902486d82637db = MAKE_CODE_OBJECT(module_filename_obj, 1003, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermval3d, mod_consts.const_str_plain_hermval3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, NULL, 4, 0, 0);
code_objects_3405d587ec82725072400c6e7e57308b = MAKE_CODE_OBJECT(module_filename_obj, 1123, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermvander, mod_consts.const_str_plain_hermvander, mod_consts.const_tuple_12007d4ec7f577025a49b2ac80678cc6_tuple, NULL, 2, 0, 0);
code_objects_dea06d490e88e77dfdd0ff0c8db8f278 = MAKE_CODE_OBJECT(module_filename_obj, 1185, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermvander2d, mod_consts.const_str_plain_hermvander2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple, NULL, 3, 0, 0);
code_objects_965f7407e8505e3e6f892e4b56b2dffc = MAKE_CODE_OBJECT(module_filename_obj, 1244, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermvander3d, mod_consts.const_str_plain_hermvander3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple, NULL, 4, 0, 0);
code_objects_56d6766736c9f5a5129564aaf68bae58 = MAKE_CODE_OBJECT(module_filename_obj, 1660, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermweight, mod_consts.const_str_plain_hermweight, mod_consts.const_tuple_str_plain_x_str_plain_w_tuple, NULL, 1, 0, 0);
code_objects_c42fea411e5dce9fd37fa4f96f8ec8e1 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_poly2herm, mod_consts.const_str_plain_poly2herm, mod_consts.const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__10_hermpow(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__11_hermder(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__12_hermint(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__13_hermval(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__14_hermval2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__15_hermgrid2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__16_hermval3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__17_hermgrid3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__18_hermvander(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__19_hermvander2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__1_poly2herm(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__20_hermvander3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__21_hermfit(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__22_hermcompanion(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__23_hermroots(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__24__normed_hermite_n(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__25_hermgauss(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__26_hermweight(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__2_herm2poly(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__3_hermline(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__4_hermfromroots(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__5_hermadd(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__6_hermsub(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__7_hermmulx(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__8_hermmul(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__9_hermdiv(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$polynomial$hermite$$$function__1_poly2herm(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_pol = python_pars[0];
PyObject *var_deg = NULL;
PyObject *var_res = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm = MAKE_FUNCTION_FRAME(tstate, code_objects_c42fea411e5dce9fd37fa4f96f8ec8e1, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm = cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_pol);
tmp_list_element_1 = par_pol;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm->m_frame.f_lineno = 132;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
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



exception_lineno = 132;
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



exception_lineno = 132;
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
    PyObject *old = par_pol;
    assert(old != NULL);
    par_pol = tmp_assign_source_3;
    Py_INCREF(par_pol);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_4;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_pol);
tmp_len_arg_1 = par_pol;
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = 1;
tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_assign_source_4 == NULL));
assert(var_deg == NULL);
var_deg = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = const_int_0;
assert(var_res == NULL);
Py_INCREF(tmp_assign_source_5);
var_res = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_xrange_step_1;
CHECK_OBJECT(var_deg);
tmp_xrange_low_1 = var_deg;
tmp_xrange_high_1 = const_int_neg_1;
tmp_xrange_step_1 = const_int_neg_1;
tmp_iter_arg_2 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 135;
        goto try_except_handler_4;
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_numpy$polynomial$hermite$hermadd(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermadd);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = module_var_accessor_numpy$polynomial$hermite$hermmulx(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermmulx);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
if (var_res == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_res);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}

tmp_args_element_value_3 = var_res;
frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm->m_frame.f_lineno = 136;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_pol);
tmp_expression_value_1 = par_pol;
CHECK_OBJECT(var_i);
tmp_subscript_value_1 = var_i;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_res;
    var_res = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
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
if (var_res == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_res);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 137;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm,
    type_description_1,
    par_pol,
    var_deg,
    var_res,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm == cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm);
    cache_frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__1_poly2herm);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_pol);
CHECK_OBJECT(par_pol);
Py_DECREF(par_pol);
par_pol = NULL;
CHECK_OBJECT(var_deg);
CHECK_OBJECT(var_deg);
Py_DECREF(var_deg);
var_deg = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_pol);
par_pol = NULL;
Py_XDECREF(var_deg);
var_deg = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_i);
var_i = NULL;
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


static PyObject *impl_numpy$polynomial$hermite$$$function__2_herm2poly(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *var_polyadd = NULL;
PyObject *var_polymulx = NULL;
PyObject *var_polysub = NULL;
PyObject *var_n = NULL;
PyObject *var_c0 = NULL;
PyObject *var_c1 = NULL;
PyObject *var_i = NULL;
PyObject *var_tmp = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly = MAKE_FUNCTION_FRAME(tstate, code_objects_60a00c4b71c60116644458e3a1a1a9f0, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly = cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_polynomial;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$polynomial$hermite;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly->m_frame.f_lineno = 178;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$polynomial$hermite,
        mod_consts.const_str_plain_polyadd,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_polyadd);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var_polyadd == NULL);
var_polyadd = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$polynomial$hermite,
        mod_consts.const_str_plain_polymulx,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_polymulx);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var_polymulx == NULL);
var_polymulx = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$polynomial$hermite,
        mod_consts.const_str_plain_polysub,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_polysub);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var_polysub == NULL);
var_polysub = tmp_assign_source_4;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly->m_frame.f_lineno = 180;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
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



exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
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



exception_lineno = 180;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_7;
    Py_INCREF(par_c);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_c);
tmp_len_arg_1 = par_c;
tmp_assign_source_8 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_n == NULL);
var_n = tmp_assign_source_8;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
CHECK_OBJECT(var_n);
tmp_cmp_expr_left_1 = var_n;
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 != false) {
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
CHECK_OBJECT(var_n);
tmp_cmp_expr_left_2 = var_n;
tmp_cmp_expr_right_2 = 2;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(par_c);
tmp_assign_source_9 = par_c;
assert(tmp_inplace_assign_subscript_1__target == NULL);
Py_INCREF(tmp_assign_source_9);
tmp_inplace_assign_subscript_1__target = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_1 = tmp_inplace_assign_subscript_1__target;
tmp_subscript_value_1 = const_int_pos_1;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_inplace_assign_subscript_1__value == NULL);
tmp_inplace_assign_subscript_1__value = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_imult_expr_left_1 = tmp_inplace_assign_subscript_1__value;
tmp_imult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_LONG(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_11 = tmp_imult_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_11;

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
tmp_ass_subscript_1 = const_int_pos_1;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 1, tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
CHECK_OBJECT(par_c);
tmp_return_value = par_c;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_c);
tmp_expression_value_2 = par_c;
tmp_subscript_value_2 = mod_consts.const_int_neg_2;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, -2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_c);
tmp_expression_value_3 = par_c;
tmp_subscript_value_3 = const_int_neg_1;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, -1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c1 == NULL);
var_c1 = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_xrange_step_1;
CHECK_OBJECT(var_n);
tmp_sub_expr_left_1 = var_n;
tmp_sub_expr_right_1 = 1;
tmp_xrange_low_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
assert(!(tmp_xrange_low_1 == NULL));
tmp_xrange_high_1 = const_int_pos_1;
tmp_xrange_step_1 = const_int_neg_1;
tmp_iter_arg_2 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_14;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 191;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_16 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_16;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}

tmp_assign_source_17 = var_c0;
{
    PyObject *old = var_tmp;
    var_tmp = tmp_assign_source_17;
    Py_INCREF(var_tmp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
if (var_polysub == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polysub);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}

tmp_called_value_1 = var_polysub;
CHECK_OBJECT(par_c);
tmp_expression_value_4 = par_c;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_2 = var_i;
tmp_sub_expr_right_2 = mod_consts.const_int_pos_2;
tmp_subscript_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
if (var_c1 == NULL) {
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}

tmp_mult_expr_left_1 = var_c1;
tmp_mult_expr_left_2 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_3 = var_i;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_mult_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly->m_frame.f_lineno = 193;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_c0;
    var_c0 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
if (var_polyadd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyadd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}

tmp_called_value_2 = var_polyadd;
CHECK_OBJECT(var_tmp);
tmp_args_element_value_4 = var_tmp;
if (var_polymulx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polymulx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}

tmp_called_value_3 = var_polymulx;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_6 = var_c1;
frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly->m_frame.f_lineno = 194;
tmp_mult_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_mult_expr_right_3 = mod_consts.const_int_pos_2;
tmp_args_element_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly->m_frame.f_lineno = 194;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_c1;
    var_c1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
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
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
if (var_polyadd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyadd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_4 = var_polyadd;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_c0;
if (var_polymulx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polymulx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_5 = var_polymulx;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = var_c1;
frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly->m_frame.f_lineno = 195;
tmp_mult_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_4 = mod_consts.const_int_pos_2;
tmp_args_element_value_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly->m_frame.f_lineno = 195;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly,
    type_description_1,
    par_c,
    var_polyadd,
    var_polymulx,
    var_polysub,
    var_n,
    var_c0,
    var_c1,
    var_i,
    var_tmp
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly == cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly);
    cache_frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__2_herm2poly);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_c);
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
par_c = NULL;
Py_XDECREF(var_polyadd);
var_polyadd = NULL;
Py_XDECREF(var_polymulx);
var_polymulx = NULL;
Py_XDECREF(var_polysub);
var_polysub = NULL;
CHECK_OBJECT(var_n);
CHECK_OBJECT(var_n);
Py_DECREF(var_n);
var_n = NULL;
Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_c1);
var_c1 = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_polyadd);
var_polyadd = NULL;
Py_XDECREF(var_polymulx);
var_polymulx = NULL;
Py_XDECREF(var_polysub);
var_polysub = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_c1);
var_c1 = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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


static PyObject *impl_numpy$polynomial$hermite$$$function__3_hermline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_off = python_pars[0];
PyObject *par_scl = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__3_hermline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline = MAKE_FUNCTION_FRAME(tstate, code_objects_2e531f87b1289d492c9888ee5e51bf56, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__3_hermline = cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__3_hermline);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__3_hermline) == 2);

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


exception_lineno = 250;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_off);
tmp_list_element_1 = par_off;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_scl);
tmp_truediv_expr_left_1 = par_scl;
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_list_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
frame_frame_numpy$polynomial$hermite$$$function__3_hermline->m_frame.f_lineno = 251;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_off);
tmp_list_element_2 = par_off;
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$hermite$$$function__3_hermline->m_frame.f_lineno = 253;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__3_hermline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__3_hermline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__3_hermline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__3_hermline,
    type_description_1,
    par_off,
    par_scl
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__3_hermline == cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline);
    cache_frame_frame_numpy$polynomial$hermite$$$function__3_hermline = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__3_hermline);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__4_hermfromroots(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_roots = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots = MAKE_FUNCTION_FRAME(tstate, code_objects_ec785eb994c43183b8980649cd69ab73, module_numpy$polynomial$hermite, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots = cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fromroots);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite$hermline(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermline);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 309;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_numpy$polynomial$hermite$hermmul(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermmul);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 309;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_roots);
tmp_args_element_value_3 = par_roots;
frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots->m_frame.f_lineno = 309;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots,
    type_description_1,
    par_roots
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots == cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots);
    cache_frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__4_hermfromroots);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__5_hermadd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__5_hermadd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd = MAKE_FUNCTION_FRAME(tstate, code_objects_9062f07815284490d9288b3c47ff9da8, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__5_hermadd = cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__5_hermadd);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__5_hermadd) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_1 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_2 = par_c2;
frame_frame_numpy$polynomial$hermite$$$function__5_hermadd->m_frame.f_lineno = 349;
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


exception_lineno = 349;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__5_hermadd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__5_hermadd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__5_hermadd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__5_hermadd,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__5_hermadd == cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd);
    cache_frame_frame_numpy$polynomial$hermite$$$function__5_hermadd = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__5_hermadd);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__6_hermsub(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__6_hermsub;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub = MAKE_FUNCTION_FRAME(tstate, code_objects_60e42b17b8e5fd3bc261920836ca6865, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__6_hermsub = cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__6_hermsub);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__6_hermsub) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 389;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_1 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_2 = par_c2;
frame_frame_numpy$polynomial$hermite$$$function__6_hermsub->m_frame.f_lineno = 389;
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


exception_lineno = 389;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__6_hermsub, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__6_hermsub->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__6_hermsub, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__6_hermsub,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__6_hermsub == cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub);
    cache_frame_frame_numpy$polynomial$hermite$$$function__6_hermsub = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__6_hermsub);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__7_hermmulx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *var_prd = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx = MAKE_FUNCTION_FRAME(tstate, code_objects_e38392e0c4402e235f48c4e209756d0b, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx = cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 431;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx->m_frame.f_lineno = 431;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
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



exception_lineno = 431;
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



exception_lineno = 431;
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


exception_lineno = 433;
type_description_1 = "ooo";
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


exception_lineno = 433;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooo";
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
tmp_expression_value_2 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 436;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_empty);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_len_arg_2 = par_c;
tmp_add_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 436;
type_description_1 = "ooo";
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

exception_lineno = 436;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx->m_frame.f_lineno = 436;
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


exception_lineno = 436;
type_description_1 = "ooo";
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


exception_lineno = 437;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = const_int_0;
tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooo";
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


exception_lineno = 437;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(par_c);
tmp_expression_value_5 = par_c;
tmp_subscript_value_3 = const_int_0;
tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_prd);
tmp_ass_subscribed_2 = var_prd;
tmp_ass_subscript_2 = const_int_pos_1;
tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_ass_subscript_res_2 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_len_arg_3;
tmp_xrange_low_1 = const_int_pos_1;
CHECK_OBJECT(par_c);
tmp_len_arg_3 = par_c;
tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_2 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ooo";
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
type_description_1 = "ooo";
exception_lineno = 439;
        goto try_except_handler_4;
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_7;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(par_c);
tmp_expression_value_6 = par_c;
CHECK_OBJECT(var_i);
tmp_subscript_value_4 = var_i;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_truediv_expr_right_2 = mod_consts.const_int_pos_2;
tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
if (var_prd == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "ooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_3 = var_prd;
CHECK_OBJECT(var_i);
tmp_add_expr_left_2 = var_i;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_ass_subscript_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 440;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscript_3);
Py_DECREF(tmp_ass_subscript_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
}
{
PyObject *tmp_assign_source_8;
if (var_prd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 441;
type_description_1 = "ooo";
    goto try_except_handler_4;
}

tmp_assign_source_8 = var_prd;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_8;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_1 = var_i;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_7 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_5 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(par_c);
tmp_expression_value_8 = par_c;
CHECK_OBJECT(var_i);
tmp_subscript_value_6 = var_i;
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_6);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_right_2 = var_i;
tmp_iadd_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_assign_source_11 = tmp_iadd_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_11;

}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_4 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_4 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_4 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooo";
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

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
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


exception_lineno = 439;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
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
if (var_prd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 442;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_prd;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx,
    type_description_1,
    par_c,
    var_prd,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx == cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx);
    cache_frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__7_hermmulx);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_prd);
var_prd = NULL;
Py_XDECREF(var_i);
var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

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


static PyObject *impl_numpy$polynomial$hermite$$$function__8_hermmul(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
PyObject *var_c = NULL;
PyObject *var_xs = NULL;
PyObject *var_c0 = NULL;
PyObject *var_nd = NULL;
PyObject *var_i = NULL;
PyObject *var_tmp = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__8_hermmul;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul = MAKE_FUNCTION_FRAME(tstate, code_objects_7d461048716e7e3b40dc4231455f7b75, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__8_hermmul = cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__8_hermmul);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__8_hermmul) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 484;
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
frame_frame_numpy$polynomial$hermite$$$function__8_hermmul->m_frame.f_lineno = 484;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
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



exception_lineno = 484;
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



exception_lineno = 484;
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



exception_lineno = 484;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_c1);
tmp_len_arg_1 = par_c1;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c2);
tmp_len_arg_2 = par_c2;
tmp_cmp_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 486;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_LE_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
tmp_condition_result_1 = !tmp_condition_result_1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(par_c2);
tmp_assign_source_6 = par_c2;
assert(var_c == NULL);
Py_INCREF(tmp_assign_source_6);
var_c = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(par_c1);
tmp_assign_source_7 = par_c1;
assert(var_xs == NULL);
Py_INCREF(tmp_assign_source_7);
var_xs = tmp_assign_source_7;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(par_c1);
tmp_assign_source_8 = par_c1;
assert(var_c == NULL);
Py_INCREF(tmp_assign_source_8);
var_c = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(par_c2);
tmp_assign_source_9 = par_c2;
assert(var_xs == NULL);
Py_INCREF(tmp_assign_source_9);
var_xs = tmp_assign_source_9;
}
branch_end_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_3;
CHECK_OBJECT(var_c);
tmp_len_arg_3 = var_c;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 1;
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
PyObject *tmp_assign_source_10;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_c);
tmp_expression_value_1 = var_c;
tmp_subscript_value_1 = const_int_0;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_xs);
tmp_mult_expr_right_1 = var_xs;
tmp_assign_source_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = const_int_0;
{
    PyObject *old = par_c1;
    assert(old != NULL);
    par_c1 = tmp_assign_source_11;
    Py_INCREF(par_c1);
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_4;
CHECK_OBJECT(var_c);
tmp_len_arg_4 = var_c;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 2;
tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_c);
tmp_expression_value_2 = var_c;
tmp_subscript_value_2 = const_int_0;
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_xs);
tmp_mult_expr_right_2 = var_xs;
tmp_assign_source_12 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_c);
tmp_expression_value_3 = var_c;
tmp_subscript_value_3 = const_int_pos_1;
tmp_mult_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 1);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_xs);
tmp_mult_expr_right_3 = var_xs;
tmp_assign_source_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c1;
    assert(old != NULL);
    par_c1 = tmp_assign_source_13;
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_len_arg_5;
CHECK_OBJECT(var_c);
tmp_len_arg_5 = var_c;
tmp_assign_source_14 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_nd == NULL);
var_nd = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_c);
tmp_expression_value_4 = var_c;
tmp_subscript_value_4 = mod_consts.const_int_neg_2;
tmp_mult_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, -2);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_xs);
tmp_mult_expr_right_4 = var_xs;
tmp_assign_source_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_c);
tmp_expression_value_5 = var_c;
tmp_subscript_value_5 = const_int_neg_1;
tmp_mult_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_5, -1);
if (tmp_mult_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_xs);
tmp_mult_expr_right_5 = var_xs;
tmp_assign_source_16 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
CHECK_OBJECT(tmp_mult_expr_left_5);
Py_DECREF(tmp_mult_expr_left_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c1;
    assert(old != NULL);
    par_c1 = tmp_assign_source_16;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_add_expr_left_1;
nuitka_digit tmp_add_expr_right_1;
PyObject *tmp_len_arg_6;
tmp_xrange_low_1 = mod_consts.const_int_pos_3;
CHECK_OBJECT(var_c);
tmp_len_arg_6 = var_c;
tmp_add_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_6);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = 1;
tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_xrange_high_1 == NULL));
tmp_iter_arg_2 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_17;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_18 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 503;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_19 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_19;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 504;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_assign_source_20 = var_c0;
{
    PyObject *old = var_tmp;
    var_tmp = tmp_assign_source_20;
    Py_INCREF(var_tmp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
if (var_nd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 505;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_sub_expr_left_1 = var_nd;
tmp_sub_expr_right_1 = 1;
tmp_assign_source_21 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
assert(!(tmp_assign_source_21 == NULL));
{
    PyObject *old = var_nd;
    var_nd = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_mult_expr_left_7;
PyObject *tmp_mult_expr_right_7;
PyObject *tmp_mult_expr_left_8;
PyObject *tmp_mult_expr_right_8;
PyObject *tmp_sub_expr_left_2;
nuitka_digit tmp_sub_expr_right_2;
tmp_called_value_1 = module_var_accessor_numpy$polynomial$hermite$hermsub(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermsub);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 506;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_c);
tmp_expression_value_6 = var_c;
CHECK_OBJECT(var_i);
tmp_operand_value_1 = var_i;
tmp_subscript_value_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_subscript_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_mult_expr_left_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_mult_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
if (var_xs == NULL) {
Py_DECREF(tmp_mult_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_xs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 506;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_mult_expr_right_6 = var_xs;
tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
CHECK_OBJECT(tmp_mult_expr_left_6);
Py_DECREF(tmp_mult_expr_left_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
if (par_c1 == NULL) {
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 506;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_mult_expr_left_7 = par_c1;
tmp_mult_expr_left_8 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_nd);
tmp_sub_expr_left_2 = var_nd;
tmp_sub_expr_right_2 = 1;
tmp_mult_expr_right_8 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
assert(!(tmp_mult_expr_right_8 == NULL));
tmp_mult_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_right_8, tmp_mult_expr_left_8);
CHECK_OBJECT(tmp_mult_expr_right_8);
Py_DECREF(tmp_mult_expr_right_8);
assert(!(tmp_mult_expr_right_7 == NULL));
tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
CHECK_OBJECT(tmp_mult_expr_right_7);
Py_DECREF(tmp_mult_expr_right_7);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 506;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
frame_frame_numpy$polynomial$hermite$$$function__8_hermmul->m_frame.f_lineno = 506;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_c0;
    var_c0 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_mult_expr_left_9;
PyObject *tmp_mult_expr_right_9;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
tmp_called_value_2 = module_var_accessor_numpy$polynomial$hermite$hermadd(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermadd);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_tmp);
tmp_args_element_value_4 = var_tmp;
tmp_called_value_3 = module_var_accessor_numpy$polynomial$hermite$hermmulx(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermmulx);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
if (par_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 507;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_6 = par_c1;
frame_frame_numpy$polynomial$hermite$$$function__8_hermmul->m_frame.f_lineno = 507;
tmp_mult_expr_left_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
if (tmp_mult_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_mult_expr_right_9 = mod_consts.const_int_pos_2;
tmp_args_element_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
CHECK_OBJECT(tmp_mult_expr_left_9);
Py_DECREF(tmp_mult_expr_left_9);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
frame_frame_numpy$polynomial$hermite$$$function__8_hermmul->m_frame.f_lineno = 507;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_c1;
    par_c1 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooooooo";
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
branch_end_3:;
branch_end_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_mult_expr_left_10;
PyObject *tmp_mult_expr_right_10;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_numpy$polynomial$hermite$hermadd(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermadd);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 508;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 508;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_c0;
tmp_called_value_5 = module_var_accessor_numpy$polynomial$hermite$hermmulx(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermmulx);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 508;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 508;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = par_c1;
frame_frame_numpy$polynomial$hermite$$$function__8_hermmul->m_frame.f_lineno = 508;
tmp_mult_expr_left_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
if (tmp_mult_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_10 = mod_consts.const_int_pos_2;
tmp_args_element_value_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
CHECK_OBJECT(tmp_mult_expr_left_10);
Py_DECREF(tmp_mult_expr_left_10);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__8_hermmul->m_frame.f_lineno = 508;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__8_hermmul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__8_hermmul->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__8_hermmul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__8_hermmul,
    type_description_1,
    par_c1,
    par_c2,
    var_c,
    var_xs,
    var_c0,
    var_nd,
    var_i,
    var_tmp
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__8_hermmul == cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul);
    cache_frame_frame_numpy$polynomial$hermite$$$function__8_hermmul = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__8_hermmul);

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
CHECK_OBJECT(par_c2);
CHECK_OBJECT(par_c2);
Py_DECREF(par_c2);
par_c2 = NULL;
CHECK_OBJECT(var_c);
CHECK_OBJECT(var_c);
Py_DECREF(var_c);
var_c = NULL;
Py_XDECREF(var_xs);
var_xs = NULL;
Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
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
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_xs);
var_xs = NULL;
Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
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


static PyObject *impl_numpy$polynomial$hermite$$$function__9_hermdiv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv = MAKE_FUNCTION_FRAME(tstate, code_objects_ea0dc796fccb9ce227673d929072264e, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv = cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 556;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__div);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite$hermmul(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermmul);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 556;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_2 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_3 = par_c2;
frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv->m_frame.f_lineno = 556;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv == cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv);
    cache_frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__9_hermdiv);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__10_hermpow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_pow = python_pars[1];
PyObject *par_maxpower = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__10_hermpow;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow = MAKE_FUNCTION_FRAME(tstate, code_objects_d1e76959b75cba4036610da854f1d351, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__10_hermpow = cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__10_hermpow);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__10_hermpow) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 593;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__pow);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite$hermmul(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermmul);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 593;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_pow);
tmp_args_element_value_3 = par_pow;
CHECK_OBJECT(par_maxpower);
tmp_args_element_value_4 = par_maxpower;
frame_frame_numpy$polynomial$hermite$$$function__10_hermpow->m_frame.f_lineno = 593;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__10_hermpow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__10_hermpow->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__10_hermpow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__10_hermpow,
    type_description_1,
    par_c,
    par_pow,
    par_maxpower
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__10_hermpow == cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow);
    cache_frame_frame_numpy$polynomial$hermite$$$function__10_hermpow = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__10_hermpow);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__11_hermder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_m = python_pars[1];
PyObject *par_scl = python_pars[2];
PyObject *par_axis = python_pars[3];
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__11_hermder;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder = MAKE_FUNCTION_FRAME(tstate, code_objects_18aa0b57ffda43e5db3dd4aead8e0b2c, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__11_hermder = cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__11_hermder);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__11_hermder) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 649;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame.f_lineno = 649;
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


exception_lineno = 649;
type_description_1 = "oooooooooo";
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


exception_lineno = 650;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "oooooooooo";
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
CHECK_OBJECT(par_c);
tmp_expression_value_4 = par_c;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_astype);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_double);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame.f_lineno = 651;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "oooooooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 652;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_m);
tmp_args_element_value_2 = par_m;
tmp_args_element_value_3 = mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame.f_lineno = 652;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__as_int,
        call_args
    );
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cnt == NULL);
var_cnt = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 653;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
tmp_args_element_value_5 = mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01;
frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame.f_lineno = 653;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__as_int,
        call_args
    );
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_iaxis == NULL);
var_iaxis = tmp_assign_source_4;
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


exception_lineno = 654;
type_description_1 = "oooooooooo";
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
frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame.f_lineno = 655;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 655;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_9;
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_lib);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_array_utils);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_normalize_axis_index);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_6 = var_iaxis;
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_c;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame.f_lineno = 656;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_iaxis;
    assert(old != NULL);
    var_iaxis = tmp_assign_source_5;
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


exception_lineno = 658;
type_description_1 = "oooooooooo";
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

exception_lineno = 659;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_c;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = par_c;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_9 = var_iaxis;
tmp_args_element_value_10 = const_int_0;
frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame.f_lineno = 661;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_c);
tmp_len_arg_1 = par_c;
tmp_assign_source_7 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_n == NULL);
var_n = tmp_assign_source_7;
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


exception_lineno = 663;
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
PyObject *tmp_assign_source_8;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_c);
tmp_expression_value_11 = par_c;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_1_none;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 664;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = const_int_0;
tmp_assign_source_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 664;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_8;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_cnt);
tmp_xrange_low_1 = var_cnt;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 666;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_11 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_11;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_1 = var_n;
tmp_sub_expr_right_1 = 1;
tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
assert(!(tmp_assign_source_12 == NULL));
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_left_1 = par_c;
if (par_scl == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scl);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_right_1 = par_scl;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_13 = tmp_imult_expr_left_1;
par_c = tmp_assign_source_13;

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_15;
tmp_expression_value_12 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_empty);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_n);
tmp_tuple_element_2 = var_n;
tmp_add_expr_left_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_add_expr_left_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_c);
tmp_expression_value_14 = par_c;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_shape);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_none_none;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_expression_value_15 = par_c;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame.f_lineno = 669;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_der;
    var_der = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
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


exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 670;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_17 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_17;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
tmp_mult_expr_left_3 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_j);
tmp_mult_expr_right_3 = var_j;
tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_c);
tmp_expression_value_16 = par_c;
CHECK_OBJECT(var_j);
tmp_subscript_value_3 = var_j;
tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_3);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
if (var_der == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_der);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 671;
type_description_1 = "oooooooooo";
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

exception_lineno = 671;
type_description_1 = "oooooooooo";
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


exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_18;
if (var_der == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_der);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 672;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_18 = var_der;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_18;
    Py_INCREF(par_c);
    Py_DECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_17 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 673;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 673;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 673;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = par_c;
tmp_args_element_value_12 = const_int_0;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_13 = var_iaxis;
frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame.f_lineno = 673;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 673;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_19;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__11_hermder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__11_hermder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__11_hermder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__11_hermder,
    type_description_1,
    par_c,
    par_m,
    par_scl,
    par_axis,
    var_cnt,
    var_iaxis,
    var_n,
    var_i,
    var_der,
    var_j
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__11_hermder == cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder);
    cache_frame_frame_numpy$polynomial$hermite$$$function__11_hermder = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__11_hermder);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__12_hermint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__12_hermint;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint = MAKE_FUNCTION_FRAME(tstate, code_objects_017f435b902ce26d19a6e746992f8eb6, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__12_hermint = cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__12_hermint);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__12_hermint) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 758;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 758;
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


exception_lineno = 758;
type_description_1 = "oooooooooooo";
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


exception_lineno = 759;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 759;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 759;
type_description_1 = "oooooooooooo";
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
CHECK_OBJECT(par_c);
tmp_expression_value_4 = par_c;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_astype);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 760;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_double);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 760;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 760;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_1 = "oooooooooooo";
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
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 761;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_k);
tmp_args_element_value_2 = par_k;
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 761;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iterable, tmp_args_element_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 761;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 761;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_k);
tmp_list_element_1 = par_k;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_3, 0, tmp_list_element_1);
{
    PyObject *old = par_k;
    assert(old != NULL);
    par_k = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 763;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_m);
tmp_args_element_value_3 = par_m;
tmp_args_element_value_4 = mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 763;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__as_int,
        call_args
    );
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 763;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cnt == NULL);
var_cnt = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 764;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_5 = par_axis;
tmp_args_element_value_6 = mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01;
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 764;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__as_int,
        call_args
    );
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 764;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_iaxis == NULL);
var_iaxis = tmp_assign_source_5;
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


exception_lineno = 765;
type_description_1 = "oooooooooooo";
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
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 766;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 766;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
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

exception_lineno = 767;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = par_k;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 767;
type_description_1 = "oooooooooooo";
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


exception_lineno = 767;
type_description_1 = "oooooooooooo";
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
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 768;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 768;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_7;
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 769;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lbnd);
tmp_args_element_value_7 = par_lbnd;
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 769;
tmp_cmp_expr_left_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_ndim, tmp_args_element_value_7);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 769;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_int_0;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 769;
type_description_1 = "oooooooooooo";
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
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 770;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 770;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_8;
tmp_called_instance_5 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 771;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scl);
tmp_args_element_value_8 = par_scl;
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 771;
tmp_cmp_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_ndim, tmp_args_element_value_8);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_1 = "oooooooooooo";
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
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 772;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 772;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_9;
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 773;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_lib);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 773;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_array_utils);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 773;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_normalize_axis_index);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 773;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_9 = var_iaxis;
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 773;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_c;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 773;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 773;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 773;
type_description_1 = "oooooooooooo";
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


exception_lineno = 775;
type_description_1 = "oooooooooooo";
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

exception_lineno = 776;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_c;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_7:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 778;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 778;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = par_c;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_12 = var_iaxis;
tmp_args_element_value_13 = const_int_0;
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 778;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_len_arg_2;
if (par_k == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 779;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_1 = par_k;
tmp_add_expr_left_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 779;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = MAKE_LIST1(tstate, const_int_0);
CHECK_OBJECT(var_cnt);
tmp_sub_expr_left_1 = var_cnt;
if (par_k == NULL) {
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 779;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = par_k;
tmp_sub_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 779;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 779;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 779;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 779;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_cnt);
tmp_xrange_low_1 = var_cnt;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 780;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 780;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 780;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_11 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_11;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_len_arg_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 781;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_3 = par_c;
tmp_assign_source_12 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 782;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_left_1 = par_c;
if (par_scl == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scl);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 782;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_right_1 = par_scl;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 782;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_13 = tmp_imult_expr_left_1;
par_c = tmp_assign_source_13;

}
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_7;
nuitka_digit tmp_cmp_expr_right_7;
bool tmp_tmp_and_left_value_1_cbool_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_14;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_12;
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
tmp_expression_value_11 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 783;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_all);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 783;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_expression_value_12 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 783;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_8 = const_int_0;
tmp_args_element_value_14 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 783;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 783;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 783;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 783;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_assign_source_14;
CHECK_OBJECT(par_c);
tmp_assign_source_14 = par_c;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_14;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = const_int_0;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_15;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_13 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_2 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 784;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(par_k);
tmp_expression_value_14 = par_k;
CHECK_OBJECT(var_i);
tmp_subscript_value_3 = var_i;
tmp_iadd_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_3);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 784;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 784;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_17 = tmp_iadd_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_17;

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


exception_lineno = 784;
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
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_add_expr_left_3;
nuitka_digit tmp_add_expr_right_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_4;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_18;
tmp_expression_value_15 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 786;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_empty);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_n);
tmp_add_expr_left_3 = var_n;
tmp_add_expr_right_3 = 1;
tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_3, tmp_add_expr_right_3);
assert(!(tmp_tuple_element_2 == NULL));
tmp_add_expr_left_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_add_expr_left_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_c);
tmp_expression_value_17 = par_c;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_shape);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 786;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 786;
type_description_1 = "oooooooooooo";
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
Py_DECREF(tmp_called_value_6);

exception_lineno = 786;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_expression_value_18 = par_c;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 786;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 786;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_tmp;
    var_tmp = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_5;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(par_c);
tmp_expression_value_19 = par_c;
tmp_subscript_value_5 = const_int_0;
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_5, 0);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 787;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_right_2 = const_int_0;
tmp_ass_subvalue_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 787;
type_description_1 = "oooooooooooo";
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


exception_lineno = 787;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_6;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(par_c);
tmp_expression_value_20 = par_c;
tmp_subscript_value_6 = const_int_0;
tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_6, 0);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooo";
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


exception_lineno = 788;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assign_source_19;
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


exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_19 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_20 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_20 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 789;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_21 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_21;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_7;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
CHECK_OBJECT(par_c);
tmp_expression_value_21 = par_c;
CHECK_OBJECT(var_j);
tmp_subscript_value_7 = var_j;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_7);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_mult_expr_left_3 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_j);
tmp_add_expr_left_4 = var_j;
tmp_add_expr_right_4 = const_int_pos_1;
tmp_mult_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_truediv_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_ass_subvalue_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
if (var_tmp == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_4 = var_tmp;
CHECK_OBJECT(var_j);
tmp_add_expr_left_5 = var_j;
tmp_add_expr_right_5 = const_int_pos_1;
tmp_ass_subscript_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_ass_subscript_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 790;
type_description_1 = "oooooooooooo";
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


exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 789;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_assign_source_22;
if (var_tmp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_22 = var_tmp;
{
    PyObject *old = tmp_inplace_assign_subscript_2__target;
    tmp_inplace_assign_subscript_2__target = tmp_assign_source_22;
    Py_INCREF(tmp_inplace_assign_subscript_2__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = const_int_0;
{
    PyObject *old = tmp_inplace_assign_subscript_2__subscript;
    tmp_inplace_assign_subscript_2__subscript = tmp_assign_source_23;
    Py_INCREF(tmp_inplace_assign_subscript_2__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_expression_value_22 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_subscript_value_8 = tmp_inplace_assign_subscript_2__subscript;
tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_8);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_inplace_assign_subscript_2__value;
    tmp_inplace_assign_subscript_2__value = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_9;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_iadd_expr_left_2 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(par_k);
tmp_expression_value_23 = par_k;
CHECK_OBJECT(var_i);
tmp_subscript_value_9 = var_i;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_9);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_7 = module_var_accessor_numpy$polynomial$hermite$hermval(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermval);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
if (par_lbnd == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lbnd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_15 = par_lbnd;
if (var_tmp == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_16 = var_tmp;
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 791;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_sub_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 791;
type_description_1 = "oooooooooooo";
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


exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_25 = tmp_iadd_expr_left_2;
tmp_inplace_assign_subscript_2__value = tmp_assign_source_25;

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


exception_lineno = 791;
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
PyObject *tmp_assign_source_26;
if (var_tmp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 792;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_26 = var_tmp;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_26;
    Py_INCREF(par_c);
    Py_DECREF(old);
}

}
branch_end_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 780;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
tmp_expression_value_24 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 793;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 793;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 793;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_17 = par_c;
tmp_args_element_value_18 = const_int_0;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_19 = var_iaxis;
frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame.f_lineno = 793;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 793;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_27;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__12_hermint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__12_hermint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__12_hermint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__12_hermint,
    type_description_1,
    par_c,
    par_m,
    par_k,
    par_lbnd,
    par_scl,
    par_axis,
    var_cnt,
    var_iaxis,
    var_i,
    var_n,
    var_tmp,
    var_j
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__12_hermint == cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint);
    cache_frame_frame_numpy$polynomial$hermite$$$function__12_hermint = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__12_hermint);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__13_hermval(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_c = python_pars[1];
PyObject *par_tensor = python_pars[2];
PyObject *var_x2 = NULL;
PyObject *var_c0 = NULL;
PyObject *var_c1 = NULL;
PyObject *var_nd = NULL;
PyObject *var_i = NULL;
PyObject *var_tmp = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__13_hermval;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval = MAKE_FUNCTION_FRAME(tstate, code_objects_25fadc46b1741be57ed40902b39db9de, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__13_hermval = cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__13_hermval);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__13_hermval) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 864;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 864;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
frame_frame_numpy$polynomial$hermite$$$function__13_hermval->m_frame.f_lineno = 864;
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


exception_lineno = 864;
type_description_1 = "ooooooooo";
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


exception_lineno = 865;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 865;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 865;
type_description_1 = "ooooooooo";
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
CHECK_OBJECT(par_c);
tmp_expression_value_4 = par_c;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_astype);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 866;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 866;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_double);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 866;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__13_hermval->m_frame.f_lineno = 866;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 866;
type_description_1 = "ooooooooo";
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


exception_lineno = 867;
type_description_1 = "ooooooooo";
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 868;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
frame_frame_numpy$polynomial$hermite$$$function__13_hermval->m_frame.f_lineno = 868;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "ooooooooo";
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
PyObject *tmp_expression_value_6;
int tmp_truth_name_1;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_2 = par_x;
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 869;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "ooooooooo";
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


exception_lineno = 869;
type_description_1 = "ooooooooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_9;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 870;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_c;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_reshape);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 870;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 870;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_c;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 870;
type_description_1 = "ooooooooo";
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

exception_lineno = 870;
type_description_1 = "ooooooooo";
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

exception_lineno = 870;
type_description_1 = "ooooooooo";
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

exception_lineno = 870;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__13_hermval->m_frame.f_lineno = 870;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 870;
type_description_1 = "ooooooooo";
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
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
CHECK_OBJECT(par_x);
tmp_mult_expr_left_2 = par_x;
tmp_mult_expr_right_2 = mod_consts.const_int_pos_2;
tmp_assign_source_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_x2 == NULL);
var_x2 = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 873;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = par_c;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 873;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 1;
tmp_condition_result_4 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 874;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 874;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = const_int_0;
assert(var_c1 == NULL);
Py_INCREF(tmp_assign_source_7);
var_c1 = tmp_assign_source_7;
}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_2;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 876;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = par_c;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 2;
tmp_condition_result_5 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 877;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_c;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 877;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 878;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_c;
tmp_subscript_value_3 = const_int_pos_1;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_3, 1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c1 == NULL);
var_c1 = tmp_assign_source_9;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_len_arg_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 880;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_3 = par_c;
tmp_assign_source_10 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_nd == NULL);
var_nd = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 881;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = par_c;
tmp_subscript_value_4 = mod_consts.const_int_neg_2;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_4, -2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 881;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_5;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 882;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = par_c;
tmp_subscript_value_5 = const_int_neg_1;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_5, -1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 882;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c1 == NULL);
var_c1 = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_add_expr_left_2;
nuitka_digit tmp_add_expr_right_2;
PyObject *tmp_len_arg_4;
tmp_xrange_low_1 = mod_consts.const_int_pos_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 883;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_4 = par_c;
tmp_add_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = 1;
tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
assert(!(tmp_xrange_high_1 == NULL));
tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "ooooooooo";
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
tmp_assign_source_14 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 883;
        goto try_except_handler_2;
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_15;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 884;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_16 = var_c0;
{
    PyObject *old = var_tmp;
    var_tmp = tmp_assign_source_16;
    Py_INCREF(var_tmp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
if (var_nd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 885;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_1 = var_nd;
tmp_sub_expr_right_1 = 1;
tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
assert(!(tmp_assign_source_17 == NULL));
{
    PyObject *old = var_nd;
    var_nd = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_sub_expr_left_3;
nuitka_digit tmp_sub_expr_right_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 886;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_15 = par_c;
CHECK_OBJECT(var_i);
tmp_operand_value_1 = var_i;
tmp_subscript_value_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_subscript_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
if (var_c1 == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 886;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_3 = var_c1;
tmp_mult_expr_left_4 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_nd);
tmp_sub_expr_left_3 = var_nd;
tmp_sub_expr_right_3 = 1;
tmp_mult_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
assert(!(tmp_mult_expr_right_4 == NULL));
tmp_mult_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_right_4, tmp_mult_expr_left_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
assert(!(tmp_mult_expr_right_3 == NULL));
tmp_sub_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 886;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_c0;
    var_c0 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
CHECK_OBJECT(var_tmp);
tmp_add_expr_left_3 = var_tmp;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 887;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_5 = var_c1;
if (var_x2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 887;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_right_5 = var_x2;
tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 887;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 887;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_c1;
    var_c1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
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
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_end_5:;
branch_end_4:;
{
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 888;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_4 = var_c0;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 888;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_left_6 = var_c1;
if (var_x2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 888;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_right_6 = var_x2;
tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 888;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 888;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__13_hermval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__13_hermval->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__13_hermval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__13_hermval,
    type_description_1,
    par_x,
    par_c,
    par_tensor,
    var_x2,
    var_c0,
    var_c1,
    var_nd,
    var_i,
    var_tmp
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__13_hermval == cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval);
    cache_frame_frame_numpy$polynomial$hermite$$$function__13_hermval = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__13_hermval);

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
Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_x2);
var_x2 = NULL;
Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_c1);
var_c1 = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
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
Py_XDECREF(var_x2);
var_x2 = NULL;
Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_c1);
var_c1 = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
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


static PyObject *impl_numpy$polynomial$hermite$$$function__14_hermval2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d = MAKE_FUNCTION_FRAME(tstate, code_objects_b153044997c6a252a0dcea06b538daeb, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d = cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 941;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__valnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 941;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite$hermval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 941;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d->m_frame.f_lineno = 941;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 941;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d,
    type_description_1,
    par_x,
    par_y,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d == cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d);
    cache_frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__14_hermval2d);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__15_hermgrid2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d = MAKE_FUNCTION_FRAME(tstate, code_objects_1c3c9681356165a33ff68d30fc0946f0, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d = cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1000;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__gridnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1000;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite$hermval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1000;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d->m_frame.f_lineno = 1000;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1000;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d,
    type_description_1,
    par_x,
    par_y,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d == cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d);
    cache_frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__15_hermgrid2d);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__16_hermval3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_c = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d = MAKE_FUNCTION_FRAME(tstate, code_objects_b507f2bbc2bbedc03c902486d82637db, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d = cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1056;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__valnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1056;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite$hermval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1056;
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
frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d->m_frame.f_lineno = 1056;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1056;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d == cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d);
    cache_frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__16_hermval3d);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__17_hermgrid3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_c = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d = MAKE_FUNCTION_FRAME(tstate, code_objects_8499f24b1cd581e3371eee01cb535d79, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d = cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1120;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__gridnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1120;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite$hermval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1120;
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
frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d->m_frame.f_lineno = 1120;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1120;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d == cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d);
    cache_frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__17_hermgrid3d);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__18_hermvander(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *var_x2 = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__18_hermvander;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander = MAKE_FUNCTION_FRAME(tstate, code_objects_3405d587ec82725072400c6e7e57308b, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__18_hermvander = cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__18_hermvander);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__18_hermvander) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1168;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deg);
tmp_args_element_value_1 = par_deg;
tmp_args_element_value_2 = mod_consts.const_str_plain_deg;
frame_frame_numpy$polynomial$hermite$$$function__18_hermvander->m_frame.f_lineno = 1168;
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


exception_lineno = 1168;
type_description_1 = "oooooooo";
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


exception_lineno = 1169;
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360;
frame_frame_numpy$polynomial$hermite$$$function__18_hermvander->m_frame.f_lineno = 1170;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1170;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1172;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1172;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
frame_frame_numpy$polynomial$hermite$$$function__18_hermvander->m_frame.f_lineno = 1172;
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


exception_lineno = 1172;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = const_float_0_0;
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1172;
type_description_1 = "oooooooo";
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


exception_lineno = 1173;
type_description_1 = "oooooooo";
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

exception_lineno = 1173;
type_description_1 = "oooooooo";
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


exception_lineno = 1173;
type_description_1 = "oooooooo";
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


exception_lineno = 1174;
type_description_1 = "oooooooo";
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
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1175;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_empty);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1175;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dims);
tmp_kw_call_arg_value_0_1 = var_dims;
CHECK_OBJECT(var_dtyp);
tmp_kw_call_dict_value_0_1 = var_dtyp;
frame_frame_numpy$polynomial$hermite$$$function__18_hermvander->m_frame.f_lineno = 1175;
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


exception_lineno = 1175;
type_description_1 = "oooooooo";
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


exception_lineno = 1176;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = const_int_pos_1;
tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1176;
type_description_1 = "oooooooo";
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


exception_lineno = 1176;
type_description_1 = "oooooooo";
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


exception_lineno = 1177;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
CHECK_OBJECT(par_x);
tmp_mult_expr_left_2 = par_x;
tmp_mult_expr_right_2 = mod_consts.const_int_pos_2;
tmp_assign_source_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1178;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_x2 == NULL);
var_x2 = tmp_assign_source_6;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(var_x2);
tmp_ass_subvalue_2 = var_x2;
CHECK_OBJECT(var_v);
tmp_ass_subscribed_2 = var_v;
tmp_ass_subscript_2 = const_int_pos_1;
tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
if (tmp_ass_subscript_res_2 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1179;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_7;
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


exception_lineno = 1180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 1180;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_9 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_9;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_v;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_2 = var_i;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_subscript_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (var_x2 == NULL) {
Py_DECREF(tmp_mult_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_right_3 = var_x2;
tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (var_v == NULL) {
Py_DECREF(tmp_sub_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = var_v;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_3 = var_i;
tmp_sub_expr_right_3 = mod_consts.const_int_pos_2;
tmp_subscript_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_5 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_4 = var_i;
tmp_sub_expr_right_4 = const_int_pos_1;
tmp_mult_expr_right_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
if (tmp_mult_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);
Py_DECREF(tmp_mult_expr_left_4);

exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
CHECK_OBJECT(tmp_mult_expr_right_5);
Py_DECREF(tmp_mult_expr_right_5);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);
Py_DECREF(tmp_mult_expr_left_4);

exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (var_v == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1181;
type_description_1 = "oooooooo";
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


exception_lineno = 1181;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1180;
type_description_1 = "oooooooo";
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
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1182;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1182;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (var_v == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1182;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_v;
tmp_args_element_value_4 = const_int_0;
tmp_args_element_value_5 = const_int_neg_1;
frame_frame_numpy$polynomial$hermite$$$function__18_hermvander->m_frame.f_lineno = 1182;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1182;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__18_hermvander, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__18_hermvander->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__18_hermvander, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__18_hermvander,
    type_description_1,
    par_x,
    par_deg,
    var_ideg,
    var_dims,
    var_dtyp,
    var_v,
    var_x2,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__18_hermvander == cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander);
    cache_frame_frame_numpy$polynomial$hermite$$$function__18_hermvander = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__18_hermvander);

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
Py_XDECREF(var_x2);
var_x2 = NULL;
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
Py_XDECREF(var_x2);
var_x2 = NULL;
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


static PyObject *impl_numpy$polynomial$hermite$$$function__19_hermvander2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_deg = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d = MAKE_FUNCTION_FRAME(tstate, code_objects_dea06d490e88e77dfdd0ff0c8db8f278, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d = cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1241;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__vander_nd_flat);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1241;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite$hermvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1241;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite$hermvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1241;
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
frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d->m_frame.f_lineno = 1241;
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


exception_lineno = 1241;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d,
    type_description_1,
    par_x,
    par_y,
    par_deg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d == cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d);
    cache_frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__19_hermvander2d);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__20_hermvander3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_deg = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d = MAKE_FUNCTION_FRAME(tstate, code_objects_965f7407e8505e3e6f892e4b56b2dffc, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d = cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1301;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__vander_nd_flat);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1301;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite$hermvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1301;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite$hermvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1301;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite$hermvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1301;
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
frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d->m_frame.f_lineno = 1301;
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


exception_lineno = 1301;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_deg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d == cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d);
    cache_frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__20_hermvander3d);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__21_hermfit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__21_hermfit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit = MAKE_FUNCTION_FRAME(tstate, code_objects_0b8afc4b5b5df8090b14cbc9a76ce7f6, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__21_hermfit = cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__21_hermfit);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__21_hermfit) == 2);

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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1435;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fit);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1435;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite$hermvander(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermvander);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1435;
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
frame_frame_numpy$polynomial$hermite$$$function__21_hermfit->m_frame.f_lineno = 1435;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1435;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__21_hermfit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__21_hermfit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__21_hermfit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__21_hermfit,
    type_description_1,
    par_x,
    par_y,
    par_deg,
    par_rcond,
    par_full,
    par_w
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__21_hermfit == cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit);
    cache_frame_frame_numpy$polynomial$hermite$$$function__21_hermfit = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__21_hermfit);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__22_hermcompanion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *var_n = NULL;
PyObject *var_mat = NULL;
PyObject *var_scl = NULL;
PyObject *var_top = NULL;
PyObject *var_bot = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion = MAKE_FUNCTION_FRAME(tstate, code_objects_edce7aae1b2debbf3443841f37bf4269, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion = cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1467;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1467;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1467;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1467;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1467;
type_description_1 = "oooooo";
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



exception_lineno = 1467;
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


exception_lineno = 1468;
type_description_1 = "oooooo";
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
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1469;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1469;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
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


exception_lineno = 1470;
type_description_1 = "oooooo";
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
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1471;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1471;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_float_minus_0_5;
CHECK_OBJECT(par_c);
tmp_expression_value_2 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1471;
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

exception_lineno = 1471;
type_description_1 = "oooooo";
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

exception_lineno = 1471;
type_description_1 = "oooooo";
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

exception_lineno = 1471;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_list_element_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_list_element_2, 0, tmp_list_element_3);
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1471;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1471;
type_description_1 = "oooooo";
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


exception_lineno = 1473;
type_description_1 = "oooooo";
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
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1474;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_zeros);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1474;
type_description_1 = "oooooo";
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

exception_lineno = 1474;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1474;
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


exception_lineno = 1474;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_mat == NULL);
var_mat = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_2;
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1475;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_hstack);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1475;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = const_float_1_0;
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_sub_expr_left_2;
nuitka_digit tmp_sub_expr_right_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_2);
tmp_truediv_expr_left_2 = const_float_1_0;
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1475;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1475;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_mult_expr_left_2 = mod_consts.const_float_2_0;
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 1475;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_arange);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1475;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_n);
tmp_sub_expr_left_2 = var_n;
tmp_sub_expr_right_2 = 1;
tmp_args_element_value_5 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
assert(!(tmp_args_element_value_5 == NULL));
tmp_args_element_value_6 = const_int_0;
tmp_args_element_value_7 = const_int_neg_1;
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1475;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_mult_expr_right_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1475;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_args_element_value_4 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1475;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1475;
tmp_truediv_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1475;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1475;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_3, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1475;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1475;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_scl == NULL);
var_scl = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_8;
PyObject *tmp_subscript_value_3;
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1476;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_multiply);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1476;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_scl);
tmp_args_element_value_8 = var_scl;
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1476;
tmp_expression_value_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_accumulate, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1476;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_slice_none_none_int_neg_1;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1476;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_scl;
    assert(old != NULL);
    var_scl = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_instance_3;
PyObject *tmp_subscript_value_4;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_step_value_1;
PyObject *tmp_add_expr_left_1;
nuitka_digit tmp_add_expr_right_1;
CHECK_OBJECT(var_mat);
tmp_called_instance_3 = var_mat;
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1477;
tmp_expression_value_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_reshape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_tuple, 0)
);

if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1477;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_start_value_1 = const_int_pos_1;
tmp_stop_value_1 = Py_None;
CHECK_OBJECT(var_n);
tmp_add_expr_left_1 = var_n;
tmp_add_expr_right_1 = 1;
tmp_step_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
assert(!(tmp_step_value_1 == NULL));
tmp_subscript_value_4 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
CHECK_OBJECT(tmp_step_value_1);
Py_DECREF(tmp_step_value_1);
assert(!(tmp_subscript_value_4 == NULL));
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1477;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_top == NULL);
var_top = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_instance_4;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
PyObject *tmp_step_value_2;
PyObject *tmp_add_expr_left_2;
nuitka_digit tmp_add_expr_right_2;
CHECK_OBJECT(var_mat);
tmp_called_instance_4 = var_mat;
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1478;
tmp_expression_value_12 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_reshape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_tuple, 0)
);

if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1478;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n);
tmp_start_value_2 = var_n;
tmp_stop_value_2 = Py_None;
CHECK_OBJECT(var_n);
tmp_add_expr_left_2 = var_n;
tmp_add_expr_right_2 = 1;
tmp_step_value_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
assert(!(tmp_step_value_2 == NULL));
tmp_subscript_value_5 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_2, tmp_stop_value_2, tmp_step_value_2);
CHECK_OBJECT(tmp_step_value_2);
Py_DECREF(tmp_step_value_2);
assert(!(tmp_subscript_value_5 == NULL));
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1478;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_bot == NULL);
var_bot = tmp_assign_source_9;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_9;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_13 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_3 = mod_consts.const_float_0_5;
tmp_called_instance_5 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 1479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = const_int_pos_1;
CHECK_OBJECT(var_n);
tmp_args_element_value_11 = var_n;
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1479;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_mult_expr_right_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_arange,
        call_args
    );
}

if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame.f_lineno = 1479;
tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_top);
tmp_ass_subscribed_1 = var_top;
tmp_ass_subscript_1 = Py_Ellipsis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_top);
tmp_ass_subvalue_2 = var_top;
CHECK_OBJECT(var_bot);
tmp_ass_subscribed_2 = var_bot;
tmp_ass_subscript_2 = Py_Ellipsis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1480;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(var_mat);
tmp_assign_source_10 = var_mat;
assert(tmp_inplace_assign_subscript_1__target == NULL);
Py_INCREF(tmp_assign_source_10);
tmp_inplace_assign_subscript_1__target = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_14 = tmp_inplace_assign_subscript_1__target;
tmp_subscript_value_6 = mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1481;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(tmp_inplace_assign_subscript_1__value == NULL);
tmp_inplace_assign_subscript_1__value = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_7;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(var_scl);
tmp_mult_expr_left_4 = var_scl;
CHECK_OBJECT(par_c);
tmp_expression_value_15 = par_c;
tmp_subscript_value_7 = mod_consts.const_slice_none_int_neg_1_none;
tmp_mult_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_7);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1481;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1481;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_mult_expr_left_5 = mod_consts.const_float_2_0;
CHECK_OBJECT(par_c);
tmp_expression_value_16 = par_c;
tmp_subscript_value_8 = const_int_neg_1;
tmp_mult_expr_right_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_8, -1);
if (tmp_mult_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_3);

exception_lineno = 1481;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_truediv_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
CHECK_OBJECT(tmp_mult_expr_right_5);
Py_DECREF(tmp_mult_expr_right_5);
if (tmp_truediv_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_3);

exception_lineno = 1481;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_isub_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
CHECK_OBJECT(tmp_truediv_expr_right_3);
Py_DECREF(tmp_truediv_expr_right_3);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1481;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1481;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_assign_source_12 = tmp_isub_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_12;

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_3 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_3 = tmp_inplace_assign_subscript_1__target;
tmp_ass_subscript_3 = mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1481;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion,
    type_description_1,
    par_c,
    var_n,
    var_mat,
    var_scl,
    var_top,
    var_bot
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion == cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion);
    cache_frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__22_hermcompanion);

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
Py_XDECREF(var_scl);
var_scl = NULL;
Py_XDECREF(var_top);
var_top = NULL;
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
Py_XDECREF(var_scl);
var_scl = NULL;
Py_XDECREF(var_top);
var_top = NULL;
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


static PyObject *impl_numpy$polynomial$hermite$$$function__23_hermroots(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__23_hermroots;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots = MAKE_FUNCTION_FRAME(tstate, code_objects_3728af51cfced223d63b4c6c8bdeb6b8, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__23_hermroots = cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__23_hermroots);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__23_hermroots) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1536;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$hermite$$$function__23_hermroots->m_frame.f_lineno = 1536;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1536;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1536;
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



exception_lineno = 1536;
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



exception_lineno = 1536;
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


exception_lineno = 1537;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1538;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1538;
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

exception_lineno = 1538;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_call_pos_args_values_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_empty_tuple, "l");
frame_frame_numpy$polynomial$hermite$$$function__23_hermroots->m_frame.f_lineno = 1538;
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


exception_lineno = 1538;
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


exception_lineno = 1539;
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
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
tmp_expression_value_3 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1540;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_array);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1540;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_float_minus_0_5;
CHECK_OBJECT(par_c);
tmp_expression_value_4 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1540;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1540;
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

exception_lineno = 1540;
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

exception_lineno = 1540;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$hermite$$$function__23_hermroots->m_frame.f_lineno = 1540;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1540;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_3;
tmp_called_value_3 = module_var_accessor_numpy$polynomial$hermite$hermcompanion(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermcompanion);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_3 = par_c;
frame_frame_numpy$polynomial$hermite$$$function__23_hermroots->m_frame.f_lineno = 1543;
tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_m == NULL);
var_m = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1544;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_linalg);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1544;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_4 = var_m;
frame_frame_numpy$polynomial$hermite$$$function__23_hermroots->m_frame.f_lineno = 1544;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_eigvals, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1544;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_r == NULL);
var_r = tmp_assign_source_5;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_r);
tmp_expression_value_8 = var_r;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_sort);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1545;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__23_hermroots->m_frame.f_lineno = 1545;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1545;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__23_hermroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__23_hermroots->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__23_hermroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__23_hermroots,
    type_description_1,
    par_c,
    var_m,
    var_r
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__23_hermroots == cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots);
    cache_frame_frame_numpy$polynomial$hermite$$$function__23_hermroots = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__23_hermroots);

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


static PyObject *impl_numpy$polynomial$hermite$$$function__24__normed_hermite_n(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *var_c0 = NULL;
PyObject *var_c1 = NULL;
PyObject *var_nd = NULL;
PyObject *var_i = NULL;
PyObject *var_tmp = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n = MAKE_FUNCTION_FRAME(tstate, code_objects_3b85cada2d5edb151f9678f3c5492ac3, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n = cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_n);
tmp_cmp_expr_left_1 = par_n;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1576;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_full);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_expression_value_2 = par_x;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = const_int_pos_1;
tmp_expression_value_3 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pi);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_frame.f_lineno = 1577;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_frame.f_lineno = 1577;
tmp_truediv_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_frame.f_lineno = 1577;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
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


exception_lineno = 1577;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_float_0_0;
assert(var_c0 == NULL);
Py_INCREF(tmp_assign_source_1);
var_c0 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_8;
tmp_truediv_expr_left_2 = const_float_1_0;
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1580;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1580;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 1580;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1580;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 1580;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pi);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 1580;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_frame.f_lineno = 1580;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1580;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_frame.f_lineno = 1580;
tmp_truediv_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1580;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1580;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_c1 == NULL);
var_c1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_float_arg_1;
CHECK_OBJECT(par_n);
tmp_float_arg_1 = par_n;
tmp_assign_source_3 = TO_FLOAT(tmp_float_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1581;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_nd == NULL);
var_nd = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_n);
tmp_sub_expr_left_1 = par_n;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_xrange_low_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1582;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1582;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1582;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 1582;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_6;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1583;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_7 = var_c0;
{
    PyObject *old = var_tmp;
    var_tmp = tmp_assign_source_7;
    Py_INCREF(var_tmp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_operand_value_1 = var_c1;
tmp_mult_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_9 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_nd == NULL) {
Py_DECREF(tmp_mult_expr_left_1);
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_2 = var_nd;
tmp_sub_expr_right_2 = const_float_1_0;
tmp_truediv_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_nd == NULL) {
Py_DECREF(tmp_mult_expr_left_1);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_truediv_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_truediv_expr_right_3 = var_nd;
tmp_args_element_value_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_frame.f_lineno = 1584;
tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1584;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_c0;
    var_c0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_8;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
CHECK_OBJECT(var_tmp);
tmp_add_expr_left_1 = var_tmp;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_3 = var_c1;
if (par_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_right_3 = par_x;
tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_truediv_expr_left_4 = mod_consts.const_float_2_0;
if (var_nd == NULL) {
Py_DECREF(tmp_mult_expr_left_2);
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_truediv_expr_right_4 = var_nd;
tmp_args_element_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);
Py_DECREF(tmp_called_value_7);

exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_frame.f_lineno = 1585;
tmp_mult_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1585;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_c1;
    var_c1 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
if (var_nd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1586;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_3 = var_nd;
tmp_sub_expr_right_3 = const_float_1_0;
tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1586;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_nd;
    var_nd = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1582;
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
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_called_instance_1;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1587;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_2 = var_c0;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1587;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_left_5 = var_c1;
if (par_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1587;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_right_5 = par_x;
tmp_mult_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1587;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_mult_expr_left_4);

exception_lineno = 1587;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_frame.f_lineno = 1587;
tmp_mult_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_sqrt,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_4);

exception_lineno = 1587;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1587;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1587;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n,
    type_description_1,
    par_x,
    par_n,
    var_c0,
    var_c1,
    var_nd,
    var_i,
    var_tmp
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n == cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n);
    cache_frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__24__normed_hermite_n);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_c1);
var_c1 = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_c0);
var_c0 = NULL;
Py_XDECREF(var_c1);
var_c1 = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_tmp);
var_tmp = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$polynomial$hermite$$$function__25_hermgauss(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_deg = python_pars[0];
PyObject *var_ideg = NULL;
PyObject *var_c = NULL;
PyObject *var_m = NULL;
PyObject *var_x = NULL;
PyObject *var_dy = NULL;
PyObject *var_df = NULL;
PyObject *var_fm = NULL;
PyObject *var_w = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss = MAKE_FUNCTION_FRAME(tstate, code_objects_5e76c7df62726874d034de8f698df03f, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss = cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1629;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deg);
tmp_args_element_value_1 = par_deg;
tmp_args_element_value_2 = mod_consts.const_str_plain_deg;
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1629;
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


exception_lineno = 1629;
type_description_1 = "ooooooooo";
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
tmp_condition_result_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710;
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1631;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1631;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = MAKE_LIST1(tstate, const_int_0);
CHECK_OBJECT(par_deg);
tmp_mult_expr_right_1 = par_deg;
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = MAKE_LIST1(tstate, const_int_pos_1);
tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 1635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_float64);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 1635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1635;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c == NULL);
var_c = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_numpy$polynomial$hermite$hermcompanion(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermcompanion);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1636;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_c);
tmp_args_element_value_3 = var_c;
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1636;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1636;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_m == NULL);
var_m = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_3 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1637;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_linalg);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1637;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_4 = var_m;
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1637;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_eigvalsh, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1637;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_x == NULL);
var_x = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_numpy$polynomial$hermite$_normed_hermite_n(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__normed_hermite_n);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1640;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_5 = var_x;
CHECK_OBJECT(var_ideg);
tmp_args_element_value_6 = var_ideg;
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1640;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1640;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dy == NULL);
var_dy = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
tmp_called_value_4 = module_var_accessor_numpy$polynomial$hermite$_normed_hermite_n(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__normed_hermite_n);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1641;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_7 = var_x;
CHECK_OBJECT(var_ideg);
tmp_sub_expr_left_1 = var_ideg;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_args_element_value_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1641;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1641;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_mult_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1641;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1641;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1641;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_3 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_ideg);
tmp_mult_expr_right_3 = var_ideg;
tmp_args_element_value_9 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);
Py_DECREF(tmp_called_value_5);

exception_lineno = 1641;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1641;
tmp_mult_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1641;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1641;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_df == NULL);
var_df = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
CHECK_OBJECT(var_x);
tmp_isub_expr_left_1 = var_x;
CHECK_OBJECT(var_dy);
tmp_truediv_expr_left_1 = var_dy;
CHECK_OBJECT(var_df);
tmp_truediv_expr_right_1 = var_df;
tmp_isub_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1642;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1642;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_isub_expr_left_1;
var_x = tmp_assign_source_7;

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
tmp_called_value_6 = module_var_accessor_numpy$polynomial$hermite$_normed_hermite_n(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__normed_hermite_n);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1646;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_10 = var_x;
CHECK_OBJECT(var_ideg);
tmp_sub_expr_left_2 = var_ideg;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_args_element_value_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1646;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1646;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1646;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_fm == NULL);
var_fm = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_itruediv_expr_left_1;
PyObject *tmp_itruediv_expr_right_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(var_fm);
tmp_itruediv_expr_left_1 = var_fm;
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1647;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fm);
tmp_args_element_value_12 = var_fm;
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1647;
tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_abs, tmp_args_element_value_12);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1647;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1647;
tmp_itruediv_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_max);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_itruediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1647;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
CHECK_OBJECT(tmp_itruediv_expr_right_1);
Py_DECREF(tmp_itruediv_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1647;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = tmp_itruediv_expr_left_1;
var_fm = tmp_assign_source_9;

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
tmp_truediv_expr_left_2 = const_int_pos_1;
CHECK_OBJECT(var_fm);
tmp_mult_expr_left_4 = var_fm;
CHECK_OBJECT(var_fm);
tmp_mult_expr_right_4 = var_fm;
tmp_truediv_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1648;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1648;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_w == NULL);
var_w = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_w);
tmp_add_expr_left_2 = var_w;
CHECK_OBJECT(var_w);
tmp_expression_value_5 = var_w;
tmp_subscript_value_1 = mod_consts.const_slice_none_none_int_neg_1;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1651;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1651;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_3 = mod_consts.const_int_pos_2;
tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1651;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_w;
    assert(old != NULL);
    var_w = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_x);
tmp_sub_expr_left_3 = var_x;
CHECK_OBJECT(var_x);
tmp_expression_value_6 = var_x;
tmp_subscript_value_2 = mod_consts.const_slice_none_none_int_neg_1;
tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1652;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_truediv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1652;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_4 = mod_consts.const_int_pos_2;
tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
CHECK_OBJECT(tmp_truediv_expr_left_4);
Py_DECREF(tmp_truediv_expr_left_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1652;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_x;
    assert(old != NULL);
    var_x = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
PyObject *tmp_truediv_expr_left_5;
PyObject *tmp_truediv_expr_right_5;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_w);
tmp_imult_expr_left_1 = var_w;
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1655;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1655;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 1655;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pi);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 1655;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1655;
tmp_truediv_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_truediv_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1655;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_w);
tmp_called_instance_5 = var_w;
frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame.f_lineno = 1655;
tmp_truediv_expr_right_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, const_str_plain_sum);
if (tmp_truediv_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_5);

exception_lineno = 1655;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_imult_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
CHECK_OBJECT(tmp_truediv_expr_left_5);
Py_DECREF(tmp_truediv_expr_left_5);
CHECK_OBJECT(tmp_truediv_expr_right_5);
Py_DECREF(tmp_truediv_expr_right_5);
if (tmp_imult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1655;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
CHECK_OBJECT(tmp_imult_expr_right_1);
Py_DECREF(tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1655;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = tmp_imult_expr_left_1;
var_w = tmp_assign_source_13;

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss,
    type_description_1,
    par_deg,
    var_ideg,
    var_c,
    var_m,
    var_x,
    var_dy,
    var_df,
    var_fm,
    var_w
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss == cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss);
    cache_frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__25_hermgauss);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_x);
tmp_tuple_element_1 = var_x;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_w);
tmp_tuple_element_1 = var_w;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ideg);
CHECK_OBJECT(var_ideg);
Py_DECREF(var_ideg);
var_ideg = NULL;
CHECK_OBJECT(var_c);
CHECK_OBJECT(var_c);
Py_DECREF(var_c);
var_c = NULL;
CHECK_OBJECT(var_m);
CHECK_OBJECT(var_m);
Py_DECREF(var_m);
var_m = NULL;
CHECK_OBJECT(var_x);
CHECK_OBJECT(var_x);
Py_DECREF(var_x);
var_x = NULL;
CHECK_OBJECT(var_dy);
CHECK_OBJECT(var_dy);
Py_DECREF(var_dy);
var_dy = NULL;
CHECK_OBJECT(var_df);
CHECK_OBJECT(var_df);
Py_DECREF(var_df);
var_df = NULL;
CHECK_OBJECT(var_fm);
CHECK_OBJECT(var_fm);
Py_DECREF(var_fm);
var_fm = NULL;
CHECK_OBJECT(var_w);
CHECK_OBJECT(var_w);
Py_DECREF(var_w);
var_w = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ideg);
var_ideg = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_dy);
var_dy = NULL;
Py_XDECREF(var_df);
var_df = NULL;
Py_XDECREF(var_fm);
var_fm = NULL;
Py_XDECREF(var_w);
var_w = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl_numpy$polynomial$hermite$$$function__26_hermweight(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *var_w = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$function__26_hermweight;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight = MAKE_FUNCTION_FRAME(tstate, code_objects_56d6766736c9f5a5129564aaf68bae58, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite$$$function__26_hermweight = cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$function__26_hermweight);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$function__26_hermweight) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1687;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exp);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1687;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_pow_expr_left_1 = par_x;
tmp_pow_expr_right_1 = mod_consts.const_int_pos_2;
tmp_operand_value_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1687;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1687;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite$$$function__26_hermweight->m_frame.f_lineno = 1687;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1687;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_w == NULL);
var_w = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$function__26_hermweight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$function__26_hermweight->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$function__26_hermweight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$function__26_hermweight,
    type_description_1,
    par_x,
    var_w
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite$$$function__26_hermweight == cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight);
    cache_frame_frame_numpy$polynomial$hermite$$$function__26_hermweight = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite$$$function__26_hermweight);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_w);
tmp_return_value = var_w;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_w);
CHECK_OBJECT(var_w);
Py_DECREF(var_w);
var_w = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__10_hermpow(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__10_hermpow,
        mod_consts.const_str_plain_hermpow,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d1e76959b75cba4036610da854f1d351,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_da5501e8e216a8a52345697e4ca88221,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__11_hermder(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__11_hermder,
        mod_consts.const_str_plain_hermder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_18aa0b57ffda43e5db3dd4aead8e0b2c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_d2d570c406269203ea5411658e8087de,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__12_hermint(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__12_hermint,
        mod_consts.const_str_plain_hermint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_017f435b902ce26d19a6e746992f8eb6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_c0e159cdb288f04a6dfa123c65618923,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__13_hermval(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__13_hermval,
        mod_consts.const_str_plain_hermval,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_25fadc46b1741be57ed40902b39db9de,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_896f19472d3d516ca02cc9d39d17705e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__14_hermval2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__14_hermval2d,
        mod_consts.const_str_plain_hermval2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b153044997c6a252a0dcea06b538daeb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_0a31ed0baf73e514405d32ea1357592d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__15_hermgrid2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__15_hermgrid2d,
        mod_consts.const_str_plain_hermgrid2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1c3c9681356165a33ff68d30fc0946f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_4a7aa0cda761a731f76bbb05687efc31,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__16_hermval3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__16_hermval3d,
        mod_consts.const_str_plain_hermval3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b507f2bbc2bbedc03c902486d82637db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_df0f483edc103f0ef4cb14a992951c35,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__17_hermgrid3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__17_hermgrid3d,
        mod_consts.const_str_plain_hermgrid3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8499f24b1cd581e3371eee01cb535d79,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_f299f52498edf6ee1fbed2510d69ddbb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__18_hermvander(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__18_hermvander,
        mod_consts.const_str_plain_hermvander,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3405d587ec82725072400c6e7e57308b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_e02ffedd5ca6528910764139e15597d5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__19_hermvander2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__19_hermvander2d,
        mod_consts.const_str_plain_hermvander2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dea06d490e88e77dfdd0ff0c8db8f278,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_0e377c215e6a17cbf728ab38183ae099,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__1_poly2herm(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__1_poly2herm,
        mod_consts.const_str_plain_poly2herm,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c42fea411e5dce9fd37fa4f96f8ec8e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_dca50c2f45151910969bc4c2c7f42025,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__20_hermvander3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__20_hermvander3d,
        mod_consts.const_str_plain_hermvander3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_965f7407e8505e3e6f892e4b56b2dffc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_c81add4b188f44121267bfd376f8cc0b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__21_hermfit(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__21_hermfit,
        mod_consts.const_str_plain_hermfit,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0b8afc4b5b5df8090b14cbc9a76ce7f6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_7c7ea02e28ff2715ef1612787768a623,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__22_hermcompanion(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__22_hermcompanion,
        mod_consts.const_str_plain_hermcompanion,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_edce7aae1b2debbf3443841f37bf4269,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_f290f4df20fc9aff23dd7c57b3fb0e38,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__23_hermroots(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__23_hermroots,
        mod_consts.const_str_plain_hermroots,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3728af51cfced223d63b4c6c8bdeb6b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_a300c5020899e97b22f7f8b736479133,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__24__normed_hermite_n(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__24__normed_hermite_n,
        mod_consts.const_str_plain__normed_hermite_n,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3b85cada2d5edb151f9678f3c5492ac3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_d4d59c89b3138b5d99a366e07cccecc8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__25_hermgauss(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__25_hermgauss,
        mod_consts.const_str_plain_hermgauss,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5e76c7df62726874d034de8f698df03f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_f16c7d02c7418542dc205538ce8d23b8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__26_hermweight(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__26_hermweight,
        mod_consts.const_str_plain_hermweight,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_56d6766736c9f5a5129564aaf68bae58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_8ca98f18a8ea51894e0c207b2e4d6adf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__2_herm2poly(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__2_herm2poly,
        mod_consts.const_str_plain_herm2poly,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_60a00c4b71c60116644458e3a1a1a9f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_cf91d0c7be82bf1c1fa737a953fc430b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__3_hermline(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__3_hermline,
        mod_consts.const_str_plain_hermline,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2e531f87b1289d492c9888ee5e51bf56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_b8ec4a2f839b5005ccf74b1593eace53,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__4_hermfromroots(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__4_hermfromroots,
        mod_consts.const_str_plain_hermfromroots,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ec785eb994c43183b8980649cd69ab73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_eba9c31e514ddfabce13e8a1c2be27a0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__5_hermadd(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__5_hermadd,
        mod_consts.const_str_plain_hermadd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9062f07815284490d9288b3c47ff9da8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_84ee526875e599fd2a4aa6671f82c19e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__6_hermsub(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__6_hermsub,
        mod_consts.const_str_plain_hermsub,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_60e42b17b8e5fd3bc261920836ca6865,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_9117810b11c8ffbead3727851998325b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__7_hermmulx(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__7_hermmulx,
        mod_consts.const_str_plain_hermmulx,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e38392e0c4402e235f48c4e209756d0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_f965706a8635b10dcdbf626a12317304,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__8_hermmul(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__8_hermmul,
        mod_consts.const_str_plain_hermmul,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7d461048716e7e3b40dc4231455f7b75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_f8210db0ad594b46808a390fd31e2cfc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function__9_hermdiv(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function__9_hermdiv,
        mod_consts.const_str_plain_hermdiv,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ea0dc796fccb9ce227673d929072264e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        mod_consts.const_str_digest_7d7430d1e5ad80ffec15021b5baa0969,
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

static function_impl_code const function_table_numpy$polynomial$hermite[] = {
impl_numpy$polynomial$hermite$$$function__1_poly2herm,
impl_numpy$polynomial$hermite$$$function__2_herm2poly,
impl_numpy$polynomial$hermite$$$function__3_hermline,
impl_numpy$polynomial$hermite$$$function__4_hermfromroots,
impl_numpy$polynomial$hermite$$$function__5_hermadd,
impl_numpy$polynomial$hermite$$$function__6_hermsub,
impl_numpy$polynomial$hermite$$$function__7_hermmulx,
impl_numpy$polynomial$hermite$$$function__8_hermmul,
impl_numpy$polynomial$hermite$$$function__9_hermdiv,
impl_numpy$polynomial$hermite$$$function__10_hermpow,
impl_numpy$polynomial$hermite$$$function__11_hermder,
impl_numpy$polynomial$hermite$$$function__12_hermint,
impl_numpy$polynomial$hermite$$$function__13_hermval,
impl_numpy$polynomial$hermite$$$function__14_hermval2d,
impl_numpy$polynomial$hermite$$$function__15_hermgrid2d,
impl_numpy$polynomial$hermite$$$function__16_hermval3d,
impl_numpy$polynomial$hermite$$$function__17_hermgrid3d,
impl_numpy$polynomial$hermite$$$function__18_hermvander,
impl_numpy$polynomial$hermite$$$function__19_hermvander2d,
impl_numpy$polynomial$hermite$$$function__20_hermvander3d,
impl_numpy$polynomial$hermite$$$function__21_hermfit,
impl_numpy$polynomial$hermite$$$function__22_hermcompanion,
impl_numpy$polynomial$hermite$$$function__23_hermroots,
impl_numpy$polynomial$hermite$$$function__24__normed_hermite_n,
impl_numpy$polynomial$hermite$$$function__25_hermgauss,
impl_numpy$polynomial$hermite$$$function__26_hermweight,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$polynomial$hermite);
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
        module_numpy$polynomial$hermite,
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
        function_table_numpy$polynomial$hermite,
        sizeof(function_table_numpy$polynomial$hermite) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.polynomial.hermite";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$polynomial$hermite(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$polynomial$hermite");

    // Store the module for future use.
    module_numpy$polynomial$hermite = module;

    moduledict_numpy$polynomial$hermite = MODULE_DICT(module_numpy$polynomial$hermite);

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
        PRINT_STRING("numpy$polynomial$hermite: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$polynomial$hermite: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$polynomial$hermite: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.polynomial.hermite" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$polynomial$hermite\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$polynomial$hermite,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$polynomial$hermite,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$polynomial$hermite,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$hermite,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$hermite,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$polynomial$hermite);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$polynomial$hermite);
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

        UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_numpy$polynomial$hermite$$$class__1_Hermite_1695 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2;
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
tmp_assign_source_1 = mod_consts.const_str_digest_5d3841f08976202c1f93db74798df12c;
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$polynomial$hermite = MAKE_MODULE_FRAME(code_objects_9dbd8530353cd29ff4c4544dbdc21f9b, module_numpy$polynomial$hermite);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$polynomial$hermite$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$polynomial$hermite$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$polynomial$hermite;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 78;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$polynomial$hermite;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_polyutils_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 80;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$polynomial$hermite,
        mod_consts.const_str_plain_polyutils,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_polyutils);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_pu, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__polybase;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$polynomial$hermite;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ABCPolyBase_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 81;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$polynomial$hermite,
        mod_consts.const_str_plain_ABCPolyBase,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ABCPolyBase);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = LIST_COPY(tstate, mod_consts.const_list_906a319729d646dc106ab9203973edb1_list);
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_trimcoef);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermtrim, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;

tmp_assign_source_9 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__1_poly2herm(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_poly2herm, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;

tmp_assign_source_10 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__2_herm2poly(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_herm2poly, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_arg_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = MAKE_LIST2(tstate, const_float_minus_1_0,const_float_1_0);
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 204;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_call_arg_element_1);
CHECK_OBJECT(tmp_call_arg_element_1);
Py_DECREF(tmp_call_arg_element_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdomain, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_arg_element_2;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_2 = MAKE_LIST1(tstate, const_int_0);
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 207;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_array, tmp_call_arg_element_2);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermzero, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_arg_element_3;
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_3 = MAKE_LIST1(tstate, const_int_pos_1);
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 210;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_array, tmp_call_arg_element_3);
CHECK_OBJECT(tmp_call_arg_element_3);
Py_DECREF(tmp_call_arg_element_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermone, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_arg_element_4;
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_4 = MAKE_LIST2(tstate, const_int_0,mod_consts.const_float_0_5);
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 213;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_array, tmp_call_arg_element_4);
CHECK_OBJECT(tmp_call_arg_element_4);
Py_DECREF(tmp_call_arg_element_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermx, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__3_hermline(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermline, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__4_hermfromroots(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfromroots, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__5_hermadd(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermadd, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__6_hermsub(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermsub, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__7_hermmulx(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmulx, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__8_hermmul(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermmul, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__9_hermdiv(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermdiv, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_int_pos_16_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_22 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__10_hermpow(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermpow, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_23 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__11_hermder(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermder, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
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

tmp_assign_source_24 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__12_hermint(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermint, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_true_tuple;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_25 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__13_hermval(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermval, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__14_hermval2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermval2d, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;

tmp_assign_source_27 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__15_hermgrid2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermgrid2d, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;

tmp_assign_source_28 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__16_hermval3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermval3d, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;

tmp_assign_source_29 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__17_hermgrid3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermgrid3d, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;

tmp_assign_source_30 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__18_hermvander(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermvander, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;

tmp_assign_source_31 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__19_hermvander2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermvander2d, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;

tmp_assign_source_32 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__20_hermvander3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermvander3d, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_false_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_33 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__21_hermfit(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermfit, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;

tmp_assign_source_34 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__22_hermcompanion(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermcompanion, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;

tmp_assign_source_35 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__23_hermroots(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermroots, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;

tmp_assign_source_36 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__24__normed_hermite_n(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_n, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;

tmp_assign_source_37 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__25_hermgauss(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermgauss, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;

tmp_assign_source_38 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function__26_hermweight(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_hermweight, tmp_assign_source_38);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_numpy$polynomial$hermite$ABCPolyBase(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABCPolyBase);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1695;

    goto try_except_handler_1;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
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


exception_lineno = 1695;

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


exception_lineno = 1695;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_42;
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


exception_lineno = 1695;

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
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_1;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_Hermite;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 1695;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_43;
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


exception_lineno = 1695;

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
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

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


exception_lineno = 1695;

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


exception_lineno = 1695;

    goto try_except_handler_1;
}
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 1695;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1695;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_44;
}
branch_end_1:;
{
PyObject *tmp_assign_source_45;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$polynomial$hermite$$$class__1_Hermite_1695 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_556654d8c41102e6b648eeebe440c961;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_fe87fdaa671af3bd04008936e994ee16;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Hermite;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1695;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_3;
}
frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2 = MAKE_CLASS_FRAME(tstate, code_objects_246276de280c53f62e738fdc2f37f9c0, module_numpy$polynomial$hermite, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_1 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermadd);

if (tmp_args_element_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite$hermadd(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermadd);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 1722;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1722;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1722;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__add, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1722;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_2 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermsub);

if (tmp_args_element_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_2 = module_var_accessor_numpy$polynomial$hermite$hermsub(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermsub);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 1723;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1723;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1723;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__sub, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1723;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_3 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermmul);

if (tmp_args_element_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_3 = module_var_accessor_numpy$polynomial$hermite$hermmul(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermmul);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 1724;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1724;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1724;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__mul, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1724;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_4 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermdiv);

if (tmp_args_element_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_4 = module_var_accessor_numpy$polynomial$hermite$hermdiv(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermdiv);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 1725;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1725;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1725;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__div, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1725;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_5 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermpow);

if (tmp_args_element_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_5 = module_var_accessor_numpy$polynomial$hermite$hermpow(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermpow);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 1726;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1726;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1726;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__pow, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1726;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_6 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermval);

if (tmp_args_element_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_6 = module_var_accessor_numpy$polynomial$hermite$hermval(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermval);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 1727;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1727;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1727;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__val, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1727;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_7 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermint);

if (tmp_args_element_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_7 = module_var_accessor_numpy$polynomial$hermite$hermint(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermint);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 1728;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1728;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1728;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__int, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1728;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
tmp_called_value_9 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_8 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermder);

if (tmp_args_element_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_8 = module_var_accessor_numpy$polynomial$hermite$hermder(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermder);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 1729;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1729;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1729;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1729;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
tmp_called_value_10 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_9 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermfit);

if (tmp_args_element_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_9 = module_var_accessor_numpy$polynomial$hermite$hermfit(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermfit);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 1730;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1730;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1730;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__fit, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1730;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
tmp_called_value_11 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_10 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermline);

if (tmp_args_element_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_10 = module_var_accessor_numpy$polynomial$hermite$hermline(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermline);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 1731;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1731;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1731;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__line, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1731;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_11;
tmp_called_value_12 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_11 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermroots);

if (tmp_args_element_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_11 = module_var_accessor_numpy$polynomial$hermite$hermroots(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermroots);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 1732;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1732;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1732;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__roots, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1732;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
tmp_called_value_13 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, const_str_plain_staticmethod);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_12 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermfromroots);

if (tmp_args_element_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_12 = module_var_accessor_numpy$polynomial$hermite$hermfromroots(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermfromroots);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 1733;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1733;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1733;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain__fromroots, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1733;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_13;
tmp_expression_value_8 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_np);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1736;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_array);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1736;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_13 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermdomain);

if (tmp_args_element_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_13 = module_var_accessor_numpy$polynomial$hermite$hermdomain(tstate);
if (unlikely(tmp_args_element_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermdomain);
}

if (tmp_args_element_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 1736;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1736;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1736;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_domain, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1736;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_14;
tmp_expression_value_9 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_np);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_numpy$polynomial$hermite$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1737;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_array);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1737;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_14 = PyObject_GetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_hermdomain);

if (tmp_args_element_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_14 = module_var_accessor_numpy$polynomial$hermite$hermdomain(tstate);
if (unlikely(tmp_args_element_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermdomain);
}

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 1737;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame.f_lineno = 1737;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1737;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_window, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1737;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = mod_consts.const_str_plain_H;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain_basis_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1738;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$polynomial$hermite$$$class__1_Hermite_2);

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
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

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


exception_lineno = 1695;

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
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_Hermite;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_numpy$polynomial$hermite$$$class__1_Hermite_1695;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$polynomial$hermite->m_frame.f_lineno = 1695;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1695;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_46;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_45 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695);
locals_numpy$polynomial$hermite$$$class__1_Hermite_1695 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$polynomial$hermite$$$class__1_Hermite_1695);
locals_numpy$polynomial$hermite$$$class__1_Hermite_1695 = NULL;
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
exception_lineno = 1695;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)mod_consts.const_str_plain_Hermite, tmp_assign_source_45);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$polynomial$hermite);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$polynomial$hermite", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.polynomial.hermite" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$polynomial$hermite);
    return module_numpy$polynomial$hermite;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$polynomial$hermite", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

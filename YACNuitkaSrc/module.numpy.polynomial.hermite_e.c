/* Generated code for Python module 'numpy$polynomial$hermite_e'
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



/* The "module_numpy$polynomial$hermite_e" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$hermite_e;
PyDictObject *moduledict_numpy$polynomial$hermite_e;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_pu;
PyObject *const_str_plain_as_series;
PyObject *const_str_plain_hermeadd;
PyObject *const_str_plain_hermemulx;
PyObject *const_str_plain_res;
PyObject *const_str_digest_d67ef1bc0f1ea2ff01063f0289b62ace;
PyObject *const_str_plain_polynomial;
PyObject *const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple;
PyObject *const_str_plain_polyadd;
PyObject *const_str_plain_polymulx;
PyObject *const_str_plain_polysub;
PyObject *const_int_neg_2;
PyObject *const_str_plain_c0;
PyObject *const_int_pos_2;
PyObject *const_str_plain_c1;
PyObject *const_str_digest_4bd0d9f6b431557b887b66cc2f06e26b;
PyObject *const_str_plain_np;
PyObject *const_str_plain_array;
PyObject *const_str_digest_ecdc128df70bb8e6b88e0fe8e3fda2bc;
PyObject *const_str_plain__fromroots;
PyObject *const_str_plain_hermeline;
PyObject *const_str_plain_hermemul;
PyObject *const_str_digest_f7c9cd634fad5cbc09deee2d22c4da72;
PyObject *const_str_plain__add;
PyObject *const_str_digest_e4c3a7ba82c1176131aedd16685bd84a;
PyObject *const_str_plain__sub;
PyObject *const_str_digest_3b0a5ca7c3fa6706775beef4473e2423;
PyObject *const_str_plain_empty;
PyObject *const_str_plain_dtype;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain_prd;
PyObject *const_str_digest_985d5da60dc731c054b727b28e74f55d;
PyObject *const_int_pos_3;
PyObject *const_str_plain_nd;
PyObject *const_str_plain_hermesub;
PyObject *const_str_plain_xs;
PyObject *const_str_digest_9c5ac09072afbc89fb048991e6b43efe;
PyObject *const_str_plain__div;
PyObject *const_str_digest_d72d2d185b7d2b34c893f3cfb5613032;
PyObject *const_str_plain__pow;
PyObject *const_str_digest_03b52007456a32021816a9a1fa220d90;
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
PyObject *const_str_digest_62aeb6db93a72b4f4f3e3ce9c08f7be6;
PyObject *const_str_plain_iterable;
PyObject *const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
PyObject *const_str_digest_b303cff154cb34d4708df3886d4b732e;
PyObject *const_str_plain_k;
PyObject *const_str_digest_616f6ee3ef74479987454a15fb3cc986;
PyObject *const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92;
PyObject *const_str_digest_a9be14195673dac9b8db86f91b86f4b8;
PyObject *const_str_plain_all;
PyObject *const_str_plain_tmp;
PyObject *const_str_plain_hermeval;
PyObject *const_str_plain_lbnd;
PyObject *const_str_digest_6ed3628aee2a0771120f7d4474c793c6;
PyObject *const_dict_f5bbbab934471495306a2b1e3746ed7e;
PyObject *const_tuple_type_tuple_type_list_tuple;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain_reshape;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_x;
PyObject *const_str_digest_9cd163798ce70ccb6cdd6b9adc4eeb65;
PyObject *const_str_plain__valnd;
PyObject *const_str_digest_5612df52f4eb7a22ed514b5da4146522;
PyObject *const_str_plain__gridnd;
PyObject *const_str_digest_e9c3382f81df068a706ba1dd59d37ccb;
PyObject *const_str_digest_2efd069cc1bf85c7b5d08eacc8c194c0;
PyObject *const_str_digest_1703e6b28f2e85c141bfd74d52998230;
PyObject *const_str_plain_deg;
PyObject *const_str_digest_ea8c65b23281db7ee7660696e61ab360;
PyObject *const_dict_bc4fceb686e8db4e197f4130513f6fe7;
PyObject *const_str_plain_v;
PyObject *const_str_digest_c9946639161310aa8edcab9106bec4fe;
PyObject *const_str_plain__vander_nd_flat;
PyObject *const_str_plain_hermevander;
PyObject *const_str_digest_8efa452d5387e3122c4cdfac7ae97897;
PyObject *const_str_digest_5ff2af399ffaeaebf199bd4130dbd8ce;
PyObject *const_str_plain__fit;
PyObject *const_str_digest_74d84b39315701b35181877958833072;
PyObject *const_str_digest_af327786ef70d70118fb639ec7c50f4e;
PyObject *const_str_plain_zeros;
PyObject *const_str_plain_hstack;
PyObject *const_str_plain_sqrt;
PyObject *const_str_plain_arange;
PyObject *const_str_plain_multiply;
PyObject *const_str_plain_accumulate;
PyObject *const_slice_none_none_int_neg_1;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_tuple_slice_none_none_none_int_neg_1_tuple;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_digest_a07bf0ab51d163a94ec845903b2f5769;
PyObject *const_tuple_list_empty_tuple;
PyObject *const_str_plain_hermecompanion;
PyObject *const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple;
PyObject *const_str_plain_linalg;
PyObject *const_str_plain_eigvals;
PyObject *const_str_plain_sort;
PyObject *const_str_digest_44314ddc1d11a96f0747f1352681becd;
PyObject *const_str_plain_full;
PyObject *const_str_plain_pi;
PyObject *const_str_digest_5c0c7ab079a5c100fd0000a82f1132c5;
PyObject *const_str_digest_da2105778c631b698de188a0e1c61710;
PyObject *const_str_plain_eigvalsh;
PyObject *const_str_plain__normed_hermite_e_n;
PyObject *const_str_plain_abs;
PyObject *const_str_plain_max;
PyObject *const_str_digest_db7c9baad422ffe55c8c16628d9f083b;
PyObject *const_str_plain_exp;
PyObject *const_float_minus_0_5;
PyObject *const_str_digest_d67a2832927a33123f00086105b5bdca;
PyObject *const_str_digest_af104d105012e0757c2f97aecf5f8a00;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_numpy;
PyObject *const_tuple_str_plain_polyutils_tuple;
PyObject *const_str_plain_polyutils;
PyObject *const_str_plain__polybase;
PyObject *const_tuple_str_plain_ABCPolyBase_tuple;
PyObject *const_str_plain_ABCPolyBase;
PyObject *const_list_64efa2dbef99fa2f59aca41398edb080_list;
PyObject *const_str_plain_trimcoef;
PyObject *const_str_plain_hermetrim;
PyObject *const_str_plain_poly2herme;
PyObject *const_str_plain_herme2poly;
PyObject *const_str_plain_hermedomain;
PyObject *const_str_plain_hermezero;
PyObject *const_str_plain_hermeone;
PyObject *const_str_plain_hermex;
PyObject *const_str_plain_hermefromroots;
PyObject *const_str_plain_hermediv;
PyObject *const_tuple_int_pos_16_tuple;
PyObject *const_str_plain_hermepow;
PyObject *const_tuple_int_pos_1_int_pos_1_int_0_tuple;
PyObject *const_str_plain_hermeder;
PyObject *const_str_plain_hermeint;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_hermeval2d;
PyObject *const_str_plain_hermegrid2d;
PyObject *const_str_plain_hermeval3d;
PyObject *const_str_plain_hermegrid3d;
PyObject *const_str_plain_hermevander2d;
PyObject *const_str_plain_hermevander3d;
PyObject *const_tuple_none_false_none_tuple;
PyObject *const_str_plain_hermefit;
PyObject *const_str_plain_hermeroots;
PyObject *const_str_plain_hermegauss;
PyObject *const_str_plain_hermeweight;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_HermiteE;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_ca6cd711b2703be755b4fd5f005fec50;
PyObject *const_str_digest_a8c503ca82b0dcfd2366014ff00cec33;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_1597;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain__mul;
PyObject *const_str_plain__val;
PyObject *const_str_plain__int;
PyObject *const_str_plain__der;
PyObject *const_str_plain__line;
PyObject *const_str_plain__roots;
PyObject *const_str_plain_domain;
PyObject *const_str_plain_window;
PyObject *const_str_plain_He;
PyObject *const_str_plain_basis_name;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_da8523d3eda5714f5b297235e3c9f8dc;
PyObject *const_str_digest_8c77fc1f001f2e6a860cf506941557d5;
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
PyObject *const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple;
PyObject *const_tuple_5ac5563309656f6342973420ec643c7c_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple;
PyObject *const_tuple_str_plain_x_str_plain_w_tuple;
PyObject *const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[215];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.polynomial.hermite_e"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_pu);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_as_series);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeadd);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermemulx);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_res);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_d67ef1bc0f1ea2ff01063f0289b62ace);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_polynomial);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyadd);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_polymulx);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_polysub);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_neg_2);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_c0);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_c1);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_4bd0d9f6b431557b887b66cc2f06e26b);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_ecdc128df70bb8e6b88e0fe8e3fda2bc);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__fromroots);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeline);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermemul);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7c9cd634fad5cbc09deee2d22c4da72);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__add);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4c3a7ba82c1176131aedd16685bd84a);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__sub);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b0a5ca7c3fa6706775beef4473e2423);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_prd);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_985d5da60dc731c054b727b28e74f55d);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_nd);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermesub);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_xs);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c5ac09072afbc89fb048991e6b43efe);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__div);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_d72d2d185b7d2b34c893f3cfb5613032);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__pow);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_03b52007456a32021816a9a1fa220d90);
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
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_62aeb6db93a72b4f4f3e3ce9c08f7be6);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterable);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_k);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_all);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_tmp);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeval);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_lbnd);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ed3628aee2a0771120f7d4474c793c6);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cd163798ce70ccb6cdd6b9adc4eeb65);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__valnd);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_5612df52f4eb7a22ed514b5da4146522);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__gridnd);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9c3382f81df068a706ba1dd59d37ccb);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_2efd069cc1bf85c7b5d08eacc8c194c0);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_1703e6b28f2e85c141bfd74d52998230);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_deg);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_v);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9946639161310aa8edcab9106bec4fe);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__vander_nd_flat);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermevander);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_8efa452d5387e3122c4cdfac7ae97897);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ff2af399ffaeaebf199bd4130dbd8ce);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__fit);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_74d84b39315701b35181877958833072);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_zeros);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_hstack);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_arange);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiply);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_accumulate);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_a07bf0ab51d163a94ec845903b2f5769);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermecompanion);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_linalg);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_eigvals);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_44314ddc1d11a96f0747f1352681becd);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_full);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_pi);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c0c7ab079a5c100fd0000a82f1132c5);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_eigvalsh);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain__normed_hermite_e_n);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_abs);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_db7c9baad422ffe55c8c16628d9f083b);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_exp);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_float_minus_0_5);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_d67a2832927a33123f00086105b5bdca);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_af104d105012e0757c2f97aecf5f8a00);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyutils_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyutils);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain__polybase);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCPolyBase_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCPolyBase);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_list_64efa2dbef99fa2f59aca41398edb080_list);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_trimcoef);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermetrim);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_poly2herme);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_herme2poly);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermedomain);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermezero);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeone);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermex);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermefromroots);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermediv);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermepow);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeder);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeint);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeval2d);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermegrid2d);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeval3d);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermegrid3d);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermevander2d);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermevander3d);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermefit);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeroots);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermegauss);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_hermeweight);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_HermiteE);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca6cd711b2703be755b4fd5f005fec50);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8c503ca82b0dcfd2366014ff00cec33);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_1597);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain__mul);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain__val);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain__int);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain__der);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain__line);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain__roots);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_window);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_He);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_basis_name);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_da8523d3eda5714f5b297235e3c9f8dc);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c77fc1f001f2e6a860cf506941557d5);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_03b7673e655b056e4f0304ce1db40177_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_roots_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_w_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple);
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
void checkModuleConstants_numpy$polynomial$hermite_e(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_pu));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pu);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_as_series));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_as_series);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeadd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeadd);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermemulx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermemulx);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_res));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_res);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_d67ef1bc0f1ea2ff01063f0289b62ace));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d67ef1bc0f1ea2ff01063f0289b62ace);
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
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_neg_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_2);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c0);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c1);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_4bd0d9f6b431557b887b66cc2f06e26b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4bd0d9f6b431557b887b66cc2f06e26b);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_ecdc128df70bb8e6b88e0fe8e3fda2bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ecdc128df70bb8e6b88e0fe8e3fda2bc);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__fromroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fromroots);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeline);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermemul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermemul);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7c9cd634fad5cbc09deee2d22c4da72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7c9cd634fad5cbc09deee2d22c4da72);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4c3a7ba82c1176131aedd16685bd84a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4c3a7ba82c1176131aedd16685bd84a);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sub);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b0a5ca7c3fa6706775beef4473e2423));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b0a5ca7c3fa6706775beef4473e2423);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_prd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prd);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_985d5da60dc731c054b727b28e74f55d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_985d5da60dc731c054b727b28e74f55d);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_nd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nd);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermesub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermesub);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_xs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_xs);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c5ac09072afbc89fb048991e6b43efe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c5ac09072afbc89fb048991e6b43efe);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__div));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__div);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_d72d2d185b7d2b34c893f3cfb5613032));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d72d2d185b7d2b34c893f3cfb5613032);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__pow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pow);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_03b52007456a32021816a9a1fa220d90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03b52007456a32021816a9a1fa220d90);
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
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_62aeb6db93a72b4f4f3e3ce9c08f7be6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62aeb6db93a72b4f4f3e3ce9c08f7be6);
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
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeval);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_lbnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lbnd);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ed3628aee2a0771120f7d4474c793c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ed3628aee2a0771120f7d4474c793c6);
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
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cd163798ce70ccb6cdd6b9adc4eeb65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cd163798ce70ccb6cdd6b9adc4eeb65);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__valnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__valnd);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_5612df52f4eb7a22ed514b5da4146522));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5612df52f4eb7a22ed514b5da4146522);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__gridnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__gridnd);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9c3382f81df068a706ba1dd59d37ccb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9c3382f81df068a706ba1dd59d37ccb);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_2efd069cc1bf85c7b5d08eacc8c194c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2efd069cc1bf85c7b5d08eacc8c194c0);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_1703e6b28f2e85c141bfd74d52998230));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1703e6b28f2e85c141bfd74d52998230);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_deg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deg);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_v));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_v);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9946639161310aa8edcab9106bec4fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9946639161310aa8edcab9106bec4fe);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__vander_nd_flat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__vander_nd_flat);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermevander));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermevander);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_8efa452d5387e3122c4cdfac7ae97897));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8efa452d5387e3122c4cdfac7ae97897);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ff2af399ffaeaebf199bd4130dbd8ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ff2af399ffaeaebf199bd4130dbd8ce);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__fit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fit);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_74d84b39315701b35181877958833072));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74d84b39315701b35181877958833072);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_zeros));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zeros);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_hstack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hstack);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sqrt);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_arange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arange);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiply);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_accumulate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_accumulate);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_int_neg_1);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_a07bf0ab51d163a94ec845903b2f5769));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a07bf0ab51d163a94ec845903b2f5769);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_empty_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermecompanion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermecompanion);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_linalg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linalg);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_eigvals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eigvals);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_44314ddc1d11a96f0747f1352681becd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44314ddc1d11a96f0747f1352681becd);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_full));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_full);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_pi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pi);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c0c7ab079a5c100fd0000a82f1132c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c0c7ab079a5c100fd0000a82f1132c5);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_eigvalsh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eigvalsh);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain__normed_hermite_e_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__normed_hermite_e_n);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_abs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abs);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_db7c9baad422ffe55c8c16628d9f083b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db7c9baad422ffe55c8c16628d9f083b);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_exp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exp);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_float_minus_0_5));
CHECK_OBJECT_DEEP(mod_consts.const_float_minus_0_5);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_d67a2832927a33123f00086105b5bdca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d67a2832927a33123f00086105b5bdca);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_af104d105012e0757c2f97aecf5f8a00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af104d105012e0757c2f97aecf5f8a00);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyutils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_polyutils_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyutils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyutils);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain__polybase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__polybase);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCPolyBase_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABCPolyBase_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCPolyBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCPolyBase);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_list_64efa2dbef99fa2f59aca41398edb080_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_64efa2dbef99fa2f59aca41398edb080_list);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_trimcoef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trimcoef);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermetrim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermetrim);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_poly2herme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_poly2herme);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_herme2poly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_herme2poly);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermedomain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermedomain);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermezero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermezero);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeone);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermex);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermefromroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermefromroots);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermediv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermediv);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_16_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermepow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermepow);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeder);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeint);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeval2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeval2d);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermegrid2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermegrid2d);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeval3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeval3d);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermegrid3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermegrid3d);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermevander2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermevander2d);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermevander3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermevander3d);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_false_none_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermefit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermefit);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeroots);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermegauss));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermegauss);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_hermeweight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hermeweight);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_HermiteE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HermiteE);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca6cd711b2703be755b4fd5f005fec50));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca6cd711b2703be755b4fd5f005fec50);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8c503ca82b0dcfd2366014ff00cec33));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8c503ca82b0dcfd2366014ff00cec33);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_1597));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1597);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain__mul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mul);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain__val));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__val);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain__int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__int);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain__der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__der);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain__line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__line);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain__roots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__roots);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_domain);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_window));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_window);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_He));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_He);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_basis_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_basis_name);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_da8523d3eda5714f5b297235e3c9f8dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da8523d3eda5714f5b297235e3c9f8dc);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c77fc1f001f2e6a860cf506941557d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c77fc1f001f2e6a860cf506941557d5);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_03b7673e655b056e4f0304ce1db40177_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_03b7673e655b056e4f0304ce1db40177_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_roots_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_roots_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_w_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_w_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple));
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
static PyObject *module_var_accessor_numpy$polynomial$hermite_e$ABCPolyBase(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$_normed_hermite_e_n(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_e_n);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__normed_hermite_e_n);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__normed_hermite_e_n, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__normed_hermite_e_n);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__normed_hermite_e_n, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_e_n);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_e_n);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_e_n);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermeadd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeadd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeadd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeadd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeadd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeadd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeadd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeadd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeadd);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermecompanion(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermecompanion);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermecompanion);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermecompanion, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermecompanion);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermecompanion, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermecompanion);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermecompanion);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermecompanion);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermeder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeder);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermediv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermediv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermediv);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermediv, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermediv);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermediv, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermediv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermediv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermediv);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermedomain(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermedomain);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermedomain);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermedomain, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermedomain);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermedomain, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermedomain);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermedomain);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermedomain);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermefit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermefit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermefit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermefit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermefit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefit);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermefromroots(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefromroots);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermefromroots);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermefromroots, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermefromroots);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermefromroots, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefromroots);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefromroots);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefromroots);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermeint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeint);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermeline(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeline);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeline);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeline, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeline);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeline, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeline);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeline);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeline);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermemul(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemul);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermemul);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermemul, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermemul);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermemul, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemul);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemul);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemul);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermemulx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemulx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermemulx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermemulx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermemulx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermemulx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemulx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemulx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemulx);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermepow(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermepow);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermepow);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermepow, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermepow);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermepow, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermepow);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermepow);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermepow);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermeroots(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeroots);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeroots);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeroots, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeroots);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeroots, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeroots);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeroots);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeroots);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermesub(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermesub);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermesub);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermesub, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermesub);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermesub, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermesub);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermesub);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermesub);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermeval(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeval);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeval);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeval, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermeval);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermeval, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeval);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeval);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeval);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$hermevander(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermevander);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermevander);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermevander, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hermevander);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hermevander, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermevander);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermevander);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hermevander);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$hermite_e$pu(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$hermite_e->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$hermite_e->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$hermite_e->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6814b696e9061b86ef56225d3e338789;
static PyCodeObject *code_objects_11e85a9dcbb5648fa62ee4aabc7d6265;
static PyCodeObject *code_objects_5975cc9193c57adb8a91fa67afda3679;
static PyCodeObject *code_objects_3bf7f1b3cf3585339d84d38c576d2db5;
static PyCodeObject *code_objects_ad5b64a8058482f3111bdae4de236b0f;
static PyCodeObject *code_objects_9d920c3541ad0633151d990065ef8050;
static PyCodeObject *code_objects_3f9db90a8740f6945a736e50ab8ad933;
static PyCodeObject *code_objects_763b7a572f5f87acc4808e1d1eb3af04;
static PyCodeObject *code_objects_e15492ae2e0547095e55c48f0c657b69;
static PyCodeObject *code_objects_9a7b25bced85d8beed4844f3fb5c604d;
static PyCodeObject *code_objects_943c0e687b4bb2f0cb299492c2881528;
static PyCodeObject *code_objects_a58f88909d5bc96cc18a4b2b16479a02;
static PyCodeObject *code_objects_c614ac409b0376c9fc890965a95323e9;
static PyCodeObject *code_objects_06d5a95f6808631245c808f31154d499;
static PyCodeObject *code_objects_728c796205cadeaecc59e758d3fa91f4;
static PyCodeObject *code_objects_1ceb3c0d0f8ca4219c12c7f2306abd47;
static PyCodeObject *code_objects_d24ec31cd563d72ac94980ac21723fbc;
static PyCodeObject *code_objects_a7b31bb2c86e0152fb64736d1ae90d92;
static PyCodeObject *code_objects_d07fe9b8c619ecacadb63a5a74ba6887;
static PyCodeObject *code_objects_ef5f2125a0ba1ef5b62870df9ff3aa89;
static PyCodeObject *code_objects_99c7b762d2ff6a152c0db48248b1fae1;
static PyCodeObject *code_objects_82f5cc39968ed11698e1c259b9e54685;
static PyCodeObject *code_objects_81b8935ed54c7346530456c1dc5ad7e1;
static PyCodeObject *code_objects_46c481371ee43b6eee7c7493166044fc;
static PyCodeObject *code_objects_475b7a927eee8e8809db9f9a075d6799;
static PyCodeObject *code_objects_e1d1c22850a34d4945c48627ad57fc55;
static PyCodeObject *code_objects_d3bd8af251baa4d577a943fc7f66f55f;
static PyCodeObject *code_objects_f5ff8848794c3acd9133fea38f14f3a6;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_da8523d3eda5714f5b297235e3c9f8dc); CHECK_OBJECT(module_filename_obj);
code_objects_6814b696e9061b86ef56225d3e338789 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_8c77fc1f001f2e6a860cf506941557d5, mod_consts.const_str_digest_8c77fc1f001f2e6a860cf506941557d5, NULL, NULL, 0, 0, 0);
code_objects_11e85a9dcbb5648fa62ee4aabc7d6265 = MAKE_CODE_OBJECT(module_filename_obj, 1597, 0, mod_consts.const_str_plain_HermiteE, mod_consts.const_str_plain_HermiteE, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5975cc9193c57adb8a91fa67afda3679 = MAKE_CODE_OBJECT(module_filename_obj, 1467, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__normed_hermite_e_n, mod_consts.const_str_plain__normed_hermite_e_n, mod_consts.const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple, NULL, 2, 0, 0);
code_objects_3bf7f1b3cf3585339d84d38c576d2db5 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_herme2poly, mod_consts.const_str_plain_herme2poly, mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple, NULL, 1, 0, 0);
code_objects_ad5b64a8058482f3111bdae4de236b0f = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermeadd, mod_consts.const_str_plain_hermeadd, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_9d920c3541ad0633151d990065ef8050 = MAKE_CODE_OBJECT(module_filename_obj, 1363, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermecompanion, mod_consts.const_str_plain_hermecompanion, mod_consts.const_tuple_03b7673e655b056e4f0304ce1db40177_tuple, NULL, 1, 0, 0);
code_objects_3f9db90a8740f6945a736e50ab8ad933 = MAKE_CODE_OBJECT(module_filename_obj, 594, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermeder, mod_consts.const_str_plain_hermeder, mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple, NULL, 4, 0, 0);
code_objects_763b7a572f5f87acc4808e1d1eb3af04 = MAKE_CODE_OBJECT(module_filename_obj, 511, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermediv, mod_consts.const_str_plain_hermediv, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_e15492ae2e0547095e55c48f0c657b69 = MAKE_CODE_OBJECT(module_filename_obj, 1229, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermefit, mod_consts.const_str_plain_hermefit, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple, NULL, 6, 0, 0);
code_objects_9a7b25bced85d8beed4844f3fb5c604d = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermefromroots, mod_consts.const_str_plain_hermefromroots, mod_consts.const_tuple_str_plain_roots_tuple, NULL, 1, 0, 0);
code_objects_943c0e687b4bb2f0cb299492c2881528 = MAKE_CODE_OBJECT(module_filename_obj, 1508, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermegauss, mod_consts.const_str_plain_hermegauss, mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple, NULL, 1, 0, 0);
code_objects_a58f88909d5bc96cc18a4b2b16479a02 = MAKE_CODE_OBJECT(module_filename_obj, 931, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermegrid2d, mod_consts.const_str_plain_hermegrid2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_c614ac409b0376c9fc890965a95323e9 = MAKE_CODE_OBJECT(module_filename_obj, 1023, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermegrid3d, mod_consts.const_str_plain_hermegrid3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, NULL, 4, 0, 0);
code_objects_06d5a95f6808631245c808f31154d499 = MAKE_CODE_OBJECT(module_filename_obj, 675, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermeint, mod_consts.const_str_plain_hermeint, mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple, NULL, 6, 0, 0);
code_objects_728c796205cadeaecc59e758d3fa91f4 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermeline, mod_consts.const_str_plain_hermeline, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple, NULL, 2, 0, 0);
code_objects_1ceb3c0d0f8ca4219c12c7f2306abd47 = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermemul, mod_consts.const_str_plain_hermemul, mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple, NULL, 2, 0, 0);
code_objects_d24ec31cd563d72ac94980ac21723fbc = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermemulx, mod_consts.const_str_plain_hermemulx, mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_a7b31bb2c86e0152fb64736d1ae90d92 = MAKE_CODE_OBJECT(module_filename_obj, 557, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermepow, mod_consts.const_str_plain_hermepow, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple, NULL, 3, 0, 0);
code_objects_d07fe9b8c619ecacadb63a5a74ba6887 = MAKE_CODE_OBJECT(module_filename_obj, 1403, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermeroots, mod_consts.const_str_plain_hermeroots, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple, NULL, 1, 0, 0);
code_objects_ef5f2125a0ba1ef5b62870df9ff3aa89 = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermesub, mod_consts.const_str_plain_hermesub, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_99c7b762d2ff6a152c0db48248b1fae1 = MAKE_CODE_OBJECT(module_filename_obj, 795, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermeval, mod_consts.const_str_plain_hermeval, mod_consts.const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple, NULL, 3, 0, 0);
code_objects_82f5cc39968ed11698e1c259b9e54685 = MAKE_CODE_OBJECT(module_filename_obj, 888, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermeval2d, mod_consts.const_str_plain_hermeval2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_81b8935ed54c7346530456c1dc5ad7e1 = MAKE_CODE_OBJECT(module_filename_obj, 978, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermeval3d, mod_consts.const_str_plain_hermeval3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, NULL, 4, 0, 0);
code_objects_46c481371ee43b6eee7c7493166044fc = MAKE_CODE_OBJECT(module_filename_obj, 1073, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermevander, mod_consts.const_str_plain_hermevander, mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple, NULL, 2, 0, 0);
code_objects_475b7a927eee8e8809db9f9a075d6799 = MAKE_CODE_OBJECT(module_filename_obj, 1134, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermevander2d, mod_consts.const_str_plain_hermevander2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple, NULL, 3, 0, 0);
code_objects_e1d1c22850a34d4945c48627ad57fc55 = MAKE_CODE_OBJECT(module_filename_obj, 1181, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermevander3d, mod_consts.const_str_plain_hermevander3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple, NULL, 4, 0, 0);
code_objects_d3bd8af251baa4d577a943fc7f66f55f = MAKE_CODE_OBJECT(module_filename_obj, 1572, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hermeweight, mod_consts.const_str_plain_hermeweight, mod_consts.const_tuple_str_plain_x_str_plain_w_tuple, NULL, 1, 0, 0);
code_objects_f5ff8848794c3acd9133fea38f14f3a6 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_poly2herme, mod_consts.const_str_plain_poly2herme, mod_consts.const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__10_hermepow(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__11_hermeder(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__12_hermeint(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__13_hermeval(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__14_hermeval2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__15_hermegrid2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__16_hermeval3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__17_hermegrid3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__18_hermevander(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__19_hermevander2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__1_poly2herme(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__20_hermevander3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__21_hermefit(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__22_hermecompanion(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__23_hermeroots(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__25_hermegauss(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__26_hermeweight(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__2_herme2poly(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__3_hermeline(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__4_hermefromroots(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__5_hermeadd(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__6_hermesub(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__7_hermemulx(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__8_hermemul(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__9_hermediv(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$polynomial$hermite_e$$$function__1_poly2herme(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme = MAKE_FUNCTION_FRAME(tstate, code_objects_f5ff8848794c3acd9133fea38f14f3a6, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme = cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_pol);
tmp_list_element_1 = par_pol;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme->m_frame.f_lineno = 134;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
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



exception_lineno = 134;
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



exception_lineno = 134;
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


exception_lineno = 135;
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


exception_lineno = 137;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
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
exception_lineno = 137;
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
tmp_called_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermeadd(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeadd);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = module_var_accessor_numpy$polynomial$hermite_e$hermemulx(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermemulx);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
if (var_res == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_res);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 138;
type_description_1 = "oooo";
    goto try_except_handler_4;
}

tmp_args_element_value_3 = var_res;
frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme->m_frame.f_lineno = 138;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
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

exception_lineno = 138;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme->m_frame.f_lineno = 138;
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


exception_lineno = 138;
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


exception_lineno = 137;
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

exception_lineno = 139;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme,
    type_description_1,
    par_pol,
    var_deg,
    var_res,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme == cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__1_poly2herme);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__2_herme2poly(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly = MAKE_FUNCTION_FRAME(tstate, code_objects_3bf7f1b3cf3585339d84d38c576d2db5, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly = cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_polynomial;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$polynomial$hermite_e;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly->m_frame.f_lineno = 180;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
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
        (PyObject *)moduledict_numpy$polynomial$hermite_e,
        mod_consts.const_str_plain_polyadd,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_polyadd);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
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
        (PyObject *)moduledict_numpy$polynomial$hermite_e,
        mod_consts.const_str_plain_polymulx,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_polymulx);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
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
        (PyObject *)moduledict_numpy$polynomial$hermite_e,
        mod_consts.const_str_plain_polysub,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_polysub);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly->m_frame.f_lineno = 182;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
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



exception_lineno = 182;
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



exception_lineno = 182;
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


exception_lineno = 183;
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
CHECK_OBJECT(par_c);
tmp_return_value = par_c;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_c);
tmp_expression_value_1 = par_c;
tmp_subscript_value_1 = mod_consts.const_int_neg_2;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, -2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_c);
tmp_expression_value_2 = par_c;
tmp_subscript_value_2 = const_int_neg_1;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, -1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c1 == NULL);
var_c1 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
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


exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_11;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 192;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_13 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_13;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_assign_source_14 = var_c0;
{
    PyObject *old = var_tmp;
    var_tmp = tmp_assign_source_14;
    Py_INCREF(var_tmp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
if (var_polysub == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polysub);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_called_value_1 = var_polysub;
CHECK_OBJECT(par_c);
tmp_expression_value_3 = par_c;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_2 = var_i;
tmp_sub_expr_right_2 = mod_consts.const_int_pos_2;
tmp_subscript_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
if (var_c1 == NULL) {
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_mult_expr_left_1 = var_c1;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_3 = var_i;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly->m_frame.f_lineno = 194;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_c0;
    var_c0 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
if (var_polyadd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyadd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_called_value_2 = var_polyadd;
CHECK_OBJECT(var_tmp);
tmp_args_element_value_4 = var_tmp;
if (var_polymulx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polymulx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_called_value_3 = var_polymulx;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_6 = var_c1;
frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly->m_frame.f_lineno = 195;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly->m_frame.f_lineno = 195;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_c1;
    var_c1 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
if (var_polyadd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyadd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_4 = var_polyadd;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_c0;
if (var_polymulx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polymulx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_5 = var_polymulx;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = var_c1;
frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly->m_frame.f_lineno = 196;
tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly->m_frame.f_lineno = 196;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly,
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
if (frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly == cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__2_herme2poly);

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
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__3_hermeline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_off = python_pars[0];
PyObject *par_scl = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline = MAKE_FUNCTION_FRAME(tstate, code_objects_728c796205cadeaecc59e758d3fa91f4, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline = cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline) == 2);

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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
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
frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline->m_frame.f_lineno = 251;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_args_element_value_1);
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
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_2;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_off);
tmp_list_element_2 = par_off;
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline->m_frame.f_lineno = 253;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_array, tmp_args_element_value_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline,
    type_description_1,
    par_off,
    par_scl
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline == cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__3_hermeline);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__4_hermefromroots(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_roots = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots = MAKE_FUNCTION_FRAME(tstate, code_objects_9a7b25bced85d8beed4844f3fb5c604d, module_numpy$polynomial$hermite_e, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots = cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
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
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermeline(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeline);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 309;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_numpy$polynomial$hermite_e$hermemul(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermemul);
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
frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots->m_frame.f_lineno = 309;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots,
    type_description_1,
    par_roots
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots == cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__4_hermefromroots);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__5_hermeadd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd = MAKE_FUNCTION_FRAME(tstate, code_objects_ad5b64a8058482f3111bdae4de236b0f, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd = cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
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
frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd->m_frame.f_lineno = 349;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd == cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__5_hermeadd);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__6_hermesub(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub = MAKE_FUNCTION_FRAME(tstate, code_objects_ef5f2125a0ba1ef5b62870df9ff3aa89, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub = cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
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
frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub->m_frame.f_lineno = 389;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub == cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__6_hermesub);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__7_hermemulx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx = MAKE_FUNCTION_FRAME(tstate, code_objects_d24ec31cd563d72ac94980ac21723fbc, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx = cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
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
frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx->m_frame.f_lineno = 431;
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
tmp_expression_value_2 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
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
frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx->m_frame.f_lineno = 436;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(par_c);
tmp_expression_value_5 = par_c;
tmp_subscript_value_3 = const_int_0;
tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
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
tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx,
    type_description_1,
    par_c,
    var_prd,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx == cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__7_hermemulx);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__8_hermemul(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul = MAKE_FUNCTION_FRAME(tstate, code_objects_1ceb3c0d0f8ca4219c12c7f2306abd47, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul = cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
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
frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul->m_frame.f_lineno = 484;
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
PyObject *tmp_sub_expr_left_2;
nuitka_digit tmp_sub_expr_right_2;
tmp_called_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermesub(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermesub);
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
CHECK_OBJECT(var_nd);
tmp_sub_expr_left_2 = var_nd;
tmp_sub_expr_right_2 = 1;
tmp_mult_expr_right_7 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
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
frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul->m_frame.f_lineno = 506;
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
tmp_called_value_2 = module_var_accessor_numpy$polynomial$hermite_e$hermeadd(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeadd);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_tmp);
tmp_args_element_value_4 = var_tmp;
tmp_called_value_3 = module_var_accessor_numpy$polynomial$hermite_e$hermemulx(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermemulx);
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
frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul->m_frame.f_lineno = 507;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul->m_frame.f_lineno = 507;
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
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_numpy$polynomial$hermite_e$hermeadd(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeadd);
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
tmp_called_value_5 = module_var_accessor_numpy$polynomial$hermite_e$hermemulx(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermemulx);
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
frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul->m_frame.f_lineno = 508;
tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul->m_frame.f_lineno = 508;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul,
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
if (frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul == cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__8_hermemul);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__9_hermediv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv = MAKE_FUNCTION_FRAME(tstate, code_objects_763b7a572f5f87acc4808e1d1eb3af04, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv = cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 554;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__div);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermemul(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermemul);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 554;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_2 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_3 = par_c2;
frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv->m_frame.f_lineno = 554;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv == cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__9_hermediv);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__10_hermepow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_pow = python_pars[1];
PyObject *par_maxpower = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow = MAKE_FUNCTION_FRAME(tstate, code_objects_a7b31bb2c86e0152fb64736d1ae90d92, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow = cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 591;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__pow);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermemul(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermemul);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 591;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_pow);
tmp_args_element_value_3 = par_pow;
CHECK_OBJECT(par_maxpower);
tmp_args_element_value_4 = par_maxpower;
frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow->m_frame.f_lineno = 591;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow,
    type_description_1,
    par_c,
    par_pow,
    par_maxpower
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow == cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__10_hermepow);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__11_hermeder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder = MAKE_FUNCTION_FRAME(tstate, code_objects_3f9db90a8740f6945a736e50ab8ad933, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder = cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 647;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame.f_lineno = 647;
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


exception_lineno = 647;
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


exception_lineno = 648;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
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


exception_lineno = 648;
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


exception_lineno = 649;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 649;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_double);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 649;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame.f_lineno = 649;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 650;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_m);
tmp_args_element_value_2 = par_m;
tmp_args_element_value_3 = mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame.f_lineno = 650;
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


exception_lineno = 650;
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
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
tmp_args_element_value_5 = mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01;
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame.f_lineno = 651;
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


exception_lineno = 651;
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


exception_lineno = 652;
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
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame.f_lineno = 653;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 653;
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
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 654;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_lib);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_array_utils);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_normalize_axis_index);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_6 = var_iaxis;
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 654;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_c;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 654;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame.f_lineno = 654;
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


exception_lineno = 654;
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


exception_lineno = 656;
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

exception_lineno = 657;
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
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 659;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 659;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 659;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = par_c;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_9 = var_iaxis;
tmp_args_element_value_10 = const_int_0;
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame.f_lineno = 659;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 659;
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


exception_lineno = 660;
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


exception_lineno = 661;
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


exception_lineno = 662;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = const_int_0;
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_cnt);
tmp_xrange_low_1 = var_cnt;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 664;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 664;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 664;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_10 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_10;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 665;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_1 = var_n;
tmp_sub_expr_right_1 = 1;
tmp_assign_source_11 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
assert(!(tmp_assign_source_11 == NULL));
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_left_1 = par_c;
if (par_scl == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scl);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_right_1 = par_scl;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_12 = tmp_imult_expr_left_1;
par_c = tmp_assign_source_12;

}
{
PyObject *tmp_assign_source_13;
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
tmp_expression_value_12 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_empty);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
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

exception_lineno = 667;
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

exception_lineno = 667;
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

exception_lineno = 667;
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

exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame.f_lineno = 667;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_der;
    var_der = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
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


exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 668;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_16 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_j;
    var_j = tmp_assign_source_16;
    Py_INCREF(var_j);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(var_j);
tmp_mult_expr_left_2 = var_j;
CHECK_OBJECT(par_c);
tmp_expression_value_16 = par_c;
CHECK_OBJECT(var_j);
tmp_subscript_value_3 = var_j;
tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_3);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
if (var_der == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_der);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 669;
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

exception_lineno = 669;
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


exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
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
PyObject *tmp_assign_source_17;
if (var_der == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_der);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_17 = var_der;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_17;
    Py_INCREF(par_c);
    Py_DECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 664;
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
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_17 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = par_c;
tmp_args_element_value_12 = const_int_0;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_13 = var_iaxis;
frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame.f_lineno = 671;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_18;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder,
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
if (frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder == cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__11_hermeder);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__12_hermeint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint = MAKE_FUNCTION_FRAME(tstate, code_objects_06d5a95f6808631245c808f31154d499, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint = cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 756;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 756;
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


exception_lineno = 756;
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


exception_lineno = 757;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 757;
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


exception_lineno = 757;
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


exception_lineno = 758;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 758;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_double);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 758;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 758;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 759;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_k);
tmp_args_element_value_2 = par_k;
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 759;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iterable, tmp_args_element_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 759;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 759;
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
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 761;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_m);
tmp_args_element_value_3 = par_m;
tmp_args_element_value_4 = mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 761;
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


exception_lineno = 761;
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
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 762;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_5 = par_axis;
tmp_args_element_value_6 = mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01;
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 762;
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


exception_lineno = 762;
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


exception_lineno = 763;
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
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 764;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 764;
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

exception_lineno = 765;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = par_k;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 765;
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


exception_lineno = 765;
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
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 766;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 766;
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
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 767;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lbnd);
tmp_args_element_value_7 = par_lbnd;
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 767;
tmp_cmp_expr_left_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_ndim, tmp_args_element_value_7);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 767;
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


exception_lineno = 767;
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
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 768;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 768;
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
tmp_called_instance_5 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 769;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scl);
tmp_args_element_value_8 = par_scl;
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 769;
tmp_cmp_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_ndim, tmp_args_element_value_8);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 769;
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


exception_lineno = 769;
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
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 770;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 770;
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
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 771;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_lib);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_array_utils);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_normalize_axis_index);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_9 = var_iaxis;
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 771;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_c;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 771;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 771;
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


exception_lineno = 771;
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


exception_lineno = 773;
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

exception_lineno = 774;
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
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 776;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 776;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 776;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = par_c;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_12 = var_iaxis;
tmp_args_element_value_13 = const_int_0;
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 776;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 776;
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

exception_lineno = 777;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_1 = par_k;
tmp_add_expr_left_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 777;
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

exception_lineno = 777;
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

exception_lineno = 777;
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

exception_lineno = 777;
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

exception_lineno = 777;
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


exception_lineno = 777;
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


exception_lineno = 778;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 778;
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
exception_lineno = 778;
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

exception_lineno = 779;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_3 = par_c;
tmp_assign_source_12 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 779;
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

exception_lineno = 780;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_left_1 = par_c;
if (par_scl == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scl);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 780;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_right_1 = par_scl;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 780;
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
tmp_expression_value_11 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 781;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_all);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;
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

exception_lineno = 781;
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

exception_lineno = 781;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 781;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 781;
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


exception_lineno = 782;
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


exception_lineno = 782;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 782;
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


exception_lineno = 782;
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
tmp_expression_value_15 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 784;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_empty);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 784;
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

exception_lineno = 784;
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

exception_lineno = 784;
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

exception_lineno = 784;
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

exception_lineno = 784;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 784;
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


exception_lineno = 784;
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


exception_lineno = 785;
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


exception_lineno = 785;
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


exception_lineno = 785;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_6;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(par_c);
tmp_expression_value_20 = par_c;
tmp_subscript_value_6 = const_int_0;
tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_6, 0);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
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


exception_lineno = 786;
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


exception_lineno = 787;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_19 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 787;
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
exception_lineno = 787;
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
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_7;
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
tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_7);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_j);
tmp_add_expr_left_4 = var_j;
tmp_add_expr_right_4 = const_int_pos_1;
tmp_truediv_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 788;
type_description_1 = "oooooooooooo";
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


exception_lineno = 788;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
if (var_tmp == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 788;
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

exception_lineno = 788;
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


exception_lineno = 788;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 787;
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

exception_lineno = 789;
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


exception_lineno = 789;
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


exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_7 = module_var_accessor_numpy$polynomial$hermite_e$hermeval(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeval);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
if (par_lbnd == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lbnd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_15 = par_lbnd;
if (var_tmp == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_16 = var_tmp;
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 789;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_sub_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 789;
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


exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 789;
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


exception_lineno = 789;
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

exception_lineno = 790;
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


exception_lineno = 778;
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
tmp_expression_value_24 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_17 = par_c;
tmp_args_element_value_18 = const_int_0;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_19 = var_iaxis;
frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame.f_lineno = 791;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint,
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
if (frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint == cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__12_hermeint);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__13_hermeval(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_c = python_pars[1];
PyObject *par_tensor = python_pars[2];
PyObject *var_c0 = NULL;
PyObject *var_c1 = NULL;
PyObject *var_nd = NULL;
PyObject *var_i = NULL;
PyObject *var_tmp = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval = MAKE_FUNCTION_FRAME(tstate, code_objects_99c7b762d2ff6a152c0db48248b1fae1, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval = cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 862;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval->m_frame.f_lineno = 862;
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


exception_lineno = 862;
type_description_1 = "oooooooo";
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


exception_lineno = 863;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooooo";
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


exception_lineno = 864;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 864;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_double);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 864;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval->m_frame.f_lineno = 864;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 864;
type_description_1 = "oooooooo";
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


exception_lineno = 865;
type_description_1 = "oooooooo";
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 866;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval->m_frame.f_lineno = 866;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 866;
type_description_1 = "oooooooo";
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
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 867;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oooooooo";
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


exception_lineno = 867;
type_description_1 = "oooooooo";
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

exception_lineno = 868;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_c;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_reshape);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 868;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_c;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 868;
type_description_1 = "oooooooo";
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

exception_lineno = 868;
type_description_1 = "oooooooo";
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

exception_lineno = 868;
type_description_1 = "oooooooo";
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

exception_lineno = 868;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval->m_frame.f_lineno = 868;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "oooooooo";
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
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 870;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = par_c;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 870;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 871;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = const_int_0;
assert(var_c1 == NULL);
Py_INCREF(tmp_assign_source_6);
var_c1 = tmp_assign_source_6;
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

exception_lineno = 873;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = par_c;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 873;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 874;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_c;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 874;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 875;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_c;
tmp_subscript_value_3 = const_int_pos_1;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_3, 1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 875;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_c1 == NULL);
var_c1 = tmp_assign_source_8;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_len_arg_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 877;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_3 = par_c;
tmp_assign_source_9 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 877;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_nd == NULL);
var_nd = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 878;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = par_c;
tmp_subscript_value_4 = mod_consts.const_int_neg_2;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_4, -2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_c0 == NULL);
var_c0 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_5;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 879;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = par_c;
tmp_subscript_value_5 = const_int_neg_1;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_5, -1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 879;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_c1 == NULL);
var_c1 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
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

exception_lineno = 880;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_4 = par_c;
tmp_add_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
type_description_1 = "oooooooo";
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


exception_lineno = 880;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
type_description_1 = "oooooooo";
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
tmp_assign_source_13 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 880;
        goto try_except_handler_2;
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_14;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 881;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_15 = var_c0;
{
    PyObject *old = var_tmp;
    var_tmp = tmp_assign_source_15;
    Py_INCREF(var_tmp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
if (var_nd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 882;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_1 = var_nd;
tmp_sub_expr_right_1 = 1;
tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
assert(!(tmp_assign_source_16 == NULL));
{
    PyObject *old = var_nd;
    var_nd = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_sub_expr_left_3;
nuitka_digit tmp_sub_expr_right_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 883;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_15 = par_c;
CHECK_OBJECT(var_i);
tmp_operand_value_1 = var_i;
tmp_subscript_value_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_subscript_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (var_c1 == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 883;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_2 = var_c1;
CHECK_OBJECT(var_nd);
tmp_sub_expr_left_3 = var_nd;
tmp_sub_expr_right_3 = 1;
tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
assert(!(tmp_mult_expr_right_2 == NULL));
tmp_sub_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 883;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 883;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_c0;
    var_c0 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
CHECK_OBJECT(var_tmp);
tmp_add_expr_left_3 = var_tmp;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 884;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_3 = var_c1;
if (par_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 884;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_right_3 = par_x;
tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 884;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 884;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_c1;
    var_c1 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
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
branch_end_5:;
branch_end_4:;
{
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 885;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_4 = var_c0;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 885;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_left_4 = var_c1;
if (par_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 885;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_right_4 = par_x;
tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval,
    type_description_1,
    par_x,
    par_c,
    par_tensor,
    var_c0,
    var_c1,
    var_nd,
    var_i,
    var_tmp
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval == cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__13_hermeval);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__14_hermeval2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d = MAKE_FUNCTION_FRAME(tstate, code_objects_82f5cc39968ed11698e1c259b9e54685, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d = cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 928;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__valnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 928;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermeval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 928;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d->m_frame.f_lineno = 928;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 928;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d,
    type_description_1,
    par_x,
    par_y,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d == cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__14_hermeval2d);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__15_hermegrid2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d = MAKE_FUNCTION_FRAME(tstate, code_objects_a58f88909d5bc96cc18a4b2b16479a02, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d = cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 975;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__gridnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 975;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermeval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 975;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d->m_frame.f_lineno = 975;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 975;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d,
    type_description_1,
    par_x,
    par_y,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d == cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__15_hermegrid2d);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__16_hermeval3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_c = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d = MAKE_FUNCTION_FRAME(tstate, code_objects_81b8935ed54c7346530456c1dc5ad7e1, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d = cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1020;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__valnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1020;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermeval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1020;
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
frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d->m_frame.f_lineno = 1020;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1020;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d == cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__16_hermeval3d);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__17_hermegrid3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_c = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d = MAKE_FUNCTION_FRAME(tstate, code_objects_c614ac409b0376c9fc890965a95323e9, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d = cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1070;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__gridnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1070;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermeval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1070;
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
frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d->m_frame.f_lineno = 1070;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1070;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d == cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__17_hermegrid3d);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__18_hermevander(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander = MAKE_FUNCTION_FRAME(tstate, code_objects_46c481371ee43b6eee7c7493166044fc, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander = cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1118;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deg);
tmp_args_element_value_1 = par_deg;
tmp_args_element_value_2 = mod_consts.const_str_plain_deg;
frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander->m_frame.f_lineno = 1118;
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


exception_lineno = 1118;
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


exception_lineno = 1119;
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
frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander->m_frame.f_lineno = 1120;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1120;
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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1122;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1122;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander->m_frame.f_lineno = 1122;
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


exception_lineno = 1122;
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


exception_lineno = 1122;
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


exception_lineno = 1123;
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

exception_lineno = 1123;
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


exception_lineno = 1123;
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


exception_lineno = 1124;
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
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1125;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_empty);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1125;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dims);
tmp_kw_call_arg_value_0_1 = var_dims;
CHECK_OBJECT(var_dtyp);
tmp_kw_call_dict_value_0_1 = var_dtyp;
frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander->m_frame.f_lineno = 1125;
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


exception_lineno = 1125;
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


exception_lineno = 1126;
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


exception_lineno = 1126;
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


exception_lineno = 1126;
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


exception_lineno = 1127;
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


exception_lineno = 1128;
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


exception_lineno = 1129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1129;
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
exception_lineno = 1129;
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
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1130;
type_description_1 = "ooooooo";
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


exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_x == NULL) {
Py_DECREF(tmp_mult_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_right_2 = par_x;
tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_v == NULL) {
Py_DECREF(tmp_sub_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1130;
type_description_1 = "ooooooo";
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

exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_i);
tmp_sub_expr_left_4 = var_i;
tmp_sub_expr_right_4 = const_int_pos_1;
tmp_mult_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);
Py_DECREF(tmp_mult_expr_left_3);

exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 1130;
type_description_1 = "ooooooo";
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


exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_v == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1130;
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


exception_lineno = 1130;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1129;
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
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_v == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_v;
tmp_args_element_value_4 = const_int_0;
tmp_args_element_value_5 = const_int_neg_1;
frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander->m_frame.f_lineno = 1131;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1131;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander,
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
if (frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander == cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__18_hermevander);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__19_hermevander2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_deg = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d = MAKE_FUNCTION_FRAME(tstate, code_objects_475b7a927eee8e8809db9f9a075d6799, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d = cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1178;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__vander_nd_flat);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1178;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite_e$hermevander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermevander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1178;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite_e$hermevander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermevander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1178;
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
frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d->m_frame.f_lineno = 1178;
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


exception_lineno = 1178;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d,
    type_description_1,
    par_x,
    par_y,
    par_deg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d == cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__19_hermevander2d);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__20_hermevander3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_deg = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d = MAKE_FUNCTION_FRAME(tstate, code_objects_e1d1c22850a34d4945c48627ad57fc55, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d = cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1226;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__vander_nd_flat);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1226;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite_e$hermevander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermevander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1226;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite_e$hermevander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermevander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1226;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$hermite_e$hermevander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermevander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1226;
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
frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d->m_frame.f_lineno = 1226;
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


exception_lineno = 1226;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_deg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d == cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__20_hermevander3d);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__21_hermefit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit = MAKE_FUNCTION_FRAME(tstate, code_objects_e15492ae2e0547095e55c48f0c657b69, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit = cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit) == 2);

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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1360;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fit);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1360;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermevander(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermevander);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1360;
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
frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit->m_frame.f_lineno = 1360;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1360;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit,
    type_description_1,
    par_x,
    par_y,
    par_deg,
    par_rcond,
    par_full,
    par_w
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit == cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__21_hermefit);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__22_hermecompanion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion = MAKE_FUNCTION_FRAME(tstate, code_objects_9d920c3541ad0633151d990065ef8050, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion = cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1385;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1385;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1385;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1385;
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



exception_lineno = 1385;
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



exception_lineno = 1385;
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


exception_lineno = 1386;
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
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1387;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1387;
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


exception_lineno = 1388;
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
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1389;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1389;
type_description_1 = "oooooo";
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

exception_lineno = 1389;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1389;
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

exception_lineno = 1389;
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

exception_lineno = 1389;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_list_element_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_list_element_2, 0, tmp_list_element_3);
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1389;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1389;
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


exception_lineno = 1391;
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
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1392;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_zeros);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1392;
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

exception_lineno = 1392;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1392;
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


exception_lineno = 1392;
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
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1393;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_hstack);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1393;
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_sub_expr_left_2;
nuitka_digit tmp_sub_expr_right_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_2);
tmp_truediv_expr_left_2 = const_float_1_0;
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1393;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1393;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 1393;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_arange);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1393;
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
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1393;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1393;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1393;
tmp_truediv_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1393;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1393;
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
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1393;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1393;
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
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1394;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_multiply);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1394;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_scl);
tmp_args_element_value_8 = var_scl;
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1394;
tmp_expression_value_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_accumulate, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1394;
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


exception_lineno = 1394;
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
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1395;
tmp_expression_value_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_reshape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_tuple, 0)
);

if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1395;
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


exception_lineno = 1395;
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
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1396;
tmp_expression_value_12 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_reshape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_tuple, 0)
);

if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1396;
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


exception_lineno = 1396;
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
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_13 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1397;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1397;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_5 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 1397;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = const_int_pos_1;
CHECK_OBJECT(var_n);
tmp_args_element_value_11 = var_n;
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1397;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_args_element_value_9 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_arange,
        call_args
    );
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1397;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame.f_lineno = 1397;
tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1397;
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


exception_lineno = 1397;
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


exception_lineno = 1398;
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


exception_lineno = 1399;
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
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(var_scl);
tmp_mult_expr_left_1 = var_scl;
CHECK_OBJECT(par_c);
tmp_expression_value_15 = par_c;
tmp_subscript_value_7 = mod_consts.const_slice_none_int_neg_1_none;
tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_7);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1399;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1399;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_c);
tmp_expression_value_16 = par_c;
tmp_subscript_value_8 = const_int_neg_1;
tmp_truediv_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_8, -1);
if (tmp_truediv_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_3);

exception_lineno = 1399;
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


exception_lineno = 1399;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1399;
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


exception_lineno = 1399;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion,
    type_description_1,
    par_c,
    var_n,
    var_mat,
    var_scl,
    var_top,
    var_bot
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion == cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__22_hermecompanion);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__23_hermeroots(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots = MAKE_FUNCTION_FRAME(tstate, code_objects_d07fe9b8c619ecacadb63a5a74ba6887, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots = cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1454;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots->m_frame.f_lineno = 1454;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1454;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1454;
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



exception_lineno = 1454;
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



exception_lineno = 1454;
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


exception_lineno = 1455;
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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1456;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1456;
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

exception_lineno = 1456;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_call_pos_args_values_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_empty_tuple, "l");
frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots->m_frame.f_lineno = 1456;
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


exception_lineno = 1456;
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


exception_lineno = 1457;
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
tmp_expression_value_3 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1458;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_array);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1458;
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

exception_lineno = 1458;
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

exception_lineno = 1458;
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

exception_lineno = 1458;
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

exception_lineno = 1458;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots->m_frame.f_lineno = 1458;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1458;
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
tmp_called_value_3 = module_var_accessor_numpy$polynomial$hermite_e$hermecompanion(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermecompanion);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1461;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_3 = par_c;
frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots->m_frame.f_lineno = 1461;
tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1461;
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


exception_lineno = 1461;
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
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1462;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_linalg);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1462;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_4 = var_m;
frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots->m_frame.f_lineno = 1462;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_eigvals, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1462;
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


exception_lineno = 1463;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots->m_frame.f_lineno = 1463;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1463;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots,
    type_description_1,
    par_c,
    var_m,
    var_r
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots == cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__23_hermeroots);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n = MAKE_FUNCTION_FRAME(tstate, code_objects_5975cc9193c57adb8a91fa67afda3679, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n = cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n) == 2);

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


exception_lineno = 1494;
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
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_full);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1495;
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

exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = const_int_pos_1;
tmp_expression_value_3 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1495;
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

exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_int_pos_2;
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pi);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n->m_frame.f_lineno = 1495;
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

exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n->m_frame.f_lineno = 1495;
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

exception_lineno = 1495;
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

exception_lineno = 1495;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n->m_frame.f_lineno = 1495;
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


exception_lineno = 1495;
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
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_8;
tmp_truediv_expr_left_2 = const_float_1_0;
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1498;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1498;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 1498;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1498;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_2 = mod_consts.const_int_pos_2;
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 1498;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pi);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 1498;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 1498;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n->m_frame.f_lineno = 1498;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1498;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n->m_frame.f_lineno = 1498;
tmp_truediv_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1498;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1498;
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


exception_lineno = 1499;
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


exception_lineno = 1500;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1500;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1500;
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
exception_lineno = 1500;
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

exception_lineno = 1501;
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
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
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

exception_lineno = 1502;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_operand_value_1 = var_c1;
tmp_mult_expr_left_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1502;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_9 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_mult_expr_left_3);

exception_lineno = 1502;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_3);

exception_lineno = 1502;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_nd == NULL) {
Py_DECREF(tmp_mult_expr_left_3);
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1502;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_2 = var_nd;
tmp_sub_expr_right_2 = const_float_1_0;
tmp_truediv_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_3);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1502;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_nd == NULL) {
Py_DECREF(tmp_mult_expr_left_3);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_truediv_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1502;
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
Py_DECREF(tmp_mult_expr_left_3);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1502;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n->m_frame.f_lineno = 1502;
tmp_mult_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_3);

exception_lineno = 1502;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1502;
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
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
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

exception_lineno = 1503;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_5 = var_c1;
if (par_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1503;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_right_5 = par_x;
tmp_mult_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1503;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_mult_expr_left_4);

exception_lineno = 1503;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_4);

exception_lineno = 1503;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_truediv_expr_left_4 = const_float_1_0;
if (var_nd == NULL) {
Py_DECREF(tmp_mult_expr_left_4);
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1503;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_truediv_expr_right_4 = var_nd;
tmp_args_element_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_4);
Py_DECREF(tmp_called_value_7);

exception_lineno = 1503;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n->m_frame.f_lineno = 1503;
tmp_mult_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_4);

exception_lineno = 1503;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1503;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1503;
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

exception_lineno = 1504;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_3 = var_nd;
tmp_sub_expr_right_3 = const_float_1_0;
tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1504;
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


exception_lineno = 1500;
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
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1505;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_2 = var_c0;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1505;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_left_6 = var_c1;
if (par_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1505;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_right_6 = par_x;
tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1505;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1505;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n,
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
if (frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n == cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__25_hermegauss(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss = MAKE_FUNCTION_FRAME(tstate, code_objects_943c0e687b4bb2f0cb299492c2881528, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss = cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1541;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deg);
tmp_args_element_value_1 = par_deg;
tmp_args_element_value_2 = mod_consts.const_str_plain_deg;
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1541;
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


exception_lineno = 1541;
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


exception_lineno = 1542;
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
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1543;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1543;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1547;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1547;
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

exception_lineno = 1547;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = MAKE_LIST1(tstate, const_int_pos_1);
tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1547;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1547;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1547;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c == NULL);
var_c = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$polynomial$hermite_e$hermecompanion(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermecompanion);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1548;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_c);
tmp_args_element_value_4 = var_c;
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1548;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1548;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_m == NULL);
var_m = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_5;
tmp_expression_value_2 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1549;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_linalg);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1549;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_5 = var_m;
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1549;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_eigvalsh, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1549;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_x == NULL);
var_x = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_numpy$polynomial$hermite_e$_normed_hermite_e_n(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__normed_hermite_e_n);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1552;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_6 = var_x;
CHECK_OBJECT(var_ideg);
tmp_args_element_value_7 = var_ideg;
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1552;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1552;
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
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_10;
tmp_called_value_4 = module_var_accessor_numpy$polynomial$hermite_e$_normed_hermite_e_n(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__normed_hermite_e_n);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1553;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_8 = var_x;
CHECK_OBJECT(var_ideg);
tmp_sub_expr_left_1 = var_ideg;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_args_element_value_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1553;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1553;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_mult_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1553;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1553;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ideg);
tmp_args_element_value_10 = var_ideg;
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1553;
tmp_mult_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_sqrt, tmp_args_element_value_10);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1553;
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


exception_lineno = 1553;
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


exception_lineno = 1554;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1554;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_isub_expr_left_1;
var_x = tmp_assign_source_7;

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
tmp_called_value_5 = module_var_accessor_numpy$polynomial$hermite_e$_normed_hermite_e_n(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__normed_hermite_e_n);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1558;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_11 = var_x;
CHECK_OBJECT(var_ideg);
tmp_sub_expr_left_2 = var_ideg;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_args_element_value_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1558;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1558;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1558;
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
PyObject *tmp_called_instance_4;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(var_fm);
tmp_itruediv_expr_left_1 = var_fm;
tmp_called_instance_5 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1559;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fm);
tmp_args_element_value_13 = var_fm;
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1559;
tmp_called_instance_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_abs, tmp_args_element_value_13);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1559;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1559;
tmp_itruediv_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_max);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_itruediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1559;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
CHECK_OBJECT(tmp_itruediv_expr_right_1);
Py_DECREF(tmp_itruediv_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1559;
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
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
tmp_truediv_expr_left_2 = const_int_pos_1;
CHECK_OBJECT(var_fm);
tmp_mult_expr_left_3 = var_fm;
CHECK_OBJECT(var_fm);
tmp_mult_expr_right_3 = var_fm;
tmp_truediv_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1560;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1560;
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
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_w);
tmp_add_expr_left_2 = var_w;
CHECK_OBJECT(var_w);
tmp_expression_value_3 = var_w;
tmp_subscript_value_1 = mod_consts.const_slice_none_none_int_neg_1;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1563;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1563;
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


exception_lineno = 1563;
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
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_x);
tmp_sub_expr_left_3 = var_x;
CHECK_OBJECT(var_x);
tmp_expression_value_4 = var_x;
tmp_subscript_value_2 = mod_consts.const_slice_none_none_int_neg_1;
tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1564;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_truediv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1564;
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


exception_lineno = 1564;
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
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_14;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_w);
tmp_imult_expr_left_1 = var_w;
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1567;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1567;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_4 = mod_consts.const_int_pos_2;
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 1567;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_pi);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1567;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_14 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1567;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1567;
tmp_truediv_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_truediv_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1567;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_w);
tmp_called_instance_6 = var_w;
frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame.f_lineno = 1567;
tmp_truediv_expr_right_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, const_str_plain_sum);
if (tmp_truediv_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_5);

exception_lineno = 1567;
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


exception_lineno = 1567;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
CHECK_OBJECT(tmp_imult_expr_right_1);
Py_DECREF(tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1567;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss,
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
if (frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss == cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__25_hermegauss);

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


static PyObject *impl_numpy$polynomial$hermite_e$$$function__26_hermeweight(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *var_w = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight = MAKE_FUNCTION_FRAME(tstate, code_objects_d3bd8af251baa4d577a943fc7f66f55f, module_numpy$polynomial$hermite_e, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight->m_type_description == NULL);
frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight = cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1589;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exp);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1589;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_float_minus_0_5;
CHECK_OBJECT(par_x);
tmp_pow_expr_left_1 = par_x;
tmp_pow_expr_right_1 = mod_consts.const_int_pos_2;
tmp_mult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1589;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1589;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight->m_frame.f_lineno = 1589;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1589;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight,
    type_description_1,
    par_x,
    var_w
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight == cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight);
    cache_frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$function__26_hermeweight);

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



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__10_hermepow(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__10_hermepow,
        mod_consts.const_str_plain_hermepow,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a7b31bb2c86e0152fb64736d1ae90d92,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_03b52007456a32021816a9a1fa220d90,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__11_hermeder(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__11_hermeder,
        mod_consts.const_str_plain_hermeder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3f9db90a8740f6945a736e50ab8ad933,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_62aeb6db93a72b4f4f3e3ce9c08f7be6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__12_hermeint(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__12_hermeint,
        mod_consts.const_str_plain_hermeint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_06d5a95f6808631245c808f31154d499,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_6ed3628aee2a0771120f7d4474c793c6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__13_hermeval(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__13_hermeval,
        mod_consts.const_str_plain_hermeval,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_99c7b762d2ff6a152c0db48248b1fae1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_9cd163798ce70ccb6cdd6b9adc4eeb65,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__14_hermeval2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__14_hermeval2d,
        mod_consts.const_str_plain_hermeval2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_82f5cc39968ed11698e1c259b9e54685,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_5612df52f4eb7a22ed514b5da4146522,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__15_hermegrid2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__15_hermegrid2d,
        mod_consts.const_str_plain_hermegrid2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a58f88909d5bc96cc18a4b2b16479a02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_e9c3382f81df068a706ba1dd59d37ccb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__16_hermeval3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__16_hermeval3d,
        mod_consts.const_str_plain_hermeval3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_81b8935ed54c7346530456c1dc5ad7e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_2efd069cc1bf85c7b5d08eacc8c194c0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__17_hermegrid3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__17_hermegrid3d,
        mod_consts.const_str_plain_hermegrid3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c614ac409b0376c9fc890965a95323e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_1703e6b28f2e85c141bfd74d52998230,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__18_hermevander(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__18_hermevander,
        mod_consts.const_str_plain_hermevander,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_46c481371ee43b6eee7c7493166044fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_c9946639161310aa8edcab9106bec4fe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__19_hermevander2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__19_hermevander2d,
        mod_consts.const_str_plain_hermevander2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_475b7a927eee8e8809db9f9a075d6799,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_8efa452d5387e3122c4cdfac7ae97897,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__1_poly2herme(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__1_poly2herme,
        mod_consts.const_str_plain_poly2herme,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f5ff8848794c3acd9133fea38f14f3a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_d67ef1bc0f1ea2ff01063f0289b62ace,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__20_hermevander3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__20_hermevander3d,
        mod_consts.const_str_plain_hermevander3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e1d1c22850a34d4945c48627ad57fc55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_5ff2af399ffaeaebf199bd4130dbd8ce,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__21_hermefit(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__21_hermefit,
        mod_consts.const_str_plain_hermefit,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e15492ae2e0547095e55c48f0c657b69,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_74d84b39315701b35181877958833072,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__22_hermecompanion(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__22_hermecompanion,
        mod_consts.const_str_plain_hermecompanion,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9d920c3541ad0633151d990065ef8050,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_a07bf0ab51d163a94ec845903b2f5769,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__23_hermeroots(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__23_hermeroots,
        mod_consts.const_str_plain_hermeroots,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d07fe9b8c619ecacadb63a5a74ba6887,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_44314ddc1d11a96f0747f1352681becd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n,
        mod_consts.const_str_plain__normed_hermite_e_n,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5975cc9193c57adb8a91fa67afda3679,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_5c0c7ab079a5c100fd0000a82f1132c5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__25_hermegauss(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__25_hermegauss,
        mod_consts.const_str_plain_hermegauss,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_943c0e687b4bb2f0cb299492c2881528,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_db7c9baad422ffe55c8c16628d9f083b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__26_hermeweight(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__26_hermeweight,
        mod_consts.const_str_plain_hermeweight,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d3bd8af251baa4d577a943fc7f66f55f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_d67a2832927a33123f00086105b5bdca,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__2_herme2poly(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__2_herme2poly,
        mod_consts.const_str_plain_herme2poly,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3bf7f1b3cf3585339d84d38c576d2db5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_4bd0d9f6b431557b887b66cc2f06e26b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__3_hermeline(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__3_hermeline,
        mod_consts.const_str_plain_hermeline,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_728c796205cadeaecc59e758d3fa91f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_ecdc128df70bb8e6b88e0fe8e3fda2bc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__4_hermefromroots(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__4_hermefromroots,
        mod_consts.const_str_plain_hermefromroots,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9a7b25bced85d8beed4844f3fb5c604d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_f7c9cd634fad5cbc09deee2d22c4da72,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__5_hermeadd(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__5_hermeadd,
        mod_consts.const_str_plain_hermeadd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ad5b64a8058482f3111bdae4de236b0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_e4c3a7ba82c1176131aedd16685bd84a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__6_hermesub(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__6_hermesub,
        mod_consts.const_str_plain_hermesub,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ef5f2125a0ba1ef5b62870df9ff3aa89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_3b0a5ca7c3fa6706775beef4473e2423,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__7_hermemulx(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__7_hermemulx,
        mod_consts.const_str_plain_hermemulx,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d24ec31cd563d72ac94980ac21723fbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_985d5da60dc731c054b727b28e74f55d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__8_hermemul(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__8_hermemul,
        mod_consts.const_str_plain_hermemul,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1ceb3c0d0f8ca4219c12c7f2306abd47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_9c5ac09072afbc89fb048991e6b43efe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__9_hermediv(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite_e$$$function__9_hermediv,
        mod_consts.const_str_plain_hermediv,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_763b7a572f5f87acc4808e1d1eb3af04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite_e,
        mod_consts.const_str_digest_d72d2d185b7d2b34c893f3cfb5613032,
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

static function_impl_code const function_table_numpy$polynomial$hermite_e[] = {
impl_numpy$polynomial$hermite_e$$$function__1_poly2herme,
impl_numpy$polynomial$hermite_e$$$function__2_herme2poly,
impl_numpy$polynomial$hermite_e$$$function__3_hermeline,
impl_numpy$polynomial$hermite_e$$$function__4_hermefromroots,
impl_numpy$polynomial$hermite_e$$$function__5_hermeadd,
impl_numpy$polynomial$hermite_e$$$function__6_hermesub,
impl_numpy$polynomial$hermite_e$$$function__7_hermemulx,
impl_numpy$polynomial$hermite_e$$$function__8_hermemul,
impl_numpy$polynomial$hermite_e$$$function__9_hermediv,
impl_numpy$polynomial$hermite_e$$$function__10_hermepow,
impl_numpy$polynomial$hermite_e$$$function__11_hermeder,
impl_numpy$polynomial$hermite_e$$$function__12_hermeint,
impl_numpy$polynomial$hermite_e$$$function__13_hermeval,
impl_numpy$polynomial$hermite_e$$$function__14_hermeval2d,
impl_numpy$polynomial$hermite_e$$$function__15_hermegrid2d,
impl_numpy$polynomial$hermite_e$$$function__16_hermeval3d,
impl_numpy$polynomial$hermite_e$$$function__17_hermegrid3d,
impl_numpy$polynomial$hermite_e$$$function__18_hermevander,
impl_numpy$polynomial$hermite_e$$$function__19_hermevander2d,
impl_numpy$polynomial$hermite_e$$$function__20_hermevander3d,
impl_numpy$polynomial$hermite_e$$$function__21_hermefit,
impl_numpy$polynomial$hermite_e$$$function__22_hermecompanion,
impl_numpy$polynomial$hermite_e$$$function__23_hermeroots,
impl_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n,
impl_numpy$polynomial$hermite_e$$$function__25_hermegauss,
impl_numpy$polynomial$hermite_e$$$function__26_hermeweight,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$polynomial$hermite_e);
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
        module_numpy$polynomial$hermite_e,
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
        function_table_numpy$polynomial$hermite_e,
        sizeof(function_table_numpy$polynomial$hermite_e) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.polynomial.hermite_e";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$polynomial$hermite_e(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$polynomial$hermite_e");

    // Store the module for future use.
    module_numpy$polynomial$hermite_e = module;

    moduledict_numpy$polynomial$hermite_e = MODULE_DICT(module_numpy$polynomial$hermite_e);

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
        PRINT_STRING("numpy$polynomial$hermite_e: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$polynomial$hermite_e: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$polynomial$hermite_e: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.polynomial.hermite_e" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$polynomial$hermite_e\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$polynomial$hermite_e,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$polynomial$hermite_e,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$polynomial$hermite_e,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$hermite_e,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$hermite_e,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$polynomial$hermite_e);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$polynomial$hermite_e);
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

        UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2;
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
tmp_assign_source_1 = mod_consts.const_str_digest_af104d105012e0757c2f97aecf5f8a00;
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$polynomial$hermite_e = MAKE_MODULE_FRAME(code_objects_6814b696e9061b86ef56225d3e338789, module_numpy$polynomial$hermite_e);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$polynomial$hermite_e$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$polynomial$hermite_e$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$polynomial$hermite_e;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 78;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_4);
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
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$polynomial$hermite_e;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_polyutils_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 80;
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
        (PyObject *)moduledict_numpy$polynomial$hermite_e,
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
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_pu, tmp_assign_source_5);
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
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$polynomial$hermite_e;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ABCPolyBase_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 81;
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
        (PyObject *)moduledict_numpy$polynomial$hermite_e,
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
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = LIST_COPY(tstate, mod_consts.const_list_64efa2dbef99fa2f59aca41398edb080_list);
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$hermite_e$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_trimcoef);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermetrim, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;

tmp_assign_source_9 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__1_poly2herme(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_poly2herme, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;

tmp_assign_source_10 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__2_herme2poly(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_herme2poly, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_arg_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = MAKE_LIST2(tstate, const_float_minus_1_0,const_float_1_0);
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 205;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_call_arg_element_1);
CHECK_OBJECT(tmp_call_arg_element_1);
Py_DECREF(tmp_call_arg_element_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermedomain, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_arg_element_2;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_2 = MAKE_LIST1(tstate, const_int_0);
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 208;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_array, tmp_call_arg_element_2);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermezero, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_arg_element_3;
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_3 = MAKE_LIST1(tstate, const_int_pos_1);
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 211;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_array, tmp_call_arg_element_3);
CHECK_OBJECT(tmp_call_arg_element_3);
Py_DECREF(tmp_call_arg_element_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeone, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_arg_element_4;
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_4 = MAKE_LIST2(tstate, const_int_0,const_int_pos_1);
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 214;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_array, tmp_call_arg_element_4);
CHECK_OBJECT(tmp_call_arg_element_4);
Py_DECREF(tmp_call_arg_element_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermex, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__3_hermeline(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeline, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__4_hermefromroots(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefromroots, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__5_hermeadd(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeadd, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__6_hermesub(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermesub, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__7_hermemulx(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemulx, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__8_hermemul(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermemul, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__9_hermediv(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermediv, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_int_pos_16_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_22 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__10_hermepow(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermepow, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_23 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__11_hermeder(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeder, tmp_assign_source_23);
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

tmp_assign_source_24 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__12_hermeint(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeint, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_true_tuple;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_25 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__13_hermeval(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeval, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__14_hermeval2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeval2d, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;

tmp_assign_source_27 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__15_hermegrid2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermegrid2d, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;

tmp_assign_source_28 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__16_hermeval3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeval3d, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;

tmp_assign_source_29 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__17_hermegrid3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermegrid3d, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;

tmp_assign_source_30 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__18_hermevander(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermevander, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;

tmp_assign_source_31 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__19_hermevander2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermevander2d, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;

tmp_assign_source_32 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__20_hermevander3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermevander3d, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_false_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_33 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__21_hermefit(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermefit, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;

tmp_assign_source_34 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__22_hermecompanion(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermecompanion, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;

tmp_assign_source_35 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__23_hermeroots(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeroots, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;

tmp_assign_source_36 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__24__normed_hermite_e_n(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain__normed_hermite_e_n, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;

tmp_assign_source_37 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__25_hermegauss(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermegauss, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;

tmp_assign_source_38 = MAKE_FUNCTION_numpy$polynomial$hermite_e$$$function__26_hermeweight(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_hermeweight, tmp_assign_source_38);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_numpy$polynomial$hermite_e$ABCPolyBase(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABCPolyBase);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1597;

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


exception_lineno = 1597;

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


exception_lineno = 1597;

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


exception_lineno = 1597;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1597;

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


exception_lineno = 1597;

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


exception_lineno = 1597;

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


exception_lineno = 1597;

    goto try_except_handler_1;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_HermiteE;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 1597;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1597;

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


exception_lineno = 1597;

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


exception_lineno = 1597;

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


exception_lineno = 1597;

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


exception_lineno = 1597;

    goto try_except_handler_1;
}
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 1597;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1597;
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
locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ca6cd711b2703be755b4fd5f005fec50;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1597;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_a8c503ca82b0dcfd2366014ff00cec33;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1597;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_HermiteE;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1597;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1597;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1597;

    goto try_except_handler_3;
}
frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2 = MAKE_CLASS_FRAME(tstate, code_objects_11e85a9dcbb5648fa62ee4aabc7d6265, module_numpy$polynomial$hermite_e, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2);
assert(Py_REFCNT(frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_1 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermeadd);

if (tmp_args_element_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$hermite_e$hermeadd(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeadd);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 1624;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1624;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1624;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__add, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1624;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_2 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermesub);

if (tmp_args_element_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_2 = module_var_accessor_numpy$polynomial$hermite_e$hermesub(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermesub);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 1625;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1625;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1625;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__sub, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1625;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_3 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermemul);

if (tmp_args_element_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_3 = module_var_accessor_numpy$polynomial$hermite_e$hermemul(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermemul);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 1626;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1626;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1626;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__mul, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1626;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_4 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermediv);

if (tmp_args_element_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_4 = module_var_accessor_numpy$polynomial$hermite_e$hermediv(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermediv);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 1627;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1627;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1627;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__div, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1627;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_5 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermepow);

if (tmp_args_element_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_5 = module_var_accessor_numpy$polynomial$hermite_e$hermepow(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermepow);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 1628;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1628;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1628;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__pow, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1628;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_6 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermeval);

if (tmp_args_element_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_6 = module_var_accessor_numpy$polynomial$hermite_e$hermeval(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeval);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 1629;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1629;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1629;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__val, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1629;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_7 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermeint);

if (tmp_args_element_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_7 = module_var_accessor_numpy$polynomial$hermite_e$hermeint(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeint);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 1630;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1630;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__int, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
tmp_called_value_9 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_8 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermeder);

if (tmp_args_element_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_8 = module_var_accessor_numpy$polynomial$hermite_e$hermeder(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeder);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 1631;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1631;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1631;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1631;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
tmp_called_value_10 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_9 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermefit);

if (tmp_args_element_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_9 = module_var_accessor_numpy$polynomial$hermite_e$hermefit(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermefit);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 1632;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1632;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1632;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__fit, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1632;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
tmp_called_value_11 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_10 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermeline);

if (tmp_args_element_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_10 = module_var_accessor_numpy$polynomial$hermite_e$hermeline(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeline);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 1633;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1633;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1633;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__line, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1633;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_11;
tmp_called_value_12 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_11 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermeroots);

if (tmp_args_element_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_11 = module_var_accessor_numpy$polynomial$hermite_e$hermeroots(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermeroots);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 1634;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1634;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1634;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__roots, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1634;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
tmp_called_value_13 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, const_str_plain_staticmethod);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_12 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermefromroots);

if (tmp_args_element_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_12 = module_var_accessor_numpy$polynomial$hermite_e$hermefromroots(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermefromroots);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 1635;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1635;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1635;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain__fromroots, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1635;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_13;
tmp_expression_value_8 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_np);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1638;
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


exception_lineno = 1638;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_13 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermedomain);

if (tmp_args_element_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_13 = module_var_accessor_numpy$polynomial$hermite_e$hermedomain(tstate);
if (unlikely(tmp_args_element_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermedomain);
}

if (tmp_args_element_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 1638;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1638;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1638;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_domain, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1638;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_14;
tmp_expression_value_9 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_np);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_numpy$polynomial$hermite_e$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1639;
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


exception_lineno = 1639;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_14 = PyObject_GetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_hermedomain);

if (tmp_args_element_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_14 = module_var_accessor_numpy$polynomial$hermite_e$hermedomain(tstate);
if (unlikely(tmp_args_element_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hermedomain);
}

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 1639;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame.f_lineno = 1639;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1639;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_window, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1639;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = mod_consts.const_str_plain_He;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain_basis_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1640;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$polynomial$hermite_e$$$class__1_HermiteE_2);

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
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1597;

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


exception_lineno = 1597;

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
tmp_res = PyObject_SetItem(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1597;

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
tmp_tuple_element_5 = mod_consts.const_str_plain_HermiteE;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$polynomial$hermite_e->m_frame.f_lineno = 1597;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1597;

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
Py_DECREF(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597);
locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597);
locals_numpy$polynomial$hermite_e$$$class__1_HermiteE_1597 = NULL;
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
exception_lineno = 1597;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)mod_consts.const_str_plain_HermiteE, tmp_assign_source_45);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$hermite_e, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$hermite_e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$hermite_e, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$polynomial$hermite_e);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$polynomial$hermite_e", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.polynomial.hermite_e" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$polynomial$hermite_e);
    return module_numpy$polynomial$hermite_e;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$hermite_e, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$polynomial$hermite_e", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

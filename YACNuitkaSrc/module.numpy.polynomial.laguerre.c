/* Generated code for Python module 'numpy$polynomial$laguerre'
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



/* The "module_numpy$polynomial$laguerre" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$laguerre;
PyDictObject *moduledict_numpy$polynomial$laguerre;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_pu;
PyObject *const_str_plain_as_series;
PyObject *const_slice_none_none_int_neg_1;
PyObject *const_str_plain_lagadd;
PyObject *const_str_plain_lagmulx;
PyObject *const_str_plain_res;
PyObject *const_str_digest_a277bf0d16fe454be3ac08de12af03cf;
PyObject *const_str_plain_polynomial;
PyObject *const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple;
PyObject *const_str_plain_polyadd;
PyObject *const_str_plain_polymulx;
PyObject *const_str_plain_polysub;
PyObject *const_int_neg_2;
PyObject *const_str_plain_c0;
PyObject *const_int_pos_2;
PyObject *const_str_plain_c1;
PyObject *const_str_digest_e384133b80362aa6e8119ecd20d8dea8;
PyObject *const_str_plain_np;
PyObject *const_str_plain_array;
PyObject *const_str_digest_0384d215b1b58de3b66e438d893e3991;
PyObject *const_str_plain__fromroots;
PyObject *const_str_plain_lagline;
PyObject *const_str_plain_lagmul;
PyObject *const_str_digest_7adbb21744eb4c73d930495d1ada5ec5;
PyObject *const_str_plain__add;
PyObject *const_str_digest_4f103b623f85b787c1b5a3a3738219f4;
PyObject *const_str_plain__sub;
PyObject *const_str_digest_e982cd65d5492eea9f80f9515615eeb3;
PyObject *const_str_plain_empty;
PyObject *const_str_plain_dtype;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain_prd;
PyObject *const_str_digest_4e0ac40f7b3b6071a172e3b531225972;
PyObject *const_int_pos_3;
PyObject *const_str_plain_nd;
PyObject *const_str_plain_lagsub;
PyObject *const_str_plain_xs;
PyObject *const_str_digest_6e42c5db19635d83adac5dc1aa042b89;
PyObject *const_str_plain__div;
PyObject *const_str_digest_58b84eee4dc22797daa8fbcf8c16c084;
PyObject *const_str_plain__pow;
PyObject *const_str_digest_1059a99a9d2e4c7f69e7ab43253afe32;
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
PyObject *const_str_digest_33612223df2c3eda6f06f7737c71baf0;
PyObject *const_str_plain_iterable;
PyObject *const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
PyObject *const_str_digest_b303cff154cb34d4708df3886d4b732e;
PyObject *const_str_plain_k;
PyObject *const_str_digest_616f6ee3ef74479987454a15fb3cc986;
PyObject *const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92;
PyObject *const_str_digest_a9be14195673dac9b8db86f91b86f4b8;
PyObject *const_str_plain_all;
PyObject *const_str_plain_tmp;
PyObject *const_str_plain_lagval;
PyObject *const_str_plain_lbnd;
PyObject *const_str_digest_fb2f85110d8157e4f75fd9f263f3ede5;
PyObject *const_dict_f5bbbab934471495306a2b1e3746ed7e;
PyObject *const_tuple_type_tuple_type_list_tuple;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain_reshape;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_x;
PyObject *const_str_digest_36d2db04545105324505332a1992042e;
PyObject *const_str_plain__valnd;
PyObject *const_str_digest_0735cbae97d6be33e72495c6c7a622d8;
PyObject *const_str_plain__gridnd;
PyObject *const_str_digest_de63a9342fac0864f2529dc47d2d0590;
PyObject *const_str_digest_c489ca71f779d291b3e0d1bc51e2b85e;
PyObject *const_str_digest_22f10d1e12144027d32a5cf0bc8c7f20;
PyObject *const_str_plain_deg;
PyObject *const_str_digest_ea8c65b23281db7ee7660696e61ab360;
PyObject *const_dict_bc4fceb686e8db4e197f4130513f6fe7;
PyObject *const_str_plain_v;
PyObject *const_str_digest_edcc24c87198f868599ef50a5c371b23;
PyObject *const_str_plain__vander_nd_flat;
PyObject *const_str_plain_lagvander;
PyObject *const_str_digest_65e14b9854143715b448589fa55ba69e;
PyObject *const_str_digest_0fcba8b9831088f423816af8e9c4906c;
PyObject *const_str_plain__fit;
PyObject *const_str_digest_efaf6ee3b00460b2c83ba984b26f962a;
PyObject *const_str_digest_af327786ef70d70118fb639ec7c50f4e;
PyObject *const_str_plain_zeros;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_str_plain_arange;
PyObject *const_float_2_0;
PyObject *const_tuple_slice_none_none_none_int_neg_1_tuple;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_digest_5de4997a1678ad3b56414c52c8571f1d;
PyObject *const_tuple_list_empty_tuple;
PyObject *const_str_plain_lagcompanion;
PyObject *const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple;
PyObject *const_str_plain_linalg;
PyObject *const_str_plain_eigvals;
PyObject *const_str_plain_sort;
PyObject *const_str_digest_fc4cf4c6846abd4615de7da25872cf16;
PyObject *const_str_digest_da2105778c631b698de188a0e1c61710;
PyObject *const_str_plain_eigvalsh;
PyObject *const_str_plain_lagder;
PyObject *const_str_plain_abs;
PyObject *const_str_plain_max;
PyObject *const_str_digest_8c46286bbf15590b8ccba56df100462a;
PyObject *const_str_plain_exp;
PyObject *const_str_digest_bf5a84102ae7fd5b7a067bf825ddb377;
PyObject *const_str_digest_eb9cfcca8986bdcfa72b60fe84afa8b2;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_numpy;
PyObject *const_tuple_str_plain_polyutils_tuple;
PyObject *const_str_plain_polyutils;
PyObject *const_str_plain__polybase;
PyObject *const_tuple_str_plain_ABCPolyBase_tuple;
PyObject *const_str_plain_ABCPolyBase;
PyObject *const_list_da969220027be181726977d2dc05ff0e_list;
PyObject *const_str_plain_trimcoef;
PyObject *const_str_plain_lagtrim;
PyObject *const_str_plain_poly2lag;
PyObject *const_str_plain_lag2poly;
PyObject *const_str_plain_lagdomain;
PyObject *const_str_plain_lagzero;
PyObject *const_str_plain_lagone;
PyObject *const_str_plain_lagx;
PyObject *const_str_plain_lagfromroots;
PyObject *const_str_plain_lagdiv;
PyObject *const_tuple_int_pos_16_tuple;
PyObject *const_str_plain_lagpow;
PyObject *const_tuple_int_pos_1_int_pos_1_int_0_tuple;
PyObject *const_str_plain_lagint;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_lagval2d;
PyObject *const_str_plain_laggrid2d;
PyObject *const_str_plain_lagval3d;
PyObject *const_str_plain_laggrid3d;
PyObject *const_str_plain_lagvander2d;
PyObject *const_str_plain_lagvander3d;
PyObject *const_tuple_none_false_none_tuple;
PyObject *const_str_plain_lagfit;
PyObject *const_str_plain_lagroots;
PyObject *const_str_plain_laggauss;
PyObject *const_str_plain_lagweight;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Laguerre;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_80f29c585d7188151dc6c0fcd07af6e7;
PyObject *const_str_digest_0abfb1ff2d8d91b8062297e993dbfb09;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_1630;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain__mul;
PyObject *const_str_plain__val;
PyObject *const_str_plain__int;
PyObject *const_str_plain__der;
PyObject *const_str_plain__line;
PyObject *const_str_plain__roots;
PyObject *const_str_plain_domain;
PyObject *const_str_plain_window;
PyObject *const_str_plain_L;
PyObject *const_str_plain_basis_name;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_925011426e364caed98773234dfb7094;
PyObject *const_str_digest_20111a4dcdd5a53c4585a31dae8c340f;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple;
PyObject *const_tuple_str_plain_c1_str_plain_c2_tuple;
PyObject *const_tuple_ac593b42b7cc8fcfc6690a02640b5be0_tuple;
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
PyObject *const_tuple_str_plain_pol_str_plain_res_str_plain_p_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[206];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.polynomial.laguerre"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_pu);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_as_series);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagadd);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagmulx);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_res);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_a277bf0d16fe454be3ac08de12af03cf);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_polynomial);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyadd);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_polymulx);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_polysub);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_neg_2);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_c0);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_c1);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_e384133b80362aa6e8119ecd20d8dea8);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_0384d215b1b58de3b66e438d893e3991);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__fromroots);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagline);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagmul);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_7adbb21744eb4c73d930495d1ada5ec5);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__add);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f103b623f85b787c1b5a3a3738219f4);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__sub);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_e982cd65d5492eea9f80f9515615eeb3);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_prd);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e0ac40f7b3b6071a172e3b531225972);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_nd);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagsub);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_xs);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e42c5db19635d83adac5dc1aa042b89);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__div);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_58b84eee4dc22797daa8fbcf8c16c084);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__pow);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_1059a99a9d2e4c7f69e7ab43253afe32);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_char);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_astype);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_double);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__as_int);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_lib);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_utils);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_scl);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_der);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_33612223df2c3eda6f06f7737c71baf0);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterable);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_k);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_all);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_tmp);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagval);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_lbnd);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb2f85110d8157e4f75fd9f263f3ede5);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_36d2db04545105324505332a1992042e);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain__valnd);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_0735cbae97d6be33e72495c6c7a622d8);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain__gridnd);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_de63a9342fac0864f2529dc47d2d0590);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_c489ca71f779d291b3e0d1bc51e2b85e);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_22f10d1e12144027d32a5cf0bc8c7f20);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_deg);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_v);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_edcc24c87198f868599ef50a5c371b23);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__vander_nd_flat);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagvander);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_65e14b9854143715b448589fa55ba69e);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_0fcba8b9831088f423816af8e9c4906c);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__fit);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_efaf6ee3b00460b2c83ba984b26f962a);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_zeros);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_arange);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_float_2_0);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_5de4997a1678ad3b56414c52c8571f1d);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagcompanion);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_linalg);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_eigvals);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc4cf4c6846abd4615de7da25872cf16);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_eigvalsh);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagder);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_abs);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c46286bbf15590b8ccba56df100462a);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_exp);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf5a84102ae7fd5b7a067bf825ddb377);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb9cfcca8986bdcfa72b60fe84afa8b2);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyutils_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_polyutils);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain__polybase);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCPolyBase_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCPolyBase);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_list_da969220027be181726977d2dc05ff0e_list);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_trimcoef);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagtrim);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_poly2lag);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_lag2poly);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagdomain);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagzero);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagone);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagx);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagfromroots);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagdiv);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagpow);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagint);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagval2d);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_laggrid2d);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagval3d);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_laggrid3d);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagvander2d);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagvander3d);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagfit);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagroots);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_laggauss);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_lagweight);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_Laguerre);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_80f29c585d7188151dc6c0fcd07af6e7);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_0abfb1ff2d8d91b8062297e993dbfb09);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_1630);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain__mul);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain__val);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain__int);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain__der);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain__line);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain__roots);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_window);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_basis_name);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_925011426e364caed98773234dfb7094);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_20111a4dcdd5a53c4585a31dae8c340f);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_ac593b42b7cc8fcfc6690a02640b5be0_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_roots_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_w_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pol_str_plain_res_str_plain_p_tuple);
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
void checkModuleConstants_numpy$polynomial$laguerre(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_pu));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pu);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_as_series));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_as_series);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_int_neg_1));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_int_neg_1);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagadd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagadd);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagmulx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagmulx);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_res));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_res);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_a277bf0d16fe454be3ac08de12af03cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a277bf0d16fe454be3ac08de12af03cf);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_polynomial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polynomial);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyadd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyadd);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_polymulx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polymulx);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_polysub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polysub);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_neg_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_2);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c0);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c1);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_e384133b80362aa6e8119ecd20d8dea8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e384133b80362aa6e8119ecd20d8dea8);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_0384d215b1b58de3b66e438d893e3991));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0384d215b1b58de3b66e438d893e3991);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__fromroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fromroots);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagline);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagmul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagmul);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_7adbb21744eb4c73d930495d1ada5ec5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7adbb21744eb4c73d930495d1ada5ec5);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f103b623f85b787c1b5a3a3738219f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f103b623f85b787c1b5a3a3738219f4);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sub);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_e982cd65d5492eea9f80f9515615eeb3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e982cd65d5492eea9f80f9515615eeb3);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_prd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prd);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e0ac40f7b3b6071a172e3b531225972));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e0ac40f7b3b6071a172e3b531225972);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_nd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nd);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagsub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagsub);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_xs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_xs);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e42c5db19635d83adac5dc1aa042b89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e42c5db19635d83adac5dc1aa042b89);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__div));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__div);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_58b84eee4dc22797daa8fbcf8c16c084));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58b84eee4dc22797daa8fbcf8c16c084);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__pow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pow);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_1059a99a9d2e4c7f69e7ab43253afe32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1059a99a9d2e4c7f69e7ab43253afe32);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_char));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_char);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e06792ac9d1e948515e79b21ef14ea6);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_astype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astype);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_double));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_double);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__as_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__as_int);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lib);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_utils);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_axis_index);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_moveaxis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moveaxis);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_1_none);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_scl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scl);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_der);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_33612223df2c3eda6f06f7737c71baf0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33612223df2c3eda6f06f7737c71baf0);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iterable);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b303cff154cb34d4708df3886d4b732e);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_k));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_k);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_616f6ee3ef74479987454a15fb3cc986);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9be14195673dac9b8db86f91b86f4b8);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_all);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_tmp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tmp);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagval);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_lbnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lbnd);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb2f85110d8157e4f75fd9f263f3ede5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb2f85110d8157e4f75fd9f263f3ede5);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_tuple_type_list_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_reshape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reshape);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_36d2db04545105324505332a1992042e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36d2db04545105324505332a1992042e);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain__valnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__valnd);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_0735cbae97d6be33e72495c6c7a622d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0735cbae97d6be33e72495c6c7a622d8);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain__gridnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__gridnd);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_de63a9342fac0864f2529dc47d2d0590));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de63a9342fac0864f2529dc47d2d0590);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_c489ca71f779d291b3e0d1bc51e2b85e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c489ca71f779d291b3e0d1bc51e2b85e);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_22f10d1e12144027d32a5cf0bc8c7f20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22f10d1e12144027d32a5cf0bc8c7f20);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_deg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deg);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea8c65b23281db7ee7660696e61ab360);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_v));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_v);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_edcc24c87198f868599ef50a5c371b23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edcc24c87198f868599ef50a5c371b23);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__vander_nd_flat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__vander_nd_flat);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagvander));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagvander);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_65e14b9854143715b448589fa55ba69e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65e14b9854143715b448589fa55ba69e);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_0fcba8b9831088f423816af8e9c4906c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0fcba8b9831088f423816af8e9c4906c);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__fit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fit);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_efaf6ee3b00460b2c83ba984b26f962a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_efaf6ee3b00460b2c83ba984b26f962a);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af327786ef70d70118fb639ec7c50f4e);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_zeros));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zeros);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_arange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arange);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_float_2_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_2_0);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_5de4997a1678ad3b56414c52c8571f1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5de4997a1678ad3b56414c52c8571f1d);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_empty_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagcompanion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagcompanion);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_linalg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linalg);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_eigvals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eigvals);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc4cf4c6846abd4615de7da25872cf16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc4cf4c6846abd4615de7da25872cf16);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da2105778c631b698de188a0e1c61710);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_eigvalsh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eigvalsh);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagder);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_abs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abs);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c46286bbf15590b8ccba56df100462a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c46286bbf15590b8ccba56df100462a);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_exp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exp);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf5a84102ae7fd5b7a067bf825ddb377));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf5a84102ae7fd5b7a067bf825ddb377);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb9cfcca8986bdcfa72b60fe84afa8b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb9cfcca8986bdcfa72b60fe84afa8b2);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_polyutils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_polyutils_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_polyutils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_polyutils);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain__polybase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__polybase);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCPolyBase_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABCPolyBase_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCPolyBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCPolyBase);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_list_da969220027be181726977d2dc05ff0e_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_da969220027be181726977d2dc05ff0e_list);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_trimcoef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trimcoef);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagtrim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagtrim);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_poly2lag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_poly2lag);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_lag2poly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lag2poly);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagdomain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagdomain);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagzero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagzero);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagone);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagx);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagfromroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagfromroots);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagdiv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagdiv);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_16_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagpow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagpow);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagint);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagval2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagval2d);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_laggrid2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_laggrid2d);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagval3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagval3d);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_laggrid3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_laggrid3d);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagvander2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagvander2d);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagvander3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagvander3d);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_false_none_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagfit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagfit);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagroots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagroots);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_laggauss));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_laggauss);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_lagweight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lagweight);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_Laguerre));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Laguerre);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_80f29c585d7188151dc6c0fcd07af6e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80f29c585d7188151dc6c0fcd07af6e7);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_0abfb1ff2d8d91b8062297e993dbfb09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0abfb1ff2d8d91b8062297e993dbfb09);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_1630));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1630);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain__mul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mul);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain__val));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__val);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain__int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__int);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain__der));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__der);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain__line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__line);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain__roots));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__roots);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_domain);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_window));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_window);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_L));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_L);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_basis_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_basis_name);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_925011426e364caed98773234dfb7094));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_925011426e364caed98773234dfb7094);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_20111a4dcdd5a53c4585a31dae8c340f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20111a4dcdd5a53c4585a31dae8c340f);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_ac593b42b7cc8fcfc6690a02640b5be0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ac593b42b7cc8fcfc6690a02640b5be0_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_roots_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_roots_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_w_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_w_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pol_str_plain_res_str_plain_p_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pol_str_plain_res_str_plain_p_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_numpy$polynomial$laguerre$ABCPolyBase(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagadd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagadd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagadd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagadd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagadd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagadd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagadd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagadd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagadd);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagcompanion(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagcompanion);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagcompanion);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagcompanion, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagcompanion);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagcompanion, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagcompanion);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagcompanion);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagcompanion);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagder);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagdiv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdiv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagdiv);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagdiv, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagdiv);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagdiv, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdiv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdiv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdiv);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagdomain(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdomain);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagdomain);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagdomain, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagdomain);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagdomain, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdomain);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdomain);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdomain);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagfit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagfit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagfit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagfit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagfit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfit);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagfromroots(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfromroots);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagfromroots);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagfromroots, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagfromroots);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagfromroots, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfromroots);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfromroots);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfromroots);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagint);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagline(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagline);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagline);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagline, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagline);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagline, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagline);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagline);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagline);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagmul(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmul);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagmul);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagmul, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagmul);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagmul, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmul);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmul);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmul);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagmulx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmulx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagmulx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagmulx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagmulx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagmulx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmulx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmulx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmulx);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagpow(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagpow);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagpow);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagpow, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagpow);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagpow, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagpow);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagpow);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagpow);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagroots(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagroots);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagroots);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagroots, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagroots);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagroots, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagroots);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagroots);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagroots);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagsub(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagsub);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagsub);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagsub, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagsub);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagsub, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagsub);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagsub);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagsub);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagval(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagval);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagval);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagval, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagval);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagval, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagval);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagval);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagval);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$lagvander(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagvander);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagvander);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagvander, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lagvander);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lagvander, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagvander);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagvander);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lagvander);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$polynomial$laguerre$pu(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$polynomial$laguerre->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$polynomial$laguerre->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$polynomial$laguerre->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pu);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_dcb71e55c4fe569f64aff16d334b85a2;
static PyCodeObject *code_objects_5e616106ac0e9e1b1fe150766431e2de;
static PyCodeObject *code_objects_fd304da9af0bbc78df366380e820b77e;
static PyCodeObject *code_objects_fb81716dc94a0d4fe096b2c093962510;
static PyCodeObject *code_objects_8142e4e57482ce88c4385f2d8b2d49e6;
static PyCodeObject *code_objects_f8a5bd936747efdcc5385b5efa84c858;
static PyCodeObject *code_objects_89fd6bf3d749312a38683fcddf6608ac;
static PyCodeObject *code_objects_dea21ce1ad6b73f61bc7b53bc1121eee;
static PyCodeObject *code_objects_aa1d8893f31c9b305e24428733b334eb;
static PyCodeObject *code_objects_653f86246a62f9e0e89b670582ca489a;
static PyCodeObject *code_objects_11fa3994b9db0f3c6ef90e3f3512ed97;
static PyCodeObject *code_objects_1adbbf1331120edcf5bcfa64fa5381da;
static PyCodeObject *code_objects_c248a301666f41a602cbd09af3f37eb6;
static PyCodeObject *code_objects_e45e4156a6cbcd6e7b1cb6824dd0ebec;
static PyCodeObject *code_objects_c84ea5531ba25e0a9ec8db0517f12401;
static PyCodeObject *code_objects_cda781b42196d337604344610eff13b1;
static PyCodeObject *code_objects_c6528c63442fea6b882c9b902206dc33;
static PyCodeObject *code_objects_2eae91a60c3d53674419254693e45c1e;
static PyCodeObject *code_objects_af6e19230326490d537d9444a8bbef9f;
static PyCodeObject *code_objects_033c1aad92b386ce96075c5035835bab;
static PyCodeObject *code_objects_5aaa328a474eeb45b07c439b6d5a45f6;
static PyCodeObject *code_objects_c6deb36513057d7d0119da2370b2ce20;
static PyCodeObject *code_objects_c37e6b8a4712fc36c6eb69a24276b619;
static PyCodeObject *code_objects_4c3c172edd6ce87715cb7400d80f01bb;
static PyCodeObject *code_objects_82ad5267dc38fc6cf4276958058df231;
static PyCodeObject *code_objects_5b611ebff23e3cc818a8a85345a31193;
static PyCodeObject *code_objects_691968c398157b593f00d683f6278ccb;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_925011426e364caed98773234dfb7094); CHECK_OBJECT(module_filename_obj);
code_objects_dcb71e55c4fe569f64aff16d334b85a2 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_20111a4dcdd5a53c4585a31dae8c340f, mod_consts.const_str_digest_20111a4dcdd5a53c4585a31dae8c340f, NULL, NULL, 0, 0, 0);
code_objects_5e616106ac0e9e1b1fe150766431e2de = MAKE_CODE_OBJECT(module_filename_obj, 1630, 0, mod_consts.const_str_plain_Laguerre, mod_consts.const_str_plain_Laguerre, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fd304da9af0bbc78df366380e820b77e = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lag2poly, mod_consts.const_str_plain_lag2poly, mod_consts.const_tuple_5aed525e2300134cac2cf7f770b5af6f_tuple, NULL, 1, 0, 0);
code_objects_fb81716dc94a0d4fe096b2c093962510 = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagadd, mod_consts.const_str_plain_lagadd, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_8142e4e57482ce88c4385f2d8b2d49e6 = MAKE_CODE_OBJECT(module_filename_obj, 1421, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagcompanion, mod_consts.const_str_plain_lagcompanion, mod_consts.const_tuple_ac593b42b7cc8fcfc6690a02640b5be0_tuple, NULL, 1, 0, 0);
code_objects_f8a5bd936747efdcc5385b5efa84c858 = MAKE_CODE_OBJECT(module_filename_obj, 590, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagder, mod_consts.const_str_plain_lagder, mod_consts.const_tuple_9155005e41c3737e8ba43420c4730900_tuple, NULL, 4, 0, 0);
code_objects_89fd6bf3d749312a38683fcddf6608ac = MAKE_CODE_OBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagdiv, mod_consts.const_str_plain_lagdiv, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_dea21ce1ad6b73f61bc7b53bc1121eee = MAKE_CODE_OBJECT(module_filename_obj, 1287, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagfit, mod_consts.const_str_plain_lagfit, mod_consts.const_tuple_b87a3e87a6253db629058266b0859839_tuple, NULL, 6, 0, 0);
code_objects_aa1d8893f31c9b305e24428733b334eb = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagfromroots, mod_consts.const_str_plain_lagfromroots, mod_consts.const_tuple_str_plain_roots_tuple, NULL, 1, 0, 0);
code_objects_653f86246a62f9e0e89b670582ca489a = MAKE_CODE_OBJECT(module_filename_obj, 1531, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_laggauss, mod_consts.const_str_plain_laggauss, mod_consts.const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple, NULL, 1, 0, 0);
code_objects_11fa3994b9db0f3c6ef90e3f3512ed97 = MAKE_CODE_OBJECT(module_filename_obj, 939, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_laggrid2d, mod_consts.const_str_plain_laggrid2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_1adbbf1331120edcf5bcfa64fa5381da = MAKE_CODE_OBJECT(module_filename_obj, 1048, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_laggrid3d, mod_consts.const_str_plain_laggrid3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, NULL, 4, 0, 0);
code_objects_c248a301666f41a602cbd09af3f37eb6 = MAKE_CODE_OBJECT(module_filename_obj, 674, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagint, mod_consts.const_str_plain_lagint, mod_consts.const_tuple_dfde0fffe950637125c97009296b6a79_tuple, NULL, 6, 0, 0);
code_objects_e45e4156a6cbcd6e7b1cb6824dd0ebec = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagline, mod_consts.const_str_plain_lagline, mod_consts.const_tuple_str_plain_off_str_plain_scl_tuple, NULL, 2, 0, 0);
code_objects_c84ea5531ba25e0a9ec8db0517f12401 = MAKE_CODE_OBJECT(module_filename_obj, 441, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagmul, mod_consts.const_str_plain_lagmul, mod_consts.const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple, NULL, 2, 0, 0);
code_objects_cda781b42196d337604344610eff13b1 = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagmulx, mod_consts.const_str_plain_lagmulx, mod_consts.const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_c6528c63442fea6b882c9b902206dc33 = MAKE_CODE_OBJECT(module_filename_obj, 553, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagpow, mod_consts.const_str_plain_lagpow, mod_consts.const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple, NULL, 3, 0, 0);
code_objects_2eae91a60c3d53674419254693e45c1e = MAKE_CODE_OBJECT(module_filename_obj, 1467, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagroots, mod_consts.const_str_plain_lagroots, mod_consts.const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple, NULL, 1, 0, 0);
code_objects_af6e19230326490d537d9444a8bbef9f = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagsub, mod_consts.const_str_plain_lagsub, mod_consts.const_tuple_str_plain_c1_str_plain_c2_tuple, NULL, 2, 0, 0);
code_objects_033c1aad92b386ce96075c5035835bab = MAKE_CODE_OBJECT(module_filename_obj, 796, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagval, mod_consts.const_str_plain_lagval, mod_consts.const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple, NULL, 3, 0, 0);
code_objects_5aaa328a474eeb45b07c439b6d5a45f6 = MAKE_CODE_OBJECT(module_filename_obj, 889, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagval2d, mod_consts.const_str_plain_lagval2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, NULL, 3, 0, 0);
code_objects_c6deb36513057d7d0119da2370b2ce20 = MAKE_CODE_OBJECT(module_filename_obj, 995, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagval3d, mod_consts.const_str_plain_lagval3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, NULL, 4, 0, 0);
code_objects_c37e6b8a4712fc36c6eb69a24276b619 = MAKE_CODE_OBJECT(module_filename_obj, 1109, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagvander, mod_consts.const_str_plain_lagvander, mod_consts.const_tuple_5ac5563309656f6342973420ec643c7c_tuple, NULL, 2, 0, 0);
code_objects_4c3c172edd6ce87715cb7400d80f01bb = MAKE_CODE_OBJECT(module_filename_obj, 1170, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagvander2d, mod_consts.const_str_plain_lagvander2d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple, NULL, 3, 0, 0);
code_objects_82ad5267dc38fc6cf4276958058df231 = MAKE_CODE_OBJECT(module_filename_obj, 1227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagvander3d, mod_consts.const_str_plain_lagvander3d, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple, NULL, 4, 0, 0);
code_objects_5b611ebff23e3cc818a8a85345a31193 = MAKE_CODE_OBJECT(module_filename_obj, 1598, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_lagweight, mod_consts.const_str_plain_lagweight, mod_consts.const_tuple_str_plain_x_str_plain_w_tuple, NULL, 1, 0, 0);
code_objects_691968c398157b593f00d683f6278ccb = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_poly2lag, mod_consts.const_str_plain_poly2lag, mod_consts.const_tuple_str_plain_pol_str_plain_res_str_plain_p_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__10_lagpow(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__11_lagder(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__12_lagint(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__13_lagval(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__14_lagval2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__15_laggrid2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__16_lagval3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__17_laggrid3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__18_lagvander(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__19_lagvander2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__1_poly2lag(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__20_lagvander3d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__21_lagfit(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__22_lagcompanion(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__23_lagroots(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__24_laggauss(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__25_lagweight(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__2_lag2poly(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__3_lagline(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__4_lagfromroots(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__5_lagadd(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__6_lagsub(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__7_lagmulx(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__8_lagmul(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__9_lagdiv(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$polynomial$laguerre$$$function__1_poly2lag(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_pol = python_pars[0];
PyObject *var_res = NULL;
PyObject *var_p = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag = MAKE_FUNCTION_FRAME(tstate, code_objects_691968c398157b593f00d683f6278ccb, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag = cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_pol);
tmp_list_element_1 = par_pol;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag->m_frame.f_lineno = 133;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
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



exception_lineno = 133;
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



exception_lineno = 133;
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
tmp_assign_source_4 = const_int_0;
assert(var_res == NULL);
Py_INCREF(tmp_assign_source_4);
var_res = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_pol);
tmp_expression_value_1 = par_pol;
tmp_subscript_value_1 = mod_consts.const_slice_none_none_int_neg_1;
tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
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
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 135;
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
    PyObject *old = var_p;
    var_p = tmp_assign_source_7;
    Py_INCREF(var_p);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagadd(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagadd);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = module_var_accessor_numpy$polynomial$laguerre$lagmulx(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagmulx);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
if (var_res == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_res);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 136;
type_description_1 = "ooo";
    goto try_except_handler_4;
}

tmp_args_element_value_3 = var_res;
frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag->m_frame.f_lineno = 136;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_p);
tmp_args_element_value_4 = var_p;
frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_res;
    var_res = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooo";
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
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag,
    type_description_1,
    par_pol,
    var_res,
    var_p
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag == cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__1_poly2lag);

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
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_p);
var_p = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_pol);
par_pol = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_p);
var_p = NULL;
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


static PyObject *impl_numpy$polynomial$laguerre$$$function__2_lag2poly(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly = MAKE_FUNCTION_FRAME(tstate, code_objects_fd304da9af0bbc78df366380e820b77e, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly = cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_polynomial;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$polynomial$laguerre;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_polyadd_str_plain_polymulx_str_plain_polysub_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame.f_lineno = 178;
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
        (PyObject *)moduledict_numpy$polynomial$laguerre,
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
        (PyObject *)moduledict_numpy$polynomial$laguerre,
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
        (PyObject *)moduledict_numpy$polynomial$laguerre,
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame.f_lineno = 180;
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
goto branch_end_1;
branch_no_1:;
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


exception_lineno = 185;
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


exception_lineno = 186;
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


exception_lineno = 188;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
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
exception_lineno = 188;
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

exception_lineno = 189;
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
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
if (var_polysub == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polysub);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
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


exception_lineno = 190;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
if (var_c1 == NULL) {
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
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

exception_lineno = 190;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 190;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_i);
tmp_truediv_expr_right_1 = var_i;
tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 190;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame.f_lineno = 190;
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


exception_lineno = 190;
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
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
if (var_polyadd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyadd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_called_value_2 = var_polyadd;
CHECK_OBJECT(var_tmp);
tmp_args_element_value_4 = var_tmp;
if (var_polysub == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polysub);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_called_value_3 = var_polysub;
tmp_mult_expr_left_3 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_i);
tmp_mult_expr_right_3 = var_i;
tmp_sub_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_sub_expr_right_4 = const_int_pos_1;
tmp_mult_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
if (var_c1 == NULL) {
Py_DECREF(tmp_mult_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_mult_expr_right_2 = var_c1;
tmp_args_element_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
if (var_polymulx == NULL) {
Py_DECREF(tmp_args_element_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polymulx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_called_value_4 = var_polymulx;
if (var_c1 == NULL) {
Py_DECREF(tmp_args_element_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_8 = var_c1;
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame.f_lineno = 191;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_truediv_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_i);
tmp_truediv_expr_right_2 = var_i;
tmp_args_element_value_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
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


exception_lineno = 188;
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
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_13;
if (var_polyadd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polyadd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_5 = var_polyadd;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = var_c0;
if (var_polysub == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polysub);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_6 = var_polysub;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = var_c1;
if (var_polymulx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_polymulx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_7 = var_polymulx;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_13 = var_c1;
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame.f_lineno = 192;
tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_13);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooo";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly,
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
if (frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly == cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__2_lag2poly);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__3_lagline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_off = python_pars[0];
PyObject *par_scl = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__3_lagline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline = MAKE_FUNCTION_FRAME(tstate, code_objects_e45e4156a6cbcd6e7b1cb6824dd0ebec, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__3_lagline = cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__3_lagline);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__3_lagline) == 2);

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


exception_lineno = 245;
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
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_off);
tmp_add_expr_left_1 = par_off;
CHECK_OBJECT(par_scl);
tmp_add_expr_right_1 = par_scl;
tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 246;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_operand_value_1;
PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_scl);
tmp_operand_value_1 = par_scl;
tmp_list_element_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
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
frame_frame_numpy$polynomial$laguerre$$$function__3_lagline->m_frame.f_lineno = 246;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_off);
tmp_list_element_2 = par_off;
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$laguerre$$$function__3_lagline->m_frame.f_lineno = 248;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__3_lagline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__3_lagline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__3_lagline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__3_lagline,
    type_description_1,
    par_off,
    par_scl
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__3_lagline == cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__3_lagline = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__3_lagline);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__4_lagfromroots(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_roots = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots = MAKE_FUNCTION_FRAME(tstate, code_objects_aa1d8893f31c9b305e24428733b334eb, module_numpy$polynomial$laguerre, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots = cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fromroots);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagline(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagline);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 304;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_numpy$polynomial$laguerre$lagmul(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagmul);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 304;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_roots);
tmp_args_element_value_3 = par_roots;
frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots->m_frame.f_lineno = 304;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots,
    type_description_1,
    par_roots
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots == cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__4_lagfromroots);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__5_lagadd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd = MAKE_FUNCTION_FRAME(tstate, code_objects_fb81716dc94a0d4fe096b2c093962510, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd = cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_1 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_2 = par_c2;
frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd->m_frame.f_lineno = 344;
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


exception_lineno = 344;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd == cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__5_lagadd);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__6_lagsub(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub = MAKE_FUNCTION_FRAME(tstate, code_objects_af6e19230326490d537d9444a8bbef9f, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub = cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 384;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_1 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_2 = par_c2;
frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub->m_frame.f_lineno = 384;
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


exception_lineno = 384;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub == cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__6_lagsub);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__7_lagmulx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *tmp_inplace_assign_subscript_2__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_2__target = NULL;
PyObject *tmp_inplace_assign_subscript_2__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx = MAKE_FUNCTION_FRAME(tstate, code_objects_cda781b42196d337604344610eff13b1, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx = cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 426;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx->m_frame.f_lineno = 426;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
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



exception_lineno = 426;
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



exception_lineno = 426;
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


exception_lineno = 428;
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


exception_lineno = 428;
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


exception_lineno = 428;
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
tmp_expression_value_2 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 431;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_empty);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
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

exception_lineno = 431;
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

exception_lineno = 431;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx->m_frame.f_lineno = 431;
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


exception_lineno = 431;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_prd == NULL);
var_prd = tmp_assign_source_4;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(par_c);
tmp_expression_value_4 = par_c;
tmp_subscript_value_2 = const_int_0;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
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


exception_lineno = 432;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(par_c);
tmp_expression_value_5 = par_c;
tmp_subscript_value_3 = const_int_0;
tmp_operand_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
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


exception_lineno = 433;
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


exception_lineno = 434;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_2 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
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
exception_lineno = 434;
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
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
CHECK_OBJECT(par_c);
tmp_expression_value_6 = par_c;
CHECK_OBJECT(var_i);
tmp_subscript_value_4 = var_i;
tmp_operand_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_mult_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_i);
tmp_add_expr_left_2 = var_i;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_mult_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 435;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_ass_subvalue_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
if (var_prd == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 435;
type_description_1 = "ooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_3 = var_prd;
CHECK_OBJECT(var_i);
tmp_add_expr_left_3 = var_i;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_ass_subscript_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 435;
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


exception_lineno = 435;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
}
{
PyObject *tmp_assign_source_8;
if (var_prd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 436;
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
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(var_i);
tmp_assign_source_9 = var_i;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_9;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
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


exception_lineno = 436;
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
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
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


exception_lineno = 436;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_mult_expr_left_3 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_i);
tmp_mult_expr_right_3 = var_i;
tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 436;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_add_expr_right_4 = const_int_pos_1;
tmp_mult_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 436;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
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


exception_lineno = 436;
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
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
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
{
PyObject *tmp_assign_source_12;
if (var_prd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 437;
type_description_1 = "ooo";
    goto try_except_handler_4;
}

tmp_assign_source_12 = var_prd;
{
    PyObject *old = tmp_inplace_assign_subscript_2__target;
    tmp_inplace_assign_subscript_2__target = tmp_assign_source_12;
    Py_INCREF(tmp_inplace_assign_subscript_2__target);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_1 = var_i;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_inplace_assign_subscript_2__subscript;
    tmp_inplace_assign_subscript_2__subscript = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_expression_value_9 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_subscript_value_7 = tmp_inplace_assign_subscript_2__subscript;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_inplace_assign_subscript_2__value;
    tmp_inplace_assign_subscript_2__value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(par_c);
tmp_expression_value_10 = par_c;
CHECK_OBJECT(var_i);
tmp_subscript_value_8 = var_i;
tmp_mult_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_8);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_right_4 = var_i;
tmp_isub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_assign_source_15 = tmp_isub_expr_left_1;
tmp_inplace_assign_subscript_2__value = tmp_assign_source_15;

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


exception_lineno = 437;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_2__subscript);
tmp_inplace_assign_subscript_2__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
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
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
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
if (var_prd == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 438;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx,
    type_description_1,
    par_c,
    var_prd,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx == cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__7_lagmulx);

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
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_c);
par_c = NULL;
Py_XDECREF(var_prd);
var_prd = NULL;
Py_XDECREF(var_i);
var_i = NULL;
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


static PyObject *impl_numpy$polynomial$laguerre$$$function__8_lagmul(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul = MAKE_FUNCTION_FRAME(tstate, code_objects_c84ea5531ba25e0a9ec8db0517f12401, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul = cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 480;
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
frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_frame.f_lineno = 480;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
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



exception_lineno = 480;
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



exception_lineno = 480;
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



exception_lineno = 480;
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


exception_lineno = 482;
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

exception_lineno = 482;
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


exception_lineno = 489;
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


exception_lineno = 490;
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


exception_lineno = 490;
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


exception_lineno = 492;
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


exception_lineno = 493;
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


exception_lineno = 493;
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


exception_lineno = 494;
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


exception_lineno = 494;
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


exception_lineno = 496;
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


exception_lineno = 497;
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


exception_lineno = 497;
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


exception_lineno = 498;
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


exception_lineno = 498;
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


exception_lineno = 499;
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


exception_lineno = 499;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
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
exception_lineno = 499;
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

exception_lineno = 500;
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

exception_lineno = 501;
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
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_mult_expr_left_7;
PyObject *tmp_mult_expr_right_7;
PyObject *tmp_sub_expr_left_2;
nuitka_digit tmp_sub_expr_right_2;
tmp_called_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagsub(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagsub);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 502;
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


exception_lineno = 502;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_mult_expr_left_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_mult_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
if (var_xs == NULL) {
Py_DECREF(tmp_mult_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_xs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 502;
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


exception_lineno = 502;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
if (par_c1 == NULL) {
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 502;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_mult_expr_left_7 = par_c1;
CHECK_OBJECT(var_nd);
tmp_sub_expr_left_2 = var_nd;
tmp_sub_expr_right_2 = 1;
tmp_mult_expr_right_7 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
assert(!(tmp_mult_expr_right_7 == NULL));
tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
CHECK_OBJECT(tmp_mult_expr_right_7);
Py_DECREF(tmp_mult_expr_right_7);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 502;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_nd);
tmp_truediv_expr_right_1 = var_nd;
tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 502;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_frame.f_lineno = 502;
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


exception_lineno = 502;
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
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_mult_expr_left_8;
PyObject *tmp_mult_expr_right_8;
PyObject *tmp_sub_expr_left_3;
nuitka_digit tmp_sub_expr_right_3;
PyObject *tmp_mult_expr_left_9;
PyObject *tmp_mult_expr_right_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
tmp_called_value_2 = module_var_accessor_numpy$polynomial$laguerre$lagadd(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagadd);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 503;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_tmp);
tmp_args_element_value_4 = var_tmp;
tmp_called_value_3 = module_var_accessor_numpy$polynomial$laguerre$lagsub(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagsub);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 503;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_mult_expr_left_9 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_nd);
tmp_mult_expr_right_9 = var_nd;
tmp_sub_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_right_9, tmp_mult_expr_left_9);
assert(!(tmp_sub_expr_left_3 == NULL));
tmp_sub_expr_right_3 = 1;
tmp_mult_expr_left_8 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
assert(!(tmp_mult_expr_left_8 == NULL));
if (par_c1 == NULL) {
Py_DECREF(tmp_mult_expr_left_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 503;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_mult_expr_right_8 = par_c1;
tmp_args_element_value_6 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
CHECK_OBJECT(tmp_mult_expr_left_8);
Py_DECREF(tmp_mult_expr_left_8);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_called_value_4 = module_var_accessor_numpy$polynomial$laguerre$lagmulx(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagmulx);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_6);

exception_lineno = 503;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
if (par_c1 == NULL) {
Py_DECREF(tmp_args_element_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 503;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_8 = par_c1;
frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_frame.f_lineno = 503;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 503;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_frame.f_lineno = 503;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_truediv_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_nd);
tmp_truediv_expr_right_2 = var_nd;
tmp_args_element_value_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_frame.f_lineno = 503;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
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


exception_lineno = 499;
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
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_13;
tmp_called_value_5 = module_var_accessor_numpy$polynomial$laguerre$lagadd(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagadd);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 504;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 504;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = var_c0;
tmp_called_value_6 = module_var_accessor_numpy$polynomial$laguerre$lagsub(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagsub);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 504;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 504;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = par_c1;
tmp_called_value_7 = module_var_accessor_numpy$polynomial$laguerre$lagmulx(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagmulx);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 504;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 504;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_13 = par_c1;
frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_frame.f_lineno = 504;
tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_13);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_frame.f_lineno = 504;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_frame.f_lineno = 504;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul,
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
if (frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul == cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__8_lagmul);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__9_lagdiv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c1 = python_pars[0];
PyObject *par_c2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv = MAKE_FUNCTION_FRAME(tstate, code_objects_89fd6bf3d749312a38683fcddf6608ac, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv = cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__div);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagmul(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagmul);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 550;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c1);
tmp_args_element_value_2 = par_c1;
CHECK_OBJECT(par_c2);
tmp_args_element_value_3 = par_c2;
frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv->m_frame.f_lineno = 550;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv,
    type_description_1,
    par_c1,
    par_c2
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv == cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__9_lagdiv);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__10_lagpow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_pow = python_pars[1];
PyObject *par_maxpower = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow = MAKE_FUNCTION_FRAME(tstate, code_objects_c6528c63442fea6b882c9b902206dc33, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow = cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 587;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__pow);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagmul(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagmul);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 587;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_pow);
tmp_args_element_value_3 = par_pow;
CHECK_OBJECT(par_maxpower);
tmp_args_element_value_4 = par_maxpower;
frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow->m_frame.f_lineno = 587;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow,
    type_description_1,
    par_c,
    par_pow,
    par_maxpower
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow == cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__10_lagpow);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__11_lagder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__11_lagder;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder = MAKE_FUNCTION_FRAME(tstate, code_objects_f8a5bd936747efdcc5385b5efa84c858, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder = cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__11_lagder);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__11_lagder) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 643;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_3fb226d452c21a3ed4f4fdaccdaa3fee);
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame.f_lineno = 643;
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


exception_lineno = 643;
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


exception_lineno = 644;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
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


exception_lineno = 644;
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


exception_lineno = 645;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 645;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_double);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 645;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame.f_lineno = 645;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 647;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_m);
tmp_args_element_value_2 = par_m;
tmp_args_element_value_3 = mod_consts.const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame.f_lineno = 647;
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


exception_lineno = 647;
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
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 648;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
tmp_args_element_value_5 = mod_consts.const_str_digest_70e3e648da9207a55990fb352e033d01;
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame.f_lineno = 648;
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


exception_lineno = 648;
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


exception_lineno = 649;
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
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame.f_lineno = 650;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 650;
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
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_lib);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_array_utils);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_normalize_axis_index);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_6 = var_iaxis;
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_c;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 651;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame.f_lineno = 651;
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


exception_lineno = 651;
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


exception_lineno = 653;
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

exception_lineno = 654;
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
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 656;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = par_c;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_9 = var_iaxis;
tmp_args_element_value_10 = const_int_0;
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame.f_lineno = 656;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
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


exception_lineno = 657;
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


exception_lineno = 658;
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


exception_lineno = 659;
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


exception_lineno = 659;
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


exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
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
exception_lineno = 661;
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

exception_lineno = 662;
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

exception_lineno = 663;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_left_1 = par_c;
if (par_scl == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scl);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 663;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_right_1 = par_scl;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
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
tmp_expression_value_12 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 664;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_empty);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 664;
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

exception_lineno = 664;
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

exception_lineno = 664;
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

exception_lineno = 664;
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

exception_lineno = 664;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame.f_lineno = 664;
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


exception_lineno = 664;
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
tmp_xrange_high_1 = const_int_pos_1;
tmp_xrange_step_1 = const_int_neg_1;
tmp_iter_arg_2 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_2, tmp_xrange_high_1, tmp_xrange_step_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 665;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 665;
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
exception_lineno = 665;
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
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_16 = par_c;
CHECK_OBJECT(var_j);
tmp_subscript_value_3 = var_j;
tmp_operand_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_3);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_ass_subvalue_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
if (var_der == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_der);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 666;
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

exception_lineno = 666;
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


exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
}
{
PyObject *tmp_assign_source_18;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_assign_source_18 = par_c;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_18;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
CHECK_OBJECT(var_j);
tmp_sub_expr_left_3 = var_j;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_assign_source_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_17 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_4 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_18 = par_c;
CHECK_OBJECT(var_j);
tmp_subscript_value_5 = var_j;
tmp_iadd_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_5);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_21 = tmp_iadd_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_21;

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_2 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_2 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_2 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooooooooo";
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

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_3;
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
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 665;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_6;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
int tmp_ass_subscript_res_1;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_19 = par_c;
tmp_subscript_value_6 = const_int_pos_1;
tmp_operand_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_6, 1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_ass_subvalue_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
if (var_der == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_der);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_3 = var_der;
tmp_ass_subscript_3 = const_int_0;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, 0, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assign_source_22;
if (var_der == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_der);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_22 = var_der;
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_22;
    Py_INCREF(par_c);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
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
branch_end_4:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_20 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = par_c;
tmp_args_element_value_12 = const_int_0;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_13 = var_iaxis;
frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame.f_lineno = 670;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_23;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__11_lagder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__11_lagder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__11_lagder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__11_lagder,
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
if (frame_frame_numpy$polynomial$laguerre$$$function__11_lagder == cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__11_lagder = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__11_lagder);

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
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__12_lagint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *tmp_inplace_assign_subscript_3__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_3__target = NULL;
PyObject *tmp_inplace_assign_subscript_3__value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__12_lagint;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint = MAKE_FUNCTION_FRAME(tstate, code_objects_c248a301666f41a602cbd09af3f37eb6, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint = cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__12_lagint);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__12_lagint) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 756;
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
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 758;
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 759;
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
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 761;
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
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 762;
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 764;
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 766;
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
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 767;
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 768;
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
tmp_called_instance_5 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 769;
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 770;
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
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 771;
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
tmp_expression_value_10 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 776;
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
tmp_expression_value_11 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 781;
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
tmp_expression_value_15 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
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
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 784;
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
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_5;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(par_c);
tmp_expression_value_19 = par_c;
tmp_subscript_value_5 = const_int_0;
tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_5, 0);
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
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_6;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(par_c);
tmp_expression_value_20 = par_c;
tmp_subscript_value_6 = const_int_0;
tmp_operand_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_6, 0);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_ass_subvalue_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
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
PyObject *tmp_assign_source_22;
if (var_tmp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 788;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
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
CHECK_OBJECT(var_j);
tmp_assign_source_23 = var_j;
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
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_expression_value_21 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_subscript_value_7 = tmp_inplace_assign_subscript_2__subscript;
tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_7);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
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
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_iadd_expr_left_2 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(par_c);
tmp_expression_value_22 = par_c;
CHECK_OBJECT(var_j);
tmp_subscript_value_8 = var_j;
tmp_iadd_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_8);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_25 = tmp_iadd_expr_left_2;
tmp_inplace_assign_subscript_2__value = tmp_assign_source_25;

}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_ass_subvalue_4 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_ass_subscribed_4 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_ass_subscript_4 = tmp_inplace_assign_subscript_2__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooo";
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
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
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
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_9;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
CHECK_OBJECT(par_c);
tmp_expression_value_23 = par_c;
CHECK_OBJECT(var_j);
tmp_subscript_value_9 = var_j;
tmp_operand_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_9);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_ass_subvalue_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
if (var_tmp == NULL) {
Py_DECREF(tmp_ass_subvalue_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_5 = var_tmp;
CHECK_OBJECT(var_j);
tmp_add_expr_left_4 = var_j;
tmp_add_expr_right_4 = const_int_pos_1;
tmp_ass_subscript_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_ass_subscript_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 789;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscript_5);
Py_DECREF(tmp_ass_subscript_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 789;
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
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
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
    PyObject *old = tmp_inplace_assign_subscript_3__target;
    tmp_inplace_assign_subscript_3__target = tmp_assign_source_26;
    Py_INCREF(tmp_inplace_assign_subscript_3__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = const_int_0;
{
    PyObject *old = tmp_inplace_assign_subscript_3__subscript;
    tmp_inplace_assign_subscript_3__subscript = tmp_assign_source_27;
    Py_INCREF(tmp_inplace_assign_subscript_3__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_10;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
tmp_expression_value_24 = tmp_inplace_assign_subscript_3__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
tmp_subscript_value_10 = tmp_inplace_assign_subscript_3__subscript;
tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_10);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_inplace_assign_subscript_3__value;
    tmp_inplace_assign_subscript_3__value = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_11;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__value);
tmp_iadd_expr_left_3 = tmp_inplace_assign_subscript_3__value;
CHECK_OBJECT(par_k);
tmp_expression_value_25 = par_k;
CHECK_OBJECT(var_i);
tmp_subscript_value_11 = var_i;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_11);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_7 = module_var_accessor_numpy$polynomial$laguerre$lagval(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagval);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
if (par_lbnd == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lbnd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_15 = par_lbnd;
if (var_tmp == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_16 = var_tmp;
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 790;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_sub_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_iadd_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_29 = tmp_iadd_expr_left_3;
tmp_inplace_assign_subscript_3__value = tmp_assign_source_29;

}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__value);
tmp_ass_subvalue_6 = tmp_inplace_assign_subscript_3__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__target);
tmp_ass_subscribed_6 = tmp_inplace_assign_subscript_3__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_3__subscript);
tmp_ass_subscript_6 = tmp_inplace_assign_subscript_3__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_30;
if (var_tmp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tmp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 791;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_30 = var_tmp;
{
    PyObject *old = par_c;
    assert(old != NULL);
    par_c = tmp_assign_source_30;
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
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
tmp_expression_value_26 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 792;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 792;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 792;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_17 = par_c;
tmp_args_element_value_18 = const_int_0;
CHECK_OBJECT(var_iaxis);
tmp_args_element_value_19 = var_iaxis;
frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame.f_lineno = 792;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 792;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_c;
    par_c = tmp_assign_source_31;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__12_lagint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__12_lagint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__12_lagint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__12_lagint,
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
if (frame_frame_numpy$polynomial$laguerre$$$function__12_lagint == cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__12_lagint = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__12_lagint);

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
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__13_lagval(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__13_lagval;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval = MAKE_FUNCTION_FRAME(tstate, code_objects_033c1aad92b386ce96075c5035835bab, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__13_lagval = cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__13_lagval);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__13_lagval) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 863;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_tuple_element_1 = par_c;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f5bbbab934471495306a2b1e3746ed7e);
frame_frame_numpy$polynomial$laguerre$$$function__13_lagval->m_frame.f_lineno = 863;
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


exception_lineno = 863;
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


exception_lineno = 864;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 864;
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


exception_lineno = 864;
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


exception_lineno = 865;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 865;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_double);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 865;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__13_lagval->m_frame.f_lineno = 865;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 865;
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


exception_lineno = 866;
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
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 867;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
frame_frame_numpy$polynomial$laguerre$$$function__13_lagval->m_frame.f_lineno = 867;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
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
tmp_expression_value_6 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 868;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
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


exception_lineno = 868;
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

exception_lineno = 869;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_c;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_reshape);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_c == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 869;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_c;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 869;
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

exception_lineno = 869;
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

exception_lineno = 869;
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

exception_lineno = 869;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__13_lagval->m_frame.f_lineno = 869;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
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

exception_lineno = 871;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = par_c;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
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

exception_lineno = 872;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
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

exception_lineno = 874;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = par_c;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 874;
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

exception_lineno = 875;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_c;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 875;
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

exception_lineno = 876;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_c;
tmp_subscript_value_3 = const_int_pos_1;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_3, 1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
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

exception_lineno = 878;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_3 = par_c;
tmp_assign_source_9 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 878;
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

exception_lineno = 879;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = par_c;
tmp_subscript_value_4 = mod_consts.const_int_neg_2;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_4, -2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 879;
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

exception_lineno = 880;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = par_c;
tmp_subscript_value_5 = const_int_neg_1;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_5, -1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 880;
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

exception_lineno = 881;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_4 = par_c;
tmp_add_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 881;
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


exception_lineno = 881;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 881;
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
exception_lineno = 881;
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

exception_lineno = 882;
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

exception_lineno = 883;
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
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_sub_expr_left_3;
nuitka_digit tmp_sub_expr_right_3;
if (par_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 884;
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


exception_lineno = 884;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 884;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (var_c1 == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 884;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_2 = var_c1;
CHECK_OBJECT(var_nd);
tmp_sub_expr_left_3 = var_nd;
tmp_sub_expr_right_3 = 1;
tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
assert(!(tmp_mult_expr_right_2 == NULL));
tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 884;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_nd);
tmp_truediv_expr_right_1 = var_nd;
tmp_sub_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 884;
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


exception_lineno = 884;
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
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_sub_expr_left_5;
nuitka_digit tmp_sub_expr_right_5;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
CHECK_OBJECT(var_tmp);
tmp_add_expr_left_3 = var_tmp;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 885;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_3 = var_c1;
tmp_mult_expr_left_4 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_nd);
tmp_mult_expr_right_4 = var_nd;
tmp_sub_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_right_4, tmp_mult_expr_left_4);
assert(!(tmp_sub_expr_left_5 == NULL));
tmp_sub_expr_right_5 = 1;
tmp_sub_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
CHECK_OBJECT(tmp_sub_expr_left_5);
Py_DECREF(tmp_sub_expr_left_5);
assert(!(tmp_sub_expr_left_4 == NULL));
if (par_x == NULL) {
Py_DECREF(tmp_sub_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 885;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_right_4 = par_x;
tmp_mult_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_nd);
tmp_truediv_expr_right_2 = var_nd;
tmp_add_expr_right_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 885;
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


exception_lineno = 881;
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
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
if (var_c0 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c0);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 886;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_4 = var_c0;
if (var_c1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 886;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_left_5 = var_c1;
tmp_sub_expr_left_6 = const_int_pos_1;
if (par_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 886;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_right_6 = par_x;
tmp_mult_expr_right_5 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
if (tmp_mult_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
CHECK_OBJECT(tmp_mult_expr_right_5);
Py_DECREF(tmp_mult_expr_right_5);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__13_lagval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__13_lagval->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__13_lagval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__13_lagval,
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
if (frame_frame_numpy$polynomial$laguerre$$$function__13_lagval == cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__13_lagval = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__13_lagval);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__14_lagval2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d = MAKE_FUNCTION_FRAME(tstate, code_objects_5aaa328a474eeb45b07c439b6d5a45f6, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d = cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 936;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__valnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 936;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 936;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d->m_frame.f_lineno = 936;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 936;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d,
    type_description_1,
    par_x,
    par_y,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d == cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__14_lagval2d);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__15_laggrid2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_c = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d = MAKE_FUNCTION_FRAME(tstate, code_objects_11fa3994b9db0f3c6ef90e3f3512ed97, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d = cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 992;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__gridnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 992;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 992;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_x);
tmp_args_element_value_3 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_4 = par_y;
frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d->m_frame.f_lineno = 992;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 992;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d,
    type_description_1,
    par_x,
    par_y,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d == cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__15_laggrid2d);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__16_lagval3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_c = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d = MAKE_FUNCTION_FRAME(tstate, code_objects_c6deb36513057d7d0119da2370b2ce20, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d = cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1045;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__valnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1045;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1045;
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
frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d->m_frame.f_lineno = 1045;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1045;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d == cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__16_lagval3d);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__17_laggrid3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_c = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d = MAKE_FUNCTION_FRAME(tstate, code_objects_1adbbf1331120edcf5bcfa64fa5381da, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d = cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1106;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__gridnd);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1106;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagval(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagval);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1106;
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
frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d->m_frame.f_lineno = 1106;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1106;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d == cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__17_laggrid3d);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__18_lagvander(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander = MAKE_FUNCTION_FRAME(tstate, code_objects_c37e6b8a4712fc36c6eb69a24276b619, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander = cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1154;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deg);
tmp_args_element_value_1 = par_deg;
tmp_args_element_value_2 = mod_consts.const_str_plain_deg;
frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander->m_frame.f_lineno = 1154;
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


exception_lineno = 1154;
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


exception_lineno = 1155;
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
frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander->m_frame.f_lineno = 1156;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1156;
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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1158;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1158;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_tuple_element_1 = par_x;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_bc4fceb686e8db4e197f4130513f6fe7);
frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander->m_frame.f_lineno = 1158;
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


exception_lineno = 1158;
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


exception_lineno = 1158;
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


exception_lineno = 1159;
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

exception_lineno = 1159;
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


exception_lineno = 1159;
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


exception_lineno = 1160;
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
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1161;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_empty);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1161;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dims);
tmp_kw_call_arg_value_0_1 = var_dims;
CHECK_OBJECT(var_dtyp);
tmp_kw_call_dict_value_0_1 = var_dtyp;
frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander->m_frame.f_lineno = 1161;
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


exception_lineno = 1161;
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


exception_lineno = 1162;
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


exception_lineno = 1162;
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


exception_lineno = 1162;
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


exception_lineno = 1163;
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
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_2;
tmp_sub_expr_left_1 = const_int_pos_1;
CHECK_OBJECT(par_x);
tmp_sub_expr_right_1 = par_x;
tmp_ass_subvalue_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1164;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_v);
tmp_ass_subscribed_2 = var_v;
tmp_ass_subscript_2 = const_int_pos_1;
tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_ass_subscript_res_2 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1164;
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


exception_lineno = 1165;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1165;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1165;
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
exception_lineno = 1165;
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
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
PyObject *tmp_sub_expr_left_7;
PyObject *tmp_sub_expr_right_7;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_v;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_3 = var_i;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_subscript_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_3 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_i);
tmp_mult_expr_right_3 = var_i;
tmp_sub_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_sub_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_5 = const_int_pos_1;
tmp_sub_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
CHECK_OBJECT(tmp_sub_expr_left_5);
Py_DECREF(tmp_sub_expr_left_5);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_x == NULL) {
Py_DECREF(tmp_mult_expr_left_2);
Py_DECREF(tmp_sub_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_right_4 = par_x;
tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_v == NULL) {
Py_DECREF(tmp_sub_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = var_v;
CHECK_OBJECT(var_i);
tmp_sub_expr_left_6 = var_i;
tmp_sub_expr_right_6 = mod_consts.const_int_pos_2;
tmp_subscript_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_i);
tmp_sub_expr_left_7 = var_i;
tmp_sub_expr_right_7 = const_int_pos_1;
tmp_mult_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);
Py_DECREF(tmp_mult_expr_left_4);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_i);
tmp_truediv_expr_right_1 = var_i;
tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_v == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1166;
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


exception_lineno = 1166;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1165;
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
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1167;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_moveaxis);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1167;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_v == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1167;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_v;
tmp_args_element_value_4 = const_int_0;
tmp_args_element_value_5 = const_int_neg_1;
frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander->m_frame.f_lineno = 1167;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1167;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander,
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
if (frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander == cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__18_lagvander);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__19_lagvander2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_deg = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d = MAKE_FUNCTION_FRAME(tstate, code_objects_4c3c172edd6ce87715cb7400d80f01bb, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d = cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1224;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__vander_nd_flat);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1224;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$laguerre$lagvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1224;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$laguerre$lagvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1224;
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
frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d->m_frame.f_lineno = 1224;
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


exception_lineno = 1224;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d,
    type_description_1,
    par_x,
    par_y,
    par_deg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d == cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__19_lagvander2d);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__20_lagvander3d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_z = python_pars[2];
PyObject *par_deg = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d = MAKE_FUNCTION_FRAME(tstate, code_objects_82ad5267dc38fc6cf4276958058df231, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d = cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1284;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__vander_nd_flat);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1284;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$laguerre$lagvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1284;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$laguerre$lagvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1284;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$polynomial$laguerre$lagvander(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagvander);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1284;
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
frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d->m_frame.f_lineno = 1284;
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


exception_lineno = 1284;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d,
    type_description_1,
    par_x,
    par_y,
    par_z,
    par_deg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d == cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__20_lagvander3d);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__21_lagfit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit = MAKE_FUNCTION_FRAME(tstate, code_objects_dea21ce1ad6b73f61bc7b53bc1121eee, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit = cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit) == 2);

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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1418;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fit);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1418;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagvander(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagvander);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 1418;
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
frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit->m_frame.f_lineno = 1418;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1418;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit,
    type_description_1,
    par_x,
    par_y,
    par_deg,
    par_rcond,
    par_full,
    par_w
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit == cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__21_lagfit);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__22_lagcompanion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *var_n = NULL;
PyObject *var_mat = NULL;
PyObject *var_top = NULL;
PyObject *var_mid = NULL;
PyObject *var_bot = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion = MAKE_FUNCTION_FRAME(tstate, code_objects_8142e4e57482ce88c4385f2d8b2d49e6, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion = cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1449;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame.f_lineno = 1449;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1449;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1449;
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



exception_lineno = 1449;
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



exception_lineno = 1449;
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


exception_lineno = 1450;
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
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame.f_lineno = 1451;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1451;
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


exception_lineno = 1452;
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
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1453;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1453;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = const_int_pos_1;
CHECK_OBJECT(par_c);
tmp_expression_value_2 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1453;
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

exception_lineno = 1453;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1453;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_list_element_3 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1453;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_list_element_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_list_element_2, 0, tmp_list_element_3);
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame.f_lineno = 1453;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1453;
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


exception_lineno = 1455;
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
tmp_expression_value_4 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1456;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_zeros);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1456;
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

exception_lineno = 1456;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame.f_lineno = 1456;
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


exception_lineno = 1456;
type_description_1 = "oooooo";
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
PyObject *tmp_add_expr_left_2;
nuitka_digit tmp_add_expr_right_2;
CHECK_OBJECT(var_mat);
tmp_called_instance_2 = var_mat;
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame.f_lineno = 1457;
tmp_expression_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_reshape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_tuple, 0)
);

if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1457;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_start_value_1 = const_int_pos_1;
tmp_stop_value_1 = Py_None;
CHECK_OBJECT(var_n);
tmp_add_expr_left_2 = var_n;
tmp_add_expr_right_2 = 1;
tmp_step_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
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


exception_lineno = 1457;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_top == NULL);
var_top = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_3;
PyObject *tmp_subscript_value_4;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
PyObject *tmp_step_value_2;
PyObject *tmp_add_expr_left_3;
nuitka_digit tmp_add_expr_right_3;
CHECK_OBJECT(var_mat);
tmp_called_instance_3 = var_mat;
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame.f_lineno = 1458;
tmp_expression_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_reshape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_tuple, 0)
);

if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1458;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_start_value_2 = const_int_0;
tmp_stop_value_2 = Py_None;
CHECK_OBJECT(var_n);
tmp_add_expr_left_3 = var_n;
tmp_add_expr_right_3 = 1;
tmp_step_value_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_3, tmp_add_expr_right_3);
assert(!(tmp_step_value_2 == NULL));
tmp_subscript_value_4 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_2, tmp_stop_value_2, tmp_step_value_2);
CHECK_OBJECT(tmp_step_value_2);
Py_DECREF(tmp_step_value_2);
assert(!(tmp_subscript_value_4 == NULL));
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1458;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_mid == NULL);
var_mid = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_instance_4;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_3;
PyObject *tmp_stop_value_3;
PyObject *tmp_step_value_3;
PyObject *tmp_add_expr_left_4;
nuitka_digit tmp_add_expr_right_4;
CHECK_OBJECT(var_mat);
tmp_called_instance_4 = var_mat;
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame.f_lineno = 1459;
tmp_expression_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_reshape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_tuple, 0)
);

if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1459;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n);
tmp_start_value_3 = var_n;
tmp_stop_value_3 = Py_None;
CHECK_OBJECT(var_n);
tmp_add_expr_left_4 = var_n;
tmp_add_expr_right_4 = 1;
tmp_step_value_3 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_4, tmp_add_expr_right_4);
assert(!(tmp_step_value_3 == NULL));
tmp_subscript_value_5 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_3, tmp_stop_value_3, tmp_step_value_3);
CHECK_OBJECT(tmp_step_value_3);
Py_DECREF(tmp_step_value_3);
assert(!(tmp_subscript_value_5 == NULL));
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1459;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_bot == NULL);
var_bot = tmp_assign_source_8;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_called_instance_5 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1460;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = const_int_pos_1;
CHECK_OBJECT(var_n);
tmp_args_element_value_4 = var_n;
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame.f_lineno = 1460;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_arange,
        call_args
    );
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1460;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1460;
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


exception_lineno = 1460;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_mult_expr_left_1 = mod_consts.const_float_2_0;
tmp_called_instance_6 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1461;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n);
tmp_args_element_value_5 = var_n;
frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame.f_lineno = 1461;
tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_arange, tmp_args_element_value_5);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1461;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1461;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_5 = const_float_1_0;
tmp_ass_subvalue_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1461;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mid);
tmp_ass_subscribed_2 = var_mid;
tmp_ass_subscript_2 = Py_Ellipsis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1461;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(var_top);
tmp_ass_subvalue_3 = var_top;
CHECK_OBJECT(var_bot);
tmp_ass_subscribed_3 = var_bot;
tmp_ass_subscript_3 = Py_Ellipsis;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1462;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(var_mat);
tmp_assign_source_9 = var_mat;
assert(tmp_inplace_assign_subscript_1__target == NULL);
Py_INCREF(tmp_assign_source_9);
tmp_inplace_assign_subscript_1__target = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_9 = tmp_inplace_assign_subscript_1__target;
tmp_subscript_value_6 = mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1463;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(tmp_inplace_assign_subscript_1__value == NULL);
tmp_inplace_assign_subscript_1__value = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(par_c);
tmp_expression_value_10 = par_c;
tmp_subscript_value_7 = mod_consts.const_slice_none_int_neg_1_none;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_7);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1463;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_c);
tmp_expression_value_11 = par_c;
tmp_subscript_value_8 = const_int_neg_1;
tmp_truediv_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_8, -1);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 1463;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_mult_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1463;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_n);
tmp_mult_expr_right_2 = var_n;
tmp_iadd_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1463;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1463;
type_description_1 = "oooooo";
    goto try_except_handler_4;
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
tmp_ass_subscript_4 = mod_consts.const_tuple_slice_none_none_none_int_neg_1_tuple;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1463;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion,
    type_description_1,
    par_c,
    var_n,
    var_mat,
    var_top,
    var_mid,
    var_bot
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion == cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__22_lagcompanion);

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
Py_XDECREF(var_top);
var_top = NULL;
Py_XDECREF(var_mid);
var_mid = NULL;
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
Py_XDECREF(var_top);
var_top = NULL;
Py_XDECREF(var_mid);
var_mid = NULL;
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


static PyObject *impl_numpy$polynomial$laguerre$$$function__23_lagroots(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots = MAKE_FUNCTION_FRAME(tstate, code_objects_2eae91a60c3d53674419254693e45c1e, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots = cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1518;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_c);
tmp_list_element_1 = par_c;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots->m_frame.f_lineno = 1518;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_as_series, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1518;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1518;
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



exception_lineno = 1518;
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



exception_lineno = 1518;
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


exception_lineno = 1519;
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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1520;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1520;
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

exception_lineno = 1520;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_call_pos_args_values_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_empty_tuple, "l");
frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots->m_frame.f_lineno = 1520;
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


exception_lineno = 1520;
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


exception_lineno = 1521;
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
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
tmp_expression_value_3 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1522;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_array);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1522;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = const_int_pos_1;
CHECK_OBJECT(par_c);
tmp_expression_value_4 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1522;
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

exception_lineno = 1522;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1522;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_list_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1522;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_2);
frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots->m_frame.f_lineno = 1522;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1522;
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
tmp_called_value_3 = module_var_accessor_numpy$polynomial$laguerre$lagcompanion(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagcompanion);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1525;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_c);
tmp_args_element_value_3 = par_c;
frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots->m_frame.f_lineno = 1525;
tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1525;
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


exception_lineno = 1525;
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
tmp_expression_value_7 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_linalg);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_4 = var_m;
frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots->m_frame.f_lineno = 1526;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_eigvals, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1526;
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


exception_lineno = 1527;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots->m_frame.f_lineno = 1527;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1527;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots,
    type_description_1,
    par_c,
    var_m,
    var_r
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots == cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__23_lagroots);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__24_laggauss(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss = MAKE_FUNCTION_FRAME(tstate, code_objects_653f86246a62f9e0e89b670582ca489a, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss = cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1570;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deg);
tmp_args_element_value_1 = par_deg;
tmp_args_element_value_2 = mod_consts.const_str_plain_deg;
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1570;
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


exception_lineno = 1570;
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


exception_lineno = 1571;
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
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1572;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1572;
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
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1576;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1576;
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

exception_lineno = 1576;
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

exception_lineno = 1576;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1576;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1576;
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
tmp_called_value_2 = module_var_accessor_numpy$polynomial$laguerre$lagcompanion(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagcompanion);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1577;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_c);
tmp_args_element_value_4 = var_c;
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1577;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1577;
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
tmp_expression_value_2 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1578;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_linalg);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1578;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_5 = var_m;
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1578;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_eigvalsh, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1578;
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
tmp_called_value_3 = module_var_accessor_numpy$polynomial$laguerre$lagval(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagval);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1581;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_6 = var_x;
CHECK_OBJECT(var_c);
tmp_args_element_value_7 = var_c;
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1581;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1581;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dy == NULL);
var_dy = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
tmp_called_value_4 = module_var_accessor_numpy$polynomial$laguerre$lagval(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagval);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1582;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_8 = var_x;
tmp_called_value_5 = module_var_accessor_numpy$polynomial$laguerre$lagder(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagder);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1582;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_c);
tmp_args_element_value_10 = var_c;
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1582;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1582;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1582;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1582;
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


exception_lineno = 1583;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1583;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_isub_expr_left_1;
var_x = tmp_assign_source_7;

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_6 = module_var_accessor_numpy$polynomial$laguerre$lagval(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagval);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1587;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_11 = var_x;
CHECK_OBJECT(var_c);
tmp_expression_value_3 = var_c;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1587;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1587;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1587;
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
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(var_fm);
tmp_itruediv_expr_left_1 = var_fm;
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1588;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fm);
tmp_args_element_value_13 = var_fm;
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1588;
tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_abs, tmp_args_element_value_13);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1588;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1588;
tmp_itruediv_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_max);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_itruediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1588;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
CHECK_OBJECT(tmp_itruediv_expr_right_1);
Py_DECREF(tmp_itruediv_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1588;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = tmp_itruediv_expr_left_1;
var_fm = tmp_assign_source_9;

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_itruediv_expr_left_2;
PyObject *tmp_itruediv_expr_right_2;
PyObject *tmp_called_instance_5;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_14;
CHECK_OBJECT(var_df);
tmp_itruediv_expr_left_2 = var_df;
tmp_called_instance_6 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1589;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_df);
tmp_args_element_value_14 = var_df;
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1589;
tmp_called_instance_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_abs, tmp_args_element_value_14);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1589;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1589;
tmp_itruediv_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_max);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_itruediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1589;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_2, tmp_itruediv_expr_right_2);
CHECK_OBJECT(tmp_itruediv_expr_right_2);
Py_DECREF(tmp_itruediv_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1589;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = tmp_itruediv_expr_left_2;
var_df = tmp_assign_source_10;

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
tmp_truediv_expr_left_2 = const_int_pos_1;
CHECK_OBJECT(var_fm);
tmp_mult_expr_left_2 = var_fm;
CHECK_OBJECT(var_df);
tmp_mult_expr_right_2 = var_df;
tmp_truediv_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1590;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1590;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_w == NULL);
var_w = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_itruediv_expr_left_3;
PyObject *tmp_itruediv_expr_right_3;
PyObject *tmp_called_instance_7;
CHECK_OBJECT(var_w);
tmp_itruediv_expr_left_3 = var_w;
CHECK_OBJECT(var_w);
tmp_called_instance_7 = var_w;
frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame.f_lineno = 1593;
tmp_itruediv_expr_right_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, const_str_plain_sum);
if (tmp_itruediv_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1593;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_3, tmp_itruediv_expr_right_3);
CHECK_OBJECT(tmp_itruediv_expr_right_3);
Py_DECREF(tmp_itruediv_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1593;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = tmp_itruediv_expr_left_3;
var_w = tmp_assign_source_12;

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss,
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
if (frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss == cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__24_laggauss);

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


static PyObject *impl_numpy$polynomial$laguerre$$$function__25_lagweight(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *var_w = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight)) {
    Py_XDECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight = MAKE_FUNCTION_FRAME(tstate, code_objects_5b611ebff23e3cc818a8a85345a31193, module_numpy$polynomial$laguerre, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight->m_type_description == NULL);
frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight = cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_operand_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1623;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exp);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1623;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_operand_value_1 = par_x;
tmp_args_element_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 1623;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight->m_frame.f_lineno = 1623;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1623;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight,
    type_description_1,
    par_x,
    var_w
);


// Release cached frame if used for exception.
if (frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight == cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight);
    cache_frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight = NULL;
}

assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$function__25_lagweight);

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



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__10_lagpow(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__10_lagpow,
        mod_consts.const_str_plain_lagpow,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c6528c63442fea6b882c9b902206dc33,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_1059a99a9d2e4c7f69e7ab43253afe32,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__11_lagder(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__11_lagder,
        mod_consts.const_str_plain_lagder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f8a5bd936747efdcc5385b5efa84c858,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_33612223df2c3eda6f06f7737c71baf0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__12_lagint(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__12_lagint,
        mod_consts.const_str_plain_lagint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c248a301666f41a602cbd09af3f37eb6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_fb2f85110d8157e4f75fd9f263f3ede5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__13_lagval(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__13_lagval,
        mod_consts.const_str_plain_lagval,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_033c1aad92b386ce96075c5035835bab,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_36d2db04545105324505332a1992042e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__14_lagval2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__14_lagval2d,
        mod_consts.const_str_plain_lagval2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5aaa328a474eeb45b07c439b6d5a45f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_0735cbae97d6be33e72495c6c7a622d8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__15_laggrid2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__15_laggrid2d,
        mod_consts.const_str_plain_laggrid2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_11fa3994b9db0f3c6ef90e3f3512ed97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_de63a9342fac0864f2529dc47d2d0590,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__16_lagval3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__16_lagval3d,
        mod_consts.const_str_plain_lagval3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c6deb36513057d7d0119da2370b2ce20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_c489ca71f779d291b3e0d1bc51e2b85e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__17_laggrid3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__17_laggrid3d,
        mod_consts.const_str_plain_laggrid3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1adbbf1331120edcf5bcfa64fa5381da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_22f10d1e12144027d32a5cf0bc8c7f20,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__18_lagvander(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__18_lagvander,
        mod_consts.const_str_plain_lagvander,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c37e6b8a4712fc36c6eb69a24276b619,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_edcc24c87198f868599ef50a5c371b23,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__19_lagvander2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__19_lagvander2d,
        mod_consts.const_str_plain_lagvander2d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4c3c172edd6ce87715cb7400d80f01bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_65e14b9854143715b448589fa55ba69e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__1_poly2lag(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__1_poly2lag,
        mod_consts.const_str_plain_poly2lag,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_691968c398157b593f00d683f6278ccb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_a277bf0d16fe454be3ac08de12af03cf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__20_lagvander3d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__20_lagvander3d,
        mod_consts.const_str_plain_lagvander3d,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_82ad5267dc38fc6cf4276958058df231,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_0fcba8b9831088f423816af8e9c4906c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__21_lagfit(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__21_lagfit,
        mod_consts.const_str_plain_lagfit,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dea21ce1ad6b73f61bc7b53bc1121eee,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_efaf6ee3b00460b2c83ba984b26f962a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__22_lagcompanion(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__22_lagcompanion,
        mod_consts.const_str_plain_lagcompanion,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8142e4e57482ce88c4385f2d8b2d49e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_5de4997a1678ad3b56414c52c8571f1d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__23_lagroots(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__23_lagroots,
        mod_consts.const_str_plain_lagroots,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2eae91a60c3d53674419254693e45c1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_fc4cf4c6846abd4615de7da25872cf16,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__24_laggauss(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__24_laggauss,
        mod_consts.const_str_plain_laggauss,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_653f86246a62f9e0e89b670582ca489a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_8c46286bbf15590b8ccba56df100462a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__25_lagweight(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__25_lagweight,
        mod_consts.const_str_plain_lagweight,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5b611ebff23e3cc818a8a85345a31193,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_bf5a84102ae7fd5b7a067bf825ddb377,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__2_lag2poly(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__2_lag2poly,
        mod_consts.const_str_plain_lag2poly,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fd304da9af0bbc78df366380e820b77e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_e384133b80362aa6e8119ecd20d8dea8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__3_lagline(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__3_lagline,
        mod_consts.const_str_plain_lagline,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e45e4156a6cbcd6e7b1cb6824dd0ebec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_0384d215b1b58de3b66e438d893e3991,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__4_lagfromroots(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__4_lagfromroots,
        mod_consts.const_str_plain_lagfromroots,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aa1d8893f31c9b305e24428733b334eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_7adbb21744eb4c73d930495d1ada5ec5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__5_lagadd(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__5_lagadd,
        mod_consts.const_str_plain_lagadd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fb81716dc94a0d4fe096b2c093962510,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_4f103b623f85b787c1b5a3a3738219f4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__6_lagsub(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__6_lagsub,
        mod_consts.const_str_plain_lagsub,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_af6e19230326490d537d9444a8bbef9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_e982cd65d5492eea9f80f9515615eeb3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__7_lagmulx(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__7_lagmulx,
        mod_consts.const_str_plain_lagmulx,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cda781b42196d337604344610eff13b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_4e0ac40f7b3b6071a172e3b531225972,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__8_lagmul(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__8_lagmul,
        mod_consts.const_str_plain_lagmul,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c84ea5531ba25e0a9ec8db0517f12401,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_6e42c5db19635d83adac5dc1aa042b89,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__9_lagdiv(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$laguerre$$$function__9_lagdiv,
        mod_consts.const_str_plain_lagdiv,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_89fd6bf3d749312a38683fcddf6608ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$laguerre,
        mod_consts.const_str_digest_58b84eee4dc22797daa8fbcf8c16c084,
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

static function_impl_code const function_table_numpy$polynomial$laguerre[] = {
impl_numpy$polynomial$laguerre$$$function__1_poly2lag,
impl_numpy$polynomial$laguerre$$$function__2_lag2poly,
impl_numpy$polynomial$laguerre$$$function__3_lagline,
impl_numpy$polynomial$laguerre$$$function__4_lagfromroots,
impl_numpy$polynomial$laguerre$$$function__5_lagadd,
impl_numpy$polynomial$laguerre$$$function__6_lagsub,
impl_numpy$polynomial$laguerre$$$function__7_lagmulx,
impl_numpy$polynomial$laguerre$$$function__8_lagmul,
impl_numpy$polynomial$laguerre$$$function__9_lagdiv,
impl_numpy$polynomial$laguerre$$$function__10_lagpow,
impl_numpy$polynomial$laguerre$$$function__11_lagder,
impl_numpy$polynomial$laguerre$$$function__12_lagint,
impl_numpy$polynomial$laguerre$$$function__13_lagval,
impl_numpy$polynomial$laguerre$$$function__14_lagval2d,
impl_numpy$polynomial$laguerre$$$function__15_laggrid2d,
impl_numpy$polynomial$laguerre$$$function__16_lagval3d,
impl_numpy$polynomial$laguerre$$$function__17_laggrid3d,
impl_numpy$polynomial$laguerre$$$function__18_lagvander,
impl_numpy$polynomial$laguerre$$$function__19_lagvander2d,
impl_numpy$polynomial$laguerre$$$function__20_lagvander3d,
impl_numpy$polynomial$laguerre$$$function__21_lagfit,
impl_numpy$polynomial$laguerre$$$function__22_lagcompanion,
impl_numpy$polynomial$laguerre$$$function__23_lagroots,
impl_numpy$polynomial$laguerre$$$function__24_laggauss,
impl_numpy$polynomial$laguerre$$$function__25_lagweight,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$polynomial$laguerre);
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
        module_numpy$polynomial$laguerre,
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
        function_table_numpy$polynomial$laguerre,
        sizeof(function_table_numpy$polynomial$laguerre) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.polynomial.laguerre";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$polynomial$laguerre(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$polynomial$laguerre");

    // Store the module for future use.
    module_numpy$polynomial$laguerre = module;

    moduledict_numpy$polynomial$laguerre = MODULE_DICT(module_numpy$polynomial$laguerre);

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
        PRINT_STRING("numpy$polynomial$laguerre: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$polynomial$laguerre: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$polynomial$laguerre: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.polynomial.laguerre" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$polynomial$laguerre\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$polynomial$laguerre,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$polynomial$laguerre,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$polynomial$laguerre,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$laguerre,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$laguerre,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$polynomial$laguerre);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$polynomial$laguerre);
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

        UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2;
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
tmp_assign_source_1 = mod_consts.const_str_digest_eb9cfcca8986bdcfa72b60fe84afa8b2;
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$polynomial$laguerre = MAKE_MODULE_FRAME(code_objects_dcb71e55c4fe569f64aff16d334b85a2, module_numpy$polynomial$laguerre);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$polynomial$laguerre$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$polynomial$laguerre$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$polynomial$laguerre;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 78;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_4);
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
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$polynomial$laguerre;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_polyutils_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 80;
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
        (PyObject *)moduledict_numpy$polynomial$laguerre,
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
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_pu, tmp_assign_source_5);
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
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$polynomial$laguerre;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ABCPolyBase_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 81;
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
        (PyObject *)moduledict_numpy$polynomial$laguerre,
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
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCPolyBase, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = LIST_COPY(tstate, mod_consts.const_list_da969220027be181726977d2dc05ff0e_list);
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$polynomial$laguerre$pu(tstate);
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
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagtrim, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;

tmp_assign_source_9 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__1_poly2lag(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_poly2lag, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;

tmp_assign_source_10 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__2_lag2poly(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lag2poly, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_arg_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = MAKE_LIST2(tstate, const_float_0_0,const_float_1_0);
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 201;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_call_arg_element_1);
CHECK_OBJECT(tmp_call_arg_element_1);
Py_DECREF(tmp_call_arg_element_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdomain, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_arg_element_2;
tmp_called_instance_2 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_2 = MAKE_LIST1(tstate, const_int_0);
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 204;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_array, tmp_call_arg_element_2);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagzero, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_arg_element_3;
tmp_called_instance_3 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_3 = MAKE_LIST1(tstate, const_int_pos_1);
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 207;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_array, tmp_call_arg_element_3);
CHECK_OBJECT(tmp_call_arg_element_3);
Py_DECREF(tmp_call_arg_element_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagone, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_arg_element_4;
tmp_called_instance_4 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_4 = MAKE_LIST2(tstate, const_int_pos_1,const_int_neg_1);
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 210;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_array, tmp_call_arg_element_4);
CHECK_OBJECT(tmp_call_arg_element_4);
Py_DECREF(tmp_call_arg_element_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagx, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__3_lagline(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagline, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__4_lagfromroots(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfromroots, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__5_lagadd(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagadd, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__6_lagsub(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagsub, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__7_lagmulx(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmulx, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__8_lagmul(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagmul, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__9_lagdiv(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagdiv, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_int_pos_16_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_22 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__10_lagpow(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagpow, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_1_int_pos_1_int_0_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_23 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__11_lagder(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagder, tmp_assign_source_23);
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

tmp_assign_source_24 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__12_lagint(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagint, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_true_tuple;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_25 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__13_lagval(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagval, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__14_lagval2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagval2d, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;

tmp_assign_source_27 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__15_laggrid2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_laggrid2d, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;

tmp_assign_source_28 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__16_lagval3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagval3d, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;

tmp_assign_source_29 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__17_laggrid3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_laggrid3d, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;

tmp_assign_source_30 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__18_lagvander(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagvander, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;

tmp_assign_source_31 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__19_lagvander2d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagvander2d, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;

tmp_assign_source_32 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__20_lagvander3d(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagvander3d, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_false_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_33 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__21_lagfit(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagfit, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;

tmp_assign_source_34 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__22_lagcompanion(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagcompanion, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;

tmp_assign_source_35 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__23_lagroots(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagroots, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;

tmp_assign_source_36 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__24_laggauss(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_laggauss, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;

tmp_assign_source_37 = MAKE_FUNCTION_numpy$polynomial$laguerre$$$function__25_lagweight(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_lagweight, tmp_assign_source_37);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_numpy$polynomial$laguerre$ABCPolyBase(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABCPolyBase);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1630;

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


exception_lineno = 1630;

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


exception_lineno = 1630;

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


exception_lineno = 1630;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;

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


exception_lineno = 1630;

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


exception_lineno = 1630;

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


exception_lineno = 1630;

    goto try_except_handler_1;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_Laguerre;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 1630;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;

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


exception_lineno = 1630;

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


exception_lineno = 1630;

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


exception_lineno = 1630;

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


exception_lineno = 1630;

    goto try_except_handler_1;
}
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 1630;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1630;
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
locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_80f29c585d7188151dc6c0fcd07af6e7;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_0abfb1ff2d8d91b8062297e993dbfb09;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Laguerre;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_1630;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;

    goto try_except_handler_3;
}
frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2 = MAKE_CLASS_FRAME(tstate, code_objects_5e616106ac0e9e1b1fe150766431e2de, module_numpy$polynomial$laguerre, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2);
assert(Py_REFCNT(frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_1 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagadd);

if (tmp_args_element_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_1 = module_var_accessor_numpy$polynomial$laguerre$lagadd(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagadd);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 1657;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1657;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1657;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__add, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1657;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_2 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagsub);

if (tmp_args_element_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_2 = module_var_accessor_numpy$polynomial$laguerre$lagsub(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagsub);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 1658;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1658;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1658;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__sub, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1658;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_3 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagmul);

if (tmp_args_element_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_3 = module_var_accessor_numpy$polynomial$laguerre$lagmul(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagmul);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 1659;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1659;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1659;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__mul, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1659;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_4 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagdiv);

if (tmp_args_element_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_4 = module_var_accessor_numpy$polynomial$laguerre$lagdiv(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagdiv);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 1660;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1660;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1660;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__div, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1660;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_5 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagpow);

if (tmp_args_element_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_5 = module_var_accessor_numpy$polynomial$laguerre$lagpow(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagpow);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 1661;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1661;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1661;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__pow, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1661;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_6 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagval);

if (tmp_args_element_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_6 = module_var_accessor_numpy$polynomial$laguerre$lagval(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagval);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 1662;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1662;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1662;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__val, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1662;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_7 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagint);

if (tmp_args_element_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_7 = module_var_accessor_numpy$polynomial$laguerre$lagint(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagint);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 1663;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1663;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1663;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__int, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1663;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
tmp_called_value_9 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_8 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagder);

if (tmp_args_element_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_8 = module_var_accessor_numpy$polynomial$laguerre$lagder(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagder);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 1664;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1664;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1664;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__der, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1664;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
tmp_called_value_10 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_9 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagfit);

if (tmp_args_element_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_9 = module_var_accessor_numpy$polynomial$laguerre$lagfit(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagfit);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 1665;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1665;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1665;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__fit, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1665;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
tmp_called_value_11 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_10 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagline);

if (tmp_args_element_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_10 = module_var_accessor_numpy$polynomial$laguerre$lagline(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagline);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 1666;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1666;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1666;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__line, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1666;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_11;
tmp_called_value_12 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_11 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagroots);

if (tmp_args_element_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_11 = module_var_accessor_numpy$polynomial$laguerre$lagroots(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagroots);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 1667;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1667;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1667;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__roots, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1667;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
tmp_called_value_13 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, const_str_plain_staticmethod);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_12 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagfromroots);

if (tmp_args_element_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_12 = module_var_accessor_numpy$polynomial$laguerre$lagfromroots(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagfromroots);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 1668;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1668;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1668;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain__fromroots, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1668;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_13;
tmp_expression_value_8 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_np);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1671;
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


exception_lineno = 1671;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_13 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagdomain);

if (tmp_args_element_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_13 = module_var_accessor_numpy$polynomial$laguerre$lagdomain(tstate);
if (unlikely(tmp_args_element_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagdomain);
}

if (tmp_args_element_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 1671;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1671;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1671;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_domain, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1671;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_14;
tmp_expression_value_9 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_np);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_numpy$polynomial$laguerre$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1672;
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


exception_lineno = 1672;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_14 = PyObject_GetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_lagdomain);

if (tmp_args_element_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_14 = module_var_accessor_numpy$polynomial$laguerre$lagdomain(tstate);
if (unlikely(tmp_args_element_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lagdomain);
}

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 1672;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame.f_lineno = 1672;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1672;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_window, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1672;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = mod_consts.const_str_plain_L;
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain_basis_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1673;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$polynomial$laguerre$$$class__1_Laguerre_2);

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
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;

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


exception_lineno = 1630;

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
tmp_res = PyObject_SetItem(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_Laguerre;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$polynomial$laguerre->m_frame.f_lineno = 1630;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1630;

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
Py_DECREF(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630);
locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630);
locals_numpy$polynomial$laguerre$$$class__1_Laguerre_1630 = NULL;
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
exception_lineno = 1630;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)mod_consts.const_str_plain_Laguerre, tmp_assign_source_44);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$polynomial$laguerre, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$polynomial$laguerre->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$polynomial$laguerre, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$polynomial$laguerre);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$polynomial$laguerre", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.polynomial.laguerre" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$polynomial$laguerre);
    return module_numpy$polynomial$laguerre;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$polynomial$laguerre, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$polynomial$laguerre", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

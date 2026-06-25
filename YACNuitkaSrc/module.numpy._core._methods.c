/* Generated code for Python module 'numpy$_core$_methods'
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



/* The "module_numpy$_core$_methods" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_core$_methods;
PyDictObject *moduledict_numpy$_core$_methods;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_umr_maximum;
PyObject *const_str_plain_umr_minimum;
PyObject *const_str_plain_umr_sum;
PyObject *const_str_plain_umr_prod;
PyObject *const_str_plain_bool_dt;
PyObject *const_str_plain_umr_any;
PyObject *const_tuple_str_plain_where_tuple;
PyObject *const_str_plain_umr_all;
PyObject *const_str_plain_ndim;
PyObject *const_str_plain_items;
PyObject *const_str_plain_arr;
PyObject *const_str_plain_shape;
PyObject *const_str_plain_mu;
PyObject *const_str_plain_normalize_axis_index;
PyObject *const_str_plain_nt;
PyObject *const_str_plain_intp;
PyObject *const_str_digest_eacd5d01cae0462745b73491d2538366;
PyObject *const_tuple_str_plain_broadcast_to_tuple;
PyObject *const_str_plain_broadcast_to;
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_kind;
PyObject *const_str_plain_iu;
PyObject *const_str_plain_np;
PyObject *const_str_plain_iinfo;
PyObject *const_str_plain_min;
PyObject *const_str_plain_max;
PyObject *const_str_plain_um;
PyObject *const_str_plain_positive;
PyObject *const_str_plain_out;
PyObject *const_str_plain_minimum;
PyObject *const_str_plain_maximum;
PyObject *const_str_plain_clip;
PyObject *const_str_plain_asanyarray;
PyObject *const_str_plain__count_reduce_items;
PyObject *const_tuple_str_plain_keepdims_str_plain_where_tuple;
PyObject *const_dict_21b0a41bf986b828d73b3708697d69bd;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d;
PyObject *const_str_plain_RuntimeWarning;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain_integer;
PyObject *const_str_plain_bool;
PyObject *const_tuple_str_plain_f8_tuple;
PyObject *const_str_plain_float16;
PyObject *const_tuple_str_plain_f4_tuple;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain_true_divide;
PyObject *const_str_plain_unsafe;
PyObject *const_tuple_str_plain_out_str_plain_casting_str_plain_subok_tuple;
PyObject *const_str_digest_9f54c2bfef14a31f9e49e5c6c99e4831;
PyObject *const_str_plain_reshape;
PyObject *const_str_plain_subtract;
PyObject *const_dict_5c510a341eb8ce89f98f64af29a634ed;
PyObject *const_str_plain_floating;
PyObject *const_str_plain_square;
PyObject *const_tuple_str_plain_out_tuple;
PyObject *const_str_plain__complex_to_float;
PyObject *const_str_plain_view;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain_add;
PyObject *const_tuple_ellipsis_int_0_tuple;
PyObject *const_tuple_ellipsis_int_pos_1_tuple;
PyObject *const_str_plain_real;
PyObject *const_str_plain_multiply;
PyObject *const_str_plain_conjugate;
PyObject *const_str_plain__var;
PyObject *const_tuple_c9abf57e7fa650776d707507c7b30e7e_tuple;
PyObject *const_str_plain_sqrt;
PyObject *const_str_plain_write;
PyObject *const_str_plain_nullcontext;
PyObject *const_str_plain_fspath;
PyObject *const_str_plain_wb;
PyObject *const_str_plain_pickle;
PyObject *const_str_plain_dump;
PyObject *const_tuple_str_plain_protocol_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_dumps;
PyObject *const_str_plain_umr_bitwise_count;
PyObject *const_tuple_3f9941f38cb21b5a6b1b7ce69cf46539_tuple;
PyObject *const_str_digest_dca7856a69248f667ac4794515bd7c7a;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_os;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_nullcontext_tuple;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_218a55714e76c818c59b93d99676c0b2;
PyObject *const_tuple_str_plain_multiarray_str_plain_numerictypes_str_plain_umath_tuple;
PyObject *const_str_plain_multiarray;
PyObject *const_str_plain_numerictypes;
PyObject *const_str_plain_umath;
PyObject *const_str_digest_0d07450478bddf097fde7f172c696a5c;
PyObject *const_tuple_str_plain_asanyarray_tuple;
PyObject *const_str_digest_9e9eca8947418183630fd19f8c915a83;
PyObject *const_tuple_str_plain__NoValue_tuple;
PyObject *const_str_plain__NoValue;
PyObject *const_tuple_str_plain_bool_tuple;
PyObject *const_str_plain_reduce;
PyObject *const_str_plain_bitwise_count;
PyObject *const_str_plain_logical_or;
PyObject *const_str_plain_logical_and;
PyObject *const_str_plain_csingle;
PyObject *const_str_plain_single;
PyObject *const_str_plain_cdouble;
PyObject *const_str_plain_double;
PyObject *const_str_plain_longdouble;
PyObject *const_str_plain_update;
PyObject *const_str_plain_clongdouble;
PyObject *const_str_plain__amax;
PyObject *const_str_plain__amin;
PyObject *const_str_plain__sum;
PyObject *const_str_plain__prod;
PyObject *const_tuple_none_none_none_false_tuple;
PyObject *const_dict_90ad2ab5973fc538a41347fef6320399;
PyObject *const_str_plain__any;
PyObject *const_str_plain__all;
PyObject *const_tuple_false_true_tuple;
PyObject *const_str_plain__clip;
PyObject *const_str_plain__mean;
PyObject *const_tuple_none_none_none_int_0_false_tuple;
PyObject *const_dict_490553f4ead08894108e0d0e9cf73cca;
PyObject *const_str_plain__std;
PyObject *const_tuple_none_none_false_tuple;
PyObject *const_str_plain__ptp;
PyObject *const_str_plain__dump;
PyObject *const_str_plain__dumps;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_58ab5ac147e987887c20fe23b3a77de0;
PyObject *const_str_plain__bitwise_count;
PyObject *const_str_digest_0d2e1be0aedcfd587c65758ff871e1aa;
PyObject *const_str_digest_5dc59a1dae521d24233c92ec155c4c83;
PyObject *const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple;
PyObject *const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple;
PyObject *const_tuple_af82a590eea0b2e909289de63f905000_tuple;
PyObject *const_tuple_c897e1b6a5d3fe8d9237ffe246c01779_tuple;
PyObject *const_tuple_8408d21fe12b734dc60d47f1993cfd6d_tuple;
PyObject *const_tuple_2906568dcc7263904efd02cbb093697c_tuple;
PyObject *const_tuple_str_plain_self_str_plain_protocol_tuple;
PyObject *const_tuple_8ad41b140ecadeeeea112820a6310f5d_tuple;
PyObject *const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple;
PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple;
PyObject *const_tuple_f646f5386a2f6d8f7f798902802928d0_tuple;
PyObject *const_tuple_aa347c6e7e14d264e4c7ef881bd6e63d_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[145];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy._core._methods"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_umr_maximum);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_umr_minimum);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_umr_sum);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_umr_prod);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool_dt);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_umr_any);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_where_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_umr_all);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_arr);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_mu);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_nt);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_intp);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_eacd5d01cae0462745b73491d2538366);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_broadcast_to_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_to);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_kind);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_iu);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_iinfo);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_um);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_positive);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_out);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_minimum);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_maximum);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_clip);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_asanyarray);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__count_reduce_items);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keepdims_str_plain_where_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeWarning);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_integer);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f8_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_float16);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f4_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_true_divide);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_subok_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f54c2bfef14a31f9e49e5c6c99e4831);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_subtract);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_dict_5c510a341eb8ce89f98f64af29a634ed);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_floating);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_square);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__complex_to_float);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_view);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_int_0_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_int_pos_1_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_real);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiply);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_conjugate);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__var);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_c9abf57e7fa650776d707507c7b30e7e_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_nullcontext);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_fspath);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_wb);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_pickle);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_dump);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_protocol_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_umr_bitwise_count);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_3f9941f38cb21b5a6b1b7ce69cf46539_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_dca7856a69248f667ac4794515bd7c7a);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nullcontext_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_multiarray_str_plain_numerictypes_str_plain_umath_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiarray);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_numerictypes);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_umath);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asanyarray_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e9eca8947418183630fd19f8c915a83);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NoValue_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__NoValue);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bool_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_reduce);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_count);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_logical_or);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_logical_and);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_csingle);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_single);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_cdouble);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_double);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_longdouble);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_clongdouble);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__amax);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain__amin);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain__sum);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain__prod);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_false_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_dict_90ad2ab5973fc538a41347fef6320399);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__any);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain__all);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_false_true_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__clip);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain__mean);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_int_0_false_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_dict_490553f4ead08894108e0d0e9cf73cca);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__std);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__ptp);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain__dump);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain__dumps);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_dict_58ab5ac147e987887c20fe23b3a77de0);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain__bitwise_count);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d2e1be0aedcfd587c65758ff871e1aa);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_5dc59a1dae521d24233c92ec155c4c83);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_af82a590eea0b2e909289de63f905000_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_c897e1b6a5d3fe8d9237ffe246c01779_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_8408d21fe12b734dc60d47f1993cfd6d_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_2906568dcc7263904efd02cbb093697c_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_protocol_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_8ad41b140ecadeeeea112820a6310f5d_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_f646f5386a2f6d8f7f798902802928d0_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_aa347c6e7e14d264e4c7ef881bd6e63d_tuple);
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
void checkModuleConstants_numpy$_core$_methods(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_umr_maximum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umr_maximum);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_umr_minimum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umr_minimum);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_umr_sum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umr_sum);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_umr_prod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umr_prod);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool_dt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool_dt);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_umr_any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umr_any);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_where_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_where_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_umr_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umr_all);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_arr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arr);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_mu));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mu);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_axis_index);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_nt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nt);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_intp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intp);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_eacd5d01cae0462745b73491d2538366));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eacd5d01cae0462745b73491d2538366);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_broadcast_to_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_broadcast_to_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_broadcast_to);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_kind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kind);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_iu));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iu);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_iinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iinfo);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_um));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_um);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_positive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_positive);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_out));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_out);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_minimum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_minimum);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_maximum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maximum);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_clip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clip);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_asanyarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asanyarray);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__count_reduce_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__count_reduce_items);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keepdims_str_plain_where_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_keepdims_str_plain_where_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RuntimeWarning);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_integer);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_f8_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_float16));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_float16);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_f4_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_true_divide));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true_divide);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsafe);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_subok_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_subok_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f54c2bfef14a31f9e49e5c6c99e4831));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f54c2bfef14a31f9e49e5c6c99e4831);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_reshape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reshape);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_subtract));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subtract);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_dict_5c510a341eb8ce89f98f64af29a634ed));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5c510a341eb8ce89f98f64af29a634ed);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_floating));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_floating);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_square));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_square);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__complex_to_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__complex_to_float);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_view));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_view);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ellipsis_int_0_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ellipsis_int_pos_1_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_real));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_real);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiply);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_conjugate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conjugate);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__var));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__var);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_c9abf57e7fa650776d707507c7b30e7e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c9abf57e7fa650776d707507c7b30e7e_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sqrt);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_nullcontext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nullcontext);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_fspath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fspath);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_wb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wb);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_pickle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pickle);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dump);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_protocol_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_protocol_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_umr_bitwise_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umr_bitwise_count);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_3f9941f38cb21b5a6b1b7ce69cf46539_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3f9941f38cb21b5a6b1b7ce69cf46539_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_dca7856a69248f667ac4794515bd7c7a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dca7856a69248f667ac4794515bd7c7a);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nullcontext_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_nullcontext_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_multiarray_str_plain_numerictypes_str_plain_umath_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_multiarray_str_plain_numerictypes_str_plain_umath_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiarray);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_numerictypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numerictypes);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_umath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umath);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asanyarray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_asanyarray_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e9eca8947418183630fd19f8c915a83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e9eca8947418183630fd19f8c915a83);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NoValue_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__NoValue_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__NoValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NoValue);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bool_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_reduce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reduce);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bitwise_count);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_logical_or));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logical_or);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_logical_and));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logical_and);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_csingle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_csingle);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_single));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_single);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_cdouble));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cdouble);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_double));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_double);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_longdouble));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_longdouble);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_clongdouble));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clongdouble);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__amax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__amax);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain__amin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__amin);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain__sum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sum);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain__prod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__prod);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_false_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_dict_90ad2ab5973fc538a41347fef6320399));
CHECK_OBJECT_DEEP(mod_consts.const_dict_90ad2ab5973fc538a41347fef6320399);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__any);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain__all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__all);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_false_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_true_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__clip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__clip);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain__mean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mean);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_int_0_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_int_0_false_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_dict_490553f4ead08894108e0d0e9cf73cca));
CHECK_OBJECT_DEEP(mod_consts.const_dict_490553f4ead08894108e0d0e9cf73cca);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__std));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__std);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_false_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__ptp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ptp);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain__dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dump);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain__dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dumps);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_dict_58ab5ac147e987887c20fe23b3a77de0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_58ab5ac147e987887c20fe23b3a77de0);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain__bitwise_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__bitwise_count);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d2e1be0aedcfd587c65758ff871e1aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d2e1be0aedcfd587c65758ff871e1aa);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_5dc59a1dae521d24233c92ec155c4c83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5dc59a1dae521d24233c92ec155c4c83);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_af82a590eea0b2e909289de63f905000_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_af82a590eea0b2e909289de63f905000_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_c897e1b6a5d3fe8d9237ffe246c01779_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c897e1b6a5d3fe8d9237ffe246c01779_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_8408d21fe12b734dc60d47f1993cfd6d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8408d21fe12b734dc60d47f1993cfd6d_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_2906568dcc7263904efd02cbb093697c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2906568dcc7263904efd02cbb093697c_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_protocol_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_protocol_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_8ad41b140ecadeeeea112820a6310f5d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8ad41b140ecadeeeea112820a6310f5d_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_f646f5386a2f6d8f7f798902802928d0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f646f5386a2f6d8f7f798902802928d0_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_aa347c6e7e14d264e4c7ef881bd6e63d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aa347c6e7e14d264e4c7ef881bd6e63d_tuple);
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
static PyObject *module_var_accessor_numpy$_core$_methods$RuntimeWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$_NoValue(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NoValue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NoValue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NoValue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NoValue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValue);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$_complex_to_float(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__complex_to_float);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__complex_to_float);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__complex_to_float, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__complex_to_float);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__complex_to_float, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__complex_to_float);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__complex_to_float);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__complex_to_float);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$_count_reduce_items(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__count_reduce_items);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__count_reduce_items);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__count_reduce_items, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__count_reduce_items);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__count_reduce_items, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__count_reduce_items);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__count_reduce_items);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__count_reduce_items);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$_var(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__var);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__var);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__var, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__var);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__var, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__var);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__var);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__var);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$asanyarray(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_asanyarray);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asanyarray);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asanyarray, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asanyarray);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asanyarray, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_asanyarray);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_asanyarray);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asanyarray);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$bool_dt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_bool_dt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bool_dt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bool_dt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bool_dt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bool_dt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_bool_dt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_bool_dt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_bool_dt);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$mu(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_mu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mu);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mu, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mu);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mu, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_mu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_mu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mu);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$nt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_nt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_nt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_nt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_nt);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$nullcontext(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_nullcontext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nullcontext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nullcontext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nullcontext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nullcontext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_nullcontext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_nullcontext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_nullcontext);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$pickle(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_pickle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pickle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pickle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pickle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pickle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_pickle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_pickle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pickle);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$um(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_um);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_um);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_um, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_um);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_um, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_um);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_um);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_um);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$umr_all(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_all);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_all);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_all, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_all);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_all, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_all);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_all);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_all);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$umr_any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_any);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_any, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_any);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_any, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_any);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$umr_bitwise_count(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_bitwise_count);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_bitwise_count);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_bitwise_count, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_bitwise_count);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_bitwise_count, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_bitwise_count);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_bitwise_count);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_bitwise_count);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$umr_maximum(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_maximum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_maximum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_maximum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_maximum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_maximum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_maximum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_maximum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_maximum);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$umr_minimum(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_minimum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_minimum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_minimum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_minimum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_minimum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_minimum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_minimum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_minimum);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$umr_prod(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_prod);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_prod);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_prod, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_prod);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_prod, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_prod);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_prod);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_prod);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$umr_sum(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_sum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_sum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_sum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umr_sum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umr_sum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_sum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_sum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_sum);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_methods$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_methods->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_62448e45d86f14db5939b41371185e41;
static PyCodeObject *code_objects_95e9fe3dbdd6827eec085d1528837a33;
static PyCodeObject *code_objects_ff4304d7259721a247953f882771d031;
static PyCodeObject *code_objects_61976fa60d031b735036ed16d72a33e3;
static PyCodeObject *code_objects_5ce728c18d3c8378478e431beec0889c;
static PyCodeObject *code_objects_6c9c1dcc5aec41d27416abe202b47531;
static PyCodeObject *code_objects_b20c8fa5b19433d2c1fd8dc55a812329;
static PyCodeObject *code_objects_3d886ab305a253d4d8d173e90a09694a;
static PyCodeObject *code_objects_8ff8dbd826401b3fdfb64417e3946de9;
static PyCodeObject *code_objects_c2655dd54b0e4d379540ead05bd762e0;
static PyCodeObject *code_objects_c1a2b2ed7d0c311cd1a30a4ee06e4628;
static PyCodeObject *code_objects_5d8d27cf201b1a8c4e59c1815f5549c8;
static PyCodeObject *code_objects_e6fa5b6071a56a6ba83ef49d4cdcdc05;
static PyCodeObject *code_objects_cb9b3da3c51dadc610b09262bc94c30a;
static PyCodeObject *code_objects_2583049cbb77b1d94e09c827ad099c7d;
static PyCodeObject *code_objects_ff50120b4427842be979baea5af8bd2a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0d2e1be0aedcfd587c65758ff871e1aa); CHECK_OBJECT(module_filename_obj);
code_objects_62448e45d86f14db5939b41371185e41 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_5dc59a1dae521d24233c92ec155c4c83, mod_consts.const_str_digest_5dc59a1dae521d24233c92ec155c4c83, NULL, NULL, 0, 0, 0);
code_objects_95e9fe3dbdd6827eec085d1528837a33 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__all, mod_consts.const_str_plain__all, mod_consts.const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple, NULL, 5, 1, 0);
code_objects_ff4304d7259721a247953f882771d031 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__amax, mod_consts.const_str_plain__amax, mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple, NULL, 6, 0, 0);
code_objects_61976fa60d031b735036ed16d72a33e3 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__amin, mod_consts.const_str_plain__amin, mod_consts.const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple, NULL, 6, 0, 0);
code_objects_5ce728c18d3c8378478e431beec0889c = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__any, mod_consts.const_str_plain__any, mod_consts.const_tuple_e1ad3a6b893de2515a74e283135ee796_tuple, NULL, 5, 1, 0);
code_objects_6c9c1dcc5aec41d27416abe202b47531 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__bitwise_count, mod_consts.const_str_plain__bitwise_count, mod_consts.const_tuple_af82a590eea0b2e909289de63f905000_tuple, NULL, 2, 5, 0);
code_objects_b20c8fa5b19433d2c1fd8dc55a812329 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain__clip, mod_consts.const_str_plain__clip, mod_consts.const_tuple_c897e1b6a5d3fe8d9237ffe246c01779_tuple, NULL, 4, 0, 0);
code_objects_3d886ab305a253d4d8d173e90a09694a = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__count_reduce_items, mod_consts.const_str_plain__count_reduce_items, mod_consts.const_tuple_8408d21fe12b734dc60d47f1993cfd6d_tuple, NULL, 4, 0, 0);
code_objects_8ff8dbd826401b3fdfb64417e3946de9 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__dump, mod_consts.const_str_plain__dump, mod_consts.const_tuple_2906568dcc7263904efd02cbb093697c_tuple, NULL, 3, 0, 0);
code_objects_c2655dd54b0e4d379540ead05bd762e0 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__dumps, mod_consts.const_str_plain__dumps, mod_consts.const_tuple_str_plain_self_str_plain_protocol_tuple, NULL, 2, 0, 0);
code_objects_c1a2b2ed7d0c311cd1a30a4ee06e4628 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__mean, mod_consts.const_str_plain__mean, mod_consts.const_tuple_8ad41b140ecadeeeea112820a6310f5d_tuple, NULL, 5, 1, 0);
code_objects_5d8d27cf201b1a8c4e59c1815f5549c8 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__prod, mod_consts.const_str_plain__prod, mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple, NULL, 7, 0, 0);
code_objects_e6fa5b6071a56a6ba83ef49d4cdcdc05 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ptp, mod_consts.const_str_plain__ptp, mod_consts.const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, NULL, 4, 0, 0);
code_objects_cb9b3da3c51dadc610b09262bc94c30a = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__std, mod_consts.const_str_plain__std, mod_consts.const_tuple_f646f5386a2f6d8f7f798902802928d0_tuple, NULL, 6, 2, 0);
code_objects_2583049cbb77b1d94e09c827ad099c7d = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__sum, mod_consts.const_str_plain__sum, mod_consts.const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple, NULL, 7, 0, 0);
code_objects_ff50120b4427842be979baea5af8bd2a = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__var, mod_consts.const_str_plain__var, mod_consts.const_tuple_aa347c6e7e14d264e4c7ef881bd6e63d_tuple, NULL, 6, 2, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__10__var(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__11__std(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__12__ptp(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__13__dump(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__14__dumps(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__15__bitwise_count(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__1__amax(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__2__amin(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__3__sum(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__4__prod(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__5__any(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__6__all(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__7__count_reduce_items(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__8__clip(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__9__mean(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


// The module function definitions.
static PyObject *impl_numpy$_core$_methods$$$function__1__amax(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__1__amax;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__1__amax = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__1__amax)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__1__amax);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__1__amax == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__1__amax = MAKE_FUNCTION_FRAME(tstate, code_objects_ff4304d7259721a247953f882771d031, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__1__amax->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__1__amax = cache_frame_frame_numpy$_core$_methods$$$function__1__amax;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__1__amax);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__1__amax) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$umr_maximum(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_maximum);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
tmp_args_element_value_3 = Py_None;
CHECK_OBJECT(par_out);
tmp_args_element_value_4 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_5 = par_keepdims;
CHECK_OBJECT(par_initial);
tmp_args_element_value_6 = par_initial;
CHECK_OBJECT(par_where);
tmp_args_element_value_7 = par_where;
frame_frame_numpy$_core$_methods$$$function__1__amax->m_frame.f_lineno = 41;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__1__amax, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__1__amax->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__1__amax, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__1__amax,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_keepdims,
    par_initial,
    par_where
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__1__amax == cache_frame_frame_numpy$_core$_methods$$$function__1__amax) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__1__amax);
    cache_frame_frame_numpy$_core$_methods$$$function__1__amax = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__1__amax);

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


static PyObject *impl_numpy$_core$_methods$$$function__2__amin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__2__amin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__2__amin = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__2__amin)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__2__amin);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__2__amin == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__2__amin = MAKE_FUNCTION_FRAME(tstate, code_objects_61976fa60d031b735036ed16d72a33e3, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__2__amin->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__2__amin = cache_frame_frame_numpy$_core$_methods$$$function__2__amin;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__2__amin);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__2__amin) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$umr_minimum(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_minimum);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
tmp_args_element_value_3 = Py_None;
CHECK_OBJECT(par_out);
tmp_args_element_value_4 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_5 = par_keepdims;
CHECK_OBJECT(par_initial);
tmp_args_element_value_6 = par_initial;
CHECK_OBJECT(par_where);
tmp_args_element_value_7 = par_where;
frame_frame_numpy$_core$_methods$$$function__2__amin->m_frame.f_lineno = 45;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__2__amin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__2__amin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__2__amin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__2__amin,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_keepdims,
    par_initial,
    par_where
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__2__amin == cache_frame_frame_numpy$_core$_methods$$$function__2__amin) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__2__amin);
    cache_frame_frame_numpy$_core$_methods$$$function__2__amin = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__2__amin);

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


static PyObject *impl_numpy$_core$_methods$$$function__3__sum(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__3__sum;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__3__sum = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__3__sum)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__3__sum);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__3__sum == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__3__sum = MAKE_FUNCTION_FRAME(tstate, code_objects_2583049cbb77b1d94e09c827ad099c7d, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__3__sum->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__3__sum = cache_frame_frame_numpy$_core$_methods$$$function__3__sum;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__3__sum);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__3__sum) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$umr_sum(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_sum);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_args_element_value_3 = par_dtype;
CHECK_OBJECT(par_out);
tmp_args_element_value_4 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_5 = par_keepdims;
CHECK_OBJECT(par_initial);
tmp_args_element_value_6 = par_initial;
CHECK_OBJECT(par_where);
tmp_args_element_value_7 = par_where;
frame_frame_numpy$_core$_methods$$$function__3__sum->m_frame.f_lineno = 49;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__3__sum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__3__sum->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__3__sum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__3__sum,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_keepdims,
    par_initial,
    par_where
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__3__sum == cache_frame_frame_numpy$_core$_methods$$$function__3__sum) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__3__sum);
    cache_frame_frame_numpy$_core$_methods$$$function__3__sum = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__3__sum);

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


static PyObject *impl_numpy$_core$_methods$$$function__4__prod(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__4__prod;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__4__prod = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__4__prod)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__4__prod);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__4__prod == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__4__prod = MAKE_FUNCTION_FRAME(tstate, code_objects_5d8d27cf201b1a8c4e59c1815f5549c8, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__4__prod->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__4__prod = cache_frame_frame_numpy$_core$_methods$$$function__4__prod;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__4__prod);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__4__prod) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$umr_prod(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_prod);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_args_element_value_3 = par_dtype;
CHECK_OBJECT(par_out);
tmp_args_element_value_4 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_5 = par_keepdims;
CHECK_OBJECT(par_initial);
tmp_args_element_value_6 = par_initial;
CHECK_OBJECT(par_where);
tmp_args_element_value_7 = par_where;
frame_frame_numpy$_core$_methods$$$function__4__prod->m_frame.f_lineno = 53;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__4__prod, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__4__prod->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__4__prod, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__4__prod,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_keepdims,
    par_initial,
    par_where
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__4__prod == cache_frame_frame_numpy$_core$_methods$$$function__4__prod) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__4__prod);
    cache_frame_frame_numpy$_core$_methods$$$function__4__prod = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__4__prod);

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


static PyObject *impl_numpy$_core$_methods$$$function__5__any(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__5__any;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__5__any = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__5__any)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__5__any);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__5__any == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__5__any = MAKE_FUNCTION_FRAME(tstate, code_objects_5ce728c18d3c8378478e431beec0889c, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__5__any->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__5__any = cache_frame_frame_numpy$_core$_methods$$$function__5__any;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__5__any);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__5__any) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_1 = par_dtype;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_numpy$_core$_methods$bool_dt(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bool_dt);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_1;
    Py_INCREF(par_dtype);
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_where);
tmp_cmp_expr_left_2 = par_where;
tmp_cmp_expr_right_2 = Py_True;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$umr_any(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_any);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_args_element_value_3 = par_dtype;
CHECK_OBJECT(par_out);
tmp_args_element_value_4 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_5 = par_keepdims;
frame_frame_numpy$_core$_methods$$$function__5__any->m_frame.f_lineno = 61;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_numpy$_core$_methods$umr_any(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_any);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_1_1 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_arg_value_2_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_arg_value_3_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_arg_value_4_1 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_0_1 = par_where;
frame_frame_numpy$_core$_methods$$$function__5__any->m_frame.f_lineno = 62;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_where_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__5__any, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__5__any->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__5__any, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__5__any,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_keepdims,
    par_where
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__5__any == cache_frame_frame_numpy$_core$_methods$$$function__5__any) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__5__any);
    cache_frame_frame_numpy$_core$_methods$$$function__5__any = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__5__any);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_dtype);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
par_dtype = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_dtype);
par_dtype = NULL;
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


static PyObject *impl_numpy$_core$_methods$$$function__6__all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__6__all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__6__all = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__6__all)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__6__all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__6__all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__6__all = MAKE_FUNCTION_FRAME(tstate, code_objects_95e9fe3dbdd6827eec085d1528837a33, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__6__all->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__6__all = cache_frame_frame_numpy$_core$_methods$$$function__6__all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__6__all);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__6__all) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_1 = par_dtype;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_numpy$_core$_methods$bool_dt(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bool_dt);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_1;
    Py_INCREF(par_dtype);
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_where);
tmp_cmp_expr_left_2 = par_where;
tmp_cmp_expr_right_2 = Py_True;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$umr_all(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_all);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_args_element_value_3 = par_dtype;
CHECK_OBJECT(par_out);
tmp_args_element_value_4 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_5 = par_keepdims;
frame_frame_numpy$_core$_methods$$$function__6__all->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_numpy$_core$_methods$umr_all(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_all);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_1_1 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_arg_value_2_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_arg_value_3_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_arg_value_4_1 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_0_1 = par_where;
frame_frame_numpy$_core$_methods$$$function__6__all->m_frame.f_lineno = 71;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_where_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__6__all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__6__all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__6__all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__6__all,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_keepdims,
    par_where
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__6__all == cache_frame_frame_numpy$_core$_methods$$$function__6__all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__6__all);
    cache_frame_frame_numpy$_core$_methods$$$function__6__all = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__6__all);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_dtype);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
par_dtype = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_dtype);
par_dtype = NULL;
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


static PyObject *impl_numpy$_core$_methods$$$function__7__count_reduce_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_arr = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_keepdims = python_pars[2];
PyObject *par_where = python_pars[3];
PyObject *var_items = NULL;
PyObject *var_ax = NULL;
PyObject *var_broadcast_to = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items = MAKE_FUNCTION_FRAME(tstate, code_objects_3d886ab305a253d4d8d173e90a09694a, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items = cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_where);
tmp_cmp_expr_left_1 = par_where;
tmp_cmp_expr_right_1 = Py_True;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_2 = par_axis;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_arr);
tmp_expression_value_1 = par_arr;
tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_tuple_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_axis;
    assert(old != NULL);
    par_axis = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_axis);
tmp_isinstance_inst_1 = par_axis;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
tmp_assign_source_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_1);
{
    PyObject *old = par_axis;
    assert(old != NULL);
    par_axis = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_3:;
branch_end_2:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_pos_1;
assert(var_items == NULL);
Py_INCREF(tmp_assign_source_3);
var_items = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_axis);
tmp_iter_arg_1 = par_axis;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 82;
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
    PyObject *old = var_ax;
    var_ax = tmp_assign_source_6;
    Py_INCREF(var_ax);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
if (var_items == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_items);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_imult_expr_left_1 = var_items;
if (par_arr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_arr;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_shape);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_4 = module_var_accessor_numpy$_core$_methods$mu(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mu);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_2);

exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_normalize_axis_index);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_2);

exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_ax);
tmp_args_element_value_1 = var_ax;
if (par_arr == NULL) {
Py_DECREF(tmp_expression_value_2);
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = par_arr;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_2);
Py_DECREF(tmp_called_value_1);

exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items->m_frame.f_lineno = 83;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_subscript_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_2);

exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_imult_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_imult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_MULT_OBJECT_OBJECT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
CHECK_OBJECT(tmp_imult_expr_right_1);
Py_DECREF(tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = tmp_imult_expr_left_1;
var_items = tmp_assign_source_7;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
tmp_expression_value_6 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_intp);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_items == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_items);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_items;
frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items->m_frame.f_lineno = 84;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_items;
    var_items = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_eacd5d01cae0462745b73491d2538366;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_core$_methods;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_broadcast_to_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items->m_frame.f_lineno = 90;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$_core$_methods,
        mod_consts.const_str_plain_broadcast_to,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_broadcast_to);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_broadcast_to == NULL);
var_broadcast_to = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_3 = module_var_accessor_numpy$_core$_methods$umr_sum(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_sum);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_broadcast_to);
tmp_called_value_4 = var_broadcast_to;
CHECK_OBJECT(par_where);
tmp_args_element_value_5 = par_where;
CHECK_OBJECT(par_arr);
tmp_expression_value_7 = par_arr;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_7 = par_axis;
tmp_expression_value_8 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_intp);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = Py_None;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_10 = par_keepdims;
frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_items == NULL);
var_items = tmp_assign_source_10;
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items,
    type_description_1,
    par_arr,
    par_axis,
    par_keepdims,
    par_where,
    var_items,
    var_ax,
    var_broadcast_to
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items == cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items);
    cache_frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__7__count_reduce_items);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_items);
tmp_return_value = var_items;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_axis);
par_axis = NULL;
CHECK_OBJECT(var_items);
CHECK_OBJECT(var_items);
Py_DECREF(var_items);
var_items = NULL;
Py_XDECREF(var_ax);
var_ax = NULL;
Py_XDECREF(var_broadcast_to);
var_broadcast_to = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_axis);
par_axis = NULL;
Py_XDECREF(var_items);
var_items = NULL;
Py_XDECREF(var_ax);
var_ax = NULL;
Py_XDECREF(var_broadcast_to);
var_broadcast_to = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_arr);
Py_DECREF(par_arr);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_arr);
Py_DECREF(par_arr);
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


static PyObject *impl_numpy$_core$_methods$$$function__8__clip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_min = python_pars[1];
PyObject *par_max = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_kwargs = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__8__clip;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__8__clip = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__8__clip)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__8__clip);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__8__clip == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__8__clip = MAKE_FUNCTION_FRAME(tstate, code_objects_b20c8fa5b19433d2c1fd8dc55a812329, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__8__clip->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__8__clip = cache_frame_frame_numpy$_core$_methods$$$function__8__clip;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__8__clip);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__8__clip) == 2);

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


exception_lineno = 97;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_iu;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
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
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_type_arg_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_min);
tmp_type_arg_1 = par_min;
tmp_cmp_expr_left_2 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = (PyObject *)&PyLong_Type;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_min);
tmp_cmp_expr_left_3 = par_min;
tmp_expression_value_4 = module_var_accessor_numpy$_core$_methods$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_iinfo);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_5 = par_a;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 100;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__8__clip->m_frame.f_lineno = 100;
tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_min);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = par_min;
    assert(old != NULL);
    par_min = tmp_assign_source_1;
    Py_INCREF(par_min);
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_type_arg_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_max);
tmp_type_arg_2 = par_max;
tmp_cmp_expr_left_4 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_cmp_expr_left_4 == NULL));
tmp_cmp_expr_right_4 = (PyObject *)&PyLong_Type;
tmp_and_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_max);
tmp_cmp_expr_left_5 = par_max;
tmp_expression_value_7 = module_var_accessor_numpy$_core$_methods$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_iinfo);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_8 = par_a;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__8__clip->m_frame.f_lineno = 102;
tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_max);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
{
    PyObject *old = par_max;
    assert(old != NULL);
    par_max = tmp_assign_source_2;
    Py_INCREF(par_max);
    Py_DECREF(old);
}

}
branch_no_3:;
branch_no_1:;
{
bool tmp_condition_result_4;
int tmp_and_left_truth_3;
bool tmp_and_left_value_3;
bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_min);
tmp_cmp_expr_left_6 = par_min;
tmp_cmp_expr_right_6 = Py_None;
tmp_and_left_value_3 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_max);
tmp_cmp_expr_left_7 = par_max;
tmp_cmp_expr_right_7 = Py_None;
tmp_and_right_value_3 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
tmp_condition_result_4 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_4 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_expression_value_9 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_positive);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_out;
CHECK_OBJECT(par_out);
tmp_dict_value_1 = par_out;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(par_min);
tmp_cmp_expr_left_8 = par_min;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_direct_call_arg4_2;
tmp_expression_value_10 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_minimum);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_2 = par_a;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_max);
tmp_tuple_element_2 = par_max;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 1, tmp_tuple_element_2);
tmp_dict_key_2 = mod_consts.const_str_plain_out;
CHECK_OBJECT(par_out);
tmp_dict_value_2 = par_out;
tmp_direct_call_arg3_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_2 = par_kwargs;
Py_INCREF(tmp_direct_call_arg4_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2, tmp_direct_call_arg4_2};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(par_max);
tmp_cmp_expr_left_9 = par_max;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg3_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_direct_call_arg4_3;
tmp_expression_value_11 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_maximum);
if (tmp_direct_call_arg1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_3 = par_a;
tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_min);
tmp_tuple_element_3 = par_min;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 1, tmp_tuple_element_3);
tmp_dict_key_3 = mod_consts.const_str_plain_out;
CHECK_OBJECT(par_out);
tmp_dict_value_3 = par_out;
tmp_direct_call_arg3_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_3 = par_kwargs;
Py_INCREF(tmp_direct_call_arg4_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3, tmp_direct_call_arg3_3, tmp_direct_call_arg4_3};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_direct_call_arg1_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_direct_call_arg2_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_direct_call_arg3_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_direct_call_arg4_4;
tmp_expression_value_12 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_clip);
if (tmp_direct_call_arg1_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_4 = par_a;
tmp_direct_call_arg2_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_min);
tmp_tuple_element_4 = par_min;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_4, 1, tmp_tuple_element_4);
CHECK_OBJECT(par_max);
tmp_tuple_element_4 = par_max;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_4, 2, tmp_tuple_element_4);
tmp_dict_key_4 = mod_consts.const_str_plain_out;
CHECK_OBJECT(par_out);
tmp_dict_value_4 = par_out;
tmp_direct_call_arg3_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_4 = par_kwargs;
Py_INCREF(tmp_direct_call_arg4_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4, tmp_direct_call_arg2_4, tmp_direct_call_arg3_4, tmp_direct_call_arg4_4};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_6:;
branch_end_5:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__8__clip, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__8__clip->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__8__clip, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__8__clip,
    type_description_1,
    par_a,
    par_min,
    par_max,
    par_out,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__8__clip == cache_frame_frame_numpy$_core$_methods$$$function__8__clip) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__8__clip);
    cache_frame_frame_numpy$_core$_methods$$$function__8__clip = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__8__clip);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_min);
CHECK_OBJECT(par_min);
Py_DECREF(par_min);
par_min = NULL;
CHECK_OBJECT(par_max);
CHECK_OBJECT(par_max);
Py_DECREF(par_max);
par_max = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_min);
par_min = NULL;
Py_XDECREF(par_max);
par_max = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$_methods$$$function__9__mean(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
nuitka_bool var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
PyObject *var_rcount = NULL;
PyObject *var_ret = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__9__mean;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__9__mean = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__9__mean)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__9__mean);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__9__mean == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__9__mean = MAKE_FUNCTION_FRAME(tstate, code_objects_c1a2b2ed7d0c311cd1a30a4ee06e4628, module_numpy$_core$_methods, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__9__mean->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__9__mean = cache_frame_frame_numpy$_core$_methods$$$function__9__mean;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__9__mean);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__9__mean) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$asanyarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asanyarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 116;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
assert(var_arr == NULL);
var_arr = tmp_assign_source_1;
}
{
nuitka_bool tmp_assign_source_2;
tmp_assign_source_2 = NUITKA_BOOL_FALSE;
var_is_float16_result = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_2 = module_var_accessor_numpy$_core$_methods$_count_reduce_items(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__count_reduce_items);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_1 = var_arr;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_1_1 = par_axis;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_0_1 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_1_1 = par_where;
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 120;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_keepdims_str_plain_where_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
assert(var_rcount == NULL);
var_rcount = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_kwargs_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_where);
tmp_cmp_expr_left_1 = par_where;
tmp_cmp_expr_right_1 = Py_True;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_rcount);
tmp_cmp_expr_left_2 = var_rcount;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_3 = module_var_accessor_numpy$_core$_methods$umr_any(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_any);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rcount);
tmp_cmp_expr_left_3 = var_rcount;
tmp_cmp_expr_right_3 = const_int_0;
tmp_tuple_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd);
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 121;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 121;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
condexpr_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$_core$_methods$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_numpy$_core$_methods$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oooooooboo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 122;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_4 = par_dtype;
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
nuitka_bool tmp_condition_result_4;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_arr);
tmp_expression_value_3 = var_arr;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_issubclass_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_issubclass_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 126;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_integer);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 126;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_issubclass_classes_1, 0, tmp_tuple_element_3);
tmp_expression_value_5 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "oooooooboo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_bool);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooboo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_issubclass_classes_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_issubclass_cls_1);
Py_DECREF(tmp_issubclass_classes_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_cls_1);
Py_DECREF(tmp_issubclass_cls_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_numpy$_core$_methods$mu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 127;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_dtype,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_f8_tuple, 0)
);

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_4;
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_arr);
tmp_expression_value_7 = var_arr;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_issubclass_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_issubclass_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_2);

exception_lineno = 128;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_float16);
if (tmp_issubclass_classes_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_2);

exception_lineno = 128;
type_description_1 = "oooooooboo";
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


exception_lineno = 128;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_numpy$_core$_methods$mu(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mu);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 129;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_dtype,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_f4_tuple, 0)
);

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
var_is_float16_result = tmp_assign_source_6;
}
branch_no_4:;
branch_end_3:;
branch_no_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_5 = module_var_accessor_numpy$_core$_methods$umr_sum(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_sum);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_2 = var_arr;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_1_2 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_arg_value_2_1 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_arg_value_3_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_arg_value_4_1 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_0_2 = par_where;
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 132;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_where_tuple);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_ret);
tmp_isinstance_inst_1 = var_ret;
tmp_expression_value_9 = module_var_accessor_numpy$_core$_methods$mu(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mu);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_10 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_true_divide);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_kw_call_arg_value_0_3 = var_ret;
CHECK_OBJECT(var_rcount);
tmp_kw_call_arg_value_1_3 = var_rcount;
CHECK_OBJECT(var_ret);
tmp_kw_call_dict_value_0_3 = var_ret;
tmp_kw_call_dict_value_1_2 = mod_consts.const_str_plain_unsafe;
tmp_kw_call_dict_value_2_1 = Py_False;
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 134;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_subok_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_7;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
assert(var_is_float16_result != NUITKA_BOOL_UNASSIGNED);
tmp_and_left_value_1 = var_is_float16_result == NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_5 = par_out;
tmp_cmp_expr_right_5 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
tmp_condition_result_7 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_7 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_arr);
tmp_expression_value_11 = var_arr;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_dtype);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_args_element_value_2 = var_ret;
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 137;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, const_str_plain_type, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_8;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_ret);
tmp_expression_value_12 = var_ret;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain_dtype);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
bool tmp_condition_result_9;
assert(var_is_float16_result != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_9 = var_is_float16_result == NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_3;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
CHECK_OBJECT(var_arr);
tmp_expression_value_14 = var_arr;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_truediv_expr_left_1 = var_ret;
CHECK_OBJECT(var_rcount);
tmp_truediv_expr_right_1 = var_rcount;
tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 140;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 140;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_10;
    Py_DECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_4;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
CHECK_OBJECT(var_ret);
tmp_expression_value_16 = var_ret;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_truediv_expr_left_2 = var_ret;
CHECK_OBJECT(var_rcount);
tmp_truediv_expr_right_2 = var_rcount;
tmp_args_element_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 142;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame.f_lineno = 142;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_end_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
CHECK_OBJECT(var_ret);
tmp_truediv_expr_left_3 = var_ret;
CHECK_OBJECT(var_rcount);
tmp_truediv_expr_right_3 = var_rcount;
tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooboo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_12;
    Py_DECREF(old);
}

}
branch_end_7:;
branch_end_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__9__mean, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__9__mean->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__9__mean, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__9__mean,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_keepdims,
    par_where,
    var_arr,
    (int)var_is_float16_result,
    var_rcount,
    var_ret
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__9__mean == cache_frame_frame_numpy$_core$_methods$$$function__9__mean) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__9__mean);
    cache_frame_frame_numpy$_core$_methods$$$function__9__mean = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__9__mean);

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
CHECK_OBJECT(par_dtype);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
par_dtype = NULL;
CHECK_OBJECT(var_arr);
CHECK_OBJECT(var_arr);
Py_DECREF(var_arr);
var_arr = NULL;
assert(var_is_float16_result != NUITKA_BOOL_UNASSIGNED);
var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(var_rcount);
CHECK_OBJECT(var_rcount);
Py_DECREF(var_rcount);
var_rcount = NULL;
CHECK_OBJECT(var_ret);
CHECK_OBJECT(var_ret);
Py_DECREF(var_ret);
var_ret = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(var_arr);
var_arr = NULL;
var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_rcount);
var_rcount = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
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


static PyObject *impl_numpy$_core$_methods$$$function__10__var(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *var_arr = NULL;
PyObject *var_rcount = NULL;
PyObject *var_arrmean = NULL;
PyObject *var_div = NULL;
PyObject *var_x = NULL;
PyObject *var__float_dtype = NULL;
PyObject *var_xv = NULL;
PyObject *var_ret = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__10__var;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__10__var = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__10__var)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__10__var);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__10__var == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__10__var = MAKE_FUNCTION_FRAME(tstate, code_objects_ff50120b4427842be979baea5af8bd2a, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__10__var->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__10__var = cache_frame_frame_numpy$_core$_methods$$$function__10__var;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__10__var);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__10__var) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$asanyarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asanyarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 150;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_arr == NULL);
var_arr = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_2 = module_var_accessor_numpy$_core$_methods$_count_reduce_items(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__count_reduce_items);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_1 = var_arr;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_1_1 = par_axis;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_0_1 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_1_1 = par_where;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 152;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_keepdims_str_plain_where_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_rcount == NULL);
var_rcount = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_kwargs_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_where);
tmp_cmp_expr_left_1 = par_where;
tmp_cmp_expr_right_1 = Py_True;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_ddof);
tmp_cmp_expr_left_2 = par_ddof;
CHECK_OBJECT(var_rcount);
tmp_cmp_expr_right_2 = var_rcount;
tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_3 = module_var_accessor_numpy$_core$_methods$umr_any(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_any);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ddof);
tmp_cmp_expr_left_3 = par_ddof;
CHECK_OBJECT(var_rcount);
tmp_cmp_expr_right_3 = var_rcount;
tmp_tuple_element_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_21b0a41bf986b828d73b3708697d69bd);
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 154;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 154;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
condexpr_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$_core$_methods$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_9f54c2bfef14a31f9e49e5c6c99e4831;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_numpy$_core$_methods$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 155;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_4 = par_dtype;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_arr);
tmp_expression_value_3 = var_arr;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_issubclass_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_integer);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_issubclass_classes_1, 0, tmp_tuple_element_3);
tmp_expression_value_5 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_bool);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_issubclass_classes_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_issubclass_cls_1);
Py_DECREF(tmp_issubclass_classes_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_cls_1);
Py_DECREF(tmp_issubclass_cls_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_numpy$_core$_methods$mu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 160;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_dtype,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_f8_tuple, 0)
);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_mean);
tmp_cmp_expr_left_5 = par_mean;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(par_mean);
tmp_assign_source_4 = par_mean;
assert(var_arrmean == NULL);
Py_INCREF(tmp_assign_source_4);
var_arrmean = tmp_assign_source_4;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
tmp_called_value_5 = module_var_accessor_numpy$_core$_methods$umr_sum(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_sum);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_arg_value_0_2 = var_arr;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_1_2 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_arg_value_2_1 = par_dtype;
tmp_kw_call_dict_value_0_2 = Py_True;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_1_2 = par_where;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 168;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_keepdims_str_plain_where_tuple);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_arrmean == NULL);
var_arrmean = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_rcount);
tmp_expression_value_6 = var_rcount;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(var_rcount);
tmp_assign_source_6 = var_rcount;
assert(var_div == NULL);
Py_INCREF(tmp_assign_source_6);
var_div = tmp_assign_source_6;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_rcount);
tmp_expression_value_7 = var_rcount;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_reshape);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arrmean);
tmp_expression_value_8 = var_arrmean;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 176;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 176;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_div == NULL);
var_div = tmp_assign_source_7;
}
branch_end_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_arrmean);
tmp_isinstance_inst_1 = var_arrmean;
tmp_expression_value_9 = module_var_accessor_numpy$_core$_methods$mu(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mu);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_10 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_true_divide);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arrmean);
tmp_kw_call_arg_value_0_3 = var_arrmean;
CHECK_OBJECT(var_div);
tmp_kw_call_arg_value_1_3 = var_div;
CHECK_OBJECT(var_arrmean);
tmp_kw_call_dict_value_0_3 = var_arrmean;
tmp_kw_call_dict_value_1_3 = mod_consts.const_str_plain_unsafe;
tmp_kw_call_dict_value_2_1 = Py_False;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 178;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_1};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_subok_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_arrmean;
    assert(old != NULL);
    var_arrmean = tmp_assign_source_8;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_arrmean);
tmp_expression_value_11 = var_arrmean;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain_dtype);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_3;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
CHECK_OBJECT(var_arrmean);
tmp_expression_value_13 = var_arrmean;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arrmean);
tmp_truediv_expr_left_1 = var_arrmean;
CHECK_OBJECT(var_rcount);
tmp_truediv_expr_right_1 = var_rcount;
tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 181;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 181;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_arrmean;
    assert(old != NULL);
    var_arrmean = tmp_assign_source_9;
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
CHECK_OBJECT(var_arrmean);
tmp_truediv_expr_left_2 = var_arrmean;
CHECK_OBJECT(var_rcount);
tmp_truediv_expr_right_2 = var_rcount;
tmp_assign_source_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_arrmean;
    assert(old != NULL);
    var_arrmean = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_end_6:;
branch_end_5:;
branch_end_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
tmp_expression_value_14 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_subtract);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_tuple_element_4 = var_arr;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_arrmean);
tmp_tuple_element_4 = var_arrmean;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_5c510a341eb8ce89f98f64af29a634ed);
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 188;
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_x == NULL);
var_x = tmp_assign_source_11;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(var_arr);
tmp_expression_value_16 = var_arr;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_issubclass_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_17 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_2);

exception_lineno = 189;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_floating);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_2);

exception_lineno = 189;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyTuple_SET_ITEM(tmp_issubclass_classes_2, 0, tmp_tuple_element_5);
tmp_expression_value_18 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_3;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_integer);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_issubclass_classes_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_issubclass_cls_2);
Py_DECREF(tmp_issubclass_classes_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
CHECK_OBJECT(tmp_issubclass_cls_2);
Py_DECREF(tmp_issubclass_cls_2);
CHECK_OBJECT(tmp_issubclass_classes_2);
Py_DECREF(tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_4;
tmp_expression_value_19 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_square);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_kw_call_arg_value_0_4 = var_x;
CHECK_OBJECT(var_x);
tmp_kw_call_dict_value_0_4 = var_x;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 190;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_x;
    assert(old != NULL);
    var_x = tmp_assign_source_12;
    Py_DECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_21;
tmp_expression_value_20 = module_var_accessor_numpy$_core$_methods$_complex_to_float(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__complex_to_float);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_get);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_x);
tmp_expression_value_21 = var_x;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 192;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 192;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_14 = tmp_assignment_expr_1__value;
assert(var__float_dtype == NULL);
Py_INCREF(tmp_assign_source_14);
var__float_dtype = tmp_assign_source_14;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_7 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_7);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_22;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_tuple_element_6;
CHECK_OBJECT(var_x);
tmp_expression_value_22 = var_x;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_view);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__float_dtype);
tmp_tuple_element_6 = var__float_dtype;
tmp_kw_call_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_kw_call_value_0_1, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_tuple_int_pos_2_tuple;
PyTuple_SET_ITEM0(tmp_kw_call_value_0_1, 1, tmp_tuple_element_6);
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 193;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_15 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_12, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_xv == NULL);
var_xv = tmp_assign_source_15;
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_3;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_dict_value_0_5;
tmp_expression_value_23 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_square);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_xv);
tmp_kw_call_arg_value_0_5 = var_xv;
CHECK_OBJECT(var_xv);
tmp_kw_call_dict_value_0_5 = var_xv;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 194;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_24;
PyObject *tmp_kw_call_arg_value_0_6;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_arg_value_1_4;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_2;
PyObject *tmp_kw_call_dict_value_0_6;
PyObject *tmp_expression_value_27;
tmp_expression_value_24 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_add);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_xv);
tmp_expression_value_25 = var_xv;
tmp_subscript_value_1 = mod_consts.const_tuple_ellipsis_int_0_tuple;
tmp_kw_call_arg_value_0_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_1);
if (tmp_kw_call_arg_value_0_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 195;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_xv);
tmp_expression_value_26 = var_xv;
tmp_subscript_value_2 = mod_consts.const_tuple_ellipsis_int_pos_1_tuple;
tmp_kw_call_arg_value_1_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_2);
if (tmp_kw_call_arg_value_1_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);
Py_DECREF(tmp_kw_call_arg_value_0_6);

exception_lineno = 195;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_expression_value_27 = var_x;
tmp_kw_call_dict_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_real);
if (tmp_kw_call_dict_value_0_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);
Py_DECREF(tmp_kw_call_arg_value_0_6);
Py_DECREF(tmp_kw_call_arg_value_1_4);

exception_lineno = 195;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 195;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_kw_call_arg_value_0_6);
Py_DECREF(tmp_kw_call_arg_value_0_6);
CHECK_OBJECT(tmp_kw_call_arg_value_1_4);
Py_DECREF(tmp_kw_call_arg_value_1_4);
CHECK_OBJECT(tmp_kw_call_dict_value_0_6);
Py_DECREF(tmp_kw_call_dict_value_0_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_x;
    assert(old != NULL);
    var_x = tmp_assign_source_16;
    Py_DECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_28;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_29;
PyObject *tmp_kw_call_arg_value_0_7;
PyObject *tmp_kw_call_arg_value_1_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_kw_call_dict_value_0_7;
tmp_expression_value_29 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_multiply);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_kw_call_arg_value_0_7 = var_x;
tmp_called_instance_2 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 199;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_args_element_value_5 = var_x;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 199;
tmp_kw_call_arg_value_1_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_conjugate, tmp_args_element_value_5);
if (tmp_kw_call_arg_value_1_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 199;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_kw_call_dict_value_0_7 = var_x;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 199;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_5};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
    tmp_expression_value_28 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_kw_call_arg_value_1_5);
Py_DECREF(tmp_kw_call_arg_value_1_5);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_real);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_x;
    assert(old != NULL);
    var_x = tmp_assign_source_17;
    Py_DECREF(old);
}

}
branch_end_8:;
branch_end_7:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_16;
PyObject *tmp_kw_call_arg_value_0_8;
PyObject *tmp_kw_call_arg_value_1_6;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_dict_value_0_8;
PyObject *tmp_kw_call_dict_value_1_4;
tmp_called_value_16 = module_var_accessor_numpy$_core$_methods$umr_sum(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_sum);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x);
tmp_kw_call_arg_value_0_8 = var_x;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_1_6 = par_axis;
CHECK_OBJECT(par_dtype);
tmp_kw_call_arg_value_2_2 = par_dtype;
CHECK_OBJECT(par_out);
tmp_kw_call_arg_value_3_1 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_kw_call_dict_value_0_8 = par_keepdims;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_1_4 = par_where;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 201;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_8, tmp_kw_call_arg_value_1_6, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_4};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts.const_tuple_str_plain_keepdims_str_plain_where_tuple);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_element_value_6;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_args_element_value_7;
tmp_expression_value_30 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_maximum);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rcount);
tmp_sub_expr_left_1 = var_rcount;
CHECK_OBJECT(par_ddof);
tmp_sub_expr_right_1 = par_ddof;
tmp_args_element_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = const_int_0;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 204;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rcount;
    assert(old != NULL);
    var_rcount = tmp_assign_source_19;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(var_ret);
tmp_isinstance_inst_2 = var_ret;
tmp_expression_value_31 = module_var_accessor_numpy$_core$_methods$mu(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mu);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_32;
PyObject *tmp_kw_call_arg_value_0_9;
PyObject *tmp_kw_call_arg_value_1_7;
PyObject *tmp_kw_call_dict_value_0_9;
PyObject *tmp_kw_call_dict_value_1_5;
PyObject *tmp_kw_call_dict_value_2_2;
tmp_expression_value_32 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_true_divide);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_kw_call_arg_value_0_9 = var_ret;
CHECK_OBJECT(var_rcount);
tmp_kw_call_arg_value_1_7 = var_rcount;
CHECK_OBJECT(var_ret);
tmp_kw_call_dict_value_0_9 = var_ret;
tmp_kw_call_dict_value_1_5 = mod_consts.const_str_plain_unsafe;
tmp_kw_call_dict_value_2_2 = Py_False;
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 208;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_9, tmp_kw_call_arg_value_1_7};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_9, tmp_kw_call_dict_value_1_5, tmp_kw_call_dict_value_2_2};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_18, args, kw_values, mod_consts.const_tuple_str_plain_out_str_plain_casting_str_plain_subok_tuple);
}

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_20;
    Py_DECREF(old);
}

}
goto branch_end_9;
branch_no_9:;
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(var_ret);
tmp_expression_value_33 = var_ret;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain_dtype);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_element_value_8;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
CHECK_OBJECT(var_ret);
tmp_expression_value_35 = var_ret;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_truediv_expr_left_3 = var_ret;
CHECK_OBJECT(var_rcount);
tmp_truediv_expr_right_3 = var_rcount;
tmp_args_element_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 211;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__10__var->m_frame.f_lineno = 211;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_21;
    Py_DECREF(old);
}

}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
CHECK_OBJECT(var_ret);
tmp_truediv_expr_left_4 = var_ret;
CHECK_OBJECT(var_rcount);
tmp_truediv_expr_right_4 = var_rcount;
tmp_assign_source_22 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_22;
    Py_DECREF(old);
}

}
branch_end_10:;
branch_end_9:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__10__var, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__10__var->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__10__var, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__10__var,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_ddof,
    par_keepdims,
    par_where,
    par_mean,
    var_arr,
    var_rcount,
    var_arrmean,
    var_div,
    var_x,
    var__float_dtype,
    var_xv,
    var_ret
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__10__var == cache_frame_frame_numpy$_core$_methods$$$function__10__var) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__10__var);
    cache_frame_frame_numpy$_core$_methods$$$function__10__var = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__10__var);

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
CHECK_OBJECT(par_dtype);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
par_dtype = NULL;
CHECK_OBJECT(var_arr);
CHECK_OBJECT(var_arr);
Py_DECREF(var_arr);
var_arr = NULL;
CHECK_OBJECT(var_rcount);
CHECK_OBJECT(var_rcount);
Py_DECREF(var_rcount);
var_rcount = NULL;
CHECK_OBJECT(var_arrmean);
CHECK_OBJECT(var_arrmean);
Py_DECREF(var_arrmean);
var_arrmean = NULL;
Py_XDECREF(var_div);
var_div = NULL;
CHECK_OBJECT(var_x);
CHECK_OBJECT(var_x);
Py_DECREF(var_x);
var_x = NULL;
Py_XDECREF(var__float_dtype);
var__float_dtype = NULL;
Py_XDECREF(var_xv);
var_xv = NULL;
CHECK_OBJECT(var_ret);
CHECK_OBJECT(var_ret);
Py_DECREF(var_ret);
var_ret = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(var_arr);
var_arr = NULL;
Py_XDECREF(var_rcount);
var_rcount = NULL;
Py_XDECREF(var_arrmean);
var_arrmean = NULL;
Py_XDECREF(var_div);
var_div = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var__float_dtype);
var__float_dtype = NULL;
Py_XDECREF(var_xv);
var_xv = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_mean);
Py_DECREF(par_mean);
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
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);
CHECK_OBJECT(par_keepdims);
Py_DECREF(par_keepdims);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_mean);
Py_DECREF(par_mean);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$_methods$$$function__11__std(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *var_ret = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__11__std;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__11__std = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__11__std)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__11__std);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__11__std == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__11__std = MAKE_FUNCTION_FRAME(tstate, code_objects_cb9b3da3c51dadc610b09262bc94c30a, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__11__std->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__11__std = cache_frame_frame_numpy$_core$_methods$$$function__11__std;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__11__std);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__11__std) == 2);

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
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$_var(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__var);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "ooooooooo";
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
frame_frame_numpy$_core$_methods$$$function__11__std->m_frame.f_lineno = 219;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_c9abf57e7fa650776d707507c7b30e7e_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_ret);
tmp_isinstance_inst_1 = var_ret;
tmp_expression_value_1 = module_var_accessor_numpy$_core$_methods$mu(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mu);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooo";
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
tmp_expression_value_2 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sqrt);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_kw_call_arg_value_0_2 = var_ret;
CHECK_OBJECT(var_ret);
tmp_kw_call_dict_value_0_2 = var_ret;
frame_frame_numpy$_core$_methods$$$function__11__std->m_frame.f_lineno = 223;
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


exception_lineno = 223;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_ret);
tmp_expression_value_3 = var_ret;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooo";
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
CHECK_OBJECT(var_ret);
tmp_expression_value_5 = var_ret;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 225;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_args_element_value_2 = var_ret;
frame_frame_numpy$_core$_methods$$$function__11__std->m_frame.f_lineno = 225;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_sqrt, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 225;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods$$$function__11__std->m_frame.f_lineno = 225;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_3;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_args_element_value_3 = var_ret;
frame_frame_numpy$_core$_methods$$$function__11__std->m_frame.f_lineno = 227;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sqrt, tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    assert(old != NULL);
    var_ret = tmp_assign_source_4;
    Py_DECREF(old);
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__11__std, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__11__std->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__11__std, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__11__std,
    type_description_1,
    par_a,
    par_axis,
    par_dtype,
    par_out,
    par_ddof,
    par_keepdims,
    par_where,
    par_mean,
    var_ret
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__11__std == cache_frame_frame_numpy$_core$_methods$$$function__11__std) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__11__std);
    cache_frame_frame_numpy$_core$_methods$$$function__11__std = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__11__std);

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
CHECK_OBJECT(var_ret);
CHECK_OBJECT(var_ret);
Py_DECREF(var_ret);
var_ret = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ret);
var_ret = NULL;
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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$_methods$$$function__12__ptp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
PyObject *par_keepdims = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__12__ptp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__12__ptp = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__12__ptp)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__12__ptp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__12__ptp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__12__ptp = MAKE_FUNCTION_FRAME(tstate, code_objects_e6fa5b6071a56a6ba83ef49d4cdcdc05, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__12__ptp->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__12__ptp = cache_frame_frame_numpy$_core$_methods$$$function__12__ptp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__12__ptp);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__12__ptp) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_1 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_subtract);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_numpy$_core$_methods$umr_maximum(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_maximum);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 233;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_2 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_3 = par_axis;
tmp_args_element_value_4 = Py_None;
CHECK_OBJECT(par_out);
tmp_args_element_value_5 = par_out;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_6 = par_keepdims;
frame_frame_numpy$_core$_methods$$$function__12__ptp->m_frame.f_lineno = 233;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 233;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_numpy$_core$_methods$umr_minimum(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_minimum);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 234;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_8 = par_a;
CHECK_OBJECT(par_axis);
tmp_args_element_value_9 = par_axis;
tmp_args_element_value_10 = Py_None;
tmp_args_element_value_11 = Py_None;
CHECK_OBJECT(par_keepdims);
tmp_args_element_value_12 = par_keepdims;
frame_frame_numpy$_core$_methods$$$function__12__ptp->m_frame.f_lineno = 234;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 234;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_out);
tmp_args_element_value_13 = par_out;
frame_frame_numpy$_core$_methods$$$function__12__ptp->m_frame.f_lineno = 232;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_7, tmp_args_element_value_13};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__12__ptp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__12__ptp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__12__ptp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__12__ptp,
    type_description_1,
    par_a,
    par_axis,
    par_out,
    par_keepdims
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__12__ptp == cache_frame_frame_numpy$_core$_methods$$$function__12__ptp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__12__ptp);
    cache_frame_frame_numpy$_core$_methods$$$function__12__ptp = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__12__ptp);

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


static PyObject *impl_numpy$_core$_methods$$$function__13__dump(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
PyObject *par_protocol = python_pars[2];
PyObject *var_ctx = NULL;
PyObject *var_f = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__13__dump;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__13__dump = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__13__dump)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__13__dump);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__13__dump == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__13__dump = MAKE_FUNCTION_FRAME(tstate, code_objects_8ff8dbd826401b3fdfb64417e3946de9, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__13__dump->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__13__dump = cache_frame_frame_numpy$_core$_methods$$$function__13__dump;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__13__dump);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__13__dump) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_file);
tmp_expression_value_1 = par_file;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_write);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$nullcontext(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nullcontext);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_file);
tmp_args_element_value_1 = par_file;
frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame.f_lineno = 240;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_ctx == NULL);
var_ctx = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_open_filename_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_open_mode_1;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_file);
tmp_args_element_value_2 = par_file;
frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame.f_lineno = 242;
tmp_open_filename_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_fspath, tmp_args_element_value_2);
if (tmp_open_filename_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_open_mode_1 = mod_consts.const_str_plain_wb;
tmp_assign_source_2 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
CHECK_OBJECT(tmp_open_filename_1);
Py_DECREF(tmp_open_filename_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_ctx == NULL);
var_ctx = tmp_assign_source_2;
}
branch_end_1:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(var_ctx);
tmp_assign_source_3 = var_ctx;
assert(tmp_with_1__source == NULL);
Py_INCREF(tmp_assign_source_3);
tmp_with_1__source = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame.f_lineno = 243;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_7 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_7);
var_f = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_4 = module_var_accessor_numpy$_core$_methods$pickle(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pickle);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dump);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(var_f);
tmp_kw_call_arg_value_1_1 = var_f;
CHECK_OBJECT(par_protocol);
tmp_kw_call_dict_value_0_1 = par_protocol;
frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame.f_lineno = 244;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_protocol_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__13__dump, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__13__dump, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame.f_lineno = 243;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 243;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame)) {
        frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 243;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame)) {
        frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame.f_lineno = 243;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame.f_lineno = 243;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__13__dump, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__13__dump->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__13__dump, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__13__dump,
    type_description_1,
    par_self,
    par_file,
    par_protocol,
    var_ctx,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__13__dump == cache_frame_frame_numpy$_core$_methods$$$function__13__dump) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__13__dump);
    cache_frame_frame_numpy$_core$_methods$$$function__13__dump = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__13__dump);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
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
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ctx);
CHECK_OBJECT(var_ctx);
Py_DECREF(var_ctx);
var_ctx = NULL;
CHECK_OBJECT(var_f);
CHECK_OBJECT(var_f);
Py_DECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ctx);
var_ctx = NULL;
Py_XDECREF(var_f);
var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_protocol);
Py_DECREF(par_protocol);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_protocol);
Py_DECREF(par_protocol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$_methods$$$function__14__dumps(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_protocol = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__14__dumps;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__14__dumps = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__14__dumps)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__14__dumps);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__14__dumps == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__14__dumps = MAKE_FUNCTION_FRAME(tstate, code_objects_c2655dd54b0e4d379540ead05bd762e0, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__14__dumps->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__14__dumps = cache_frame_frame_numpy$_core$_methods$$$function__14__dumps;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__14__dumps);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__14__dumps) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_1 = module_var_accessor_numpy$_core$_methods$pickle(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pickle);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dumps);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_protocol);
tmp_kw_call_dict_value_0_1 = par_protocol;
frame_frame_numpy$_core$_methods$$$function__14__dumps->m_frame.f_lineno = 247;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_protocol_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__14__dumps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__14__dumps->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__14__dumps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__14__dumps,
    type_description_1,
    par_self,
    par_protocol
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__14__dumps == cache_frame_frame_numpy$_core$_methods$$$function__14__dumps) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__14__dumps);
    cache_frame_frame_numpy$_core$_methods$$$function__14__dumps = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__14__dumps);

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
CHECK_OBJECT(par_protocol);
Py_DECREF(par_protocol);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_protocol);
Py_DECREF(par_protocol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$_methods$$$function__15__bitwise_count(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_out = python_pars[1];
PyObject *par_where = python_pars[2];
PyObject *par_casting = python_pars[3];
PyObject *par_order = python_pars[4];
PyObject *par_dtype = python_pars[5];
PyObject *par_subok = python_pars[6];
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods$$$function__15__bitwise_count;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count = MAKE_FUNCTION_FRAME(tstate, code_objects_6c9c1dcc5aec41d27416abe202b47531, module_numpy$_core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count->m_type_description == NULL);
frame_frame_numpy$_core$_methods$$$function__15__bitwise_count = cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods$$$function__15__bitwise_count);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods$$$function__15__bitwise_count) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
tmp_called_value_1 = module_var_accessor_numpy$_core$_methods$umr_bitwise_count(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umr_bitwise_count);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_out);
tmp_kw_call_arg_value_1_1 = par_out;
CHECK_OBJECT(par_where);
tmp_kw_call_dict_value_0_1 = par_where;
CHECK_OBJECT(par_casting);
tmp_kw_call_dict_value_1_1 = par_casting;
CHECK_OBJECT(par_order);
tmp_kw_call_dict_value_2_1 = par_order;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_3_1 = par_dtype;
CHECK_OBJECT(par_subok);
tmp_kw_call_dict_value_4_1 = par_subok;
frame_frame_numpy$_core$_methods$$$function__15__bitwise_count->m_frame.f_lineno = 251;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_3f9941f38cb21b5a6b1b7ce69cf46539_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods$$$function__15__bitwise_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods$$$function__15__bitwise_count->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods$$$function__15__bitwise_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_methods$$$function__15__bitwise_count,
    type_description_1,
    par_a,
    par_out,
    par_where,
    par_casting,
    par_order,
    par_dtype,
    par_subok
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_methods$$$function__15__bitwise_count == cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count);
    cache_frame_frame_numpy$_core$_methods$$$function__15__bitwise_count = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_methods$$$function__15__bitwise_count);

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
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_casting);
Py_DECREF(par_casting);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_where);
Py_DECREF(par_where);
CHECK_OBJECT(par_casting);
Py_DECREF(par_casting);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__10__var(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__10__var,
        mod_consts.const_str_plain__var,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ff50120b4427842be979baea5af8bd2a,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__11__std(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__11__std,
        mod_consts.const_str_plain__std,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cb9b3da3c51dadc610b09262bc94c30a,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__12__ptp(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__12__ptp,
        mod_consts.const_str_plain__ptp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e6fa5b6071a56a6ba83ef49d4cdcdc05,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__13__dump(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__13__dump,
        mod_consts.const_str_plain__dump,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8ff8dbd826401b3fdfb64417e3946de9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__14__dumps(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__14__dumps,
        mod_consts.const_str_plain__dumps,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c2655dd54b0e4d379540ead05bd762e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__15__bitwise_count(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__15__bitwise_count,
        mod_consts.const_str_plain__bitwise_count,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6c9c1dcc5aec41d27416abe202b47531,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__1__amax(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__1__amax,
        mod_consts.const_str_plain__amax,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ff4304d7259721a247953f882771d031,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__2__amin(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__2__amin,
        mod_consts.const_str_plain__amin,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_61976fa60d031b735036ed16d72a33e3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__3__sum(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__3__sum,
        mod_consts.const_str_plain__sum,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2583049cbb77b1d94e09c827ad099c7d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__4__prod(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__4__prod,
        mod_consts.const_str_plain__prod,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5d8d27cf201b1a8c4e59c1815f5549c8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__5__any(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__5__any,
        mod_consts.const_str_plain__any,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5ce728c18d3c8378478e431beec0889c,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__6__all(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__6__all,
        mod_consts.const_str_plain__all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_95e9fe3dbdd6827eec085d1528837a33,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__7__count_reduce_items(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__7__count_reduce_items,
        mod_consts.const_str_plain__count_reduce_items,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3d886ab305a253d4d8d173e90a09694a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__8__clip(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__8__clip,
        mod_consts.const_str_plain__clip,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b20c8fa5b19433d2c1fd8dc55a812329,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_methods,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_methods$$$function__9__mean(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_methods$$$function__9__mean,
        mod_consts.const_str_plain__mean,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c1a2b2ed7d0c311cd1a30a4ee06e4628,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$_core$_methods,
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

static function_impl_code const function_table_numpy$_core$_methods[] = {
impl_numpy$_core$_methods$$$function__1__amax,
impl_numpy$_core$_methods$$$function__2__amin,
impl_numpy$_core$_methods$$$function__3__sum,
impl_numpy$_core$_methods$$$function__4__prod,
impl_numpy$_core$_methods$$$function__5__any,
impl_numpy$_core$_methods$$$function__6__all,
impl_numpy$_core$_methods$$$function__7__count_reduce_items,
impl_numpy$_core$_methods$$$function__8__clip,
impl_numpy$_core$_methods$$$function__9__mean,
impl_numpy$_core$_methods$$$function__10__var,
impl_numpy$_core$_methods$$$function__11__std,
impl_numpy$_core$_methods$$$function__12__ptp,
impl_numpy$_core$_methods$$$function__13__dump,
impl_numpy$_core$_methods$$$function__14__dumps,
impl_numpy$_core$_methods$$$function__15__bitwise_count,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$_core$_methods);
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
        module_numpy$_core$_methods,
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
        function_table_numpy$_core$_methods,
        sizeof(function_table_numpy$_core$_methods) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy._core._methods";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$_core$_methods(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$_core$_methods");

    // Store the module for future use.
    module_numpy$_core$_methods = module;

    moduledict_numpy$_core$_methods = MODULE_DICT(module_numpy$_core$_methods);

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
        PRINT_STRING("numpy$_core$_methods: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_core$_methods: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$_core$_methods: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core._methods" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$_core$_methods\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$_core$_methods,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$_methods,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$_methods,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$_core$_methods);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$_core$_methods);
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

        UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_methods;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_dca7856a69248f667ac4794515bd7c7a;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$_core$_methods = MAKE_MODULE_FRAME(code_objects_62448e45d86f14db5939b41371185e41, module_numpy$_core$_methods);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_methods);
assert(Py_REFCNT(frame_frame_numpy$_core$_methods) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$_core$_methods$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$_core$_methods$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pickle;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_core$_methods;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 7;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_pickle, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$_core$_methods;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 8;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$_core$_methods;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_nullcontext_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$_core$_methods,
        mod_consts.const_str_plain_nullcontext,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_nullcontext);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_nullcontext, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$_core$_methods;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 11;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$_core$_methods;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_multiarray_str_plain_numerictypes_str_plain_umath_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 12;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$_core$_methods,
        mod_consts.const_str_plain_multiarray,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_multiarray);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_mu, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$_core$_methods,
        mod_consts.const_str_plain_numerictypes,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_numerictypes);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_nt, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$_core$_methods,
        mod_consts.const_str_plain_umath,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_umath);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_um, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c;
tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy$_core$_methods;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_asanyarray_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 13;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_numpy$_core$_methods,
        mod_consts.const_str_plain_asanyarray,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_asanyarray);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_asanyarray, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_9e9eca8947418183630fd19f8c915a83;
tmp_globals_arg_value_7 = (PyObject *)moduledict_numpy$_core$_methods;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__NoValue_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 14;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_numpy$_core$_methods,
        mod_consts.const_str_plain__NoValue,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain__NoValue);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValue, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_numpy$_core$_methods$mu(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mu);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 17;
tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_dtype,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_bool_tuple, 0)
);

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_bool_dt, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_maximum);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_reduce);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_maximum, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_minimum);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_reduce);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_minimum, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_add);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_reduce);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_sum, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_multiply);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_reduce);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_prod, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_bitwise_count);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_bitwise_count, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
tmp_expression_value_11 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_logical_or);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_reduce);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_any, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
tmp_expression_value_13 = module_var_accessor_numpy$_core$_methods$um(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_logical_and);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_reduce);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_umr_all, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_17;
tmp_expression_value_14 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_dtype);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_expression_value_15 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_csingle);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 28;
tmp_dict_key_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_expression_value_16 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_dtype);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_expression_value_17 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_single);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 28;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_assign_source_23 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_21;
tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto dict_build_exception_1;
}
tmp_expression_value_18 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto dict_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_dtype);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto dict_build_exception_1;
}
tmp_expression_value_19 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 29;

    goto dict_build_exception_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_cdouble);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 29;

    goto dict_build_exception_1;
}
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 29;
tmp_dict_key_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto dict_build_exception_1;
}
tmp_expression_value_20 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 29;

    goto dict_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_dtype);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 29;

    goto dict_build_exception_1;
}
tmp_expression_value_21 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);
Py_DECREF(tmp_called_value_4);

exception_lineno = 29;

    goto dict_build_exception_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_double);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);
Py_DECREF(tmp_called_value_4);

exception_lineno = 29;

    goto dict_build_exception_1;
}
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 29;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 29;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_23);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__complex_to_float, tmp_assign_source_23);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_23;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_25;
tmp_expression_value_22 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_dtype);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_expression_value_23 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_longdouble);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 32;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 32;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_expression_value_24 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_dtype);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_expression_value_25 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);
Py_DECREF(tmp_called_value_6);

exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_double);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);
Py_DECREF(tmp_called_value_6);

exception_lineno = 32;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 32;
tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

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
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_26;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_28;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_30;
tmp_expression_value_26 = module_var_accessor_numpy$_core$_methods$_complex_to_float(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__complex_to_float);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_update);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_expression_value_27 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_dtype);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_expression_value_28 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_called_value_8);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_clongdouble);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_called_value_8);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 34;
tmp_dict_key_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_expression_value_29 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_dtype);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_expression_value_30 = module_var_accessor_numpy$_core$_methods$nt(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_called_value_9);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_longdouble);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_called_value_9);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 34;
tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto dict_build_exception_2;
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_7);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
frame_frame_numpy$_core$_methods->m_frame.f_lineno = 33;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = Py_None;
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$_core$_methods$_NoValue(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NoValue);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_defaults_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

tmp_assign_source_24 = MAKE_FUNCTION_numpy$_core$_methods$$$function__1__amax(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__amax, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = Py_None;
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_numpy$_core$_methods$_NoValue(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NoValue);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_2, 4, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_defaults_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

tmp_assign_source_25 = MAKE_FUNCTION_numpy$_core$_methods$$$function__2__amin(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__amin, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = Py_None;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 6);
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_numpy$_core$_methods$_NoValue(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NoValue);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_3, 5, tmp_tuple_element_3);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_defaults_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

tmp_assign_source_26 = MAKE_FUNCTION_numpy$_core$_methods$$$function__3__sum(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__sum, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = Py_None;
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 6);
PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_4, 2, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_4, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_numpy$_core$_methods$_NoValue(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NoValue);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_defaults_4, 4, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_4, 5, tmp_tuple_element_4);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_defaults_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;

tmp_assign_source_27 = MAKE_FUNCTION_numpy$_core$_methods$$$function__4__prod(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__prod, tmp_assign_source_27);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_methods, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_methods->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_methods, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$_core$_methods);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_5;
PyObject *tmp_kw_defaults_1;
tmp_defaults_5 = mod_consts.const_tuple_none_none_none_false_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_90ad2ab5973fc538a41347fef6320399);
Py_INCREF(tmp_defaults_5);

tmp_assign_source_28 = MAKE_FUNCTION_numpy$_core$_methods$$$function__5__any(tstate, tmp_defaults_5, tmp_kw_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__any, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_defaults_6;
PyObject *tmp_kw_defaults_2;
tmp_defaults_6 = mod_consts.const_tuple_none_none_none_false_tuple;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_90ad2ab5973fc538a41347fef6320399);
Py_INCREF(tmp_defaults_6);

tmp_assign_source_29 = MAKE_FUNCTION_numpy$_core$_methods$$$function__6__all(tstate, tmp_defaults_6, tmp_kw_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__all, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_defaults_7;
tmp_defaults_7 = mod_consts.const_tuple_false_true_tuple;
Py_INCREF(tmp_defaults_7);

tmp_assign_source_30 = MAKE_FUNCTION_numpy$_core$_methods$$$function__7__count_reduce_items(tstate, tmp_defaults_7);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__count_reduce_items, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_defaults_8;
tmp_defaults_8 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_8);

tmp_assign_source_31 = MAKE_FUNCTION_numpy$_core$_methods$$$function__8__clip(tstate, tmp_defaults_8);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__clip, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_defaults_9;
PyObject *tmp_kw_defaults_3;
tmp_defaults_9 = mod_consts.const_tuple_none_none_none_false_tuple;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_90ad2ab5973fc538a41347fef6320399);
Py_INCREF(tmp_defaults_9);

tmp_assign_source_32 = MAKE_FUNCTION_numpy$_core$_methods$$$function__9__mean(tstate, tmp_defaults_9, tmp_kw_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__mean, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_defaults_10;
PyObject *tmp_kw_defaults_4;
tmp_defaults_10 = mod_consts.const_tuple_none_none_none_int_0_false_tuple;
tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts.const_dict_490553f4ead08894108e0d0e9cf73cca);
Py_INCREF(tmp_defaults_10);

tmp_assign_source_33 = MAKE_FUNCTION_numpy$_core$_methods$$$function__10__var(tstate, tmp_defaults_10, tmp_kw_defaults_4);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__var, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_defaults_11;
PyObject *tmp_kw_defaults_5;
tmp_defaults_11 = mod_consts.const_tuple_none_none_none_int_0_false_tuple;
tmp_kw_defaults_5 = DICT_COPY(tstate, mod_consts.const_dict_490553f4ead08894108e0d0e9cf73cca);
Py_INCREF(tmp_defaults_11);

tmp_assign_source_34 = MAKE_FUNCTION_numpy$_core$_methods$$$function__11__std(tstate, tmp_defaults_11, tmp_kw_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__std, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_defaults_12;
tmp_defaults_12 = mod_consts.const_tuple_none_none_false_tuple;
Py_INCREF(tmp_defaults_12);

tmp_assign_source_35 = MAKE_FUNCTION_numpy$_core$_methods$$$function__12__ptp(tstate, tmp_defaults_12);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__ptp, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_defaults_13;
tmp_defaults_13 = mod_consts.const_tuple_int_pos_2_tuple;
Py_INCREF(tmp_defaults_13);

tmp_assign_source_36 = MAKE_FUNCTION_numpy$_core$_methods$$$function__13__dump(tstate, tmp_defaults_13);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__dump, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_defaults_14;
tmp_defaults_14 = mod_consts.const_tuple_int_pos_2_tuple;
Py_INCREF(tmp_defaults_14);

tmp_assign_source_37 = MAKE_FUNCTION_numpy$_core$_methods$$$function__14__dumps(tstate, tmp_defaults_14);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__dumps, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_defaults_15;
PyObject *tmp_kw_defaults_6;
tmp_defaults_15 = mod_consts.const_tuple_none_tuple;
tmp_kw_defaults_6 = DICT_COPY(tstate, mod_consts.const_dict_58ab5ac147e987887c20fe23b3a77de0);
Py_INCREF(tmp_defaults_15);

tmp_assign_source_38 = MAKE_FUNCTION_numpy$_core$_methods$$$function__15__bitwise_count(tstate, tmp_defaults_15, tmp_kw_defaults_6);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__bitwise_count, tmp_assign_source_38);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$_core$_methods", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core._methods" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$_core$_methods);
    return module_numpy$_core$_methods;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_methods, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$_core$_methods", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

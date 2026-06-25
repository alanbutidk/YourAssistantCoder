/* Generated code for Python module 'numpy$fft$_pocketfft'
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



/* The "module_numpy$fft$_pocketfft" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$fft$_pocketfft;
PyDictObject *moduledict_numpy$fft$_pocketfft;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_a5c21a130d82b08ec82b2eb2488e7545;
PyObject *const_str_digest_45b1ab6a65a89c406447e6fa661f7467;
PyObject *const_str_plain__swap_direction;
PyObject *const_str_plain_result_type;
PyObject *const_str_plain_real;
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_backward;
PyObject *const_str_plain_ortho;
PyObject *const_str_plain_reciprocal;
PyObject *const_str_plain_sqrt;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain_forward;
PyObject *const_str_digest_e51f58c254d11708bf8f85bff25df324;
PyObject *const_str_digest_234f7d28d103a938c26b1ea124783466;
PyObject *const_int_pos_2;
PyObject *const_str_plain_pfu;
PyObject *const_str_plain_rfft_n_even;
PyObject *const_str_plain_rfft_n_odd;
PyObject *const_str_plain_irfft;
PyObject *const_str_plain_fft;
PyObject *const_str_plain_ifft;
PyObject *const_str_plain_normalize_axis_index;
PyObject *const_str_plain_ndim;
PyObject *const_complex_0_0__1_0;
PyObject *const_str_plain_empty_like;
PyObject *const_str_plain_shape;
PyObject *const_tuple_str_plain_shape_str_plain_dtype_tuple;
PyObject *const_str_digest_f6a716ee01c4c212e408b87c2caa0e5f;
PyObject *const_tuple_str_plain_axes_str_plain_out_tuple;
PyObject *const_str_plain__SWAP_DIRECTION_MAP;
PyObject *const_str_digest_ede0293e6183d1bba4be18bf7d53167e;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain__raw_fft;
PyObject *const_str_digest_8026e7a3eaff3abe05845c16edb91ebb;
PyObject *const_tuple_str_plain_out_tuple;
PyObject *const_str_digest_da23b484f0414e9df63598116827b5ed;
PyObject *const_str_digest_6c432ed1797fd7bc8960ab7678951745;
PyObject *const_str_digest_4ef64a28a86fa6a0731cfed966dfbcf0;
PyObject *const_str_plain_conjugate;
PyObject *const_tuple_str_plain_norm_str_plain_out_tuple;
PyObject *const_str_digest_90ab25f303f8abdf96da56d80ce72a00;
PyObject *const_str_plain_rfft;
PyObject *const_str_digest_94161835fc6cd6be865e7c22ad9c4824;
PyObject *const_str_plain_take;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_4dacd5e526742371464e47704e04baa1;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_dict_2254aca578e492e580f4e46a40647b9b;
PyObject *const_str_plain_axes;
PyObject *const_str_digest_ad30867cb50db197c788d8d9559403d4;
PyObject *const_str_digest_3fde5e280ed168f3f763acbf07f188c5;
PyObject *const_str_plain_a;
PyObject *const_str_plain__cook_nd_args;
PyObject *const_str_plain_function;
PyObject *const_str_plain_norm;
PyObject *const_str_plain_out;
PyObject *const_tuple_str_plain_n_str_plain_axis_str_plain_norm_str_plain_out_tuple;
PyObject *const_str_plain__raw_fftnd;
PyObject *const_str_digest_4633efbfe1aae44eba2c3063bbac9e60;
PyObject *const_str_digest_6b0d453a3e05b4f3bedb15ced966a0dc;
PyObject *const_str_digest_456339c773a3b8e70b7b3dfbbd66ea51;
PyObject *const_dict_2b811f9b7f6bd0285cfb478e33ee30a5;
PyObject *const_str_digest_ccdf9ba8cc2dc30d11f7db3ca8f73fc1;
PyObject *const_str_digest_5f51957c30dbcdfde8f1256c5dcdb699;
PyObject *const_str_plain_rfftn;
PyObject *const_str_digest_489e2c292a638e1e7f5d35ce537a91c8;
PyObject *const_dict_dd45c77b755c75255009fd804f504c08;
PyObject *const_str_digest_c298986b835dd6208cb44e88a86d216b;
PyObject *const_str_plain_irfftn;
PyObject *const_str_digest_03ae32f0c9d57431ae65bbefb36044a2;
PyObject *const_str_digest_6432020dbe5ff61ac9060edf6309d8c7;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_list_60f473887d8c78e2f768e087222cf620_list;
PyObject *const_str_plain_functools;
PyObject *const_str_digest_218a55714e76c818c59b93d99676c0b2;
PyObject *const_tuple_f103e2a8020b29363e9b0d335dda3138_tuple;
PyObject *const_str_plain_overrides;
PyObject *const_str_digest_dc70fd02c50ba4537c7ec253ddeee882;
PyObject *const_tuple_str_plain_normalize_axis_index_tuple;
PyObject *const_tuple_str_plain__pocketfft_umath_tuple;
PyObject *const_str_plain__pocketfft_umath;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_array_function_dispatch;
PyObject *const_dict_c0d9920cdb2d132dd609908b9aa6b9e2;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_d64a0bf5d55efb67463d869a07deabd0;
PyObject *const_tuple_none_none_none_none_tuple;
PyObject *const_str_plain__fft_dispatcher;
PyObject *const_tuple_none_int_neg_1_none_none_tuple;
PyObject *const_str_plain_hfft;
PyObject *const_str_plain_ihfft;
PyObject *const_tuple_none_none_int_0_tuple;
PyObject *const_str_plain__fftn_dispatcher;
PyObject *const_str_plain_fftn;
PyObject *const_str_plain_ifftn;
PyObject *const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_none_tuple;
PyObject *const_str_plain_fft2;
PyObject *const_str_plain_ifft2;
PyObject *const_str_plain_rfft2;
PyObject *const_str_plain_irfft2;
PyObject *const_str_digest_390611aedbdc262dcc5b084f756cd1ba;
PyObject *const_str_digest_960ff77c8f2bfdc8fbcc0bd17359679b;
PyObject *const_tuple_4d7c38f8ec1c1fac6d5c15204a45cb7d_tuple;
PyObject *const_tuple_9b47eb096fdc77b436fc3f1a139197ea_tuple;
PyObject *const_tuple_6a25de9e3656281ac75b5269539c8600_tuple;
PyObject *const_tuple_903565d9d972237e3ee6d180614cb136_tuple;
PyObject *const_tuple_9b54b9ece4c6a3fee6d4f1f068c10af9_tuple;
PyObject *const_tuple_str_plain_norm_tuple;
PyObject *const_tuple_ce27b5556ddfb8783df43dd430ab36af_tuple;
PyObject *const_tuple_5a4832b41ee753d63e9f5c23a9662ce0_tuple;
PyObject *const_tuple_38bcf246a3444d04a4dcac21845ea93e_tuple;
PyObject *const_tuple_6ef4de430c5c1455131797c400b65937_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[114];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.fft._pocketfft"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5c21a130d82b08ec82b2eb2488e7545);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_45b1ab6a65a89c406447e6fa661f7467);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__swap_direction);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_result_type);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_real);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_backward);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_ortho);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_reciprocal);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_forward);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_e51f58c254d11708bf8f85bff25df324);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_234f7d28d103a938c26b1ea124783466);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_pfu);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_rfft_n_even);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_rfft_n_odd);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_irfft);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_fft);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ifft);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_complex_0_0__1_0);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty_like);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shape_str_plain_dtype_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_f6a716ee01c4c212e408b87c2caa0e5f);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axes_str_plain_out_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__SWAP_DIRECTION_MAP);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_ede0293e6183d1bba4be18bf7d53167e);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__raw_fft);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_8026e7a3eaff3abe05845c16edb91ebb);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_da23b484f0414e9df63598116827b5ed);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c432ed1797fd7bc8960ab7678951745);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ef64a28a86fa6a0731cfed966dfbcf0);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_conjugate);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_norm_str_plain_out_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_90ab25f303f8abdf96da56d80ce72a00);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_rfft);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_94161835fc6cd6be865e7c22ad9c4824);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_take);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_4dacd5e526742371464e47704e04baa1);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_axes);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad30867cb50db197c788d8d9559403d4);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fde5e280ed168f3f763acbf07f188c5);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_a);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__cook_nd_args);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_function);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_norm);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_out);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_str_plain_axis_str_plain_norm_str_plain_out_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__raw_fftnd);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_4633efbfe1aae44eba2c3063bbac9e60);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b0d453a3e05b4f3bedb15ced966a0dc);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_456339c773a3b8e70b7b3dfbbd66ea51);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_dict_2b811f9b7f6bd0285cfb478e33ee30a5);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccdf9ba8cc2dc30d11f7db3ca8f73fc1);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f51957c30dbcdfde8f1256c5dcdb699);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_rfftn);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_489e2c292a638e1e7f5d35ce537a91c8);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_dict_dd45c77b755c75255009fd804f504c08);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_c298986b835dd6208cb44e88a86d216b);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_irfftn);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_03ae32f0c9d57431ae65bbefb36044a2);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_6432020dbe5ff61ac9060edf6309d8c7);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_list_60f473887d8c78e2f768e087222cf620_list);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_f103e2a8020b29363e9b0d335dda3138_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_overrides);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc70fd02c50ba4537c7ec253ddeee882);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normalize_axis_index_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__pocketfft_umath_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__pocketfft_umath);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_c0d9920cdb2d132dd609908b9aa6b9e2);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_dict_d64a0bf5d55efb67463d869a07deabd0);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__fft_dispatcher);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_none_int_neg_1_none_none_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_hfft);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_ihfft);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_int_0_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__fftn_dispatcher);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_fftn);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_ifftn);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_none_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_fft2);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_ifft2);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_rfft2);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_irfft2);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_390611aedbdc262dcc5b084f756cd1ba);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_960ff77c8f2bfdc8fbcc0bd17359679b);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_4d7c38f8ec1c1fac6d5c15204a45cb7d_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_9b47eb096fdc77b436fc3f1a139197ea_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_903565d9d972237e3ee6d180614cb136_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_9b54b9ece4c6a3fee6d4f1f068c10af9_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_norm_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_ce27b5556ddfb8783df43dd430ab36af_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_5a4832b41ee753d63e9f5c23a9662ce0_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_38bcf246a3444d04a4dcac21845ea93e_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_6ef4de430c5c1455131797c400b65937_tuple);
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
void checkModuleConstants_numpy$fft$_pocketfft(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5c21a130d82b08ec82b2eb2488e7545));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5c21a130d82b08ec82b2eb2488e7545);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_45b1ab6a65a89c406447e6fa661f7467));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45b1ab6a65a89c406447e6fa661f7467);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__swap_direction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__swap_direction);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_result_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result_type);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_real));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_real);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_backward));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backward);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_ortho));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ortho);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_reciprocal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reciprocal);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_sqrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sqrt);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_forward));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_forward);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_e51f58c254d11708bf8f85bff25df324));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e51f58c254d11708bf8f85bff25df324);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_234f7d28d103a938c26b1ea124783466));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_234f7d28d103a938c26b1ea124783466);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_pfu));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pfu);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_rfft_n_even));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rfft_n_even);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_rfft_n_odd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rfft_n_odd);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_irfft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_irfft);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_fft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fft);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ifft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ifft);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_axis_index);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_complex_0_0__1_0));
CHECK_OBJECT_DEEP(mod_consts.const_complex_0_0__1_0);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty_like);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shape_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shape_str_plain_dtype_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_f6a716ee01c4c212e408b87c2caa0e5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f6a716ee01c4c212e408b87c2caa0e5f);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axes_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axes_str_plain_out_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__SWAP_DIRECTION_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SWAP_DIRECTION_MAP);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_ede0293e6183d1bba4be18bf7d53167e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ede0293e6183d1bba4be18bf7d53167e);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__raw_fft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__raw_fft);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_8026e7a3eaff3abe05845c16edb91ebb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8026e7a3eaff3abe05845c16edb91ebb);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_da23b484f0414e9df63598116827b5ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da23b484f0414e9df63598116827b5ed);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c432ed1797fd7bc8960ab7678951745));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c432ed1797fd7bc8960ab7678951745);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ef64a28a86fa6a0731cfed966dfbcf0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ef64a28a86fa6a0731cfed966dfbcf0);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_conjugate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conjugate);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_norm_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_norm_str_plain_out_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_90ab25f303f8abdf96da56d80ce72a00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90ab25f303f8abdf96da56d80ce72a00);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_rfft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rfft);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_94161835fc6cd6be865e7c22ad9c4824));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94161835fc6cd6be865e7c22ad9c4824);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_take));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_take);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_4dacd5e526742371464e47704e04baa1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4dacd5e526742371464e47704e04baa1);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_axes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_axes);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad30867cb50db197c788d8d9559403d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad30867cb50db197c788d8d9559403d4);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fde5e280ed168f3f763acbf07f188c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fde5e280ed168f3f763acbf07f188c5);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_a));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_a);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__cook_nd_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cook_nd_args);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_function));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_norm));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_norm);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_out));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_out);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_str_plain_axis_str_plain_norm_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_n_str_plain_axis_str_plain_norm_str_plain_out_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__raw_fftnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__raw_fftnd);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_4633efbfe1aae44eba2c3063bbac9e60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4633efbfe1aae44eba2c3063bbac9e60);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b0d453a3e05b4f3bedb15ced966a0dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b0d453a3e05b4f3bedb15ced966a0dc);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_456339c773a3b8e70b7b3dfbbd66ea51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_456339c773a3b8e70b7b3dfbbd66ea51);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_dict_2b811f9b7f6bd0285cfb478e33ee30a5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2b811f9b7f6bd0285cfb478e33ee30a5);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccdf9ba8cc2dc30d11f7db3ca8f73fc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccdf9ba8cc2dc30d11f7db3ca8f73fc1);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f51957c30dbcdfde8f1256c5dcdb699));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f51957c30dbcdfde8f1256c5dcdb699);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_rfftn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rfftn);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_489e2c292a638e1e7f5d35ce537a91c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_489e2c292a638e1e7f5d35ce537a91c8);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_dict_dd45c77b755c75255009fd804f504c08));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dd45c77b755c75255009fd804f504c08);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_c298986b835dd6208cb44e88a86d216b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c298986b835dd6208cb44e88a86d216b);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_irfftn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_irfftn);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_03ae32f0c9d57431ae65bbefb36044a2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03ae32f0c9d57431ae65bbefb36044a2);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_6432020dbe5ff61ac9060edf6309d8c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6432020dbe5ff61ac9060edf6309d8c7);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_list_60f473887d8c78e2f768e087222cf620_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_60f473887d8c78e2f768e087222cf620_list);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_f103e2a8020b29363e9b0d335dda3138_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f103e2a8020b29363e9b0d335dda3138_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_overrides));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overrides);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc70fd02c50ba4537c7ec253ddeee882));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc70fd02c50ba4537c7ec253ddeee882);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normalize_axis_index_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_normalize_axis_index_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__pocketfft_umath_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__pocketfft_umath_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__pocketfft_umath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pocketfft_umath);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_dispatch);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_c0d9920cdb2d132dd609908b9aa6b9e2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c0d9920cdb2d132dd609908b9aa6b9e2);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_dict_d64a0bf5d55efb67463d869a07deabd0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d64a0bf5d55efb67463d869a07deabd0);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__fft_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fft_dispatcher);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_none_int_neg_1_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_int_neg_1_none_none_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_hfft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hfft);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_ihfft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ihfft);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_int_0_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__fftn_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fftn_dispatcher);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_fftn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fftn);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_ifftn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ifftn);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_none_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_fft2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fft2);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_ifft2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ifft2);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_rfft2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rfft2);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_irfft2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_irfft2);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_390611aedbdc262dcc5b084f756cd1ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_390611aedbdc262dcc5b084f756cd1ba);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_960ff77c8f2bfdc8fbcc0bd17359679b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_960ff77c8f2bfdc8fbcc0bd17359679b);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_4d7c38f8ec1c1fac6d5c15204a45cb7d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4d7c38f8ec1c1fac6d5c15204a45cb7d_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_9b47eb096fdc77b436fc3f1a139197ea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9b47eb096fdc77b436fc3f1a139197ea_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_903565d9d972237e3ee6d180614cb136_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_903565d9d972237e3ee6d180614cb136_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_9b54b9ece4c6a3fee6d4f1f068c10af9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9b54b9ece4c6a3fee6d4f1f068c10af9_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_norm_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_norm_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_ce27b5556ddfb8783df43dd430ab36af_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ce27b5556ddfb8783df43dd430ab36af_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_5a4832b41ee753d63e9f5c23a9662ce0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5a4832b41ee753d63e9f5c23a9662ce0_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_38bcf246a3444d04a4dcac21845ea93e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_38bcf246a3444d04a4dcac21845ea93e_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_6ef4de430c5c1455131797c400b65937_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6ef4de430c5c1455131797c400b65937_tuple);
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
static PyObject *module_var_accessor_numpy$fft$_pocketfft$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$_SWAP_DIRECTION_MAP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__SWAP_DIRECTION_MAP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SWAP_DIRECTION_MAP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SWAP_DIRECTION_MAP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SWAP_DIRECTION_MAP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SWAP_DIRECTION_MAP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__SWAP_DIRECTION_MAP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__SWAP_DIRECTION_MAP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SWAP_DIRECTION_MAP);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$_cook_nd_args(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__cook_nd_args);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cook_nd_args);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cook_nd_args, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cook_nd_args);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cook_nd_args, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__cook_nd_args);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__cook_nd_args);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__cook_nd_args);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$_fft_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__fft_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fft_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fft_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fft_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fft_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__fft_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__fft_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__fft_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$_fftn_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__fftn_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fftn_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fftn_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fftn_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fftn_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__fftn_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__fftn_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__fftn_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$_raw_fft(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fft);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__raw_fft);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__raw_fft, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__raw_fft);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__raw_fft, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fft);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fft);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fft);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$_raw_fftnd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fftnd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__raw_fftnd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__raw_fftnd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__raw_fftnd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__raw_fftnd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fftnd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fftnd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fftnd);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$_swap_direction(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__swap_direction);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__swap_direction);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__swap_direction, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__swap_direction);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__swap_direction, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__swap_direction);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__swap_direction);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__swap_direction);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$asarray(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_asarray);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asarray);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asarray, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asarray);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asarray, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_asarray);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_asarray);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asarray);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$conjugate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_conjugate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_conjugate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_conjugate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_conjugate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_conjugate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_conjugate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_conjugate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_conjugate);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$empty_like(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_empty_like);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_empty_like);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_empty_like, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_empty_like);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_empty_like, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_empty_like);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_empty_like);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_empty_like);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$fft(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_fft);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fft);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fft, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fft);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fft, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_fft);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_fft);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_fft);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$ifft(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_ifft);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ifft);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ifft, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ifft);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ifft, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_ifft);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_ifft);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ifft);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$irfft(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_irfft);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_irfft);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_irfft, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_irfft);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_irfft, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_irfft);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_irfft);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_irfft);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$irfftn(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_irfftn);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_irfftn);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_irfftn, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_irfftn);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_irfftn, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_irfftn);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_irfftn);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_irfftn);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$normalize_axis_index(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$overrides(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$pfu(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_pfu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pfu);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pfu, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pfu);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pfu, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_pfu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_pfu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pfu);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$reciprocal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_reciprocal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reciprocal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reciprocal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reciprocal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reciprocal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_reciprocal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_reciprocal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_reciprocal);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$result_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_result_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_result_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_result_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_result_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_result_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_result_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_result_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_result_type);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$rfft(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_rfft);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rfft);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rfft, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rfft);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rfft, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_rfft);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_rfft);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rfft);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$rfftn(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_rfftn);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rfftn);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rfftn, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rfftn);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rfftn, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_rfftn);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_rfftn);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rfftn);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$sqrt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_sqrt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sqrt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sqrt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sqrt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sqrt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_sqrt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_sqrt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sqrt);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$take(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_take);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_take);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_take, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_take);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_take, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_take);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_take);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_take);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$fft$_pocketfft$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$fft$_pocketfft->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$fft$_pocketfft->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$fft$_pocketfft->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_40c5252aebceed04995e801482c6b787;
static PyCodeObject *code_objects_945766204aca0520be4ae5d9d4dd4b3e;
static PyCodeObject *code_objects_d3ca538d596628c7a4ff969b6541d065;
static PyCodeObject *code_objects_56dcfff63926125e057cd0459521494f;
static PyCodeObject *code_objects_86f47818480c38c669e252fdb4b6563c;
static PyCodeObject *code_objects_959d07bce6859904dbbd18106ea671a7;
static PyCodeObject *code_objects_84452e990428d68216762b91d81c0f98;
static PyCodeObject *code_objects_0bfae45025e81c286d210979816d6ec9;
static PyCodeObject *code_objects_b3991f091c907aa831cbb14309846013;
static PyCodeObject *code_objects_c94dcdff2cc151f202d2a006ed4ad8b6;
static PyCodeObject *code_objects_9e338bdf98bea46941b691cf069accef;
static PyCodeObject *code_objects_e16ae6a8aeaba621081128be5576b445;
static PyCodeObject *code_objects_998ff4576ff3cca5c1852cc0a61c6dfb;
static PyCodeObject *code_objects_97abbc21c5eddc01ad8fa87d826e7013;
static PyCodeObject *code_objects_d1675ebee12c1b63f909aa8e4327bae6;
static PyCodeObject *code_objects_3b599720fc1b54973f587cc111d493cc;
static PyCodeObject *code_objects_b873cb3aa40e69f1c16d7ef07679eb40;
static PyCodeObject *code_objects_5846a1096736c789935f56a634f943e0;
static PyCodeObject *code_objects_16494c14e0e00893236d1b6f0a5904fb;
static PyCodeObject *code_objects_77e9be7fb31cb0dc9919da149f182f66;
static PyCodeObject *code_objects_352901416557e83bc3511d1f88b21eca;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_390611aedbdc262dcc5b084f756cd1ba); CHECK_OBJECT(module_filename_obj);
code_objects_40c5252aebceed04995e801482c6b787 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_960ff77c8f2bfdc8fbcc0bd17359679b, mod_consts.const_str_digest_960ff77c8f2bfdc8fbcc0bd17359679b, NULL, NULL, 0, 0, 0);
code_objects_945766204aca0520be4ae5d9d4dd4b3e = MAKE_CODE_OBJECT(module_filename_obj, 704, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__cook_nd_args, mod_consts.const_str_plain__cook_nd_args, mod_consts.const_tuple_4d7c38f8ec1c1fac6d5c15204a45cb7d_tuple, NULL, 4, 0, 0);
code_objects_d3ca538d596628c7a4ff969b6541d065 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fft_dispatcher, mod_consts.const_str_plain__fft_dispatcher, mod_consts.const_tuple_9b47eb096fdc77b436fc3f1a139197ea_tuple, NULL, 5, 0, 0);
code_objects_56dcfff63926125e057cd0459521494f = MAKE_CODE_OBJECT(module_filename_obj, 751, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fftn_dispatcher, mod_consts.const_str_plain__fftn_dispatcher, mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple, NULL, 5, 0, 0);
code_objects_86f47818480c38c669e252fdb4b6563c = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__raw_fft, mod_consts.const_str_plain__raw_fft, mod_consts.const_tuple_903565d9d972237e3ee6d180614cb136_tuple, NULL, 7, 0, 0);
code_objects_959d07bce6859904dbbd18106ea671a7 = MAKE_CODE_OBJECT(module_filename_obj, 741, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__raw_fftnd, mod_consts.const_str_plain__raw_fftnd, mod_consts.const_tuple_9b54b9ece4c6a3fee6d4f1f068c10af9_tuple, NULL, 6, 0, 0);
code_objects_84452e990428d68216762b91d81c0f98 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__swap_direction, mod_consts.const_str_plain__swap_direction, mod_consts.const_tuple_str_plain_norm_tuple, NULL, 1, 0, 0);
code_objects_0bfae45025e81c286d210979816d6ec9 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_fft, mod_consts.const_str_plain_fft, mod_consts.const_tuple_ce27b5556ddfb8783df43dd430ab36af_tuple, NULL, 5, 0, 0);
code_objects_b3991f091c907aa831cbb14309846013 = MAKE_CODE_OBJECT(module_filename_obj, 1020, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_fft2, mod_consts.const_str_plain_fft2, mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple, NULL, 5, 0, 0);
code_objects_c94dcdff2cc151f202d2a006ed4ad8b6 = MAKE_CODE_OBJECT(module_filename_obj, 756, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_fftn, mod_consts.const_str_plain_fftn, mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple, NULL, 5, 0, 0);
code_objects_9e338bdf98bea46941b691cf069accef = MAKE_CODE_OBJECT(module_filename_obj, 530, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hfft, mod_consts.const_str_plain_hfft, mod_consts.const_tuple_5a4832b41ee753d63e9f5c23a9662ce0_tuple, NULL, 5, 0, 0);
code_objects_e16ae6a8aeaba621081128be5576b445 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ifft, mod_consts.const_str_plain_ifft, mod_consts.const_tuple_ce27b5556ddfb8783df43dd430ab36af_tuple, NULL, 5, 0, 0);
code_objects_998ff4576ff3cca5c1852cc0a61c6dfb = MAKE_CODE_OBJECT(module_filename_obj, 1145, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ifft2, mod_consts.const_str_plain_ifft2, mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple, NULL, 5, 0, 0);
code_objects_97abbc21c5eddc01ad8fa87d826e7013 = MAKE_CODE_OBJECT(module_filename_obj, 888, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ifftn, mod_consts.const_str_plain_ifftn, mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple, NULL, 5, 0, 0);
code_objects_d1675ebee12c1b63f909aa8e4327bae6 = MAKE_CODE_OBJECT(module_filename_obj, 633, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ihfft, mod_consts.const_str_plain_ihfft, mod_consts.const_tuple_38bcf246a3444d04a4dcac21845ea93e_tuple, NULL, 5, 0, 0);
code_objects_3b599720fc1b54973f587cc111d493cc = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_irfft, mod_consts.const_str_plain_irfft, mod_consts.const_tuple_ce27b5556ddfb8783df43dd430ab36af_tuple, NULL, 5, 0, 0);
code_objects_b873cb3aa40e69f1c16d7ef07679eb40 = MAKE_CODE_OBJECT(module_filename_obj, 1613, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_irfft2, mod_consts.const_str_plain_irfft2, mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple, NULL, 5, 0, 0);
code_objects_5846a1096736c789935f56a634f943e0 = MAKE_CODE_OBJECT(module_filename_obj, 1474, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_irfftn, mod_consts.const_str_plain_irfftn, mod_consts.const_tuple_6ef4de430c5c1455131797c400b65937_tuple, NULL, 5, 0, 0);
code_objects_16494c14e0e00893236d1b6f0a5904fb = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_rfft, mod_consts.const_str_plain_rfft, mod_consts.const_tuple_ce27b5556ddfb8783df43dd430ab36af_tuple, NULL, 5, 0, 0);
code_objects_77e9be7fb31cb0dc9919da149f182f66 = MAKE_CODE_OBJECT(module_filename_obj, 1394, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_rfft2, mod_consts.const_str_plain_rfft2, mod_consts.const_tuple_6a25de9e3656281ac75b5269539c8600_tuple, NULL, 5, 0, 0);
code_objects_352901416557e83bc3511d1f88b21eca = MAKE_CODE_OBJECT(module_filename_obj, 1267, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_rfftn, mod_consts.const_str_plain_rfftn, mod_consts.const_tuple_6ef4de430c5c1455131797c400b65937_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__10__cook_nd_args(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__11__raw_fftnd(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__12__fftn_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__13_fftn(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__14_ifftn(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__15_fft2(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__16_ifft2(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__17_rfftn(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__18_rfft2(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__19_irfftn(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__1__raw_fft(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__20_irfft2(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__2__swap_direction(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__3__fft_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__4_fft(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__5_ifft(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__6_rfft(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__7_irfft(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__8_hfft(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__9_ihfft(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$fft$_pocketfft$$$function__1__raw_fft(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_is_real = python_pars[3];
PyObject *par_is_forward = python_pars[4];
PyObject *par_norm = python_pars[5];
PyObject *par_out = python_pars[6];
PyObject *var_real_dtype = NULL;
PyObject *var_fct = NULL;
PyObject *var_n_out = NULL;
PyObject *var_ufunc = NULL;
PyObject *var_out_dtype = NULL;
PyObject *var_shape = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft = MAKE_FUNCTION_FRAME(tstate, code_objects_86f47818480c38c669e252fdb4b6563c, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft = cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_n);
tmp_cmp_expr_left_1 = par_n;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_a5c21a130d82b08ec82b2eb2488e7545;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_n);
tmp_format_value_1 = par_n;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_45b1ab6a65a89c406447e6fa661f7467;
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
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 60;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 60;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_is_forward);
tmp_operand_value_1 = par_is_forward;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$_swap_direction(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__swap_direction);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_norm);
tmp_args_element_value_1 = par_norm;
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 65;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_norm;
    assert(old != NULL);
    par_norm = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$result_type(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result_type);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_real);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dtype);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = const_float_1_0;
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_real_dtype == NULL);
var_real_dtype = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_norm);
tmp_cmp_expr_left_2 = par_norm;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_norm);
tmp_cmp_expr_left_3 = par_norm;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_backward;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_pos_1;
assert(var_fct == NULL);
Py_INCREF(tmp_assign_source_3);
var_fct = tmp_assign_source_3;
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_norm);
tmp_cmp_expr_left_4 = par_norm;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_ortho;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_3 = module_var_accessor_numpy$fft$_pocketfft$reciprocal(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reciprocal);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_numpy$fft$_pocketfft$sqrt(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sqrt);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_kw_call_arg_value_0_1 = par_n;
CHECK_OBJECT(var_real_dtype);
tmp_kw_call_dict_value_0_1 = var_real_dtype;
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 71;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 71;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_fct == NULL);
var_fct = tmp_assign_source_4;
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_norm);
tmp_cmp_expr_left_5 = par_norm;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_forward;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_5 = module_var_accessor_numpy$fft$_pocketfft$reciprocal(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reciprocal);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_kw_call_arg_value_0_2 = par_n;
CHECK_OBJECT(var_real_dtype);
tmp_kw_call_dict_value_0_2 = var_real_dtype;
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 73;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_fct == NULL);
var_fct = tmp_assign_source_5;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_e51f58c254d11708bf8f85bff25df324;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_norm);
tmp_format_value_2 = par_norm;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_234f7d28d103a938c26b1ea124783466;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 75;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 75;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_5:;
branch_end_4:;
branch_end_3:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(par_n);
tmp_assign_source_6 = par_n;
assert(var_n_out == NULL);
Py_INCREF(tmp_assign_source_6);
var_n_out = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_1;
CHECK_OBJECT(par_is_real);
tmp_truth_name_1 = CHECK_IF_TRUE(par_is_real);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
CHECK_OBJECT(par_is_forward);
tmp_truth_name_2 = CHECK_IF_TRUE(par_is_forward);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_7;
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_n);
tmp_mod_expr_left_1 = par_n;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_2;
tmp_cmp_expr_left_6 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_3 = module_var_accessor_numpy$fft$_pocketfft$pfu(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pfu);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_rfft_n_even);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_4 = module_var_accessor_numpy$fft$_pocketfft$pfu(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pfu);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rfft_n_odd);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_ufunc == NULL);
var_ufunc = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
CHECK_OBJECT(par_n);
tmp_floordiv_expr_left_1 = par_n;
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_add_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = const_int_pos_1;
tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_n_out;
    assert(old != NULL);
    var_n_out = tmp_assign_source_8;
    Py_DECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_numpy$fft$_pocketfft$pfu(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pfu);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_irfft);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ufunc == NULL);
var_ufunc = tmp_assign_source_9;
}
branch_end_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_10;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_is_forward);
tmp_truth_name_3 = CHECK_IF_TRUE(par_is_forward);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_expression_value_6 = module_var_accessor_numpy$fft$_pocketfft$pfu(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pfu);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_fft);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_expression_value_7 = module_var_accessor_numpy$fft$_pocketfft$pfu(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pfu);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ifft);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
assert(var_ufunc == NULL);
var_ufunc = tmp_assign_source_10;
}
branch_end_6:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_8;
tmp_called_value_6 = module_var_accessor_numpy$fft$_pocketfft$normalize_axis_index(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_normalize_axis_index);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_5 = par_axis;
CHECK_OBJECT(par_a);
tmp_expression_value_8 = par_a;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ndim);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 88;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_axis;
    assert(old != NULL);
    par_axis = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_out);
tmp_cmp_expr_left_7 = par_out;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_4;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_is_real);
tmp_truth_name_4 = CHECK_IF_TRUE(par_is_real);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_is_forward);
tmp_operand_value_2 = par_is_forward;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_11 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_11 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(var_real_dtype);
tmp_assign_source_12 = var_real_dtype;
assert(var_out_dtype == NULL);
Py_INCREF(tmp_assign_source_12);
var_out_dtype = tmp_assign_source_12;
}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_8;
tmp_called_value_7 = module_var_accessor_numpy$fft$_pocketfft$result_type(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result_type);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_9 = par_a;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = mod_consts.const_complex_0_0__1_0;
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 94;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_out_dtype == NULL);
var_out_dtype = tmp_assign_source_13;
}
branch_end_9:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_stop_value_2;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_8 = module_var_accessor_numpy$fft$_pocketfft$empty_like(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_empty_like);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_3 = par_a;
CHECK_OBJECT(par_a);
tmp_expression_value_11 = par_a;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_shape);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_stop_value_1 = par_axis;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n_out);
tmp_tuple_element_3 = var_n_out;
tmp_add_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_add_expr_right_3, 0, tmp_tuple_element_3);
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_13 = par_a;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_shape);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 95;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_add_expr_left_4 = par_axis;
tmp_add_expr_right_4 = const_int_pos_1;
tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);
Py_DECREF(tmp_expression_value_12);

exception_lineno = 95;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 95;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_kw_call_dict_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_out_dtype);
tmp_kw_call_dict_value_1_1 = var_out_dtype;
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 95;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_shape_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_out;
    assert(old != NULL);
    par_out = tmp_assign_source_14;
    Py_DECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_12;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_out);
tmp_expression_value_14 = par_out;
tmp_name_value_1 = mod_consts.const_str_plain_shape;
tmp_default_value_1 = Py_None;
tmp_assign_source_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_16 = tmp_assignment_expr_1__value;
assert(var_shape == NULL);
Py_INCREF(tmp_assign_source_16);
var_shape = tmp_assign_source_16;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_8 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_8);
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
tmp_cmp_expr_right_8 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_shape);
tmp_len_arg_1 = var_shape;
tmp_cmp_expr_left_9 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_15 = par_a;
tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_shape);
tmp_expression_value_16 = var_shape;
CHECK_OBJECT(par_axis);
tmp_subscript_value_3 = par_axis;
tmp_cmp_expr_left_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_3);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_n_out);
tmp_cmp_expr_right_10 = var_n_out;
tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_and_right_value_2 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_12 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_12 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_f6a716ee01c4c212e408b87c2caa0e5f;
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 99;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 99;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_10:;
branch_end_8:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kw_call_dict_value_1_2;
CHECK_OBJECT(var_ufunc);
tmp_called_value_9 = var_ufunc;
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_4 = par_a;
CHECK_OBJECT(var_fct);
tmp_kw_call_arg_value_1_1 = var_fct;
CHECK_OBJECT(par_axis);
tmp_tuple_element_4 = par_axis;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
tmp_kw_call_dict_value_0_4 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_5;
PyList_SET_ITEM(tmp_kw_call_dict_value_0_4, 0, tmp_list_element_1);
tmp_list_element_1 = const_tuple_empty;
PyList_SET_ITEM0(tmp_kw_call_dict_value_0_4, 1, tmp_list_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_5 = par_axis;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
PyList_SET_ITEM(tmp_kw_call_dict_value_0_4, 2, tmp_list_element_1);
}
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_1_2 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame.f_lineno = 101;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_axes_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_4);
Py_DECREF(tmp_kw_call_dict_value_0_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft,
    type_description_1,
    par_a,
    par_n,
    par_axis,
    par_is_real,
    par_is_forward,
    par_norm,
    par_out,
    var_real_dtype,
    var_fct,
    var_n_out,
    var_ufunc,
    var_out_dtype,
    var_shape
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft == cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__1__raw_fft);

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
CHECK_OBJECT(par_norm);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
par_norm = NULL;
CHECK_OBJECT(par_out);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
par_out = NULL;
CHECK_OBJECT(var_real_dtype);
CHECK_OBJECT(var_real_dtype);
Py_DECREF(var_real_dtype);
var_real_dtype = NULL;
CHECK_OBJECT(var_fct);
CHECK_OBJECT(var_fct);
Py_DECREF(var_fct);
var_fct = NULL;
CHECK_OBJECT(var_n_out);
CHECK_OBJECT(var_n_out);
Py_DECREF(var_n_out);
var_n_out = NULL;
CHECK_OBJECT(var_ufunc);
CHECK_OBJECT(var_ufunc);
Py_DECREF(var_ufunc);
var_ufunc = NULL;
Py_XDECREF(var_out_dtype);
var_out_dtype = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_axis);
par_axis = NULL;
Py_XDECREF(par_norm);
par_norm = NULL;
Py_XDECREF(par_out);
par_out = NULL;
Py_XDECREF(var_real_dtype);
var_real_dtype = NULL;
Py_XDECREF(var_fct);
var_fct = NULL;
Py_XDECREF(var_n_out);
var_n_out = NULL;
Py_XDECREF(var_ufunc);
var_ufunc = NULL;
Py_XDECREF(var_out_dtype);
var_out_dtype = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
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
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_is_real);
Py_DECREF(par_is_real);
CHECK_OBJECT(par_is_forward);
Py_DECREF(par_is_forward);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_is_real);
Py_DECREF(par_is_real);
CHECK_OBJECT(par_is_forward);
Py_DECREF(par_is_forward);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__2__swap_direction(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_norm = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction = MAKE_FUNCTION_FRAME(tstate, code_objects_84452e990428d68216762b91d81c0f98, module_numpy$fft$_pocketfft, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction = cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$fft$_pocketfft$_SWAP_DIRECTION_MAP(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SWAP_DIRECTION_MAP);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_norm);
tmp_subscript_value_1 = par_norm;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "o";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction, exception_keeper_lineno_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_e51f58c254d11708bf8f85bff25df324;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_norm);
tmp_format_value_1 = par_norm;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ede0293e6183d1bba4be18bf7d53167e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction->m_frame.f_lineno = 112;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 113;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 109;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction->m_frame)) {
        frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction,
    type_description_1,
    par_norm
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction == cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__2__swap_direction);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__3__fft_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
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
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__4_fft(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
PyObject *var_output = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__4_fft;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft = MAKE_FUNCTION_FRAME(tstate, code_objects_0bfae45025e81c286d210979816d6ec9, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__4_fft = cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__4_fft);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__4_fft) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$asarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__4_fft->m_frame.f_lineno = 212;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooo";
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_n);
tmp_cmp_expr_left_1 = par_n;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_1 = par_axis;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_n;
    assert(old != NULL);
    par_n = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$_raw_fft(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raw_fft);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_2 = par_a;
CHECK_OBJECT(par_n);
tmp_args_element_value_3 = par_n;
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
tmp_args_element_value_5 = Py_False;
tmp_args_element_value_6 = Py_True;
CHECK_OBJECT(par_norm);
tmp_args_element_value_7 = par_norm;
CHECK_OBJECT(par_out);
tmp_args_element_value_8 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__4_fft->m_frame.f_lineno = 215;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__4_fft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__4_fft->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__4_fft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__4_fft,
    type_description_1,
    par_a,
    par_n,
    par_axis,
    par_norm,
    par_out,
    var_output
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__4_fft == cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__4_fft = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__4_fft);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_output);
tmp_return_value = var_output;
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
CHECK_OBJECT(par_n);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
par_n = NULL;
CHECK_OBJECT(var_output);
CHECK_OBJECT(var_output);
Py_DECREF(var_output);
var_output = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_n);
par_n = NULL;
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
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__5_ifft(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
PyObject *var_output = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__5_ifft;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft = MAKE_FUNCTION_FRAME(tstate, code_objects_e16ae6a8aeaba621081128be5576b445, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__5_ifft = cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__5_ifft);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__5_ifft) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$asarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__5_ifft->m_frame.f_lineno = 317;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooooo";
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_n);
tmp_cmp_expr_left_1 = par_n;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_1 = par_axis;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_n;
    assert(old != NULL);
    par_n = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_arg_value_5_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$_raw_fft(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raw_fft);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_n);
tmp_kw_call_arg_value_1_1 = par_n;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_2_1 = par_axis;
tmp_kw_call_arg_value_3_1 = Py_False;
tmp_kw_call_arg_value_4_1 = Py_False;
CHECK_OBJECT(par_norm);
tmp_kw_call_arg_value_5_1 = par_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__5_ifft->m_frame.f_lineno = 320;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS6_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__5_ifft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__5_ifft->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__5_ifft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__5_ifft,
    type_description_1,
    par_a,
    par_n,
    par_axis,
    par_norm,
    par_out,
    var_output
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__5_ifft == cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__5_ifft = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__5_ifft);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_output);
tmp_return_value = var_output;
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
CHECK_OBJECT(par_n);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
par_n = NULL;
CHECK_OBJECT(var_output);
CHECK_OBJECT(var_output);
Py_DECREF(var_output);
var_output = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_n);
par_n = NULL;
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
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__6_rfft(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
PyObject *var_output = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__6_rfft;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft = MAKE_FUNCTION_FRAME(tstate, code_objects_16494c14e0e00893236d1b6f0a5904fb, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__6_rfft = cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__6_rfft);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__6_rfft) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$asarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__6_rfft->m_frame.f_lineno = 414;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oooooo";
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_n);
tmp_cmp_expr_left_1 = par_n;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_1 = par_axis;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_n;
    assert(old != NULL);
    par_n = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_arg_value_5_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$_raw_fft(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raw_fft);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 417;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_n);
tmp_kw_call_arg_value_1_1 = par_n;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_2_1 = par_axis;
tmp_kw_call_arg_value_3_1 = Py_True;
tmp_kw_call_arg_value_4_1 = Py_True;
CHECK_OBJECT(par_norm);
tmp_kw_call_arg_value_5_1 = par_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__6_rfft->m_frame.f_lineno = 417;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS6_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__6_rfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__6_rfft->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__6_rfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__6_rfft,
    type_description_1,
    par_a,
    par_n,
    par_axis,
    par_norm,
    par_out,
    var_output
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__6_rfft == cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__6_rfft = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__6_rfft);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_output);
tmp_return_value = var_output;
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
CHECK_OBJECT(par_n);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
par_n = NULL;
CHECK_OBJECT(var_output);
CHECK_OBJECT(var_output);
Py_DECREF(var_output);
var_output = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_n);
par_n = NULL;
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
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__7_irfft(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
PyObject *var_output = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__7_irfft;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft = MAKE_FUNCTION_FRAME(tstate, code_objects_3b599720fc1b54973f587cc111d493cc, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__7_irfft = cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__7_irfft);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__7_irfft) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$asarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 522;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__7_irfft->m_frame.f_lineno = 522;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooo";
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_n);
tmp_cmp_expr_left_1 = par_n;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_1 = par_axis;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_n;
    assert(old != NULL);
    par_n = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_arg_value_5_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$_raw_fft(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raw_fft);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 525;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_n);
tmp_kw_call_arg_value_1_1 = par_n;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_2_1 = par_axis;
tmp_kw_call_arg_value_3_1 = Py_True;
tmp_kw_call_arg_value_4_1 = Py_False;
CHECK_OBJECT(par_norm);
tmp_kw_call_arg_value_5_1 = par_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__7_irfft->m_frame.f_lineno = 525;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS6_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__7_irfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__7_irfft->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__7_irfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__7_irfft,
    type_description_1,
    par_a,
    par_n,
    par_axis,
    par_norm,
    par_out,
    var_output
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__7_irfft == cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__7_irfft = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__7_irfft);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_output);
tmp_return_value = var_output;
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
CHECK_OBJECT(par_n);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
par_n = NULL;
CHECK_OBJECT(var_output);
CHECK_OBJECT(var_output);
Py_DECREF(var_output);
var_output = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_n);
par_n = NULL;
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
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__8_hfft(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
PyObject *var_new_norm = NULL;
PyObject *var_output = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__8_hfft;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft = MAKE_FUNCTION_FRAME(tstate, code_objects_9e338bdf98bea46941b691cf069accef, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__8_hfft = cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__8_hfft);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__8_hfft) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$asarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 624;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__8_hfft->m_frame.f_lineno = 624;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_n);
tmp_cmp_expr_left_1 = par_n;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_1 = par_axis;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_n;
    assert(old != NULL);
    par_n = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$_swap_direction(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__swap_direction);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 627;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_norm);
tmp_args_element_value_2 = par_norm;
frame_frame_numpy$fft$_pocketfft$$$function__8_hfft->m_frame.f_lineno = 627;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 627;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_new_norm == NULL);
var_new_norm = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_3 = module_var_accessor_numpy$fft$_pocketfft$irfft(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_irfft);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 628;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_numpy$fft$_pocketfft$conjugate(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conjugate);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 628;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_3 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__8_hfft->m_frame.f_lineno = 628;
tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_kw_call_arg_value_1_1 = par_n;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_2_1 = par_axis;
CHECK_OBJECT(var_new_norm);
tmp_kw_call_dict_value_0_1 = var_new_norm;
tmp_kw_call_dict_value_1_1 = Py_None;
frame_frame_numpy$fft$_pocketfft$$$function__8_hfft->m_frame.f_lineno = 628;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_norm_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__8_hfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__8_hfft->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__8_hfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__8_hfft,
    type_description_1,
    par_a,
    par_n,
    par_axis,
    par_norm,
    par_out,
    var_new_norm,
    var_output
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__8_hfft == cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__8_hfft = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__8_hfft);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_output);
tmp_return_value = var_output;
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
CHECK_OBJECT(par_n);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
par_n = NULL;
CHECK_OBJECT(var_new_norm);
CHECK_OBJECT(var_new_norm);
Py_DECREF(var_new_norm);
var_new_norm = NULL;
CHECK_OBJECT(var_output);
CHECK_OBJECT(var_output);
Py_DECREF(var_output);
var_output = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_n);
par_n = NULL;
Py_XDECREF(var_new_norm);
var_new_norm = NULL;
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
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__9_ihfft(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_n = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
PyObject *var_new_norm = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft = MAKE_FUNCTION_FRAME(tstate, code_objects_d1675ebee12c1b63f909aa8e4327bae6, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft = cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$asarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 696;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft->m_frame.f_lineno = 696;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 696;
type_description_1 = "oooooo";
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_n);
tmp_cmp_expr_left_1 = par_n;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 698;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_subscript_value_1 = par_axis;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 698;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_n;
    assert(old != NULL);
    par_n = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$_swap_direction(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__swap_direction);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 699;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_norm);
tmp_args_element_value_2 = par_norm;
frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft->m_frame.f_lineno = 699;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_new_norm == NULL);
var_new_norm = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_3 = module_var_accessor_numpy$fft$_pocketfft$rfft(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rfft);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 700;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_n);
tmp_kw_call_arg_value_1_1 = par_n;
CHECK_OBJECT(par_axis);
tmp_kw_call_arg_value_2_1 = par_axis;
CHECK_OBJECT(var_new_norm);
tmp_kw_call_dict_value_0_1 = var_new_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_1_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft->m_frame.f_lineno = 700;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_norm_str_plain_out_tuple);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_out;
    assert(old != NULL);
    par_out = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_4 = module_var_accessor_numpy$fft$_pocketfft$conjugate(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_conjugate);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 701;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_out);
tmp_kw_call_arg_value_0_2 = par_out;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_2 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft->m_frame.f_lineno = 701;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft,
    type_description_1,
    par_a,
    par_n,
    par_axis,
    par_norm,
    par_out,
    var_new_norm
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft == cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__9_ihfft);

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
CHECK_OBJECT(par_n);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
par_n = NULL;
CHECK_OBJECT(par_out);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
par_out = NULL;
CHECK_OBJECT(var_new_norm);
CHECK_OBJECT(var_new_norm);
Py_DECREF(var_new_norm);
var_new_norm = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
Py_XDECREF(par_n);
par_n = NULL;
Py_XDECREF(par_out);
par_out = NULL;
Py_XDECREF(var_new_norm);
var_new_norm = NULL;
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
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__10__cook_nd_args(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_invreal = python_pars[3];
nuitka_bool var_shapeless = NUITKA_BOOL_UNASSIGNED;
PyObject *outline_0_var__s = NULL;
PyObject *outline_0_var__a = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args = MAKE_FUNCTION_FRAME(tstate, code_objects_945766204aca0520be4ae5d9d4dd4b3e, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args = cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_s);
tmp_cmp_expr_left_1 = par_s;
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
nuitka_bool tmp_assign_source_1;
tmp_assign_source_1 = NUITKA_BOOL_TRUE;
var_shapeless = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_axes);
tmp_cmp_expr_left_2 = par_axes;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_list_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_shape);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$take(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_take);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 710;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axes);
tmp_args_element_value_2 = par_axes;
frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args->m_frame.f_lineno = 710;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_FALSE;
var_shapeless = tmp_assign_source_4;
}
branch_end_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_list_arg_2;
CHECK_OBJECT(par_s);
tmp_list_arg_2 = par_s;
tmp_assign_source_5 = MAKE_LIST(tstate, tmp_list_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_axes);
tmp_cmp_expr_left_3 = par_axes;
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
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
assert(var_shapeless != NUITKA_BOOL_UNASSIGNED);
tmp_operand_value_1 = (var_shapeless == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_numpy$fft$_pocketfft$warnings(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 722;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_warn);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_4dacd5e526742371464e47704e04baa1;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$fft$_pocketfft$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 722;
type_description_1 = "oooobN";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args->m_frame.f_lineno = 722;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_list_arg_3;
PyObject *tmp_xrange_low_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_len_arg_1;
PyObject *tmp_xrange_high_1;
CHECK_OBJECT(par_s);
tmp_len_arg_1 = par_s;
tmp_operand_value_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_operand_value_2 == NULL));
tmp_xrange_low_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
assert(!(tmp_xrange_low_1 == NULL));
tmp_xrange_high_1 = const_int_0;
tmp_list_arg_3 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_list_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_LIST(tstate, tmp_list_arg_3);
CHECK_OBJECT(tmp_list_arg_3);
Py_DECREF(tmp_list_arg_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_axes;
    assert(old != NULL);
    par_axes = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_2;
PyObject *tmp_len_arg_3;
CHECK_OBJECT(par_s);
tmp_len_arg_2 = par_s;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_cmp_expr_left_4 == NULL));
if (par_axes == NULL) {
Py_DECREF(tmp_cmp_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 724;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}

tmp_len_arg_3 = par_axes;
tmp_cmp_expr_right_4 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 724;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
tmp_condition_result_5 = !tmp_condition_result_5;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_ad30867cb50db197c788d8d9559403d4;
frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args->m_frame.f_lineno = 725;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 725;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooobN";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_invreal);
tmp_truth_name_1 = CHECK_IF_TRUE(par_invreal);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
assert(var_shapeless != NUITKA_BOOL_UNASSIGNED);
tmp_and_right_value_1 = var_shapeless;
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(par_a);
tmp_expression_value_5 = par_a;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_shape);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
if (par_axes == NULL) {
Py_DECREF(tmp_expression_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 727;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_axes;
tmp_subscript_value_2 = const_int_neg_1;
tmp_subscript_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, -1);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_4);

exception_lineno = 727;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_s);
tmp_ass_subscribed_1 = par_s;
tmp_ass_subscript_1 = const_int_neg_1;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = Py_None;
CHECK_OBJECT(par_s);
tmp_cmp_expr_right_5 = par_s;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_7 = module_var_accessor_numpy$fft$_pocketfft$warnings(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 735;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_warn);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_3fde5e280ed168f3f763acbf07f188c5;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_numpy$fft$_pocketfft$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 735;
type_description_1 = "oooobN";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_2254aca578e492e580f4e46a40647b9b);
frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args->m_frame.f_lineno = 735;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;
type_description_1 = "oooobN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_7:;
{
PyObject *tmp_assign_source_7;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(par_s);
tmp_args_element_value_3 = par_s;
if (par_axes == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_2;
}

tmp_args_element_value_4 = par_axes;
frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args->m_frame.f_lineno = 737;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_2;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_9;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooobN";
exception_lineno = 737;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_13;
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



exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_14 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var__s;
    outline_0_var__s = tmp_assign_source_14;
    Py_INCREF(outline_0_var__s);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_15 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var__a;
    outline_0_var__a = tmp_assign_source_15;
    Py_INCREF(outline_0_var__a);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var__s);
tmp_cmp_expr_left_6 = outline_0_var__s;
tmp_cmp_expr_right_6 = const_int_neg_1;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_3;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (par_a == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_3;
}

tmp_expression_value_9 = par_a;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_shape);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var__a);
tmp_subscript_value_3 = outline_0_var__a;
tmp_append_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(outline_0_var__s);
tmp_append_value_1 = outline_0_var__s;
Py_INCREF(tmp_append_value_1);
condexpr_end_1:;
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooobN";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_7 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_7);
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

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var__s);
outline_0_var__s = NULL;
Py_XDECREF(outline_0_var__a);
outline_0_var__a = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var__s);
outline_0_var__s = NULL;
Py_XDECREF(outline_0_var__a);
outline_0_var__a = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 737;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(par_s);
tmp_tuple_element_3 = par_s;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
if (par_axes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 738;
type_description_1 = "oooobN";
    goto tuple_build_exception_3;
}

tmp_tuple_element_3 = par_axes;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_invreal,
    (int)var_shapeless,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args == cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__10__cook_nd_args);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_s);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
par_s = NULL;
Py_XDECREF(par_axes);
par_axes = NULL;
assert(var_shapeless != NUITKA_BOOL_UNASSIGNED);
var_shapeless = NUITKA_BOOL_UNASSIGNED;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_s);
par_s = NULL;
Py_XDECREF(par_axes);
par_axes = NULL;
assert(var_shapeless != NUITKA_BOOL_UNASSIGNED);
var_shapeless = NUITKA_BOOL_UNASSIGNED;
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
CHECK_OBJECT(par_invreal);
Py_DECREF(par_invreal);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_invreal);
Py_DECREF(par_invreal);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__11__raw_fftnd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_function = python_pars[3];
PyObject *par_norm = python_pars[4];
PyObject *par_out = python_pars[5];
PyObject *var_itl = NULL;
PyObject *var_ii = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd = MAKE_FUNCTION_FRAME(tstate, code_objects_959d07bce6859904dbbd18106ea671a7, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd = cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$asarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 742;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd->m_frame.f_lineno = 742;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 742;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_1;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$_cook_nd_args(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__cook_nd_args);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 743;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_2 = par_a;
CHECK_OBJECT(par_s);
tmp_args_element_value_3 = par_s;
CHECK_OBJECT(par_axes);
tmp_args_element_value_4 = par_axes;
frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd->m_frame.f_lineno = 743;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 743;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 743;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 743;
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_5;
    Py_INCREF(par_s);
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
    PyObject *old = par_axes;
    assert(old != NULL);
    par_axes = tmp_assign_source_6;
    Py_INCREF(par_axes);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
PyObject *tmp_list_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_axes);
tmp_len_arg_1 = par_axes;
tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_list_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_itl == NULL);
var_itl = tmp_assign_source_7;
}
{
PyObject *tmp_list_arg_value_1;
CHECK_OBJECT(var_itl);
tmp_list_arg_value_1 = var_itl;
LIST_REVERSE(tmp_list_arg_value_1);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_itl);
tmp_iter_arg_2 = var_itl;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "oooooooo";
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
type_description_1 = "oooooooo";
exception_lineno = 746;
        goto try_except_handler_4;
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
    PyObject *old = var_ii;
    var_ii = tmp_assign_source_10;
    Py_INCREF(var_ii);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
if (par_function == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_function);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 747;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_called_value_3 = par_function;
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 747;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_s);
tmp_expression_value_1 = par_s;
CHECK_OBJECT(var_ii);
tmp_subscript_value_1 = var_ii;
tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_axes);
tmp_expression_value_2 = par_axes;
CHECK_OBJECT(var_ii);
tmp_subscript_value_2 = var_ii;
tmp_kw_call_dict_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 747;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
if (par_norm == NULL) {
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_norm);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 747;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_2_1 = par_norm;
if (par_out == NULL) {
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 747;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_3_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd->m_frame.f_lineno = 747;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_n_str_plain_axis_str_plain_norm_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_a;
    par_a = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
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
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 748;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_function,
    par_norm,
    par_out,
    var_itl,
    var_ii
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd == cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__11__raw_fftnd);

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
CHECK_OBJECT(par_s);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
par_s = NULL;
CHECK_OBJECT(par_axes);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
par_axes = NULL;
CHECK_OBJECT(var_itl);
CHECK_OBJECT(var_itl);
Py_DECREF(var_itl);
var_itl = NULL;
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
Py_XDECREF(par_s);
par_s = NULL;
Py_XDECREF(par_axes);
par_axes = NULL;
Py_XDECREF(var_itl);
var_itl = NULL;
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
CHECK_OBJECT(par_function);
Py_DECREF(par_function);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_function);
Py_DECREF(par_function);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__12__fftn_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
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
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__13_fftn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__13_fftn;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn = MAKE_FUNCTION_FRAME(tstate, code_objects_c94dcdff2cc151f202d2a006ed4ad8b6, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__13_fftn = cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__13_fftn);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__13_fftn) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$_raw_fftnd(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raw_fftnd);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 884;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_s);
tmp_kw_call_arg_value_1_1 = par_s;
CHECK_OBJECT(par_axes);
tmp_kw_call_arg_value_2_1 = par_axes;
tmp_kw_call_arg_value_3_1 = module_var_accessor_numpy$fft$_pocketfft$fft(tstate);
if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fft);
}

if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 884;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_norm);
tmp_kw_call_arg_value_4_1 = par_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__13_fftn->m_frame.f_lineno = 884;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 884;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__13_fftn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__13_fftn->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__13_fftn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__13_fftn,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_norm,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__13_fftn == cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__13_fftn = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__13_fftn);

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
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__14_ifftn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn = MAKE_FUNCTION_FRAME(tstate, code_objects_97abbc21c5eddc01ad8fa87d826e7013, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn = cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$_raw_fftnd(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raw_fftnd);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1016;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_s);
tmp_kw_call_arg_value_1_1 = par_s;
CHECK_OBJECT(par_axes);
tmp_kw_call_arg_value_2_1 = par_axes;
tmp_kw_call_arg_value_3_1 = module_var_accessor_numpy$fft$_pocketfft$ifft(tstate);
if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ifft);
}

if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1016;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_norm);
tmp_kw_call_arg_value_4_1 = par_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn->m_frame.f_lineno = 1016;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1016;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_norm,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn == cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__14_ifftn);

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
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__15_fft2(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__15_fft2;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2 = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2 = MAKE_FUNCTION_FRAME(tstate, code_objects_b3991f091c907aa831cbb14309846013, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__15_fft2 = cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__15_fft2);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__15_fft2) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$_raw_fftnd(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raw_fftnd);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_s);
tmp_kw_call_arg_value_1_1 = par_s;
CHECK_OBJECT(par_axes);
tmp_kw_call_arg_value_2_1 = par_axes;
tmp_kw_call_arg_value_3_1 = module_var_accessor_numpy$fft$_pocketfft$fft(tstate);
if (unlikely(tmp_kw_call_arg_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fft);
}

if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_norm);
tmp_kw_call_arg_value_4_1 = par_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__15_fft2->m_frame.f_lineno = 1141;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1141;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__15_fft2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__15_fft2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__15_fft2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__15_fft2,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_norm,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__15_fft2 == cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__15_fft2 = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__15_fft2);

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
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__16_ifft2(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2 = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2 = MAKE_FUNCTION_FRAME(tstate, code_objects_998ff4576ff3cca5c1852cc0a61c6dfb, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2 = cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$_raw_fftnd(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raw_fftnd);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1263;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_s);
tmp_tuple_element_1 = par_s;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_axes);
tmp_tuple_element_1 = par_axes;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$fft$_pocketfft$ifft(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ifft);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1263;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_norm);
tmp_tuple_element_1 = par_norm;
PyTuple_SET_ITEM0(tmp_args_value_1, 4, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_2b811f9b7f6bd0285cfb478e33ee30a5);
frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2->m_frame.f_lineno = 1263;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1263;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_norm,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2 == cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2 = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__16_ifft2);

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
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__17_rfftn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
PyObject *var_ii = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn = MAKE_FUNCTION_FRAME(tstate, code_objects_352901416557e83bc3511d1f88b21eca, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn = cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$asarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1385;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn->m_frame.f_lineno = 1385;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1385;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_1;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$_cook_nd_args(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__cook_nd_args);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1386;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_2 = par_a;
CHECK_OBJECT(par_s);
tmp_args_element_value_3 = par_s;
CHECK_OBJECT(par_axes);
tmp_args_element_value_4 = par_axes;
frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn->m_frame.f_lineno = 1386;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1386;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1386;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1386;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1386;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1386;
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_5;
    Py_INCREF(par_s);
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
    PyObject *old = par_axes;
    assert(old != NULL);
    par_axes = tmp_assign_source_6;
    Py_INCREF(par_axes);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_3 = module_var_accessor_numpy$fft$_pocketfft$rfft(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rfft);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_s);
tmp_expression_value_1 = par_s;
tmp_subscript_value_1 = const_int_neg_1;
tmp_kw_call_arg_value_1_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, -1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axes);
tmp_expression_value_2 = par_axes;
tmp_subscript_value_2 = const_int_neg_1;
tmp_kw_call_arg_value_2_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, -1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 1387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_norm);
tmp_kw_call_arg_value_3_1 = par_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn->m_frame.f_lineno = 1387;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_xrange_step_1;
CHECK_OBJECT(par_axes);
tmp_len_arg_1 = par_axes;
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1388;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = 2;
tmp_xrange_low_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_xrange_low_1 == NULL));
tmp_xrange_high_1 = const_int_neg_1;
tmp_xrange_step_1 = const_int_neg_1;
tmp_iter_arg_2 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1388;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1388;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 1388;
        goto try_except_handler_4;
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
    PyObject *old = var_ii;
    var_ii = tmp_assign_source_10;
    Py_INCREF(var_ii);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_kw_call_arg_value_3_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_4 = module_var_accessor_numpy$fft$_pocketfft$fft(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fft);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1389;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1389;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_kw_call_arg_value_0_2 = par_a;
CHECK_OBJECT(par_s);
tmp_expression_value_3 = par_s;
CHECK_OBJECT(var_ii);
tmp_subscript_value_3 = var_ii;
tmp_kw_call_arg_value_1_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1389;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_axes);
tmp_expression_value_4 = par_axes;
CHECK_OBJECT(var_ii);
tmp_subscript_value_4 = var_ii;
tmp_kw_call_arg_value_2_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_kw_call_arg_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_2);

exception_lineno = 1389;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
if (par_norm == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_norm);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1389;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_kw_call_arg_value_3_2 = par_norm;
if (par_out == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1389;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_0_2 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn->m_frame.f_lineno = 1389;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
CHECK_OBJECT(tmp_kw_call_arg_value_2_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1389;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_a;
    par_a = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1388;
type_description_1 = "oooooo";
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
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1390;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_norm,
    par_out,
    var_ii
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn == cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__17_rfftn);

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
CHECK_OBJECT(par_s);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
par_s = NULL;
CHECK_OBJECT(par_axes);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
par_axes = NULL;
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
Py_XDECREF(par_s);
par_s = NULL;
Py_XDECREF(par_axes);
par_axes = NULL;
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
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__18_rfft2(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2 = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2 = MAKE_FUNCTION_FRAME(tstate, code_objects_77e9be7fb31cb0dc9919da149f182f66, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2 = cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$rfftn(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rfftn);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1470;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_s);
tmp_kw_call_arg_value_1_1 = par_s;
CHECK_OBJECT(par_axes);
tmp_kw_call_arg_value_2_1 = par_axes;
CHECK_OBJECT(par_norm);
tmp_kw_call_arg_value_3_1 = par_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2->m_frame.f_lineno = 1470;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1470;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_norm,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2 == cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2 = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__18_rfft2);

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
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__19_irfftn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
PyObject *var_ii = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn = MAKE_FUNCTION_FRAME(tstate, code_objects_5846a1096736c789935f56a634f943e0, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn = cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$asarray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asarray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1604;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_args_element_value_1 = par_a;
frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn->m_frame.f_lineno = 1604;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1604;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_1;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = module_var_accessor_numpy$fft$_pocketfft$_cook_nd_args(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__cook_nd_args);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1605;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_s);
tmp_tuple_element_1 = par_s;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_axes);
tmp_tuple_element_1 = par_axes;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_dd45c77b755c75255009fd804f504c08);
frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn->m_frame.f_lineno = 1605;
tmp_iter_arg_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1605;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1605;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1605;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1605;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1605;
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_s;
    assert(old != NULL);
    par_s = tmp_assign_source_5;
    Py_INCREF(par_s);
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
    PyObject *old = par_axes;
    assert(old != NULL);
    par_axes = tmp_assign_source_6;
    Py_INCREF(par_axes);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_axes);
tmp_len_arg_1 = par_axes;
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1606;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = 1;
tmp_xrange_low_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_xrange_low_1 == NULL));
tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1606;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1606;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 1606;
        goto try_except_handler_4;
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
    PyObject *old = var_ii;
    var_ii = tmp_assign_source_9;
    Py_INCREF(var_ii);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_5;
tmp_called_value_3 = module_var_accessor_numpy$fft$_pocketfft$ifft(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ifft);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1607;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1607;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_2 = par_a;
CHECK_OBJECT(par_s);
tmp_expression_value_1 = par_s;
CHECK_OBJECT(var_ii);
tmp_subscript_value_1 = var_ii;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1607;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_axes);
tmp_expression_value_2 = par_axes;
CHECK_OBJECT(var_ii);
tmp_subscript_value_2 = var_ii;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 1607;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
if (par_norm == NULL) {
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_norm);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1607;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_5 = par_norm;
frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn->m_frame.f_lineno = 1607;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1607;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_a;
    par_a = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1606;
type_description_1 = "oooooo";
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
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_4 = module_var_accessor_numpy$fft$_pocketfft$irfft(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_irfft);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1608;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1608;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = par_a;
CHECK_OBJECT(par_s);
tmp_expression_value_3 = par_s;
tmp_subscript_value_3 = const_int_neg_1;
tmp_kw_call_arg_value_1_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, -1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1608;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axes);
tmp_expression_value_4 = par_axes;
tmp_subscript_value_4 = const_int_neg_1;
tmp_kw_call_arg_value_2_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, -1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 1608;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (par_norm == NULL) {
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_norm);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1608;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_3_1 = par_norm;
CHECK_OBJECT(par_out);
tmp_kw_call_dict_value_0_1 = par_out;
frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn->m_frame.f_lineno = 1608;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1608;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    par_a = tmp_assign_source_11;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_norm,
    par_out,
    var_ii
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn == cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__19_irfftn);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_a);
tmp_return_value = par_a;
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
CHECK_OBJECT(par_s);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
par_s = NULL;
CHECK_OBJECT(par_axes);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
par_axes = NULL;
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
Py_XDECREF(par_s);
par_s = NULL;
Py_XDECREF(par_axes);
par_axes = NULL;
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
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$_pocketfft$$$function__20_irfft2(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *par_axes = python_pars[2];
PyObject *par_norm = python_pars[3];
PyObject *par_out = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2 = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2)) {
    Py_XDECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2 = MAKE_FUNCTION_FRAME(tstate, code_objects_b873cb3aa40e69f1c16d7ef07679eb40, module_numpy$fft$_pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2->m_type_description == NULL);
frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2 = cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_numpy$fft$_pocketfft$irfftn(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_irfftn);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1693;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_a);
tmp_tuple_element_1 = par_a;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_s);
tmp_tuple_element_1 = par_s;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_axes);
tmp_tuple_element_1 = par_axes;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_norm);
tmp_tuple_element_1 = par_norm;
PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_2b811f9b7f6bd0285cfb478e33ee30a5);
frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2->m_frame.f_lineno = 1693;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1693;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2,
    type_description_1,
    par_a,
    par_s,
    par_axes,
    par_norm,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2 == cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2);
    cache_frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2 = NULL;
}

assertFrameObject(frame_frame_numpy$fft$_pocketfft$$$function__20_irfft2);

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
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_a);
Py_DECREF(par_a);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_axes);
Py_DECREF(par_axes);
CHECK_OBJECT(par_norm);
Py_DECREF(par_norm);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__10__cook_nd_args(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__10__cook_nd_args,
        mod_consts.const_str_plain__cook_nd_args,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_945766204aca0520be4ae5d9d4dd4b3e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__11__raw_fftnd(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__11__raw_fftnd,
        mod_consts.const_str_plain__raw_fftnd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_959d07bce6859904dbbd18106ea671a7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__12__fftn_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__12__fftn_dispatcher,
        mod_consts.const_str_plain__fftn_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_56dcfff63926125e057cd0459521494f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__13_fftn(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__13_fftn,
        mod_consts.const_str_plain_fftn,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c94dcdff2cc151f202d2a006ed4ad8b6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_4633efbfe1aae44eba2c3063bbac9e60,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__14_ifftn(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__14_ifftn,
        mod_consts.const_str_plain_ifftn,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_97abbc21c5eddc01ad8fa87d826e7013,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_6b0d453a3e05b4f3bedb15ced966a0dc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__15_fft2(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__15_fft2,
        mod_consts.const_str_plain_fft2,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b3991f091c907aa831cbb14309846013,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_456339c773a3b8e70b7b3dfbbd66ea51,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__16_ifft2(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__16_ifft2,
        mod_consts.const_str_plain_ifft2,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_998ff4576ff3cca5c1852cc0a61c6dfb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_ccdf9ba8cc2dc30d11f7db3ca8f73fc1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__17_rfftn(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__17_rfftn,
        mod_consts.const_str_plain_rfftn,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_352901416557e83bc3511d1f88b21eca,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_5f51957c30dbcdfde8f1256c5dcdb699,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__18_rfft2(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__18_rfft2,
        mod_consts.const_str_plain_rfft2,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_77e9be7fb31cb0dc9919da149f182f66,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_489e2c292a638e1e7f5d35ce537a91c8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__19_irfftn(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__19_irfftn,
        mod_consts.const_str_plain_irfftn,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5846a1096736c789935f56a634f943e0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_c298986b835dd6208cb44e88a86d216b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__1__raw_fft(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__1__raw_fft,
        mod_consts.const_str_plain__raw_fft,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_86f47818480c38c669e252fdb4b6563c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__20_irfft2(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__20_irfft2,
        mod_consts.const_str_plain_irfft2,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b873cb3aa40e69f1c16d7ef07679eb40,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_03ae32f0c9d57431ae65bbefb36044a2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__2__swap_direction(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__2__swap_direction,
        mod_consts.const_str_plain__swap_direction,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_84452e990428d68216762b91d81c0f98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__3__fft_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__3__fft_dispatcher,
        mod_consts.const_str_plain__fft_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d3ca538d596628c7a4ff969b6541d065,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__4_fft(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__4_fft,
        mod_consts.const_str_plain_fft,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0bfae45025e81c286d210979816d6ec9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_8026e7a3eaff3abe05845c16edb91ebb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__5_ifft(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__5_ifft,
        mod_consts.const_str_plain_ifft,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e16ae6a8aeaba621081128be5576b445,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_da23b484f0414e9df63598116827b5ed,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__6_rfft(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__6_rfft,
        mod_consts.const_str_plain_rfft,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_16494c14e0e00893236d1b6f0a5904fb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_6c432ed1797fd7bc8960ab7678951745,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__7_irfft(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__7_irfft,
        mod_consts.const_str_plain_irfft,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3b599720fc1b54973f587cc111d493cc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_4ef64a28a86fa6a0731cfed966dfbcf0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__8_hfft(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__8_hfft,
        mod_consts.const_str_plain_hfft,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9e338bdf98bea46941b691cf069accef,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_90ab25f303f8abdf96da56d80ce72a00,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__9_ihfft(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$_pocketfft$$$function__9_ihfft,
        mod_consts.const_str_plain_ihfft,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d1675ebee12c1b63f909aa8e4327bae6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$fft$_pocketfft,
        mod_consts.const_str_digest_94161835fc6cd6be865e7c22ad9c4824,
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

static function_impl_code const function_table_numpy$fft$_pocketfft[] = {
impl_numpy$fft$_pocketfft$$$function__1__raw_fft,
impl_numpy$fft$_pocketfft$$$function__2__swap_direction,
impl_numpy$fft$_pocketfft$$$function__3__fft_dispatcher,
impl_numpy$fft$_pocketfft$$$function__4_fft,
impl_numpy$fft$_pocketfft$$$function__5_ifft,
impl_numpy$fft$_pocketfft$$$function__6_rfft,
impl_numpy$fft$_pocketfft$$$function__7_irfft,
impl_numpy$fft$_pocketfft$$$function__8_hfft,
impl_numpy$fft$_pocketfft$$$function__9_ihfft,
impl_numpy$fft$_pocketfft$$$function__10__cook_nd_args,
impl_numpy$fft$_pocketfft$$$function__11__raw_fftnd,
impl_numpy$fft$_pocketfft$$$function__12__fftn_dispatcher,
impl_numpy$fft$_pocketfft$$$function__13_fftn,
impl_numpy$fft$_pocketfft$$$function__14_ifftn,
impl_numpy$fft$_pocketfft$$$function__15_fft2,
impl_numpy$fft$_pocketfft$$$function__16_ifft2,
impl_numpy$fft$_pocketfft$$$function__17_rfftn,
impl_numpy$fft$_pocketfft$$$function__18_rfft2,
impl_numpy$fft$_pocketfft$$$function__19_irfftn,
impl_numpy$fft$_pocketfft$$$function__20_irfft2,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$fft$_pocketfft);
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
        module_numpy$fft$_pocketfft,
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
        function_table_numpy$fft$_pocketfft,
        sizeof(function_table_numpy$fft$_pocketfft) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.fft._pocketfft";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$fft$_pocketfft(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$fft$_pocketfft");

    // Store the module for future use.
    module_numpy$fft$_pocketfft = module;

    moduledict_numpy$fft$_pocketfft = MODULE_DICT(module_numpy$fft$_pocketfft);

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
        PRINT_STRING("numpy$fft$_pocketfft: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$fft$_pocketfft: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$fft$_pocketfft: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.fft._pocketfft" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$fft$_pocketfft\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$fft$_pocketfft,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$fft$_pocketfft,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$fft$_pocketfft,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$_pocketfft,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$_pocketfft,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$fft$_pocketfft);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$fft$_pocketfft);
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

        UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$fft$_pocketfft;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_6432020dbe5ff61ac9060edf6309d8c7;
UPDATE_STRING_DICT0(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$fft$_pocketfft = MAKE_MODULE_FRAME(code_objects_40c5252aebceed04995e801482c6b787, module_numpy$fft$_pocketfft);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$fft$_pocketfft);
assert(Py_REFCNT(frame_frame_numpy$fft$_pocketfft) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$fft$_pocketfft$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$fft$_pocketfft$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = LIST_COPY(tstate, mod_consts.const_list_60f473887d8c78e2f768e087222cf620_list);
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$fft$_pocketfft;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 34;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$fft$_pocketfft;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_f103e2a8020b29363e9b0d335dda3138_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 36;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain_asarray,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_asarray);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_asarray, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain_conjugate,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_conjugate);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_conjugate, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain_empty_like,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_empty_like);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_empty_like, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain_overrides,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_overrides);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_overrides, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain_reciprocal,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_reciprocal);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_reciprocal, tmp_assign_source_12);
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
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain_result_type,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_result_type);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_result_type, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain_sqrt,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_sqrt);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_sqrt, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain_take,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_take);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_take, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_dc70fd02c50ba4537c7ec253ddeee882;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$fft$_pocketfft;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_normalize_axis_index_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 46;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain_normalize_axis_index,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_normalize_axis_index);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_index, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$fft$_pocketfft;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__pocketfft_umath_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 48;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_numpy$fft$_pocketfft,
        mod_consts.const_str_plain__pocketfft_umath,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain__pocketfft_umath);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_pfu, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
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
tmp_expression_value_1 = module_var_accessor_numpy$fft$_pocketfft$overrides(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overrides);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array_function_dispatch);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_c0d9920cdb2d132dd609908b9aa6b9e2);
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 50;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_19 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__1__raw_fft(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fft, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = DICT_COPY(tstate, mod_consts.const_dict_d64a0bf5d55efb67463d869a07deabd0);
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__SWAP_DIRECTION_MAP, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__2__swap_direction(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__swap_direction, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_22 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__3__fft_dispatcher(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__fft_dispatcher, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_defaults_3;
tmp_called_value_3 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
assert(!(tmp_called_value_3 == NULL));
tmp_args_element_value_1 = module_var_accessor_numpy$fft$_pocketfft$_fft_dispatcher(tstate);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 120;
tmp_called_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_defaults_3 = mod_consts.const_tuple_none_int_neg_1_none_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_args_element_value_2 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__4_fft(tstate, tmp_defaults_3);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 120;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_fft, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_defaults_4;
tmp_called_value_5 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_numpy$fft$_pocketfft$_fft_dispatcher(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fft_dispatcher);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 219;
tmp_called_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = mod_consts.const_tuple_none_int_neg_1_none_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_args_element_value_4 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__5_ifft(tstate, tmp_defaults_4);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 219;
tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_ifft, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_defaults_5;
tmp_called_value_7 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_numpy$fft$_pocketfft$_fft_dispatcher(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fft_dispatcher);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 324;
tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto frame_exception_exit_1;
}
tmp_defaults_5 = mod_consts.const_tuple_none_int_neg_1_none_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_args_element_value_6 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__6_rfft(tstate, tmp_defaults_5);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 324;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_rfft, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_defaults_6;
tmp_called_value_9 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_numpy$fft$_pocketfft$_fft_dispatcher(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fft_dispatcher);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 421;
tmp_called_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;

    goto frame_exception_exit_1;
}
tmp_defaults_6 = mod_consts.const_tuple_none_int_neg_1_none_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_args_element_value_8 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__7_irfft(tstate, tmp_defaults_6);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 421;
tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_irfft, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_defaults_7;
tmp_called_value_11 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 529;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_numpy$fft$_pocketfft$_fft_dispatcher(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fft_dispatcher);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 529;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 529;
tmp_called_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_9);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;

    goto frame_exception_exit_1;
}
tmp_defaults_7 = mod_consts.const_tuple_none_int_neg_1_none_none_tuple;
Py_INCREF(tmp_defaults_7);

tmp_args_element_value_10 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__8_hfft(tstate, tmp_defaults_7);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 529;
tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_hfft, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_defaults_8;
tmp_called_value_13 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 632;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = module_var_accessor_numpy$fft$_pocketfft$_fft_dispatcher(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fft_dispatcher);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 632;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 632;
tmp_called_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;

    goto frame_exception_exit_1;
}
tmp_defaults_8 = mod_consts.const_tuple_none_int_neg_1_none_none_tuple;
Py_INCREF(tmp_defaults_8);

tmp_args_element_value_12 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__9_ihfft(tstate, tmp_defaults_8);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 632;
tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_ihfft, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_defaults_9;
tmp_defaults_9 = mod_consts.const_tuple_none_none_int_0_tuple;
Py_INCREF(tmp_defaults_9);

tmp_assign_source_29 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__10__cook_nd_args(tstate, tmp_defaults_9);

UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__cook_nd_args, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_defaults_10;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = Py_None;
tmp_defaults_10 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_defaults_10, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_10, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_numpy$fft$_pocketfft$fft(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fft);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 741;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_defaults_10, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_10, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_10, 4, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_defaults_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

tmp_assign_source_30 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__11__raw_fftnd(tstate, tmp_defaults_10);

UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__raw_fftnd, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_defaults_11;
tmp_defaults_11 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_11);

tmp_assign_source_31 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__12__fftn_dispatcher(tstate, tmp_defaults_11);

UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain__fftn_dispatcher, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_14;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_defaults_12;
tmp_called_value_15 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 755;

    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = module_var_accessor_numpy$fft$_pocketfft$_fftn_dispatcher(tstate);
assert(!(tmp_args_element_value_13 == NULL));
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 755;
tmp_called_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_13);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;

    goto frame_exception_exit_1;
}
tmp_defaults_12 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_12);

tmp_args_element_value_14 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__13_fftn(tstate, tmp_defaults_12);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 755;
tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_fftn, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_16;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_defaults_13;
tmp_called_value_17 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 887;

    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = module_var_accessor_numpy$fft$_pocketfft$_fftn_dispatcher(tstate);
if (unlikely(tmp_args_element_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fftn_dispatcher);
}

if (tmp_args_element_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 887;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 887;
tmp_called_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_15);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 887;

    goto frame_exception_exit_1;
}
tmp_defaults_13 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_13);

tmp_args_element_value_16 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__14_ifftn(tstate, tmp_defaults_13);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 887;
tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 887;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_ifftn, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_18;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_defaults_14;
tmp_called_value_19 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1019;

    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = module_var_accessor_numpy$fft$_pocketfft$_fftn_dispatcher(tstate);
if (unlikely(tmp_args_element_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fftn_dispatcher);
}

if (tmp_args_element_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1019;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1019;
tmp_called_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_17);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1019;

    goto frame_exception_exit_1;
}
tmp_defaults_14 = mod_consts.const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_14);

tmp_args_element_value_18 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__15_fft2(tstate, tmp_defaults_14);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1019;
tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1019;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_fft2, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_20;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_defaults_15;
tmp_called_value_21 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1144;

    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = module_var_accessor_numpy$fft$_pocketfft$_fftn_dispatcher(tstate);
if (unlikely(tmp_args_element_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fftn_dispatcher);
}

if (tmp_args_element_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1144;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1144;
tmp_called_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_19);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1144;

    goto frame_exception_exit_1;
}
tmp_defaults_15 = mod_consts.const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_15);

tmp_args_element_value_20 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__16_ifft2(tstate, tmp_defaults_15);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1144;
tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1144;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_ifft2, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_22;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_defaults_16;
tmp_called_value_23 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1266;

    goto frame_exception_exit_1;
}
tmp_args_element_value_21 = module_var_accessor_numpy$fft$_pocketfft$_fftn_dispatcher(tstate);
if (unlikely(tmp_args_element_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fftn_dispatcher);
}

if (tmp_args_element_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1266;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1266;
tmp_called_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_21);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1266;

    goto frame_exception_exit_1;
}
tmp_defaults_16 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_16);

tmp_args_element_value_22 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__17_rfftn(tstate, tmp_defaults_16);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1266;
tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1266;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_rfftn, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_24;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_defaults_17;
tmp_called_value_25 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1393;

    goto frame_exception_exit_1;
}
tmp_args_element_value_23 = module_var_accessor_numpy$fft$_pocketfft$_fftn_dispatcher(tstate);
if (unlikely(tmp_args_element_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fftn_dispatcher);
}

if (tmp_args_element_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1393;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1393;
tmp_called_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_23);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1393;

    goto frame_exception_exit_1;
}
tmp_defaults_17 = mod_consts.const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_17);

tmp_args_element_value_24 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__18_rfft2(tstate, tmp_defaults_17);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1393;
tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1393;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_rfft2, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_26;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_defaults_18;
tmp_called_value_27 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1473;

    goto frame_exception_exit_1;
}
tmp_args_element_value_25 = module_var_accessor_numpy$fft$_pocketfft$_fftn_dispatcher(tstate);
if (unlikely(tmp_args_element_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fftn_dispatcher);
}

if (tmp_args_element_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1473;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1473;
tmp_called_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_25);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1473;

    goto frame_exception_exit_1;
}
tmp_defaults_18 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_18);

tmp_args_element_value_26 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__19_irfftn(tstate, tmp_defaults_18);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1473;
tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1473;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_irfftn, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_28;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_defaults_19;
tmp_called_value_29 = module_var_accessor_numpy$fft$_pocketfft$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1612;

    goto frame_exception_exit_1;
}
tmp_args_element_value_27 = module_var_accessor_numpy$fft$_pocketfft$_fftn_dispatcher(tstate);
if (unlikely(tmp_args_element_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fftn_dispatcher);
}

if (tmp_args_element_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1612;

    goto frame_exception_exit_1;
}
frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1612;
tmp_called_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_27);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1612;

    goto frame_exception_exit_1;
}
tmp_defaults_19 = mod_consts.const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_19);

tmp_args_element_value_28 = MAKE_FUNCTION_numpy$fft$_pocketfft$$$function__20_irfft2(tstate, tmp_defaults_19);

frame_frame_numpy$fft$_pocketfft->m_frame.f_lineno = 1612;
tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1612;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)mod_consts.const_str_plain_irfft2, tmp_assign_source_39);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$fft$_pocketfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$fft$_pocketfft->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$fft$_pocketfft, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$fft$_pocketfft);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$fft$_pocketfft", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.fft._pocketfft" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$fft$_pocketfft);
    return module_numpy$fft$_pocketfft;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$fft$_pocketfft, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$fft$_pocketfft", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

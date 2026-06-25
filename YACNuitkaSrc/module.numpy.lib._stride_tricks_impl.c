/* Generated code for Python module 'numpy$lib$_stride_tricks_impl'
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



/* The "module_numpy$lib$_stride_tricks_impl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$_stride_tricks_impl;
PyDictObject *moduledict_numpy$lib$_stride_tricks_impl;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain___array_interface__;
PyObject *const_str_plain_base;
PyObject *const_str_plain_view;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_str_plain___array_finalize__;
PyObject *const_str_plain_new_array;
PyObject *const_str_plain_np;
PyObject *const_str_plain_array;
PyObject *const_tuple_str_plain_copy_str_plain_subok_tuple;
PyObject *const_str_plain_shape;
PyObject *const_str_plain_strides;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain_DummyArray;
PyObject *const_tuple_str_plain_base_tuple;
PyObject *const_str_plain_dtype;
PyObject *const_str_plain__maybe_view_as_subclass;
PyObject *const_str_plain_flags;
PyObject *const_str_plain_writeable;
PyObject *const_str_digest_5b21b845bf796b2697bf8c1ba910579a;
PyObject *const_str_plain_iterable;
PyObject *const_str_plain_any;
PyObject *const_str_digest_e91d31eb0fb43141e970402d8abc88fe;
PyObject *const_str_plain_ndim;
PyObject *const_str_digest_562afd3d038095cabebbe3c3a120a08a;
PyObject *const_str_digest_a53fce526b26dfe6475ba2cc6a1d4aec;
PyObject *const_str_plain_normalize_axis_tuple;
PyObject *const_dict_4ed5e00ae539e1c82d7fdf704f753bed;
PyObject *const_str_digest_1924e3a9733e9691a979b1e0ebfae0ba;
PyObject *const_str_digest_36f9a92bf16cb0a64306e57669c2c4af;
PyObject *const_str_digest_c3b65c57dbbf780fb75fa07f5e22af4b;
PyObject *const_str_plain_axis;
PyObject *const_str_plain_x_shape_trimmed;
PyObject *const_str_digest_c7084422dc0e550221c67db0bd517a3b;
PyObject *const_str_plain_as_strided;
PyObject *const_tuple_9afa96e69e0f9a84959b69be5c700275_tuple;
PyObject *const_str_digest_e68e39667ea68aeb1099f091d4ef31d2;
PyObject *const_str_plain_x;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_97ee61af940405699ac809a2d6ac61e5;
PyObject *const_str_digest_6611c0481a0af4e0330fa8e68492033d;
PyObject *const_str_digest_121f95687315cf5abe650b7ae41826a7;
PyObject *const_str_plain_nditer;
PyObject *const_str_plain_multi_index;
PyObject *const_str_plain_refs_ok;
PyObject *const_str_plain_zerosize_ok;
PyObject *const_str_plain_readonly;
PyObject *const_str_plain_C;
PyObject *const_tuple_e0ec15151d4e5f00ef44a5bd43fe8f18_tuple;
PyObject *const_str_plain_itviews;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_broadcast;
PyObject *const_str_plain__writeable_no_warn;
PyObject *const_str_plain__warn_on_write;
PyObject *const_str_digest_bb7328d70a65f83457669765d9f17085;
PyObject *const_str_plain__broadcast_to;
PyObject *const_tuple_str_plain_subok_str_plain_readonly_tuple;
PyObject *const_str_digest_b53b713d6c897c1c4f4ba168cb60fe87;
PyObject *const_slice_none_int_pos_64_none;
PyObject *const_int_pos_64;
PyObject *const_int_pos_63;
PyObject *const_str_plain_broadcast_to;
PyObject *const_str_digest_f5e35463be304b87de7c065b8e09256c;
PyObject *const_str_plain_empty;
PyObject *const_str_plain__size0_dtype;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain__broadcast_shape;
PyObject *const_str_digest_3d375f731652273c7221469efa15f260;
PyObject *const_str_plain_subok;
PyObject *const_str_digest_bf5b11dd6e444fd4b5662bf819374842;
PyObject *const_str_digest_68144c7ea138db9552d47aba70edc580;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_b7a345dfe4be14248864e7854d4e6836;
PyObject *const_tuple_str_plain_normalize_axis_tuple_tuple;
PyObject *const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d;
PyObject *const_tuple_str_plain_array_function_dispatch_str_plain_set_module_tuple;
PyObject *const_str_plain_array_function_dispatch;
PyObject *const_str_plain_set_module;
PyObject *const_str_plain_broadcast_arrays;
PyObject *const_str_plain_broadcast_shapes;
PyObject *const_str_digest_eacd5d01cae0462745b73491d2538366;
PyObject *const_str_digest_dca5f83d14798979213ab0b9313d0c92;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_14;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_a960b47d01b79f473c5c727ff3cd9b68;
PyObject *const_tuple_str_plain___array_interface___str_plain_base_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_tuple_str_digest_9fcf64fa6d087ae015ed561b4aa4b510_tuple;
PyObject *const_tuple_none_none_false_true_tuple;
PyObject *const_dict_99ad7371c9d3c2d5d4ac63de0d98ae96;
PyObject *const_str_plain__sliding_window_view_dispatcher;
PyObject *const_dict_2afbee06e7dfa159855cb298acc943d7;
PyObject *const_dict_1ba505646d7f7ed8241038b8553c4371;
PyObject *const_str_plain_sliding_window_view;
PyObject *const_str_plain__broadcast_to_dispatcher;
PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_str_plain_numpy_tuple;
PyObject *const_dict_dd9454724a7f0cff7f396473f8ec0e57;
PyObject *const_str_plain__broadcast_arrays_dispatcher;
PyObject *const_dict_5dcffd4e4a7ab0d9a7f1c009c2da7e89;
PyObject *const_str_digest_37559c7bf6e3d86d978aca08a6e91e63;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_size_tuple;
PyObject *const_tuple_c75aa7cf02a291826f7dfc4c7d9b9a57_tuple;
PyObject *const_str_digest_833700df1d4bae1828560680968d3fa0;
PyObject *const_tuple_str_plain_self_str_plain_interface_str_plain_base_tuple;
PyObject *const_tuple_str_plain_subok_str_plain_args_tuple;
PyObject *const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple;
PyObject *const_tuple_c5979c193d65cbf4a6d6be672e58ac93_tuple;
PyObject *const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple;
PyObject *const_tuple_str_plain_original_array_str_plain_new_array_tuple;
PyObject *const_tuple_8f9c2684574ca613ac5b73c24c30e8bc_tuple;
PyObject *const_tuple_567a3e0eca4fd819de860ce59daf889d_tuple;
PyObject *const_tuple_e0662af738310c912e45f4a117ac18e6_tuple;
PyObject *const_tuple_str_plain_args_str_plain_arrays_tuple;
PyObject *const_tuple_dece590613413ad0f8ef279b287a518a_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[119];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.lib._stride_tricks_impl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain___array_interface__);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_base);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_view);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain___array_finalize__);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_array);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_copy_str_plain_subok_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_strides);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_DummyArray);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_base_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__maybe_view_as_subclass);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_flags);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_writeable);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b21b845bf796b2697bf8c1ba910579a);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterable);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_any);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_e91d31eb0fb43141e970402d8abc88fe);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_562afd3d038095cabebbe3c3a120a08a);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_a53fce526b26dfe6475ba2cc6a1d4aec);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_dict_4ed5e00ae539e1c82d7fdf704f753bed);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_1924e3a9733e9691a979b1e0ebfae0ba);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_36f9a92bf16cb0a64306e57669c2c4af);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3b65c57dbbf780fb75fa07f5e22af4b);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_axis);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_x_shape_trimmed);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7084422dc0e550221c67db0bd517a3b);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_as_strided);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_9afa96e69e0f9a84959b69be5c700275_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_e68e39667ea68aeb1099f091d4ef31d2);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_97ee61af940405699ac809a2d6ac61e5);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_6611c0481a0af4e0330fa8e68492033d);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_121f95687315cf5abe650b7ae41826a7);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_nditer);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_multi_index);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_refs_ok);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_zerosize_ok);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_readonly);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_C);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_e0ec15151d4e5f00ef44a5bd43fe8f18_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_itviews);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__writeable_no_warn);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__warn_on_write);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb7328d70a65f83457669765d9f17085);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__broadcast_to);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subok_str_plain_readonly_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_b53b713d6c897c1c4f4ba168cb60fe87);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_64_none);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_int_pos_63);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_to);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5e35463be304b87de7c065b8e09256c);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__size0_dtype);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__broadcast_shape);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d375f731652273c7221469efa15f260);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_subok);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf5b11dd6e444fd4b5662bf819374842);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_68144c7ea138db9552d47aba70edc580);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normalize_axis_tuple_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_function_dispatch_str_plain_set_module_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_module);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_arrays);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_shapes);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_eacd5d01cae0462745b73491d2538366);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_dca5f83d14798979213ab0b9313d0c92);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_a960b47d01b79f473c5c727ff3cd9b68);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___array_interface___str_plain_base_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9fcf64fa6d087ae015ed561b4aa4b510_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_true_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_99ad7371c9d3c2d5d4ac63de0d98ae96);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__sliding_window_view_dispatcher);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_dict_2afbee06e7dfa159855cb298acc943d7);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_1ba505646d7f7ed8241038b8553c4371);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_sliding_window_view);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__broadcast_to_dispatcher);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_dict_dd9454724a7f0cff7f396473f8ec0e57);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain__broadcast_arrays_dispatcher);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_5dcffd4e4a7ab0d9a7f1c009c2da7e89);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_37559c7bf6e3d86d978aca08a6e91e63);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_size_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_c75aa7cf02a291826f7dfc4c7d9b9a57_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_833700df1d4bae1828560680968d3fa0);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_interface_str_plain_base_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subok_str_plain_args_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_c5979c193d65cbf4a6d6be672e58ac93_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_original_array_str_plain_new_array_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_8f9c2684574ca613ac5b73c24c30e8bc_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_567a3e0eca4fd819de860ce59daf889d_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_e0662af738310c912e45f4a117ac18e6_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_arrays_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_dece590613413ad0f8ef279b287a518a_tuple);
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
void checkModuleConstants_numpy$lib$_stride_tricks_impl(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain___array_interface__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___array_interface__);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_view));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_view);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain___array_finalize__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___array_finalize__);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_array);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_copy_str_plain_subok_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_copy_str_plain_subok_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_strides));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strides);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_DummyArray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DummyArray);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_base_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_base_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__maybe_view_as_subclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__maybe_view_as_subclass);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_flags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flags);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_writeable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_writeable);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b21b845bf796b2697bf8c1ba910579a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b21b845bf796b2697bf8c1ba910579a);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iterable);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_any);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_e91d31eb0fb43141e970402d8abc88fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e91d31eb0fb43141e970402d8abc88fe);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_562afd3d038095cabebbe3c3a120a08a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_562afd3d038095cabebbe3c3a120a08a);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_a53fce526b26dfe6475ba2cc6a1d4aec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a53fce526b26dfe6475ba2cc6a1d4aec);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize_axis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize_axis_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_dict_4ed5e00ae539e1c82d7fdf704f753bed));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ed5e00ae539e1c82d7fdf704f753bed);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_1924e3a9733e9691a979b1e0ebfae0ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1924e3a9733e9691a979b1e0ebfae0ba);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_36f9a92bf16cb0a64306e57669c2c4af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36f9a92bf16cb0a64306e57669c2c4af);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3b65c57dbbf780fb75fa07f5e22af4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3b65c57dbbf780fb75fa07f5e22af4b);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_axis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_axis);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_x_shape_trimmed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x_shape_trimmed);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7084422dc0e550221c67db0bd517a3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7084422dc0e550221c67db0bd517a3b);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_as_strided));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_as_strided);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_9afa96e69e0f9a84959b69be5c700275_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9afa96e69e0f9a84959b69be5c700275_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_e68e39667ea68aeb1099f091d4ef31d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e68e39667ea68aeb1099f091d4ef31d2);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_97ee61af940405699ac809a2d6ac61e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97ee61af940405699ac809a2d6ac61e5);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_6611c0481a0af4e0330fa8e68492033d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6611c0481a0af4e0330fa8e68492033d);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_121f95687315cf5abe650b7ae41826a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_121f95687315cf5abe650b7ae41826a7);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_nditer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nditer);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_multi_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multi_index);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_refs_ok));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refs_ok);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_zerosize_ok));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zerosize_ok);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_readonly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readonly);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_C));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_C);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_e0ec15151d4e5f00ef44a5bd43fe8f18_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e0ec15151d4e5f00ef44a5bd43fe8f18_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_itviews));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itviews);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_broadcast);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__writeable_no_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__writeable_no_warn);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__warn_on_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__warn_on_write);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb7328d70a65f83457669765d9f17085));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb7328d70a65f83457669765d9f17085);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__broadcast_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__broadcast_to);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subok_str_plain_readonly_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_subok_str_plain_readonly_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_b53b713d6c897c1c4f4ba168cb60fe87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b53b713d6c897c1c4f4ba168cb60fe87);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_64_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_64_none);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_int_pos_63));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_63);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_broadcast_to);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5e35463be304b87de7c065b8e09256c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5e35463be304b87de7c065b8e09256c);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__size0_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__size0_dtype);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__broadcast_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__broadcast_shape);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d375f731652273c7221469efa15f260));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d375f731652273c7221469efa15f260);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_subok));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subok);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf5b11dd6e444fd4b5662bf819374842));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf5b11dd6e444fd4b5662bf819374842);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_68144c7ea138db9552d47aba70edc580));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68144c7ea138db9552d47aba70edc580);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normalize_axis_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_normalize_axis_tuple_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_function_dispatch_str_plain_set_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_array_function_dispatch_str_plain_set_module_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_dispatch);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_module);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_arrays));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_broadcast_arrays);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_broadcast_shapes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_broadcast_shapes);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_eacd5d01cae0462745b73491d2538366));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eacd5d01cae0462745b73491d2538366);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_dca5f83d14798979213ab0b9313d0c92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dca5f83d14798979213ab0b9313d0c92);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_14));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_14);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_a960b47d01b79f473c5c727ff3cd9b68));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a960b47d01b79f473c5c727ff3cd9b68);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___array_interface___str_plain_base_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___array_interface___str_plain_base_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9fcf64fa6d087ae015ed561b4aa4b510_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9fcf64fa6d087ae015ed561b4aa4b510_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_false_true_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_99ad7371c9d3c2d5d4ac63de0d98ae96));
CHECK_OBJECT_DEEP(mod_consts.const_dict_99ad7371c9d3c2d5d4ac63de0d98ae96);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__sliding_window_view_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sliding_window_view_dispatcher);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_dict_2afbee06e7dfa159855cb298acc943d7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2afbee06e7dfa159855cb298acc943d7);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_1ba505646d7f7ed8241038b8553c4371));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1ba505646d7f7ed8241038b8553c4371);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_sliding_window_view));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sliding_window_view);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__broadcast_to_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__broadcast_to_dispatcher);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_numpy_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_dict_dd9454724a7f0cff7f396473f8ec0e57));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dd9454724a7f0cff7f396473f8ec0e57);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain__broadcast_arrays_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__broadcast_arrays_dispatcher);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_5dcffd4e4a7ab0d9a7f1c009c2da7e89));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5dcffd4e4a7ab0d9a7f1c009c2da7e89);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_37559c7bf6e3d86d978aca08a6e91e63));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37559c7bf6e3d86d978aca08a6e91e63);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_size_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_c75aa7cf02a291826f7dfc4c7d9b9a57_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c75aa7cf02a291826f7dfc4c7d9b9a57_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_833700df1d4bae1828560680968d3fa0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_833700df1d4bae1828560680968d3fa0);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_interface_str_plain_base_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_interface_str_plain_base_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subok_str_plain_args_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_subok_str_plain_args_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_c5979c193d65cbf4a6d6be672e58ac93_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c5979c193d65cbf4a6d6be672e58ac93_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_original_array_str_plain_new_array_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_original_array_str_plain_new_array_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_8f9c2684574ca613ac5b73c24c30e8bc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f9c2684574ca613ac5b73c24c30e8bc_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_567a3e0eca4fd819de860ce59daf889d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_567a3e0eca4fd819de860ce59daf889d_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_e0662af738310c912e45f4a117ac18e6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e0662af738310c912e45f4a117ac18e6_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_arrays_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_args_str_plain_arrays_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_dece590613413ad0f8ef279b287a518a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dece590613413ad0f8ef279b287a518a_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$DummyArray(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_DummyArray);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DummyArray);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DummyArray, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DummyArray);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DummyArray, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_DummyArray);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_DummyArray);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DummyArray);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_arrays_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_arrays_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__broadcast_arrays_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__broadcast_arrays_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__broadcast_arrays_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__broadcast_arrays_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_arrays_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_arrays_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_arrays_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_shape(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_shape);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__broadcast_shape);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__broadcast_shape, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__broadcast_shape);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__broadcast_shape, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_shape);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_shape);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_shape);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_to(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__broadcast_to);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__broadcast_to, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__broadcast_to);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__broadcast_to, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_to_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__broadcast_to_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__broadcast_to_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__broadcast_to_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__broadcast_to_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$_maybe_view_as_subclass(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__maybe_view_as_subclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__maybe_view_as_subclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__maybe_view_as_subclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__maybe_view_as_subclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__maybe_view_as_subclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__maybe_view_as_subclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__maybe_view_as_subclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__maybe_view_as_subclass);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$_size0_dtype(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__size0_dtype);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__size0_dtype);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__size0_dtype, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__size0_dtype);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__size0_dtype, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__size0_dtype);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__size0_dtype);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__size0_dtype);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$_sliding_window_view_dispatcher(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__sliding_window_view_dispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sliding_window_view_dispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sliding_window_view_dispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sliding_window_view_dispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sliding_window_view_dispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__sliding_window_view_dispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__sliding_window_view_dispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__sliding_window_view_dispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$array_function_dispatch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$as_strided(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_as_strided);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_as_strided);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_as_strided, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_as_strided);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_as_strided, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_as_strided);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_as_strided);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_as_strided);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$broadcast_to(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_broadcast_to);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_broadcast_to);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_broadcast_to, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_broadcast_to);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_broadcast_to, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_broadcast_to);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_broadcast_to);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_broadcast_to);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$normalize_axis_tuple(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_axis_tuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_axis_tuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_normalize_axis_tuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_normalize_axis_tuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_tuple);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_stride_tricks_impl$set_module(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_stride_tricks_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_stride_tricks_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_fa914fd9d563d8ae608abc2a7bbe4516;
static PyCodeObject *code_objects_03ad4518ca61796f4717163296e70d9e;
static PyCodeObject *code_objects_6ba3a2e131e5ce1c6794657d9552cb34;
static PyCodeObject *code_objects_574dbf6ab7f5d1118c09d05873109a5b;
static PyCodeObject *code_objects_cc4fa53f9489cb4be0b5aea61f61897c;
static PyCodeObject *code_objects_022f7bb2556934054096cec713e705b8;
static PyCodeObject *code_objects_8dd8955a3134a6d15c37fec777233c9d;
static PyCodeObject *code_objects_deaa43a763799abc43ce8a7583a80417;
static PyCodeObject *code_objects_7f2d5d2cabb72d9fee7f5d388586fbfb;
static PyCodeObject *code_objects_a7d8a3184e71bf886c68d67e058b6f87;
static PyCodeObject *code_objects_8750490136d792a19dd252763bb81b92;
static PyCodeObject *code_objects_7dcf2b0c8e4b70d5cb987f6689d497ec;
static PyCodeObject *code_objects_615f8a27f735a6954b039e8d01748cd8;
static PyCodeObject *code_objects_3801b94097ec05b4225a51a838c350bf;
static PyCodeObject *code_objects_31e0cd4df51ea06fba98f9cf284b831a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_37559c7bf6e3d86d978aca08a6e91e63); CHECK_OBJECT(module_filename_obj);
code_objects_fa914fd9d563d8ae608abc2a7bbe4516 = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_bb7328d70a65f83457669765d9f17085, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_size_tuple, NULL, 1, 0, 0);
code_objects_03ad4518ca61796f4717163296e70d9e = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_97ee61af940405699ac809a2d6ac61e5, mod_consts.const_tuple_c75aa7cf02a291826f7dfc4c7d9b9a57_tuple, NULL, 1, 0, 0);
code_objects_6ba3a2e131e5ce1c6794657d9552cb34 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_833700df1d4bae1828560680968d3fa0, mod_consts.const_str_digest_833700df1d4bae1828560680968d3fa0, NULL, NULL, 0, 0, 0);
code_objects_574dbf6ab7f5d1118c09d05873109a5b = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_a960b47d01b79f473c5c727ff3cd9b68, mod_consts.const_tuple_str_plain_self_str_plain_interface_str_plain_base_tuple, NULL, 3, 0, 0);
code_objects_cc4fa53f9489cb4be0b5aea61f61897c = MAKE_CODE_OBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain__broadcast_arrays_dispatcher, mod_consts.const_str_plain__broadcast_arrays_dispatcher, mod_consts.const_tuple_str_plain_subok_str_plain_args_tuple, NULL, 0, 1, 0);
code_objects_022f7bb2556934054096cec713e705b8 = MAKE_CODE_OBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain__broadcast_shape, mod_consts.const_str_plain__broadcast_shape, mod_consts.const_tuple_str_plain_args_str_plain_b_str_plain_pos_tuple, NULL, 0, 0, 0);
code_objects_8dd8955a3134a6d15c37fec777233c9d = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__broadcast_to, mod_consts.const_str_plain__broadcast_to, mod_consts.const_tuple_c5979c193d65cbf4a6d6be672e58ac93_tuple, NULL, 4, 0, 0);
code_objects_deaa43a763799abc43ce8a7583a80417 = MAKE_CODE_OBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__broadcast_to_dispatcher, mod_consts.const_str_plain__broadcast_to_dispatcher, mod_consts.const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple, NULL, 3, 0, 0);
code_objects_7f2d5d2cabb72d9fee7f5d388586fbfb = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__maybe_view_as_subclass, mod_consts.const_str_plain__maybe_view_as_subclass, mod_consts.const_tuple_str_plain_original_array_str_plain_new_array_tuple, NULL, 2, 0, 0);
code_objects_a7d8a3184e71bf886c68d67e058b6f87 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__sliding_window_view_dispatcher, mod_consts.const_str_plain__sliding_window_view_dispatcher, mod_consts.const_tuple_8f9c2684574ca613ac5b73c24c30e8bc_tuple, NULL, 3, 2, 0);
code_objects_8750490136d792a19dd252763bb81b92 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_as_strided, mod_consts.const_str_plain_as_strided, mod_consts.const_tuple_567a3e0eca4fd819de860ce59daf889d_tuple, NULL, 5, 0, 0);
code_objects_7dcf2b0c8e4b70d5cb987f6689d497ec = MAKE_CODE_OBJECT(module_filename_obj, 515, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_broadcast_arrays, mod_consts.const_str_plain_broadcast_arrays, mod_consts.const_tuple_e0662af738310c912e45f4a117ac18e6_tuple, NULL, 0, 1, 0);
code_objects_615f8a27f735a6954b039e8d01748cd8 = MAKE_CODE_OBJECT(module_filename_obj, 467, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_broadcast_shapes, mod_consts.const_str_plain_broadcast_shapes, mod_consts.const_tuple_str_plain_args_str_plain_arrays_tuple, NULL, 0, 0, 0);
code_objects_3801b94097ec05b4225a51a838c350bf = MAKE_CODE_OBJECT(module_filename_obj, 401, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_broadcast_to, mod_consts.const_str_plain_broadcast_to, mod_consts.const_tuple_str_plain_array_str_plain_shape_str_plain_subok_tuple, NULL, 3, 0, 0);
code_objects_31e0cd4df51ea06fba98f9cf284b831a = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sliding_window_view, mod_consts.const_str_plain_sliding_window_view, mod_consts.const_tuple_dece590613413ad0f8ef279b287a518a_tuple, NULL, 3, 2, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__11__broadcast_arrays_dispatcher(PyThreadState *tstate, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays(PyThreadState *tstate, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__1___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__3_as_strided(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__4__sliding_window_view_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__7__broadcast_to_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_interface = python_pars[1];
PyObject *par_base = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_574dbf6ab7f5d1118c09d05873109a5b, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__->m_type_description == NULL);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__ = cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_interface);
tmp_assattr_value_1 = par_interface;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___array_interface__, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_base);
tmp_assattr_value_2 = par_base;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_base, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__,
    type_description_1,
    par_self,
    par_interface,
    par_base
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__ == cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__);
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl$$$function__1___init__);

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
CHECK_OBJECT(par_interface);
Py_DECREF(par_interface);
CHECK_OBJECT(par_base);
Py_DECREF(par_base);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_interface);
Py_DECREF(par_interface);
CHECK_OBJECT(par_base);
Py_DECREF(par_base);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_original_array = python_pars[0];
PyObject *par_new_array = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass = MAKE_FUNCTION_FRAME(tstate, code_objects_7f2d5d2cabb72d9fee7f5d388586fbfb, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass->m_type_description == NULL);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass = cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_type_arg_2;
CHECK_OBJECT(par_original_array);
tmp_type_arg_1 = par_original_array;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
CHECK_OBJECT(par_new_array);
tmp_type_arg_2 = par_new_array;
tmp_cmp_expr_right_1 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_cmp_expr_right_1 == NULL));
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
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
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_type_arg_3;
CHECK_OBJECT(par_new_array);
tmp_expression_value_1 = par_new_array;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_view);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_original_array);
tmp_type_arg_3 = par_original_array;
tmp_kw_call_value_0_1 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_kw_call_value_0_1 == NULL));
frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass->m_frame.f_lineno = 28;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_type_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_new_array;
    assert(old != NULL);
    par_new_array = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_new_array);
tmp_expression_value_2 = par_new_array;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___array_finalize__);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_new_array);
tmp_called_instance_1 = par_new_array;
CHECK_OBJECT(par_original_array);
tmp_args_element_value_1 = par_original_array;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass->m_frame.f_lineno = 33;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___array_finalize__, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
branch_no_1:;
if (par_new_array == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_array);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 34;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_new_array;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass,
    type_description_1,
    par_original_array,
    par_new_array
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass == cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass);
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_new_array);
par_new_array = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_new_array);
par_new_array = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_original_array);
Py_DECREF(par_original_array);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_original_array);
Py_DECREF(par_original_array);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__3_as_strided(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_shape = python_pars[1];
PyObject *par_strides = python_pars[2];
PyObject *par_subok = python_pars[3];
PyObject *par_writeable = python_pars[4];
PyObject *var_interface = NULL;
PyObject *var_array = NULL;
PyObject *var_view = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided = MAKE_FUNCTION_FRAME(tstate, code_objects_8750490136d792a19dd252763bb81b92, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided->m_type_description == NULL);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided = cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_kw_call_arg_value_0_1 = par_x;
tmp_kw_call_dict_value_0_1 = Py_None;
CHECK_OBJECT(par_subok);
tmp_kw_call_dict_value_1_1 = par_subok;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided->m_frame.f_lineno = 94;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_copy_str_plain_subok_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_x);
tmp_expression_value_2 = par_x;
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___array_interface__);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_interface == NULL);
var_interface = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_shape);
tmp_cmp_expr_left_1 = par_shape;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(par_shape);
tmp_tuple_arg_1 = par_shape;
tmp_dictset_value = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_interface);
tmp_dictset_dict = var_interface;
tmp_dictset_key = mod_consts.const_str_plain_shape;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_strides);
tmp_cmp_expr_left_2 = par_strides;
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
PyObject *tmp_tuple_arg_2;
CHECK_OBJECT(par_strides);
tmp_tuple_arg_2 = par_strides;
tmp_dictset_value = PySequence_Tuple(tmp_tuple_arg_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_interface);
tmp_dictset_dict = var_interface;
tmp_dictset_key = mod_consts.const_str_plain_strides;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_asarray);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_numpy$lib$_stride_tricks_impl$DummyArray(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DummyArray);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 101;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_interface);
tmp_kw_call_arg_value_0_2 = var_interface;
CHECK_OBJECT(par_x);
tmp_kw_call_dict_value_0_2 = par_x;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided->m_frame.f_lineno = 101;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_base_tuple);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 101;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided->m_frame.f_lineno = 101;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_array == NULL);
var_array = tmp_assign_source_3;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_x);
tmp_expression_value_4 = par_x;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_array);
tmp_assattr_target_1 = var_array;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_dtype, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = module_var_accessor_numpy$lib$_stride_tricks_impl$_maybe_view_as_subclass(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__maybe_view_as_subclass);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
CHECK_OBJECT(var_array);
tmp_args_element_value_3 = var_array;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided->m_frame.f_lineno = 106;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_view == NULL);
var_view = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_view);
tmp_expression_value_6 = var_view;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_flags);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_writeable);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 108;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_writeable);
tmp_operand_value_1 = par_writeable;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
PyObject *tmp_expression_value_7;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(var_view);
tmp_expression_value_7 = var_view;
tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_flags);
if (tmp_assattr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_writeable, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_target_2);
Py_DECREF(tmp_assattr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided,
    type_description_1,
    par_x,
    par_shape,
    par_strides,
    par_subok,
    par_writeable,
    var_interface,
    var_array,
    var_view
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided == cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided);
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl$$$function__3_as_strided);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_view);
tmp_return_value = var_view;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_x);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
par_x = NULL;
CHECK_OBJECT(var_interface);
CHECK_OBJECT(var_interface);
Py_DECREF(var_interface);
var_interface = NULL;
CHECK_OBJECT(var_array);
CHECK_OBJECT(var_array);
Py_DECREF(var_array);
var_array = NULL;
CHECK_OBJECT(var_view);
CHECK_OBJECT(var_view);
Py_DECREF(var_view);
var_view = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
Py_XDECREF(var_interface);
var_interface = NULL;
Py_XDECREF(var_array);
var_array = NULL;
Py_XDECREF(var_view);
var_view = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_strides);
Py_DECREF(par_strides);
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
CHECK_OBJECT(par_writeable);
Py_DECREF(par_writeable);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_strides);
Py_DECREF(par_strides);
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
CHECK_OBJECT(par_writeable);
Py_DECREF(par_writeable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__4__sliding_window_view_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_window_shape = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_subok = python_pars[3];
PyObject *par_writeable = python_pars[4];
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
CHECK_OBJECT(par_window_shape);
Py_DECREF(par_window_shape);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
CHECK_OBJECT(par_writeable);
Py_DECREF(par_writeable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_x = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_window_shape = python_pars[1];
PyObject *par_axis = python_pars[2];
PyObject *par_subok = python_pars[3];
PyObject *par_writeable = python_pars[4];
PyObject *var_window_shape_array = NULL;
PyObject *var_out_strides = NULL;
PyObject *var_x_shape_trimmed = NULL;
PyObject *var_ax = NULL;
PyObject *var_dim = NULL;
PyObject *var_out_shape = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view = MAKE_FUNCTION_FRAME(tstate, code_objects_31e0cd4df51ea06fba98f9cf284b831a, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_type_description == NULL);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view = cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_tuple_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 336;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_window_shape);
tmp_args_element_value_1 = par_window_shape;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 336;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iterable, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 336;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_window_shape);
tmp_tuple_arg_1 = par_window_shape;
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_window_shape);
tmp_tuple_element_1 = par_window_shape;
tmp_assign_source_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
condexpr_end_1:;
{
    PyObject *old = par_window_shape;
    assert(old != NULL);
    par_window_shape = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 339;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_x));
tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(par_x);
tmp_kw_call_dict_value_0_1 = Py_None;
CHECK_OBJECT(par_subok);
tmp_kw_call_dict_value_1_1 = par_subok;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 339;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_copy_str_plain_subok_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(par_x);
    Nuitka_Cell_SET(par_x, tmp_assign_source_2);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 341;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_window_shape);
tmp_args_element_value_2 = par_window_shape;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 341;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_array, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
assert(var_window_shape_array == NULL);
var_window_shape_array = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_truth_name_2;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_any);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_window_shape_array);
tmp_cmp_expr_left_1 = var_window_shape_array;
tmp_cmp_expr_right_1 = const_int_0;
tmp_args_element_value_3 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 342;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 342;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 342;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_e91d31eb0fb43141e970402d8abc88fe;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 343;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 343;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_2 = par_axis;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_tuple_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_x));
tmp_expression_value_3 = Nuitka_Cell_GET(par_x);
tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ndim);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_tuple_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = PySequence_Tuple(tmp_tuple_arg_2);
CHECK_OBJECT(tmp_tuple_arg_2);
Py_DECREF(tmp_tuple_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_axis;
    assert(old != NULL);
    par_axis = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_window_shape);
tmp_len_arg_1 = par_window_shape;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_cmp_expr_left_3 == NULL));
CHECK_OBJECT(par_axis);
tmp_len_arg_2 = par_axis;
tmp_cmp_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_cmp_expr_right_3 == NULL));
tmp_condition_result_4 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
tmp_condition_result_4 = !tmp_condition_result_4;
if (tmp_condition_result_4 != false) {
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
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_562afd3d038095cabebbe3c3a120a08a;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_len_arg_3;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_window_shape);
tmp_len_arg_3 = par_window_shape;
tmp_format_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
assert(!(tmp_format_value_1 == NULL));
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "coooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_a53fce526b26dfe6475ba2cc6a1d4aec;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
CHECK_OBJECT(Nuitka_Cell_GET(par_x));
tmp_expression_value_4 = Nuitka_Cell_GET(par_x);
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndim);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "coooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "coooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
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
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 348;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 348;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_3 = module_var_accessor_numpy$lib$_stride_tricks_impl$normalize_axis_tuple(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_normalize_axis_tuple);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 353;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_tuple_element_3 = par_axis;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(Nuitka_Cell_GET(par_x));
tmp_expression_value_5 = Nuitka_Cell_GET(par_x);
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndim);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "coooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_4ed5e00ae539e1c82d7fdf704f753bed);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 353;
tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_axis;
    assert(old != NULL);
    par_axis = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_4;
PyObject *tmp_len_arg_5;
CHECK_OBJECT(par_window_shape);
tmp_len_arg_4 = par_window_shape;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_4);
assert(!(tmp_cmp_expr_left_4 == NULL));
CHECK_OBJECT(par_axis);
tmp_len_arg_5 = par_axis;
tmp_cmp_expr_right_4 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 354;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
tmp_condition_result_5 = !tmp_condition_result_5;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_1924e3a9733e9691a979b1e0ebfae0ba;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_len_arg_6;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_len_arg_7;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_window_shape);
tmp_len_arg_6 = par_window_shape;
tmp_format_value_3 = BUILTIN_LEN(tstate, tmp_len_arg_6);
assert(!(tmp_format_value_3 == NULL));
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "coooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_36f9a92bf16cb0a64306e57669c2c4af;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_axis);
tmp_len_arg_7 = par_axis;
tmp_format_value_4 = BUILTIN_LEN(tstate, tmp_len_arg_7);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "coooooooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "coooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_c3b65c57dbbf780fb75fa07f5e22af4b;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_4);
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
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 355;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 355;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
branch_end_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_tuple_arg_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_x));
tmp_expression_value_6 = Nuitka_Cell_GET(par_x);
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_strides);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
if (par_axis == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = par_axis;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_7;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = par_x;
Py_INCREF(tmp_closure_1[1]);
tmp_tuple_arg_3 = MAKE_GENERATOR_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_add_expr_right_1 = PySequence_Tuple(tmp_tuple_arg_3);
CHECK_OBJECT(tmp_tuple_arg_3);
Py_DECREF(tmp_tuple_arg_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 359;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
assert(var_out_strides == NULL);
var_out_strides = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_list_arg_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(Nuitka_Cell_GET(par_x));
tmp_expression_value_7 = Nuitka_Cell_GET(par_x);
tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_shape);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
assert(var_x_shape_trimmed == NULL);
var_x_shape_trimmed = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = (PyObject *)&PyZip_Type;
if (par_axis == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_axis);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 363;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = par_axis;
CHECK_OBJECT(par_window_shape);
tmp_args_element_value_5 = par_window_shape;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 363;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "coooooooooo";
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
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "coooooooooo";
exception_lineno = 363;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "coooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "coooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "coooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
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
type_description_1 = "coooooooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_ax;
    var_ax = tmp_assign_source_14;
    Py_INCREF(var_ax);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_dim;
    var_dim = tmp_assign_source_15;
    Py_INCREF(var_dim);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
if (var_x_shape_trimmed == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x_shape_trimmed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "coooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_8 = var_x_shape_trimmed;
CHECK_OBJECT(var_ax);
tmp_subscript_value_1 = var_ax;
tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "coooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_dim);
tmp_cmp_expr_right_5 = var_dim;
tmp_condition_result_6 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "coooooooooo";
    goto try_except_handler_3;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_c7084422dc0e550221c67db0bd517a3b;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 365;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 365;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooooooooo";
goto try_except_handler_3;
}
branch_no_5:;
{
PyObject *tmp_assign_source_16;
if (var_x_shape_trimmed == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x_shape_trimmed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 367;
type_description_1 = "coooooooooo";
    goto try_except_handler_3;
}

tmp_assign_source_16 = var_x_shape_trimmed;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_16;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(var_ax);
tmp_assign_source_17 = var_ax;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_17;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_9 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_2 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "coooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(var_dim);
tmp_sub_expr_left_1 = var_dim;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_isub_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "coooooooooo";
    goto try_except_handler_6;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "coooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_19 = tmp_isub_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_19;

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


exception_lineno = 367;
type_description_1 = "coooooooooo";
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

goto try_except_handler_3;
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


exception_lineno = 363;
type_description_1 = "coooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
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
PyObject *tmp_assign_source_20;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_tuple_arg_4;
if (var_x_shape_trimmed == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x_shape_trimmed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 368;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_arg_4 = var_x_shape_trimmed;
tmp_add_expr_left_2 = PySequence_Tuple(tmp_tuple_arg_4);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_window_shape);
tmp_add_expr_right_2 = par_window_shape;
tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
assert(!(tmp_assign_source_20 == NULL));
assert(var_out_shape == NULL);
var_out_shape = tmp_assign_source_20;
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
tmp_called_value_5 = module_var_accessor_numpy$lib$_stride_tricks_impl$as_strided(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_as_strided);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 369;
type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_x));
tmp_kw_call_arg_value_0_2 = Nuitka_Cell_GET(par_x);
CHECK_OBJECT(var_out_strides);
tmp_kw_call_dict_value_0_2 = var_out_strides;
CHECK_OBJECT(var_out_shape);
tmp_kw_call_dict_value_1_2 = var_out_shape;
CHECK_OBJECT(par_subok);
tmp_kw_call_dict_value_2_1 = par_subok;
CHECK_OBJECT(par_writeable);
tmp_kw_call_dict_value_3_1 = par_writeable;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame.f_lineno = 369;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_9afa96e69e0f9a84959b69be5c700275_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "coooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view,
    type_description_1,
    par_x,
    par_window_shape,
    par_axis,
    par_subok,
    par_writeable,
    var_window_shape_array,
    var_out_strides,
    var_x_shape_trimmed,
    var_ax,
    var_dim,
    var_out_shape
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view == cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view);
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view);

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
CHECK_OBJECT(par_window_shape);
CHECK_OBJECT(par_window_shape);
Py_DECREF(par_window_shape);
par_window_shape = NULL;
Py_XDECREF(par_axis);
par_axis = NULL;
CHECK_OBJECT(var_window_shape_array);
CHECK_OBJECT(var_window_shape_array);
Py_DECREF(var_window_shape_array);
var_window_shape_array = NULL;
CHECK_OBJECT(var_out_strides);
CHECK_OBJECT(var_out_strides);
Py_DECREF(var_out_strides);
var_out_strides = NULL;
Py_XDECREF(var_x_shape_trimmed);
var_x_shape_trimmed = NULL;
Py_XDECREF(var_ax);
var_ax = NULL;
Py_XDECREF(var_dim);
var_dim = NULL;
CHECK_OBJECT(var_out_shape);
CHECK_OBJECT(var_out_shape);
Py_DECREF(var_out_shape);
var_out_shape = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_x);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
par_x = NULL;
Py_XDECREF(par_window_shape);
par_window_shape = NULL;
Py_XDECREF(par_axis);
par_axis = NULL;
Py_XDECREF(var_window_shape_array);
var_window_shape_array = NULL;
Py_XDECREF(var_out_strides);
var_out_strides = NULL;
Py_XDECREF(var_x_shape_trimmed);
var_x_shape_trimmed = NULL;
Py_XDECREF(var_ax);
var_ax = NULL;
Py_XDECREF(var_dim);
var_dim = NULL;
Py_XDECREF(var_out_shape);
var_out_shape = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
CHECK_OBJECT(par_writeable);
Py_DECREF(par_writeable);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
CHECK_OBJECT(par_writeable);
Py_DECREF(par_writeable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view$$$genexpr__1_genexpr_locals {
PyObject *var_ax;
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

static PyObject *numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_ax = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_03ad4518ca61796f4717163296e70d9e, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 359;
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
    PyObject *old = generator_heap->var_ax;
    generator_heap->var_ax = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_ax);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 359;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_strides);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 359;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_ax);
tmp_subscript_value_1 = generator_heap->var_ax;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 359;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 359;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 359;
generator_heap->type_description_1 = "Noc";
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
    generator_heap->var_ax,
    generator->m_closure[1]
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

Py_XDECREF(generator_heap->var_ax);
generator_heap->var_ax = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_ax);
generator_heap->var_ax = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view$$$genexpr__1_genexpr_context,
        module_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_97ee61af940405699ac809a2d6ac61e5,
#endif
        code_objects_03ad4518ca61796f4717163296e70d9e,
        closure,
        2,
#if 1
        sizeof(struct numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_array = python_pars[0];
PyObject *par_shape = python_pars[1];
PyObject *par_subok = python_pars[2];
PyObject *par_readonly = python_pars[3];
PyObject *var_extras = NULL;
PyObject *var_it = NULL;
PyObject *var_broadcast = NULL;
PyObject *var_result = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to = MAKE_FUNCTION_FRAME(tstate, code_objects_8dd8955a3134a6d15c37fec777233c9d, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_type_description == NULL);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to = cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_tuple_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 374;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_shape);
tmp_args_element_value_1 = par_shape;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 374;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iterable, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 374;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_shape);
tmp_tuple_arg_1 = par_shape;
tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_shape);
tmp_tuple_element_1 = par_shape;
tmp_assign_source_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
condexpr_end_1:;
{
    PyObject *old = par_shape;
    assert(old != NULL);
    par_shape = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_array);
tmp_kw_call_arg_value_0_1 = par_array;
tmp_kw_call_dict_value_0_1 = Py_None;
CHECK_OBJECT(par_subok);
tmp_kw_call_dict_value_1_1 = par_subok;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 375;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_copy_str_plain_subok_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_array;
    assert(old != NULL);
    par_array = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_shape);
tmp_operand_value_1 = par_shape;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_array);
tmp_expression_value_2 = par_array;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 376;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_6611c0481a0af4e0330fa8e68492033d;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 377;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 377;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_1;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_shape);
tmp_iter_arg_1 = par_shape;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_any_arg_1 = MAKE_GENERATOR_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_121f95687315cf5abe650b7ae41826a7;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 379;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 379;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_extras == NULL);
var_extras = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
tmp_expression_value_3 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_nditer);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_array);
tmp_tuple_element_2 = par_array;
tmp_kw_call_arg_value_0_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_2, 0, tmp_tuple_element_2);
tmp_add_expr_left_1 = MAKE_LIST3(tstate, mod_consts.const_str_plain_multi_index,mod_consts.const_str_plain_refs_ok,mod_consts.const_str_plain_zerosize_ok);
CHECK_OBJECT(var_extras);
tmp_add_expr_right_1 = var_extras;
tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_kw_call_dict_value_0_2 == NULL));
tmp_kw_call_dict_value_1_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_readonly);
CHECK_OBJECT(par_shape);
tmp_kw_call_dict_value_2_1 = par_shape;
tmp_kw_call_dict_value_3_1 = mod_consts.const_str_plain_C;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 382;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_e0ec15151d4e5f00ef44a5bd43fe8f18_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_1_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_it == NULL);
var_it = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(var_it);
tmp_assign_source_6 = var_it;
assert(tmp_with_1__source == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_with_1__source = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 385;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_8;
}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_9;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_it);
tmp_expression_value_7 = var_it;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_itviews);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
assert(var_broadcast == NULL);
var_broadcast = tmp_assign_source_10;
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 385;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 385;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame)) {
        frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_6;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 385;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame)) {
        frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_6;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
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
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 385;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 385;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 385;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
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
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = module_var_accessor_numpy$lib$_stride_tricks_impl$_maybe_view_as_subclass(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__maybe_view_as_subclass);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 388;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_array);
tmp_args_element_value_5 = par_array;
if (var_broadcast == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_broadcast);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 388;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_broadcast;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame.f_lineno = 388;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
CHECK_OBJECT(par_readonly);
tmp_operand_value_3 = par_readonly;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_array);
tmp_expression_value_9 = par_array;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_flags);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__writeable_no_warn);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 390;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_condition_result_8 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_8 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_10;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(var_result);
tmp_expression_value_10 = var_result;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_flags);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_writeable, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
PyObject *tmp_expression_value_11;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(var_result);
tmp_expression_value_11 = var_result;
tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_flags);
if (tmp_assattr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__warn_on_write, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_target_2);
Py_DECREF(tmp_assattr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to,
    type_description_1,
    par_array,
    par_shape,
    par_subok,
    par_readonly,
    var_extras,
    var_it,
    var_broadcast,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to == cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to);
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to);

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
CHECK_OBJECT(par_array);
CHECK_OBJECT(par_array);
Py_DECREF(par_array);
par_array = NULL;
CHECK_OBJECT(par_shape);
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
par_shape = NULL;
CHECK_OBJECT(var_extras);
CHECK_OBJECT(var_extras);
Py_DECREF(var_extras);
var_extras = NULL;
CHECK_OBJECT(var_it);
CHECK_OBJECT(var_it);
Py_DECREF(var_it);
var_it = NULL;
Py_XDECREF(var_broadcast);
var_broadcast = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_array);
par_array = NULL;
Py_XDECREF(par_shape);
par_shape = NULL;
Py_XDECREF(var_extras);
var_extras = NULL;
Py_XDECREF(var_it);
var_it = NULL;
Py_XDECREF(var_broadcast);
var_broadcast = NULL;
Py_XDECREF(var_result);
var_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
CHECK_OBJECT(par_readonly);
Py_DECREF(par_readonly);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
CHECK_OBJECT(par_readonly);
Py_DECREF(par_readonly);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to$$$genexpr__1_genexpr_locals {
PyObject *var_size;
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

static PyObject *numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_size = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_fa914fd9d563d8ae608abc2a7bbe4516, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 378;
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
    PyObject *old = generator_heap->var_size;
    generator_heap->var_size = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_size);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_size);
tmp_cmp_expr_left_1 = generator_heap->var_size;
tmp_cmp_expr_right_1 = const_int_0;
tmp_expression_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 378;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 378;
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


generator_heap->exception_lineno = 378;
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
    generator_heap->var_size
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

Py_XDECREF(generator_heap->var_size);
generator_heap->var_size = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_size);
generator_heap->var_size = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to$$$genexpr__1_genexpr_context,
        module_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_bb7328d70a65f83457669765d9f17085,
#endif
        code_objects_fa914fd9d563d8ae608abc2a7bbe4516,
        closure,
        1,
#if 1
        sizeof(struct numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__7__broadcast_to_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_array = python_pars[0];
PyObject *par_shape = python_pars[1];
PyObject *par_subok = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_array);
tmp_tuple_element_1 = par_array;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_array);
Py_DECREF(par_array);
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_array = python_pars[0];
PyObject *par_shape = python_pars[1];
PyObject *par_subok = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to = MAKE_FUNCTION_FRAME(tstate, code_objects_3801b94097ec05b4225a51a838c350bf, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to->m_type_description == NULL);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to = cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_to(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__broadcast_to);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 443;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_array);
tmp_kw_call_arg_value_0_1 = par_array;
CHECK_OBJECT(par_shape);
tmp_kw_call_arg_value_1_1 = par_shape;
CHECK_OBJECT(par_subok);
tmp_kw_call_dict_value_0_1 = par_subok;
tmp_kw_call_dict_value_1_1 = Py_True;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to->m_frame.f_lineno = 443;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_subok_str_plain_readonly_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to,
    type_description_1,
    par_array,
    par_shape,
    par_subok
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to == cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to);
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_array);
Py_DECREF(par_array);
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_array);
Py_DECREF(par_array);
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_b = NULL;
PyObject *var_pos = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape = MAKE_FUNCTION_FRAME(tstate, code_objects_022f7bb2556934054096cec713e705b8, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape->m_type_description == NULL);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape = cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_broadcast);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_expression_value_2 = par_args;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_64_none;
tmp_direct_call_arg2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 452;
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


exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_b == NULL);
var_b = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_xrange_step_1;
tmp_xrange_low_1 = mod_consts.const_int_pos_64;
CHECK_OBJECT(par_args);
tmp_len_arg_1 = par_args;
tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_xrange_high_1 == NULL));
tmp_xrange_step_1 = mod_consts.const_int_pos_63;
tmp_iter_arg_1 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 454;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_pos;
    var_pos = tmp_assign_source_4;
    Py_INCREF(var_pos);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$broadcast_to(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_broadcast_to);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = const_int_0;
if (var_b == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 458;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = var_b;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape->m_frame.f_lineno = 458;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_b;
    var_b = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_expression_value_4 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 459;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_broadcast);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_b);
tmp_tuple_element_1 = var_b;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_expression_value_5 = par_args;
CHECK_OBJECT(var_pos);
tmp_start_value_1 = var_pos;
CHECK_OBJECT(var_pos);
tmp_add_expr_left_1 = var_pos;
tmp_add_expr_right_1 = mod_consts.const_int_pos_63;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_2);
Py_DECREF(tmp_direct_call_arg2_2);

exception_lineno = 459;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_direct_call_arg3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_direct_call_arg3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_2);
Py_DECREF(tmp_direct_call_arg2_2);

exception_lineno = 459;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_1};
    tmp_assign_source_6 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_b;
    assert(old != NULL);
    var_b = tmp_assign_source_6;
    Py_DECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "ooo";
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
PyObject *tmp_expression_value_6;
if (var_b == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 460;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = var_b;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_shape);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape,
    type_description_1,
    par_args,
    var_b,
    var_pos
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape == cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape);
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_pos);
var_pos = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_args = python_pars[0];
PyObject *var_arrays = NULL;
PyObject *outline_0_var_x = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes = MAKE_FUNCTION_FRAME(tstate, code_objects_615f8a27f735a6954b039e8d01748cd8, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes->m_type_description == NULL);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes = cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_args);
tmp_iter_arg_1 = par_args;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 506;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_x;
    outline_0_var_x = tmp_assign_source_5;
    Py_INCREF(outline_0_var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 506;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_empty);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_x);
tmp_kw_call_arg_value_0_1 = outline_0_var_x;
tmp_kw_call_dict_value_0_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$_size0_dtype(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__size0_dtype);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 506;
type_description_1 = "oo";
    goto try_except_handler_3;
}
frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes->m_frame.f_lineno = 506;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_1);
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
Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 506;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_arrays == NULL);
var_arrays = tmp_assign_source_1;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_shape(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__broadcast_shape);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arrays);
tmp_direct_call_arg2_1 = var_arrays;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes,
    type_description_1,
    par_args,
    var_arrays
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes == cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes);
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_arrays);
CHECK_OBJECT(var_arrays);
Py_DECREF(var_arrays);
var_arrays = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_arrays);
var_arrays = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__11__broadcast_arrays_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_subok = python_pars[0];
PyObject *par_args = python_pars[1];
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
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_subok = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *var_shape = NULL;
PyObject *var_result = NULL;
PyObject *outline_0_var__m = NULL;
PyObject *outline_1_var_array = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays = MAKE_FUNCTION_FRAME(tstate, code_objects_7dcf2b0c8e4b70d5cb987f6689d497ec, module_numpy$lib$_stride_tricks_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays->m_type_description == NULL);
frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays = cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_args);
tmp_iter_arg_1 = par_args;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 575;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var__m;
    outline_0_var__m = tmp_assign_source_5;
    Py_INCREF(outline_0_var__m);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 575;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var__m);
tmp_kw_call_arg_value_0_1 = outline_0_var__m;
tmp_kw_call_dict_value_0_1 = Py_None;
if (par_subok == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subok);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 575;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_1_1 = par_subok;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays->m_frame.f_lineno = 575;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_copy_str_plain_subok_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_1);
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
Py_XDECREF(outline_0_var__m);
outline_0_var__m = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var__m);
outline_0_var__m = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 575;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = par_args;
    assert(old != NULL);
    par_args = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_shape(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__broadcast_shape);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 577;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_6 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_shape == NULL);
var_shape = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_args);
tmp_iter_arg_2 = par_args;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_9;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 579;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_11 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_array;
    outline_1_var_array = tmp_assign_source_11;
    Py_INCREF(outline_1_var_array);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_array);
tmp_expression_value_2 = outline_1_var_array;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shape);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
if (var_shape == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shape);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 579;
type_description_1 = "oooo";
    goto try_except_handler_5;
}

tmp_cmp_expr_right_1 = var_shape;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(outline_1_var_array);
tmp_append_value_2 = outline_1_var_array;
Py_INCREF(tmp_append_value_2);
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_2 = module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_to(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__broadcast_to);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 579;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(outline_1_var_array);
tmp_kw_call_arg_value_0_2 = outline_1_var_array;
if (var_shape == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shape);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 580;
type_description_1 = "oooo";
    goto try_except_handler_5;
}

tmp_kw_call_arg_value_1_1 = var_shape;
if (par_subok == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subok);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 580;
type_description_1 = "oooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_0_2 = par_subok;
tmp_kw_call_dict_value_1_2 = Py_False;
frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays->m_frame.f_lineno = 580;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_subok_str_plain_readonly_tuple);
}

if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
condexpr_end_1:;
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_7 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_7);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_array);
outline_1_var_array = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_array);
outline_1_var_array = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 579;
goto frame_exception_exit_1;
outline_result_2:;
assert(var_result == NULL);
var_result = tmp_assign_source_7;
}
{
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(var_result);
tmp_tuple_arg_1 = var_result;
tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays,
    type_description_1,
    par_subok,
    par_args,
    var_shape,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays == cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays);
    cache_frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_args);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
par_args = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_args);
par_args = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
Py_XDECREF(var_result);
var_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_subok);
Py_DECREF(par_subok);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes,
        mod_consts.const_str_plain_broadcast_shapes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_615f8a27f735a6954b039e8d01748cd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_digest_3d375f731652273c7221469efa15f260,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__11__broadcast_arrays_dispatcher(PyThreadState *tstate, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__11__broadcast_arrays_dispatcher,
        mod_consts.const_str_plain__broadcast_arrays_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cc4fa53f9489cb4be0b5aea61f61897c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays(PyThreadState *tstate, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays,
        mod_consts.const_str_plain_broadcast_arrays,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7dcf2b0c8e4b70d5cb987f6689d497ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_digest_bf5b11dd6e444fd4b5662bf819374842,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__1___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a960b47d01b79f473c5c727ff3cd9b68,
#endif
        code_objects_574dbf6ab7f5d1118c09d05873109a5b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass,
        mod_consts.const_str_plain__maybe_view_as_subclass,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7f2d5d2cabb72d9fee7f5d388586fbfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__3_as_strided(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__3_as_strided,
        mod_consts.const_str_plain_as_strided,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8750490136d792a19dd252763bb81b92,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_digest_5b21b845bf796b2697bf8c1ba910579a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__4__sliding_window_view_dispatcher(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__4__sliding_window_view_dispatcher,
        mod_consts.const_str_plain__sliding_window_view_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a7d8a3184e71bf886c68d67e058b6f87,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view,
        mod_consts.const_str_plain_sliding_window_view,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_31e0cd4df51ea06fba98f9cf284b831a,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_digest_e68e39667ea68aeb1099f091d4ef31d2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to,
        mod_consts.const_str_plain__broadcast_to,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8dd8955a3134a6d15c37fec777233c9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__7__broadcast_to_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__7__broadcast_to_dispatcher,
        mod_consts.const_str_plain__broadcast_to_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_deaa43a763799abc43ce8a7583a80417,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to,
        mod_consts.const_str_plain_broadcast_to,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3801b94097ec05b4225a51a838c350bf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_digest_b53b713d6c897c1c4f4ba168cb60fe87,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape,
        mod_consts.const_str_plain__broadcast_shape,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_022f7bb2556934054096cec713e705b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_digest_f5e35463be304b87de7c065b8e09256c,
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

static function_impl_code const function_table_numpy$lib$_stride_tricks_impl[] = {
impl_numpy$lib$_stride_tricks_impl$$$function__1___init__,
impl_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass,
impl_numpy$lib$_stride_tricks_impl$$$function__3_as_strided,
impl_numpy$lib$_stride_tricks_impl$$$function__4__sliding_window_view_dispatcher,
impl_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view,
impl_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to,
impl_numpy$lib$_stride_tricks_impl$$$function__7__broadcast_to_dispatcher,
impl_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to,
impl_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape,
impl_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes,
impl_numpy$lib$_stride_tricks_impl$$$function__11__broadcast_arrays_dispatcher,
impl_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$lib$_stride_tricks_impl);
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
        module_numpy$lib$_stride_tricks_impl,
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
        function_table_numpy$lib$_stride_tricks_impl,
        sizeof(function_table_numpy$lib$_stride_tricks_impl) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.lib._stride_tricks_impl";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$lib$_stride_tricks_impl(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$_stride_tricks_impl");

    // Store the module for future use.
    module_numpy$lib$_stride_tricks_impl = module;

    moduledict_numpy$lib$_stride_tricks_impl = MODULE_DICT(module_numpy$lib$_stride_tricks_impl);

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
        PRINT_STRING("numpy$lib$_stride_tricks_impl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$_stride_tricks_impl: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$_stride_tricks_impl: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._stride_tricks_impl" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$_stride_tricks_impl\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$_stride_tricks_impl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_stride_tricks_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_stride_tricks_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_stride_tricks_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_stride_tricks_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$_stride_tricks_impl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$_stride_tricks_impl);
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

        UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_stride_tricks_impl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_68144c7ea138db9552d47aba70edc580;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$lib$_stride_tricks_impl = MAKE_MODULE_FRAME(code_objects_6ba3a2e131e5ce1c6794657d9552cb34, module_numpy$lib$_stride_tricks_impl);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_stride_tricks_impl);
assert(Py_REFCNT(frame_frame_numpy$lib$_stride_tricks_impl) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$lib$_stride_tricks_impl$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_stride_tricks_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 7;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_stride_tricks_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_normalize_axis_tuple_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 8;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_plain_normalize_axis_tuple,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_normalize_axis_tuple);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_normalize_axis_tuple, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_34e1ef8c5471b6461d77f8d030c9bd7d;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$_stride_tricks_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_array_function_dispatch_str_plain_set_module_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 9;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_plain_array_function_dispatch,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$lib$_stride_tricks_impl,
        mod_consts.const_str_plain_set_module,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_set_module);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST3(tstate, mod_consts.const_str_plain_broadcast_to,mod_consts.const_str_plain_broadcast_arrays,mod_consts.const_str_plain_broadcast_shapes);
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_eacd5d01cae0462745b73491d2538366;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_dca5f83d14798979213ab0b9313d0c92;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_DummyArray;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_14;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__1___init__(tstate, tmp_defaults_1);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain___array_interface___str_plain_base_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_DummyArray;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 14;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_13;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_12 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_12);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14);
locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14);
locals_numpy$lib$_stride_tricks_impl$$$class__1_DummyArray_14 = NULL;
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
exception_lineno = 14;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_DummyArray, tmp_assign_source_12);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__2__maybe_view_as_subclass(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__maybe_view_as_subclass, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_defaults_2;
tmp_called_value_3 = module_var_accessor_numpy$lib$_stride_tricks_impl$set_module(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 37;
tmp_called_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_9fcf64fa6d087ae015ed561b4aa4b510_tuple);

if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = mod_consts.const_tuple_none_none_false_true_tuple;
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_1 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__3_as_strided(tstate, tmp_defaults_2);

frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 37;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_as_strided, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_3;
PyObject *tmp_kw_defaults_1;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_99ad7371c9d3c2d5d4ac63de0d98ae96);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__4__sliding_window_view_dispatcher(tstate, tmp_defaults_3, tmp_kw_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__sliding_window_view_dispatcher, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_defaults_4;
PyObject *tmp_kw_defaults_2;
tmp_called_value_5 = module_var_accessor_numpy$lib$_stride_tricks_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_numpy$lib$_stride_tricks_impl$_sliding_window_view_dispatcher(tstate);
assert(!(tmp_tuple_element_2 == NULL));
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_2afbee06e7dfa159855cb298acc943d7);
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 119;
tmp_called_value_4 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_1ba505646d7f7ed8241038b8553c4371);
Py_INCREF(tmp_defaults_4);

tmp_args_element_value_2 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__5_sliding_window_view(tstate, tmp_defaults_4, tmp_kw_defaults_2);

frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 119;
tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_sliding_window_view, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__6__broadcast_to(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__7__broadcast_to_dispatcher(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_to_dispatcher, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_defaults_6;
tmp_called_value_7 = module_var_accessor_numpy$lib$_stride_tricks_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_to_dispatcher(tstate);
assert(!(tmp_tuple_element_3 == NULL));
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 400;
tmp_called_value_6 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto frame_exception_exit_1;
}
tmp_defaults_6 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_6);

tmp_args_element_value_3 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__8_broadcast_to(tstate, tmp_defaults_6);

frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 400;
tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_broadcast_to, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__9__broadcast_shape(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_shape, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_arg_element_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_stride_tricks_impl$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 463;

    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 463;
tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dtype, tmp_call_arg_element_1);
CHECK_OBJECT(tmp_call_arg_element_1);
Py_DECREF(tmp_call_arg_element_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__size0_dtype, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
tmp_called_value_9 = module_var_accessor_numpy$lib$_stride_tricks_impl$set_module(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 466;

    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 466;
tmp_called_value_8 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;

    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__10_broadcast_shapes(tstate);

frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 466;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_broadcast_shapes, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_kw_defaults_3;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_dd9454724a7f0cff7f396473f8ec0e57);

tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__11__broadcast_arrays_dispatcher(tstate, tmp_kw_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__broadcast_arrays_dispatcher, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_kw_defaults_4;
tmp_called_value_11 = module_var_accessor_numpy$lib$_stride_tricks_impl$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = module_var_accessor_numpy$lib$_stride_tricks_impl$_broadcast_arrays_dispatcher(tstate);
assert(!(tmp_tuple_element_4 == NULL));
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts.const_dict_6e6659be28864e39bad7cab4409b7e16);
frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 514;
tmp_called_value_10 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
CHECK_OBJECT(tmp_kwargs_value_4);
Py_DECREF(tmp_kwargs_value_4);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts.const_dict_5dcffd4e4a7ab0d9a7f1c009c2da7e89);

tmp_args_element_value_5 = MAKE_FUNCTION_numpy$lib$_stride_tricks_impl$$$function__12_broadcast_arrays(tstate, tmp_kw_defaults_4);

frame_frame_numpy$lib$_stride_tricks_impl->m_frame.f_lineno = 514;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_broadcast_arrays, tmp_assign_source_25);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_stride_tricks_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_stride_tricks_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_stride_tricks_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$lib$_stride_tricks_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$_stride_tricks_impl", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._stride_tricks_impl" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$_stride_tricks_impl);
    return module_numpy$lib$_stride_tricks_impl;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_stride_tricks_impl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$_stride_tricks_impl", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
